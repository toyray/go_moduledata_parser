from struct import *
from go_type import Kind

class Parser:

    def __init__(self, md_parser):
        self.md_parser = md_parser

    def parse_itablinks(self, types):
        mdp = self.md_parser
        mdp.f.seek(mdp.moduledata_raw, 0)

        ITABLINKS_OFFSET = 33 * mdp.ptr_size
        ITABLINKS_SIZE = 3 * mdp.ptr_size

        mdp.f.seek(ITABLINKS_OFFSET, 1)
        itablinks_data = mdp.f.read(ITABLINKS_SIZE)

        itablinks_va, itablinks_len, _ = unpack("<" + 3 * mdp.ptr_type, itablinks_data)
        itablinks_raw = mdp.va2raw(itablinks_va)

        ITABLINK_SIZE =  mdp.ptr_size
        ITAB_SIZE = 3 * mdp.ptr_size + 8

        itablinks = {}
        itabs = {}

        for i in range(0, itablinks_len, 1):
            itl_raw = itablinks_raw + (i * ITABLINK_SIZE)
            itl_va = itablinks_va + (i * ITABLINK_SIZE)
            itablinks[hex(itl_va)] = { "name": "moduledata_itablink." + str(i+1) }

            mdp.f.seek(itl_raw, 0)

            itl_data = mdp.f.read(ITABLINK_SIZE)
            it_va = unpack("<" + mdp.ptr_type, itl_data)[0]
            it_raw = mdp.va2raw(it_va)

            mdp.f.seek(it_raw)
            itab_data = mdp.f.read(ITAB_SIZE)
            itab_inter_va, itab_type_va , _, _ , itab_func_ptrs = unpack("<" +
                    2 * mdp.ptr_type + "LL" + mdp.ptr_type, itab_data)

            itab_inter = types.get(hex(itab_inter_va))
            itab_type = types.get(hex(itab_type_va))

            if itab_inter is None:
                itab_inter_name = "undefined_interface_" + hex(itab_inter_va)
            else:
                itab_inter_name = itab_inter["name"]

            if itab_type is None:
                itab_type_name = "undefined_type_" + hex(itab_type_va)
            else:
                itab_type_name = itab_type["name"]

            itabs[hex(it_va)] = {
                    "interface_name": itab_inter_name,
                    "type_name": itab_type_name
            }

        return itablinks, itabs
