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
_QWORD qword_3FD8;
_QWORD qword_4008;
__int64 sub_1040();
__int64 sub_10c0();
void sub_1090(void);
void sub_1100(void);
void sub_1140(void);

/* Function:   _start | Address: 0x1060 | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
void _start(void) {
    __int64 v_0;
    __int64 v1; // rsp
    __int64 v3; // temp
    __int64 pfn = v1 + 8LL; // temp
    v3 = (pfn & 0xfffffffffffffff0ULL) - 8LL - 8LL; *(_QWORD *)(v3) = v3;
    pfn = qword_3FD8; ((void (*)())pfn)(); return;
}
/* Function:   area | Address: 0x1149 | Size: 0xb (11 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void area(__int64 a1) {
    int a1; // rdi
    return;
}
/* Function:   offset | Address: 0x1155 | Size: 0xe (14 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
Point offset(Point p, int dx, int dy) {
    return;
}
/* Function:   main | Address: 0x116e | Size: 0x2c (44 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   __printf_chk | Xrefs from: unknown */
int main(void) {
    printf(0x2004LL, 0xc8); return 0;
}
/* Function:   sub_1100 | Address: 0x1100 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   sub_1040, sub_1090 | Xrefs from: unknown */
void sub_1100(void) {
    __int64 v2; // temp
    _QWORD v7; // temp
    _BYTE v3 = byte_4010; // temp
    if (v3 != '\0') {
        v2 = v2 - 8LL; *(_QWORD *)(v2) = v2;
        if (v7 == 0LL) {
            v7 = qword_4008;
            __int64 v9 = v7; // rdi
            sub_1040();
        }
        sub_1090(); byte_4008 = 1; return;
    } else {
        return;
    }
}
/* Function:   sub_1140 | Address: 0x1140 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1140(void) {
    sub_10c0();
}
/* Function:   sub_1090 | Address: 0x1090 | Size: 0x5b (91 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1090(void) {
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
