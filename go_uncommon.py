from struct import *
from go_type import Kind

class Parser:

    def __init__(self, md_parser):
        self.md_parser = md_parser

    def parse_uncommon_types(self, types):
        mdp = self.md_parser
        uncommon_types = {}
        methods = {}

        for i, t_va in enumerate(types):
            t = types[t_va]
            if t["uncommon_type"] == True:
                type_size = self._get_type_size(t["kind"])
                ut_raw = t["raw"] + type_size
                ut_va = int(t_va, 16) + type_size

                ut = self._parse_uncommon_type(ut_raw)

                uncommon_types[hex(ut_va)] = {
                        "struct": t["name"],
                        "method_count": ut["method_count"],
                        "export_count": ut["exported_count"],
                        "method_va": hex(ut_va + ut["method_offset"])
                }

                METHOD_SIZE = 16
                for i in range(0, ut["method_count"], 1):
                    method_va = ut_va + ut["method_offset"] + i * METHOD_SIZE
                    m = self._parse_method(ut_raw + ut["method_offset"] + i *
                            METHOD_SIZE)
                    m["struct"] = t["name"]
                    methods[hex(method_va)] = m
        return uncommon_types, methods

    def _get_type_size(self, kind):
        ptr_size = self.md_parser.ptr_size
        size = self.md_parser.type_size
        if kind == Kind.Struct:
            size +=  4 * ptr_size
        elif kind == Kind.Ptr:
            size +=  1 * ptr_size
        elif kind == Kind.Func:
            size +=  4
        elif kind == Kind.Slice:
            size +=  1 * ptr_size
        elif kind == Kind.Array:
            size +=  3 * ptr_size
        elif kind == Kind.Chan:
            size +=  2 * ptr_size
        elif kind == Kind.Map:
            size +=  4 * ptr_size + 4
        elif kind == Kind.Interface:
            size +=  4 * ptr_size
        return size

    def _parse_uncommon_type(self, ut_raw):
        # // https://golang.org/src/runtime/type.go
        # type uncommontype struct {
        #   pkgpath nameOff
        #   mcount  uint16 // number of methods
        #   xcount  uint16 // number of exported methods
        #   moff    uint32 // offset from this uncommontype to [mcount]method
        #   _       uint32 // unused
        # }

        mdp = self.md_parser

        mdp.f.seek(ut_raw)
        UT_SIZE = 16
        ut_data = mdp.f.read(UT_SIZE)

        _, method_count, exported_count, method_offset, _ = unpack("<LHHLL", ut_data)

        ut = {
                "method_count": method_count,
                "exported_count": exported_count,
                "method_offset": method_offset
        }

        return ut

    def _parse_method(self, method_raw):
        # // https://golang.org/src/runtime/type.go
        # type method struct {
        #     name nameOff
        #     mtyp typeOff
        #     ifn  textOff
        #     tfn  textOff
        # }

        mdp = self.md_parser

        mdp.f.seek(method_raw)
        METHOD_SIZE = 16
        method = mdp.f.read(METHOD_SIZE)

        name_offset, method_type, ifn_offset, tfn_offset, = unpack("<LLLL", method)
        name = mdp.decode_name_off(name_offset)

        ifn_va = ""
        if ifn_offset != 0:
            ifn_va = hex(ifn_offset + mdp.text_va)

        tfn_va = ""
        if tfn_offset != 0:
            tfn_va = hex(tfn_offset + mdp.text_va)

        m = {
                "name": name,
                "tfn_va": tfn_va,
                "ifn_va": ifn_va,
        }

        return m
