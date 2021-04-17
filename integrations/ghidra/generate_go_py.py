import json
import os
import sys

def ghidra_start(f):
    f.write("import ghidra.program.model.symbol.SymbolUtilities as symu\n")

def ghidra_end(f):
    pass

def ghidra_set_name(f, va, name):
    f.write("createLabel(toAddr(" + va + "), symu.replaceInvalidChars(\"" + name + "\", True), True)\n")

def ghidra_create_struct(f, va, struct_name):
    # TODO not sure how to create structs in Ghidra programmatically
    # -1 to let IDA compute the struct length automatically
    # f.write("\tcreate_struct(" + va + ",-1,\"" + struct_name + "\");\n")
    pass

def ghidra_set_comment(f, va, comment):
    f.write("setEOLComment(toAddr(" + va + "), \"" + comment + "\")\n")

def ghidra_define_func(f, va):
    f.write("createFunction(toAddr(" + va + "), \"\")\n")

def ghidra_create_data(f, va, size):
    # Silently fail when size is not supported
    if size == 8:
        f.write("createQWord(toAddr(" + va + "))\n")
    elif size == 4:
        f.write("createDWord(toAddr(" + va + "))\n")
    elif size == 2:
        f.write("createWord(toAddr(" + va + "))\n")
    elif size == 1:
        f.write("createByte(toAddr(" + va + "))\n")

def generate_idc(in_file, out_file):
    # default pointer size to 8, update it with moduledata
    ptr_size = 8
    # default prefix for Golang structs in the provided .h file
    prefix = "Go_"

    with open(in_file, "r") as f:
        in_json = json.load(f)

    with open(out_file, "w") as fo:
        # write prologue
        ghidra_start(fo)

        md = in_json["moduledata"]

        ghidra_set_name(fo, md["va"], "moduledata")
        ptr_size = md["ptr_size"]

        struct = prefix + "moduledata"
        ghidra_create_struct(fo, md["va"], struct)

        # Set comment on the types and text VA (handy for computing textoff,
        # nameoff, typeoff, etc)
        comment = "types @ " + md["types_va"] + ", text @ " + md["text_va"]
        ghidra_set_comment(fo, md["va"], comment)

        for f_va, f in in_json["functions"].items():
            # Different from IDA Pro where we set the name before defining the
            # function. For Ghidra we reverse this

            ghidra_define_func(fo, f_va)
            ghidra_set_name(fo, f_va, f["name"])

        for t_va, t in in_json["symbols"]["types"].items():
            ghidra_set_name(fo, t_va, t["name"])

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
            ghidra_create_struct(fo, t_va, struct)

        for s_va, s in in_json["symbols"]["structfields"].items():
            # Combine field name with name of owner struct
            # Reduces ambiguity but can be verbose for anonymous structs
            name = s["struct"] + "." + s["name"]
            ghidra_set_name(fo, s_va, name)

            struct = prefix + "structField"
            ghidra_create_struct(fo, s_va, struct)

        for s_va, s in in_json["symbols"]["uncommontypes"].items():
            # Combine field name with name of owner type
            # Reduces ambiguity but can be verbose for anonymous structs
            name = s["struct"] + ".uncommonType"
            ghidra_set_name(fo, s_va, name)

            struct = prefix + "uncommonType"
            ghidra_create_struct(fo, s_va, struct)

        for s_va, s in in_json["symbols"]["methods"].items():
            # Combine field name with name of owneruncommontype
            # Reduces ambiguity but can be verbose for anonymous types
            name = s["struct"] + "." + s["name"]
            ghidra_set_name(fo, s_va, name)

            struct = prefix + "method"
            ghidra_create_struct(fo, s_va, struct)

            # Set comment about the VA of the function called by types and
            # interfaces
            tfn_va = s["tfn_va"]
            ifn_va = s["ifn_va"]
            comment = ""
            if ifn_va != "":
                comment = "ifn @ " + ifn_va

                ghidra_define_func(fo, ifn_va)

            if tfn_va != "":
                if len(comment) != 0:
                    comment += ", "
                comment += "tfn @ " + tfn_va

                ghidra_define_func(fo, tfn_va)

            if len(comment) != 0:
                ghidra_set_comment(fo, s_va, comment)

        for s_va, s in in_json["symbols"]["imethods"].items():
            # Combine field name with name of owner interface
            # Reduces ambiguity but can be verbose for anonymous interface
            name = s["interface"] + "." + s["name"]
            ghidra_set_name(fo, s_va, name)

            struct = prefix + "imethod"
            ghidra_create_struct(fo, s_va, struct)

            # Set comment about type for method
            comment = "imethod type @ " + s["type_va"]
            interface_type = in_json["symbols"]["types"].get(s["type_va"])
            if interface_type is not None:
                comment += " = " + interface_type["name"]

            ghidra_set_comment(fo, s_va, comment)

        for s_va, s in in_json["symbols"]["itablinks"].items():
            ghidra_set_name(fo, s_va, s["name"])

            ghidra_create_data(fo, s_va, ptr_size)

        for s_va, s in in_json["symbols"]["itabs"].items():
            # Combine field name with name of owner interface
            # Reduces ambiguity but can be verbose for anonymous interfaces
            name = s["type_name"] + "_" + s["interface_name"]
            ghidra_set_name(fo, s_va, name)

            struct = prefix + "itab"
            ghidra_create_struct(fo, s_va, struct)

            # Set comment about type implementing the interface
            comment = "itab for " + s["type_name"] + " implementing " + s["interface_name"]
            ghidra_set_comment(fo, s_va, comment)

        # write epilogue
        ghidra_end(fo)
    print("Generation done")

def main():
    argv_len = len(sys.argv)
    if argv_len < 2:
        print("Generates Ghidra Python Script to annotate funcs and types, handy for stripped binaries.")
        print("Python script needs to be copied to $USER_HOME/ghidra_scripts directory.")
        print("May also need to be compiled to .pyc with `python -m py_compile .py")
        print("Usage: generate_go_idc_ghidra.py INPUT_JSON OUTPUT_PY")
        print("- INPUT_JSON should be the output of parser.py.")
        print("- OUTPUT_PY is optional filename of output Python script. Defaults to annotate_go_ghidra.py.")
        exit()

    in_json = sys.argv[1]

    if not os.path.isfile(in_json):
        print("Specified JSON does not exist.")
        exit()

    out_idc = "annotate_go_ghidra.py"
    if argv_len >=3 and len(sys.argv[2]) != 0:
        out_idc = sys.argv[2]

    generate_idc(in_json, out_idc)

if __name__ == '__main__':
    main()

