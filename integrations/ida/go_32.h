// 32 bit defines
typedef unsigned int uint32_t;
typedef int int32_t;
typedef unsigned short uint16_t;
typedef unsigned char uint8_t;
typedef uint32_t *uintptr;
typedef int32_t int_t;
typedef uint32_t uint_t;

// https://golang.org/src/reflect/type.go
enum Go_Kind : uint8_t {
  Invalid,
  Bool,
  Int,
  Int8,
  Int16,
  Int32,
  Int64,
  Uint,
  Uint8,
  Uint16,
  Uint32,
  Uint64,
  Uintptr,
  Float32,
  Float64,
  Complex64,
  Complex128,
  Array,
  Chan,
  Func,
  Interface,
  Map,
  Ptr,
  Slice,
  String,
  Struct,
  UnsafePointer,
};

// https://golang.org/src/runtime/type.go
enum Go_tflag : uint8_t {
  Uncommon = 0x1,
  ExtraStar = 0x2,
  Named = 0x4,
  RegularMemory = 0x8,
};

struct Go__type {
  // _type @ https://golang.org/src/runtime/type.go
  // rtype @ https://golang.org/src/reflect/type.go
  uintptr size;
  uintptr ptrdata;    // number of bytes in the type that can contain pointers
  uint32_t hash;      // hash of type; avoids computation in hash tables
  Go_tflag tflag;     // extra type information flags
  uint8_t align;      // alignment of variable with this type
  uint8_t fieldAlign;   // alignment of struct field with this type
  Go_Kind kind;     // enumeration for C
  uintptr *equal;     // function for comparing objects of this type
  uint8_t *gcData;    // garbage collection data
  uint32_t str;     // string for
  uint32_t ptrToThis;   // type for pointer to this type, may be zero
};

typedef Go__type Go_rtype;

struct Go_StringHeader {
  // https://golang.org/src/reflect/value.go
  uintptr *Data;
  int_t Len;
};

struct Go_SliceHeader {
  // https://golang.org/src/reflect/value.go
    uintptr *Data;
    int_t Len;
    int_t Cap;
};

struct Go_uncommonType {
  // https://golang.org/src/reflect/type.go
  nameoff pkgPath;  // import path; empty for built-in types like int, string
  uint16_t mcount;  // number of methods
  uint16_t xcount;  // number of exported methods
  uint32_t moff;    // offset from this uncommontype to [mcount]method
  uint32_t _;     // unused
};

struct Go_method {
  // https://golang.org/src/reflect/type.go
  nameoff name; // name of method
  typeoff mtyp; // method type(without receiver)
  textoff ifn;  // fn used in interface call (one-word receiver)
  textoff tfn;  // fn used for normal method call
};

struct Go_name {
  // https://golang.org/src/runtime/type.go
  // name is an encoded type name with optional extra data.
  // See reflect/type.go for details.
  uint8_t *bytes;
};

struct Go_structType {
  // https://golang.org/src/reflect/type.go
  Go_rtype typ;
  Go_name *pkgPath;   // is offset to name in https://golang.org/src/reflect/value.go, see name struct, preceded by 3 bytes
  Go_SliceHeader fields;  // []structField
};

struct Go_structField {
  // https://golang.org/src/reflect/type.go
  Go_name *name;      // name is always non-empty
  Go__type *rtype;    // type of field
  uintptr offsetEmbed;  //byte offset of field<<1 | isEmbedded
};

struct Go_interfacetype {
  // https://golang.org/src/runtime/type.go
    Go__type typ;
  Go_name *pkgpath;
  Go_SliceHeader mdr; // []imethod
};

struct Go_itab {
  // https://golang.org/src/runtime/runtime2.go
  Go_interfacetype *inter;  // pointer to interfacetype
  Go__type *_type;      // pointer to _type
  uint32_t hash;        // copy of _type.hash. Used for type switches.
  uintptr *fun;       // variable sized. fun[0]==0 means _type does not implement inter.
};

struct Go_imethod{
  // https://golang.org/src/runtime/type.go
  // https://golang.org/src/reflect/type.go
  nameoff name; // name of method
  typeoff ityp; // functype
};

struct Go_functype {
  // https://golang.org/src/runtime/type.go
  Go__type typ;
  uint16_t inCount;
  uint16_t outCount;
};

struct Go_eface {
  // https://golang.org/src/runtime/runtime2.go
  Go_itab *type;  // pointer to itab type
  uintptr data; // unsafe.Pointer to object implementing interface
};

struct Go_hmap {
  // https://golang.org/src/runtime/map.go
  // Note: the format of the hmap is also encoded in cmd/compile/internal/gc/reflect.go.
  // Make sure this stays in sync with the compiler's definition.

  int_t count;    // # live cells == size of map.  Must be first (used by len() builtin)
  uint8_t flags;
  uint8_t B;      // log_2 of # of buckets (can hold up to loadFactor * 2^B items)
  uint16_t noverflow; // approximate number of overflow buckets; see incrnoverflow for details
  uint32_t hash0;   // hash seed

  uintptr buckets;  // unsafe.Pointer, array of 2^B Buckets. may be nil if count==0.
  uintptr oldbuckets; // unsafe.Pointer previous bucket array of half the size, non-nil only when growing

