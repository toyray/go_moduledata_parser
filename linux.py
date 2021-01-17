import sys
from elftools.elf.elffile import ELFFile

class ELF:

    # TODO: check valid
    def __init__(self, filename):
        self.valid = False
        with open(filename, 'rb') as f:
            try:
                self.elf = ELFFile(f)
                self.base_addr = 0
                self.seg_raw_offsets = {}
                self.seg_va_offsets = {}
                for seg in self.elf.iter_segments():
                    if seg["p_type"] == "PT_LOAD":
                        if self.base_addr == 0 or seg["p_vaddr"] < self.base_addr:
                            self.base_addr = seg["p_vaddr"]

                    self.seg_raw_offsets[seg["p_offset"]] = {
                            "va": seg["p_vaddr"],
                            "raw_size": seg["p_filesz"]
                        }
                    self.seg_va_offsets[seg["p_vaddr"]] = {
                            "raw": seg["p_offset"],
                            "v_size": seg["p_memsz"]
                        }
                self.valid = True
            except ELFError as ex:
                sys.stderr.write("Error: not ELF file")

    def raw2va(self, raw):
        for raw_start, seg in self.seg_raw_offsets.items():
            if raw >= raw_start and raw < raw_start + seg["raw_size"]:
                return raw - raw_start + seg["va"]
        sys.stderr.write("Error: could not calculate virtual address for " + hex(raw) + "\n")
        return -1

    def va2raw(self, va):
        for va_start, seg in self.seg_va_offsets.items():
            if va >= va_start and va < va_start + seg["v_size"]:
                return va - va_start + seg["raw"]
        sys.stderr.write("Error: could not calculate raw offset for " + hex(va) + "\n")
        return -1
