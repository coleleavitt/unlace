typedef unsigned char _BYTE;
typedef unsigned char _BOOL; typedef unsigned short _WORD; typedef unsigned int _DWORD; typedef unsigned long long _QWORD;
typedef struct _OWORD { unsigned long long lo; unsigned long long hi; } _OWORD; typedef signed short __int16; typedef signed long long __int64;
#define LOBYTE(x)  ((_BYTE)(x))
#define BYTE1(x)   ((_BYTE)((x) >> 8))
#define BYTE2(x)   ((_BYTE)((x) >> 16))
#define BYTE3(x)   ((_BYTE)((x) >> 24))
#define LOWORD(x)  ((_WORD)(x))
#define HIWORD(x)  ((_WORD)((x) >> 16))
#define LODWORD(x) ((_DWORD)(x))
#define HIDWORD(x) ((_DWORD)((x) >> 32))
#define __OFADD__(a, b) ((((a) ^ (b) ^ -1) & ((a) ^ ((a) + (b)))) < 0)
#define __OFSUB__(a, b) ((((a) ^ (b)) & ((a) ^ ((a) - (b)))) < 0)
#define MEMORY ((volatile unsigned char *)0)
#define JUMPOUT(addr) ((void)(addr))
// FS-segment TLS reads (stack canary, GLIBC TCB).
_QWORD __readfsqword(unsigned int offset);
_DWORD __readfsdword(unsigned int offset);
// IEEE-754 special-value macros (matches IDA's float literal output).
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
// Minimal C11 atomic declarations used by recovered AArch64 atomics.
typedef enum { memory_order_relaxed, memory_order_consume, memory_order_acquire, memory_order_release, memory_order_acq_rel, memory_order_seq_cst } memory_order;
#define _Atomic
unsigned long long atomic_load_explicit(_Atomic unsigned long long *obj, memory_order order);
void atomic_store_explicit(_Atomic unsigned long long *obj, unsigned long long desired, memory_order order);
unsigned long long atomic_fetch_add_explicit(_Atomic unsigned long long *obj, unsigned long long arg, memory_order order);
unsigned long long atomic_exchange_explicit(_Atomic unsigned long long *obj, unsigned long long desired, memory_order order);
_Bool atomic_compare_exchange_strong_explicit(_Atomic unsigned long long *obj, unsigned long long *expected, unsigned long long desired, memory_order success, memory_order failure);
_BYTE byte_4008;
_BYTE byte_4010;
_QWORD qword_3FE0;
_QWORD qword_4008;
__int64 sub_1070();
__int64 sub_11a0();
void sub_1170(void);
void sub_11e0(void);
void sub_1220(void);

/*
 * C++ Class Hierarchy (from RTTI):
 *   Animal
 *     Dog
 *     Cat
 *
 * Dog::vtable @ 0x3cf0 (40 bytes, 1 subtable):
 *   [0] primary subtable @ 0x3d00:
 *       offset_to_top = 0
 *       typeinfo      = &typeinfo for Dog
 *       vfunc[0] = Dog::speak() [override]
 *       vfunc[1] = Dog::~Dog() [override]
 *       vfunc[2] = Dog::~Dog() [override]
 *
 * Cat::vtable @ 0x3d18 (40 bytes, 1 subtable):
 *   [0] primary subtable @ 0x3d28:
 *       offset_to_top = 0
 *       typeinfo      = &typeinfo for Cat
 *       vfunc[0] = Cat::speak() [override]
 *       vfunc[1] = Cat::~Cat() [override]
 *       vfunc[2] = Cat::~Cat() [override]
 */
/* Function:   main | Address: 0x10c0 | Size: 0x77 (119 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   identify(Animal*), __printf_chk, __stack_chk_fail | Xrefs from: unknown */
int __noreturn main(void) {
    __int64 v_8;
    int v7; // reg?
    _QWORD v6; // temp
    identify(); identify(); printf("%s %s\n", (char *)0x3d28LL, (char *)0x3d28LL);
    v6 = __readfsqword(0x28u);
    if (v7) {
        return 0;
    } else {
        __stack_chk_fail();
    }
    return 0;
}