  uintptr nevacuate;  // progress counter for evacuation (buckets less than this have been evacuated)

  uintptr extra;    // *mapextra, optional fields
};

struct Go_maptype {
  // https://golang.org/src/runtime/type.go
  Go__type typ;
  Go__type *key;
  Go__type *elem;
  Go__type *bucket;   // internal type representing a hash bucket

  uintptr hasher;     // func(unsafe.Pointer, uintptr) function for hashing keys (ptr to key, seed) -> hash
  uint8_t keysize;    // size of key slot
  uint8_t elemsize;   // size of elem slot
  uint16_t bucketsize;  // size of bucket
  uint32_t flags;
};

struct Go_arraytype {
  // https://golang.org/src/runtime/type.go
  Go__type typ;
  Go__type *elem;
  Go__type *slice;
  uintptr len;
};

struct Go_chantype {
  // https://golang.org/src/runtime/type.go
  Go__type typ;
  Go__type *elem;
  uintptr dir;
};

struct Go_slicetype {
  // https://golang.org/src/runtime/type.go
  Go__type typ;
  Go__type *elem;
};

struct Go_ptrtype {
  // https://golang.org/src/runtime/type.go
  Go__type typ;
  Go__type *elem;
};

struct Go_bitvector {
  // https://golang.org/src/runtime/stack.go
    int32_t n;      // # of bits
    uint8_t *bytedata;
};

struct Go_pclntab {
  // https://golang.org/src/runtime/symtab.go (pcHeader)
  // two zero bytes, a byte giving the PC quantum,
  // and a byte giving the pointer width in bytes.
  uint32_t magic;
  uint16_t _;       // should be 0
  uint8_t pcquantum;
  uint8_t pointerwidth; // in bytes
  int_t nfunc;      // int; number of functions in the module
  uint_t nfiles;          // uint; number of entries in the file tab.
  uintptr funcnameOffset; // uintptr; offset to the funcnametab variable from pcHeader
  uintptr cuOffset;       // uintptr; offset to the cutab variable from pcHeader
  uintptr filetabOffset;  // uintptr; offset to the filetab variable from pcHeader
  uintptr pctabOffset;    // uintptr; offset to the pctab varible from pcHeader
  uintptr pclnOffset;     // uintptr; offset to the pclntab variable from pcHeader
};

struct Go_moduledata {
  // https://golang.org/src/runtime/symtab.go
  uintptr pcHeader;     // *pcHeader
  Go_SliceHeader funcnametab; // []byte
  Go_SliceHeader cutab;   // []uint32
  Go_SliceHeader filetab;   //[]byte
  Go_SliceHeader pctab;   // []byte
  Go_SliceHeader pclntable; // []byte
  Go_SliceHeader ftab;    // []functab
  uintptr findfunctab;
  uintptr minpc;
  uintptr maxpc;
  uintptr text;
  uintptr etext;
  uintptr noptrdata;
  uintptr enoptrdata;
  uintptr data;
  uintptr edata;
  uintptr bss;
  uintptr ebss;
  uintptr noptrbss;
  uintptr enoptrbss;
  uintptr end;
  uintptr gcdata;
  uintptr gcbss;
  uintptr types;
  uintptr etypes;

  Go_SliceHeader textsectmap;   // []textsect
  Go_SliceHeader typelinks;     // []int32, offsets from types
  Go_SliceHeader itablinks;   // []*itab

  Go_SliceHeader ptab;      // []ptabEntry

  Go_StringHeader pluginpath;   // string
  Go_SliceHeader pkghashes;   // []modulehash

  Go_StringHeader modulename;   // string
  Go_SliceHeader modulehashes;  // []modulehash

  uint8_t hasmain;        // uint8; 1 if module contains the main function, 0 otherwise

  // TODO: Undefined fields
  Go_bitvector gcdatamask;    // bitvector
  Go_bitvector gcbssmask;     // bitvector

  uintptr typemap;        // typemap map[typeOff]*_type; offset to *_rtype in previous module
  uint8_t bad;          // bool; module failed to load and should be ignored
  uintptr next;           // *moduledata
};

struct Go_functab {
  // https://golang.org/src/runtime/symtab.go
  uintptr entry;    // function address
  uintptr funcoff;  // offset from pclntab VA to _func
};

struct Go__func {
  // https://golang.org/src/runtime/runtime2.go
  // Layout of in-memory per-function information prepared by linker
  // See https://golang.org/s/go12symtab.
  // Keep in sync with linker (../cmd/link/internal/ld/pcln.go:/pclntab)
  // and with package debug/gosym and with symtab.go in package runtime.
  uintptr entry;      // start pc
  int32_t nameoff;    // function name
  int32_t args;     // in/out args size
  uint32_t deferreturn; // offset of start of a deferreturn call instruction from entry, if any.
  int32_t pcsp;
  int32_t pcfile;
  int32_t pcln;
  int32_t npcdata;
  uint8_t funcID;     // funcid type, set for certain special runtime functions
  uint8_t _[2];     // unused
  uint8_t nfuncdata;    // must be last
};

