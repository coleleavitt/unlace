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
void sub_10000104(void);
void sub_10000120(void);

/* Function:   _start | Address: 0x10000100 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    return;
}
/* Function:   sub_10000104 | Address: 0x10000104 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_10000104(void) {
    return;
}
/* Function:   ppc_branch | Address: 0x1000011c | Size: 0x18 (24 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void ppc_branch(void) {
    int v3; // reg?
    if (v3) {
    }
    return;
}
/* Function:   sub_10000120 | Address: 0x10000120 | Size: 0x10 (16 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_10000120(void) {
    __int64 c0; // rbx
    if (c0 == 3LL) {
        c0 = c0 + 3LL;
    }
    return;
}
