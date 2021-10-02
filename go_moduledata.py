import os
from struct import *
import sys

import go_func
import go_itab
import go_type
import go_uncommon
import win
import linux

class Parser:

    def __init__(self, filename):
        self.filename = filename
        self.f = None
        self.moduledata = {}
        self.funcs = {}
        self.types = {}
        self.symbols = {}

    def _open_file(self):
        # Simple magic header check to identify PE or ELF
        self.f = open(self.filename, 'br')
        magic_data = self.f.read(4)
        magic = unpack(">L", magic_data)[0]
        self.f.seek(-4, 1)

        # Should be Windows PE
        if magic == 0x4d5a9000:
            self.binary = win.PE(self.filename)
        # Should be Linux ELF
        elif magic == 0x7f454c46:
            self.binary = linux.ELF(self.filename)
        else:
            sys.stderr.write("Error: only supports PE and ELF only.\n")
            return False

        if not self.binary.valid:
            sys.stderr.write("Error: file cannot be opened as binary executable.\n")
            return False

        return True

    def __del__(self):
        if self.f is not None:
            self.f.close()

    def raw2va(self, raw):
        return self.binary.raw2va(raw)

    def va2raw(self, va):
        return self.binary.va2raw(va)

    def funcname_off(self, offset):
        return self.funcname_raw + offset

    def types_off(self, offset):
        return self.types_raw + offset

    def decode_name_off(self, nameoff):
        return self.decode_name(self.types_off(nameoff))

    def decode_name(self, raw):
        cur_pos = self.f.tell()
        self.f.seek(raw)
        name_data = self.f.read(3)
        _, name_size1, name_size2 = unpack("<BBB", name_data)

        # Not sure if we have to cast it to uint16 like in the Go code
        name_size = name_size1 <<8 | name_size2
        name = self.f.read(name_size).decode("utf-8")
        self.f.seek(cur_pos)
        return name

    # Main function to parse moduledata and output as JSON
    def parse(self):
        if not self._open_file():
            return False

        if not self._parse_moduledata():
            return False

        fp = go_func.Parser(self)
        self.funcs = fp.parse_ftabs()

        tp = go_type.Parser(self)
        self.types, self.symbols["structfields"], self.symbols["imethods"] = tp.parse_typelinks()

        up = go_uncommon.Parser(self)
        self.symbols["uncommontypes"], self.symbols["methods"] = up.parse_uncommon_types(self.types)

        ip = go_itab.Parser(self)
        self.symbols["itablinks"], self.symbols["itabs"] = ip.parse_itablinks(self.types)

        self._copy_types_to_symbols()

        return True

    def output(self):
        return { "moduledata": self.moduledata,  "functions": self.funcs,
                "symbols": self.symbols }

    def _parse_moduledata(self):
        pclntab = self._parse_pclntab()
        if pclntab is None:
            sys.stderr.write("Error: pclntab not found\n")
            return False

        self.ptr_size = pclntab["ptr_size"]
        if self.ptr_size == 8:
            self.ptr_type = "Q"
        else:
            self.ptr_type = "L"

        self.pclntab_raw = pclntab["raw"]
        pclntab_va = self.raw2va(self.pclntab_raw)

        offsets = self._find_offsets_from_pclntab(self.pclntab_raw)
        # Get funcnametab VA which will help us find moduledata more accurately
        self.funcname_raw = self.pclntab_raw + offsets["funcname_offset"]
        funcname_va = self.raw2va(self.funcname_raw)

        # Look for moduledata struct in binary
        self.moduledata_raw = self._find_moduledata_raw(pclntab_va, funcname_va)
        if self.moduledata_raw is None:
            sys.stderr.write("Error: moduledata not found\n")
            return False

        moduledata_va = self.raw2va(self.moduledata_raw)

        self.types_va = self._get_types_va()
        self.types_raw = self.va2raw(self.types_va)

        self.text_va = self._get_text_va()

        # size of a _type struct in Golang
        self.type_size = 4 * self.ptr_size + 16

        self.moduledata = {
                "va": hex(moduledata_va),
                "types_va": hex(self.types_va),
                "text_va": hex(self.text_va),
                "ptr_size": self.ptr_size,
        }

        # no errors
        return True

    def _parse_pclntab(self):
        self.f.seek(0, os.SEEK_END)
        file_end = self.f.tell()

        remainder = file_end % 4
        self.f.seek(0)

        # Shortcut since Go binaries seem to be aligned on disk anyways
        for i in range(0, file_end - remainder, 4):
            data = self.f.read(4)

            le_header = unpack("<L", data)[0]

            PCLNTAB_HEADER = 0xFFFFFFFA
            if le_header == PCLNTAB_HEADER:
                data = self.f.read(4)
                empty, pc_quantum, ptr_size = unpack("<HBB", data)
                if empty != 0:
                    self.f.seek(-4, 1)
                    continue

                plt = {
                        "raw": i,
                        "pc_quantum": pc_quantum,
                        "ptr_size" : ptr_size
                }
                return plt

        return None

    # Assumes little-endianness when searching for reference to VA of
    # pclntab
    def _find_moduledata_raw(self, pclntab_va, funcname_va):
        self.f.seek(0, os.SEEK_END)
        file_end = self.f.tell()

        remainder = file_end % self.ptr_size
        self.f.seek(0)

        # Shortcut since Go binaries seem to be aligned on disk anyways
        for i in range(0, file_end - remainder, self.ptr_size):
            data = self.f.read(self.ptr_size)

            value = unpack("<" + self.ptr_type, data)[0]
            if value == pclntab_va:
                data = self.f.read(self.ptr_size)
                # next value should be the offset of funcname var
                ptr = unpack("<" + self.ptr_type , data)[0]
                if ptr != funcname_va:
                    self.f.seek(-1 * self.ptr_size, 1)
                    continue
                return i

        return None

    def _get_types_va(self):
        self.f.seek(self.moduledata_raw, 0)
        TYPES_OFFSET = 35 * self.ptr_size
        TYPES_SIZE = self.ptr_size

        self.f.seek(TYPES_OFFSET, 1)
        types = self.f.read(TYPES_SIZE)

        return unpack('<' + self.ptr_type, types)[0]

    def _get_text_va(self):
        self.f.seek(self.moduledata_raw, 0)
        TEXT_OFFSET = 22 * self.ptr_size
        TEXT_SIZE = self.ptr_size

        self.f.seek(TEXT_OFFSET, 1)
        text = self.f.read(TEXT_SIZE)

        return unpack('<' + self.ptr_type, text)[0]

    def _copy_types_to_symbols(self):
        self.symbols["types"]  = {}
        for va, typ in self.types.items():
            self.symbols["types"][va] = {
                    "name": typ["name"],
                    "kind": typ["kind"].name
            }

    def _find_offsets_from_pclntab(self, pclntab_raw):
        # // pcHeader holds data used by the pclntab lookups.
        # type pcHeader struct {
            # magic          uint32  // 0xFFFFFFFA
            # pad1, pad2     uint8   // 0,0
            # minLC          uint8   // min instruction size
            # ptrSize        uint8   // size of a ptr in bytes
            # nfunc          int     // number of functions in the module
            # nfiles         uint    // number of entries in the file tab.
            # funcnameOffset uintptr // offset to the funcnametab variable from pcHeader
            # cuOffset       uintptr // offset to the cutab variable from pcHeader
            # filetabOffset  uintptr // offset to the filetab variable from pcHeader
            # pctabOffset    uintptr // offset to the pctab varible from pcHeader
            # pclnOffset     uintptr // offset to the pclntab variable from pcHeader
        # }

        self.f.seek(pclntab_raw + (4 + 4 + 2 * self.ptr_size))
        data = self.f.read(5 * self.ptr_size)
        funcname_offset, cu_offset, filetab_offset, pctab_offset, pcln_offset = \
            unpack("<" + 5 * self.ptr_type , data)

        offsets = {
            "funcname_offset": funcname_offset,
            "cu_offset": cu_offset,
            "filetab_offset" : filetab_offset,
            "pctab_offset" : pctab_offset,
            "pcln_offset" : pcln_offset
        }
        return offsets
