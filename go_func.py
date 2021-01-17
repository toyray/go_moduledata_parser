from struct import *

class Parser:

    def __init__(self, md_parser):
        self.md_parser = md_parser

    def parse_ftabs(self):
        mdp = self.md_parser
        mdp.f.seek(mdp.moduledata_raw, 0)

        FTABS_OFFSET = 3 * mdp.ptr_size
        FTABS_SIZE = 3 * mdp.ptr_size

        mdp.f.seek(FTABS_OFFSET, 1)
        ftabs = mdp.f.read(FTABS_SIZE)

        ftabs_va, ftabs_len, _ = unpack('<' + 3 * mdp.ptr_type, ftabs)
        ftabs_raw = mdp.va2raw(ftabs_va)

        FTAB_SIZE = mdp.ptr_size * 2

        funcs = {}

        for i in range(0, ftabs_len - 1, 1):
            mdp.f.seek(ftabs_raw + (i * FTAB_SIZE), 0)
            ftab = mdp.f.read(FTAB_SIZE)
            func_addr, _func_offset = unpack("<" + 2 * mdp.ptr_type, ftab)
            _func_raw =  mdp.pclntab_off( _func_offset)
            func = self._parse_func(_func_raw)
            funcs[hex(func_addr)] = func
        return funcs

    def _parse_func(self, _func_raw):
        # https://golang.org/src/runtime/runtime2.go
        # type _func struct {
	#     entry   uintptr // start pc
	#     nameoff int32   // function name
        #
	#     args        int32  // in/out args size
	#     deferreturn uint32 // offset of start of a deferreturn call instruction from entry, if any.
        #
	#     pcsp      int32
	#     pcfile    int32
	#     pcln      int32
	#     npcdata   int32
	#     funcID    funcID  // set for certain special runtime functions
	#     _         [2]int8 // unused
	#     nfuncdata uint8   // must be last
        # }

        mdp = self.md_parser
        mdp.f.seek(_func_raw)

        # _func is bigger than this, but we only want to read the offset to the
        # function name for now
        FUNC_SIZE = mdp.ptr_size + 4
        _func = mdp.f.read(mdp.ptr_size + 4)
        _func_va, _func_name_offset = unpack("<" + mdp.ptr_type + "L", _func)
        _func_name_raw =  mdp.pclntab_off(_func_name_offset)

        mdp.f.seek(_func_name_raw)

        # TODO: Not sure if there's a max length for function names
        data = mdp.f.read(512)
        for i in range(0, len(data), 1):
            if data[i] == 0:
                break
        _func_name = data[:i].decode("Utf-8")
        return { "name": _func_name }
