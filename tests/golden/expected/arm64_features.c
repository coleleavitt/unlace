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
/* Function:   _start | Address: 0x400100 | Size: 0xc (12 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   bitfield_test, csel_test, mul_test | Xrefs from: unknown */
void __aapcs _start(void) {
    mul_test(); csel_test(); bitfield_test();
    return;
}
/* Function:   mul_test | Address: 0x400118 | Size: 0x4 (4 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __aapcs mul_test(void) {
    return;
}
/* Function:   csel_test | Address: 0x400128 | Size: 0x20 (32 bytes) | Convention: Microsoft x64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void __fastcall csel_test(__int64 a1) {
    int v1; // rax
    int a4; // rcx
    __int64 v6; // rbp
    __int64 c0; // rsi
    _BOOL cond;
    _BOOL cond = v1 == a4; // reg?
    if (cond) { v6 = v1; } else { v6 = a4; }
    __csinv__(LOBYTE(v1 < a4) ^ __OFSUB__(v1, a4), v1, a4, 2);
    __csneg__(cond, v1, a4, 0xb);
    if (v1 == a4) {
        __unlace_int_add(v1, a4); __unlace_copy(c1);
    }
    return;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    void * field_8;
    void * field_16;
};

/* Function:   bitfield_test | Address: 0x400148 | Size: 0x1c (28 bytes) | Convention: AArch64 AAPCS64 | Stack frame: 0x18 (24 bytes) | Xrefs from: unknown */
void __aapcs bitfield_test(void) {
    __int64 v_8;
    __int64 v_0;
    v2->field_FFFFFFFFFFFFFFF8 = v7;
    _QWORD v7 = v2->field_8; // temp
    __dmb__(); return;
}