/* Function:   _start | Address: 0x1140 | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
void _start(void) {
    __int64 v_0;
    __int64 v1; // rsp
    __int64 v3; // temp
    __int64 pfn = v1 + 8LL; // temp
    v3 = (pfn & 0xfffffffffffffff0ULL) - 8LL - 8LL; *(_QWORD *)(v3) = v3;
    pfn = qword_3FE0; ((void (*)())pfn)(); return;
}

/* Function:   identify(Animal*) | Address: 0x1230 | Size: 0xc7 (199 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   __dynamic_cast | Xrefs from: unknown */
// identify(Animal*)
void identify(void) {
    int v8; // temp
    __int64 v9; // rax
    __int64 v13; // rcx
    __int64 v12; // rsi
    __int64 v1; // rdi
    _BOOL cond;
    _BOOL cond = v1 == 0LL; // ZF
    if (v1 == 0LL) {
        __int64 v4 = v4 - 0x18LL; // temp
        v4[2305843009213693950] = v1;
        /* dynamic cast */
        __dynamic_cast(v1, 0x3d40LL, 0x3d50LL, 0);
        _QWORD v8 = *(_QWORD *)(v1); // temp
        v1 = v8;
        __int64 v10 = v9; // rdx
        if (v8 == 0LL) {
            v4 = *(_QWORD *)(v9); v9 = v4; v4 = v11 + 0x1300LL;
            v12 = v4; v4 = _ZN3Dog5speakEv; v13 = v4;
            v9 = v11 + "woof"; v8 = 0LL;
        } else {
            /* dynamic cast */
            __dynamic_cast(v1, 0x3d40LL, 0x3d68LL, 0);
            if (v8 == 0LL) {
                v4 = v11 + 0x1310LL; v4 = _ZN3Cat5speakEv;
            } else {
                return;
            }
        }
        return;
    } else {
        return;
    }
}

/* Function:   Dog::speak() | Address: 0x1300 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::speak()
void Dog_speak(Dog *this) {
    return;
}

/* Function:   Cat::speak() | Address: 0x1310 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::speak()
void Cat_speak(Cat *this) {
    return;
}

/* Function:   Dog::~Dog() | Address: 0x1320 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::~Dog()
void Dog_Dog(Dog *this) {
    return;
}

/* Function:   Cat::~Cat() | Address: 0x1330 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::~Cat()
void Cat_Cat(Cat *this) {
    return;
}

/* Function:   Cat::~Cat() | Address: 0x1340 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::~Cat()
void Cat_Cat(Cat *this) {
    delete();
}

/* Function:   Dog::~Dog() | Address: 0x1350 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::~Dog()
void Dog_Dog(Dog *this) {
    delete();
}

/* Function:   sub_11e0 | Address: 0x11e0 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   sub_1070, sub_1170 | Xrefs from: unknown */
void sub_11e0(void) {
    __int64 v2; // temp
    _QWORD v7; // temp
    _BYTE v3 = byte_4010; // temp
    if (v3 != '\0') {
        v2 = v2 - 8LL; *(_QWORD *)(v2) = v2;
        if (v7 == 0LL) {
            v7 = qword_4008;
            __int64 v9 = v7; // rdi
            sub_1070();
        }
        sub_1170(); byte_4008 = 1; return;
    } else {
        return;
    }
}

/* Function:   sub_1220 | Address: 0x1220 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1220(void) {
    sub_11a0();
}

/* Function:   sub_1170 | Address: 0x1170 | Size: 0x5b (91 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1170(void) {
    int v4; // temp
    int v1; // reg?
    if (v1) {
        if (v4 != 0LL) {
            return;
        }
    } else {
        return;
    }
    return;
}
