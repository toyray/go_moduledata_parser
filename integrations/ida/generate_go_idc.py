import json
import os
import sys

def generate_idc(in_file, out_file):
    # default pointer size to 8, update it with moduledata
    ptr_size = 8
    # default prefix for Golang structs in the provided .h file
    prefix = "Go_"

    with open(in_file, "r") as f:
        in_json = json.load(f)

    with open(out_file, "w") as fo:
        # write prologue
        fo.write("#include <idc.idc>\n\n")
        fo.write("static main() {\n")

        md = in_json["moduledata"]

        fo.write("\tset_name(" + md["va"] + ",\"moduledata\", 0x800);\n")
        ptr_size = md["ptr_size"]

        struct = prefix + "moduledata"
        fo.write("\tcreate_struct(" + md["va"] + ",-1,\"" + struct + "\");\n")

        # Set comment on the types and text VA (handy for computing textoff,
        # nameoff, typeoff, etc)
        comment = "types @ " + md["types_va"] + ", text @ " + md["text_va"]
        fo.write("\tset_cmt(" + md["va"] + ",\"" + comment + "\",0);\n")

        for f_va, f in in_json["functions"].items():
            fo.write("\tset_name(" + f_va + ",\"" + f["name"] + "\", 0x800);\n")

            # If not yet code, redefine as code and define function starting from
            # VA
            fo.write("\tif (!is_code(get_flags(" + f_va + ")))\n")
            fo.write("\t{\n")
            fo.write("\t\tdel_items(" + f_va + ");\n")
            fo.write("\t\tadd_func(" + f_va + ",BADADDR);\n")
            fo.write("\t}\n")

        for t_va, t in in_json["symbols"]["types"].items():
            name = t["name"]
            kind = t["kind"]
            fo.write("\tset_name(" + t_va + ",\"" + name + "\", 0x800);\n")

            # Rename type to match Golang type
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
            fo.write("\tcreate_struct(" + t_va + ",-1,\"" + struct+ "\");\n")

        for s_va, s in in_json["symbols"]["structfields"].items():
            # Combine field name with name of owner struct
            # Reduces ambiguity but can be verbose for anonymous structs
            name = s["struct"] + "." + s["name"]
            fo.write("\tset_name(" + s_va + ",\"" + name + "\", 0x800);\n")

            struct = prefix + "structField"
            fo.write("\tcreate_struct(" + s_va + ",-1,\"" + struct + "\");\n")

        for s_va, s in in_json["symbols"]["uncommontypes"].items():
            # Combine field name with name of owner type
            # Reduces ambiguity but can be verbose for anonymous structs
            name = s["struct"] + ".uncommonType"
            fo.write("\tset_name(" + s_va + ",\"" + name + "\", 0x800);\n")

            struct = prefix + "uncommonType"
            fo.write("\tcreate_struct(" + s_va + ",-1,\"" + struct + "\");\n")

        for s_va, s in in_json["symbols"]["methods"].items():
            # Combine field name with name of owneruncommontype
            # Reduces ambiguity but can be verbose for anonymous types
            name = s["struct"] + "." + s["name"]
            fo.write("\tset_name(" + s_va + ",\"" + name + "\", 0x800);\n")

            struct = prefix + "method"
            fo.write("\tcreate_struct(" + s_va + ",-1,\"" + struct + "\");\n")

            # Set comment about the VA of the function called by types and
            # interfaces
            tfn_va = s["tfn_va"]
            ifn_va = s["ifn_va"]
            comment = ""
            if ifn_va != "":
                comment = "ifn @ " + ifn_va

                # If not yet code, redefine as code and define function starting from
                # VA
                fo.write("\tif (!is_code(get_flags(" + ifn_va + ")))\n")
                fo.write("\t{\n")
                fo.write("\t\tdel_items(" + ifn_va + ");\n")
                fo.write("\t\tadd_func(" + ifn_va + ",BADADDR);\n")
                fo.write("\t}\n")

            if tfn_va != "":
                if len(comment) != 0:
                    comment += ", "
                comment += "tfn @ " + tfn_va

                # If not yet code, redefine as code and define function starting from
                # VA
                fo.write("\tif (!is_code(get_flags(" + tfn_va + ")))\n")
                fo.write("\t{\n")
                fo.write("\t\tdel_items(" + tfn_va + ");\n")
                fo.write("\t\tadd_func(" + tfn_va + ",BADADDR);\n")
                fo.write("\t}\n")

            if len(comment) != 0:
                fo.write("\tset_cmt(" + s_va + ",\"" + comment + "\",0);\n")

        for s_va, s in in_json["symbols"]["imethods"].items():
            # Combine field name with name of owner interface
            # Reduces ambiguity but can be verbose for anonymous interface
            name = s["interface"] + "." + s["name"]
            fo.write("\tset_name(" + s_va + ",\"" + name + "\", 0x800);\n")

            struct = prefix + "imethod"
            fo.write("\tcreate_struct(" + s_va + ",-1,\"" + struct + "\");\n")

            # Set comment about type for method
            comment = "imethod type @ " + s["type_va"]
            interface_type = in_json["symbols"]["types"].get(s["type_va"])
            if interface_type is not None:
                comment += " = " + interface_type["name"]
            fo.write("\tset_cmt(" + s_va + ",\"" + comment + "\",0);\n")

        for s_va, s in in_json["symbols"]["itablinks"].items():

            fo.write("\tset_name(" + s_va + ",\"" + s["name"] + "\", 0x800);\n")

            # Check bitness before creating data offstes
            if ptr_size == 8:
                fo.write("\tcreate_qword(" + s_va + ");\n")
            else:
                fo.write("\tcreate_dword(" + s_va + ");\n")

        for s_va, s in in_json["symbols"]["itabs"].items():
            # Combine field name with name of owner interface
            # Reduces ambiguity but can be verbose for anonymous interfaces
            name = s["type_name"] + "_" + s["interface_name"]
            fo.write("\tset_name(" + s_va + ",\"" + name + "\", 0x800);\n")

            struct = prefix + "itab"
            fo.write("\tcreate_struct(" + s_va + ",-1,\"" + struct + "\");\n")

            # Set comment about type implementing the interface
            comment = "itab for " + s["type_name"] + " implementing " + s["interface_name"]
            fo.write("\tset_cmt(" + s_va + ",\"" + comment + "\",0);\n")

        # write epilogue
        fo.write("}\n")
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

