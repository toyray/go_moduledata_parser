import json
import os
import sys

def ida_start(f):
    f.write("#include <idc.idc>\n\n")
    f.write("static main() {\n")

def ida_end(f):
    f.write("}\n")

def ida_set_name(f, va, name):
    # 0x800 = SN_FORCE to add a numerical suffix if name already exists
    f.write("\tset_name(" + va + ",\"" + name + "\", 0x800);\n")

def ida_create_struct(f, va, struct_name):
    # -1 to let IDA compute the struct length automatically
    f.write("\tcreate_struct(" + va + ",-1,\"" + struct_name + "\");\n")

def ida_set_comment(f, va, comment):
    f.write("\tset_cmt(" + va + ",\"" + comment + "\",0);\n")

def ida_define_func(f, va):
    # If not yet code, redefine as code and define function starting from
    # VA
    f.write("\tif (!is_code(get_flags(" + va + ")))\n")
    f.write("\t{\n")
    f.write("\t\tdel_items(" + va + ");\n")
    f.write("\t\tadd_func(" + va + ",BADADDR);\n")
    f.write("\t}\n")

def ida_create_data(f, va, size):
    # Silently fail when size is not supported
    if size == 8:
        f.write("\tcreate_qword(" + va + ");\n")
    elif size == 4:
        f.write("\tcreate_dword(" + va + ");\n")
    elif size == 2:
        f.write("\tcreate_word(" + va + ");\n")
    elif size == 1:
        f.write("\tcreate_byte(" + va + ");\n")

def generate_idc(in_file, out_file):
    # default pointer size to 8, update it with moduledata
    ptr_size = 8
    # default prefix for Golang structs in the provided .h file
    prefix = "Go_"

    with open(in_file, "r") as f:
        in_json = json.load(f)

    with open(out_file, "w") as fo:
        # write prologue
        ida_start(fo)

        md = in_json["moduledata"]

        ida_set_name(fo, md["va"], "moduledata")
        ptr_size = md["ptr_size"]

        struct = prefix + "moduledata"
        ida_create_struct(fo, md["va"], struct)

        # Set comment on the types and text VA (handy for computing textoff,
        # nameoff, typeoff, etc)
        comment = "types @ " + md["types_va"] + ", text @ " + md["text_va"]
        ida_set_comment(fo, md["va"], comment)

        for f_va, f in in_json["functions"].items():
            ida_set_name(fo, f_va, f["name"])

            ida_define_func(fo, f_va)

        for t_va, t in in_json["symbols"]["types"].items():
            ida_set_name(fo, t_va, t["name"])

            # Rename type to match Golang type
            kind = t["kind"]
            if kind == "Array" or \
                kind == "Chan" or \
                kind == "Interface" or \
                kind == "Map" or \
                kind == "Ptr" or \
                kind == "Slice":
                struct = kind.lower() + "type"
            elif kind == "Struct":
                struct = "structType"
            else:
                struct = "_type"

            struct = prefix + struct
            ida_create_struct(fo, t_va, struct)

        for s_va, s in in_json["symbols"]["structfields"].items():
            # Combine field name with name of owner struct
            # Reduces ambiguity but can be verbose for anonymous structs
            name = s["struct"] + "." + s["name"]
            ida_set_name(fo, s_va, name)

            struct = prefix + "structField"
            ida_create_struct(fo, s_va, struct)

        for s_va, s in in_json["symbols"]["uncommontypes"].items():
            # Combine field name with name of owner type
            # Reduces ambiguity but can be verbose for anonymous structs
            name = s["struct"] + ".uncommonType"
            ida_set_name(fo, s_va, name)

            struct = prefix + "uncommonType"
            ida_create_struct(fo, s_va, struct)

        for s_va, s in in_json["symbols"]["methods"].items():
            # Combine field name with name of owneruncommontype
            # Reduces ambiguity but can be verbose for anonymous types
            name = s["struct"] + "." + s["name"]
            ida_set_name(fo, s_va, name)

            struct = prefix + "method"
            ida_create_struct(fo, s_va, struct)

            # Set comment about the VA of the function called by types and
            # interfaces
            tfn_va = s["tfn_va"]
            ifn_va = s["ifn_va"]
            comment = ""
            if ifn_va != "":
                comment = "ifn @ " + ifn_va

                ida_define_func(fo, ifn_va)

            if tfn_va != "":
                if len(comment) != 0:
                    comment += ", "
                comment += "tfn @ " + tfn_va

                ida_define_func(fo, tfn_va)

            if len(comment) != 0:
                ida_set_comment(fo, s_va, comment)

        for s_va, s in in_json["symbols"]["imethods"].items():
            # Combine field name with name of owner interface
            # Reduces ambiguity but can be verbose for anonymous interface
            name = s["interface"] + "." + s["name"]
            ida_set_name(fo, s_va, name)

            struct = prefix + "imethod"
            ida_create_struct(fo, s_va, struct)

            # Set comment about type for method
            comment = "imethod type @ " + s["type_va"]
            interface_type = in_json["symbols"]["types"].get(s["type_va"])
            if interface_type is not None:
                comment += " = " + interface_type["name"]

            ida_set_comment(fo, s_va, comment)

        for s_va, s in in_json["symbols"]["itablinks"].items():
            ida_set_name(fo, s_va, s["name"])

            ida_create_data(fo, s_va, ptr_size)

        for s_va, s in in_json["symbols"]["itabs"].items():
            # Combine field name with name of owner interface
            # Reduces ambiguity but can be verbose for anonymous interfaces
            name = s["type_name"] + "_" + s["interface_name"]
            ida_set_name(fo, s_va, name)

            struct = prefix + "itab"
            ida_create_struct(fo, s_va, struct)

            # Set comment about type implementing the interface
            comment = "itab for " + s["type_name"] + " implementing " + s["interface_name"]
            ida_set_comment(fo, s_va, comment)

        # write epilogue
        ida_end(fo)
    print("Generation done")

def main():
    argv_len = len(sys.argv)
    if argv_len < 2:
        print("Generates IDC to annotate funcs and types, handy for stripped binaries.")
        print("Usage: generate_go_idc.py INPUT_JSON OUTPUT_IDC")
        print("- INPUT_JSON should be the output of parser.py.")
        print("- OUTPUT_IDC is optional filename of output IDC. Defaults to annotate_go.idc.")
        exit()

    in_json = sys.argv[1]

    if not os.path.isfile(in_json):
        print("Specified JSON does not exist.")
        exit()

    out_idc = "annotate_go.idc"
    if argv_len >=3 and len(sys.argv[2]) != 0:
        out_idc = sys.argv[2]

    generate_idc(in_json, out_idc)

if __name__ == '__main__':
    main()

