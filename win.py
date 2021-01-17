import pefile

class PE:

    def __init__(self, filename):
        self.pe = pefile.PE(filename, fast_load=True)
        self.valid = True

    def raw2va(self, raw):
        return self.pe.get_rva_from_offset(raw) +  self.pe.OPTIONAL_HEADER.ImageBase

    def va2raw(self, va):
        rva = va - self.pe.OPTIONAL_HEADER.ImageBase
        return self.pe.get_offset_from_rva(rva)

