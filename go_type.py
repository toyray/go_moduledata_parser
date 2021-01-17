from enum import Enum
from struct import *

class Parser:

    def __init__(self, md_parser):
        self.md_parser = md_parser

    def parse_typelinks(self):
        mdp = self.md_parser
        mdp.f.seek(mdp.moduledata_raw, 0)

        TYPELINKS_OFFSET = 30 * mdp.ptr_size
        TYPELINKS_SIZE = 3 * mdp.ptr_size

        mdp.f.seek(TYPELINKS_OFFSET, 1)
        typelinks = mdp.f.read(TYPELINKS_SIZE)

        typelinks_va, typelinks_len, _ = unpack("<" + 3 * mdp.ptr_type, typelinks)
        typelinks_raw = mdp.va2raw(typelinks_va)

        types = {}
        structfields = {}
        imethods = {}

        TYPELINK_SIZE = 4
        pointed_type_vas = set()

        type_vas = set()

        # Collect VAs for all types
        for i in range(0, typelinks_len, 1):
            mdp.f.seek(typelinks_raw + (i * TYPELINK_SIZE), 0)
            typelink = mdp.f.read(TYPELINK_SIZE)
            typelink_offset = unpack("<L", typelink)[0]
            type_va = mdp.types_va + typelink_offset
            type_vas.add(type_va)

        # Do extra passes to get all pointed types
        while True:
            temp_vas = set()
            for i, va in enumerate(type_vas):
                if hex(va) not in types:
                    type_raw = mdp.va2raw(va)
                    typ = self._parse_type(type_raw)
                    types[hex(va)] = typ
                    pt_vas = self._get_pointed_type_vas(type_raw, typ['kind'])

                    if typ['kind'] == Kind.Struct:
                        fields = self._parse_struct_type(type_raw)
                        for i, field in enumerate(fields):
                            structfields[hex(field["va"])] = {
                                    "name":  field["name"],
                                    "struct": typ["name"],
                                    }
                            temp_vas.add(field["type_va"])
                    elif typ['kind'] == Kind.Interface:
                        ims = self._parse_interface_methods(type_raw)
                        for i, imethod in enumerate(ims):
                            i_type_va = mdp.types_va + imethod["type_offset"]
                            imethods[hex(imethod["va"])] = {
                                    "name":  imethod["name"],
                                    "interface": typ["name"],
                                    "type_va": hex(i_type_va)
                                    }
                            temp_vas.add(i_type_va)

                    for i, pt_va in enumerate(pt_vas):
                        if pt_va not in types:
                            temp_vas.add(pt_va)

            if len(temp_vas) == 0:
                break
            else:
                type_vas = temp_vas

        return types, structfields, imethods

    def _parse_type(self, type_raw):
        # https://golang.org/src/runtime/type.go
        # type _type struct {
        #   size       uintptr
        #   ptrdata    uintptr // size of memory prefix holding all pointers
        #   hash       uint32
        #   tflag      tflag
        #   align      uint8
        #   fieldAlign uint8
        #   kind       uint8
        #
        #   // function for comparing objects of this type
        #   // (ptr to object A, ptr to object B) -> ==?
        #   equal func(unsafe.Pointer, unsafe.Pointer) bool
        #
        #   // gcdata stores the GC type data for the garbage collector.
        #   // If the KindGCProg bit is set in kind, gcdata is a GC program.
        #   // Otherwise it is a ptrmask bitmap. See mbitmap.go for details.
        #   gcdata    *byte
        #
        #   str       nameOff
        #   ptrToThis typeOff
        # }

        mdp = self.md_parser
        mdp.f.seek(type_raw)
        type_data = mdp.f.read(mdp.type_size)

        _, _, _, tflag, _, _ , kind, _, _ , name_offset, _ = unpack("<" + 2 *
                mdp.ptr_type + "LBBBB" + 2 * mdp.ptr_type + "LL", type_data)

        type_name = mdp.decode_name_off(name_offset)
        uncommon_type = (tflag & 1) == 1

        extra_star = (tflag & 2) == 2
        # Discard extra star in front of name
        if extra_star:
            type_name = type_name[1:]

        kind = kind & 0x1f
        type_kind = Kind(kind)

        return { "name": type_name, "kind": type_kind, "uncommon_type":
                uncommon_type, "raw": type_raw }

    def _get_pointed_type_vas(self, type_raw, kind):
        mdp = self.md_parser

        num = 0
        if kind == Kind.Ptr or \
            kind == Kind.Slice or \
            kind == Kind.Chan:
                num = 1
        elif kind == Kind.Array or \
            kind == Kind.Map:
                num = 2

        vas = set()

        for i in range(0, num, 1):
            mdp.f.seek(type_raw + mdp.type_size + i * mdp.ptr_size)
            pointed_type = mdp.f.read(mdp.ptr_size)
            pointed_type_va = unpack("<" + mdp.ptr_type, pointed_type)[0]
            vas.add(pointed_type_va)
        return vas

    def _parse_struct_type(self, type_raw):
        # https://golang.org/src/runtime/type.go
        # type structType struct {
	#     rtype
        #     pkgPath name
        #     fields  []structField // sorted by offset
        # }
        #
        # type structfield struct {
	#     name       name
	#     typ        *_type
	#     offsetAnon uintptr
        # }

        mdp = self.md_parser
        mdp.f.seek(type_raw + mdp.type_size)

        STRUCT_SIZE = 4 * mdp.ptr_size
        struct_data = mdp.f.read(STRUCT_SIZE)
        _, fields_va, fields_len,  _ = unpack("<" + 4 * mdp.ptr_type, struct_data)

        fields = []

        STRUCT_FIELD_SIZE = 3 * mdp.ptr_size
        fields_raw = mdp.va2raw(fields_va)

        for i in range(0, fields_len, 1):
            mdp.f.seek(fields_raw + i * STRUCT_FIELD_SIZE)
            field_data = mdp.f.read(STRUCT_FIELD_SIZE)
            name_va, type_va, embedded_flag  = unpack("<" + 3 * mdp.ptr_type, field_data)
            name_raw = mdp.va2raw(name_va)
            name = mdp.decode_name(name_raw)
            embedded = (embedded_flag & 1) == 1
            field = {
                    "va": fields_va + i * STRUCT_FIELD_SIZE, \
                    "name": name, \
                    "type_va": type_va, \
                    "embedded": embedded
            }
            fields.append(field)

        return fields

    def _parse_interface_methods(self, type_raw):
        # https://golang.org/src/runtime/type.go
        # type imethod struct {
	#     name nameOff
	#     ityp typeOff
        # }

        mdp = self.md_parser

        mdp.f.seek(type_raw + mdp.type_size)
        INTERFACE_SIZE = 4 * mdp.ptr_size
        interface_data = mdp.f.read(INTERFACE_SIZE)
        _, imethods_va, imethods_len,  _ = unpack("<" + 4 * mdp.ptr_type, interface_data)

        imethods = []

        IMETHOD_SIZE = 8
        imethods_raw = mdp.va2raw(imethods_va)

        for i in range(0, imethods_len, 1):
            mdp.f.seek(imethods_raw + i * IMETHOD_SIZE)
            imethod_data = mdp.f.read(IMETHOD_SIZE)
            name_offset, type_offset  = unpack("<LL", imethod_data)

            name = mdp.decode_name_off(name_offset)
            im = {
                    "va": imethods_va + i * IMETHOD_SIZE, \
                    "name": name, \
                    "type_offset": type_offset, \
            }
            imethods.append(im)

        return imethods

class Kind(Enum):
    InvalidKind = 0
    Bool = 1
    Int = 2
    Int8 = 3
    Int16 = 4
    Int32 = 5
    Int64 = 6
    Uint = 7
    Uint8 = 8
    Uint16 = 9
    Uint32 = 0xa
    Uint64 = 0xb
    Uintptr = 0xc
    Float32 = 0xd
    Float64 = 0xe
    Complex64 = 0xf
    Complex128 = 0x10
    Array = 0x11
    Chan = 0x12
    Func = 0x13
    Interface = 0x14
    Map = 0x15
    Ptr = 0x16
    Slice = 0x17
    String = 0x18
    Struct = 0x19
    UnsafePointer = 0x1a

