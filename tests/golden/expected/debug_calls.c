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
__int64 sub_1030();
__int64 sub_10a0();
void sub_1070(void);
void sub_10e0(void);
void sub_1120(void);

/* Function:   _start | Address: 0x1040 | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
void _start(void) {
    __int64 v_0;
    __int64 v1; // rsp
    __int64 v3; // temp
    __int64 pfn = v1 + 8LL; // temp
    v3 = (pfn & 0xfffffffffffffff0ULL) - 8LL - 8LL; *(_QWORD *)(v3) = v3;
    pfn = qword_3FD8; ((void (*)())pfn)(); return;
}
/* Function:   add | Address: 0x1129 | Size: 0x17 (23 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int add(int a, int b) {
    __int64 v_8;
    int a2; // esi
    *(_DWORD *)(v6) = a2;
    return;
}
/* Function:   sub | Address: 0x1141 | Size: 0x15 (21 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int sub(int a, int b) {
    __int64 v_8;
    int a2; // esi
    *(_DWORD *)(v5) = a2;
    return 0;
}
/* Function:   mul | Address: 0x1157 | Size: 0x16 (22 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int mul(int a, int b) {
    __int64 v_8;
    int a2; // esi
    *(_DWORD *)(v6) = a2;
    return;
}
/* Function:   square | Address: 0x116e | Size: 0x1f (31 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   mul | Xrefs from: unknown */
int square(int x) {
    __int64 v_8;
    _DWORD v4; // temp
    *(_DWORD *)(v5) = v4;
    v4 = *(_DWORD *)(v5); mul();
    return;
}
/* Function:   cube | Address: 0x118e | Size: 0x28 (40 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   mul, square | Xrefs from: unknown */
int cube(int x) {
    __int64 v_8;
    _DWORD v4; // temp
    *(_DWORD *)(v5) = v4;
    // fixtures/src/calls.c:5
    v4 = *(_DWORD *)(v5);
    square(); mul();
    return;
}
/* Function:   abs_val | Address: 0x11b7 | Size: 0x16 (22 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int abs_val(int x) {
    __int64 v_8;
    int result; // eax
    int a1; // edi
    int v5; // temp
    _BOOL cond;
    *(_DWORD *)(v6) = a1;
    // fixtures/src/calls.c:6
    _DWORD cond = *(_DWORD *)(v6); // temp
    v5 = -cond; cond = v5 < 0; result = !LOBYTE(cond) ? v5 : cond;
    return result;
}
/* Function:   max | Address: 0x11ce | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int max(int a, int b) {
    __int64 v_8;
    int result; // eax
    int a2; // esi
    _DWORD v8; // temp
    *(_DWORD *)(v9) = a2;
    v8 = *(_DWORD *)(v9); result = !(LOBYTE(0) ^ __OFSUB__(v8, v8)) ? v8 : v8;
    return result;
}
/* Function:   min | Address: 0x11e9 | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int min(int a, int b) {
    __int64 v_8;
    int result; // eax
    int a2; // esi
    _DWORD v5; // temp
    *(_DWORD *)(v6) = a2;
    v5 = *(_DWORD *)(v6); result = 1 ? v5 : v5;
    return result;
}
/* Function:   clamp | Address: 0x1204 | Size: 0x33 (51 bytes) | Convention: Microsoft x64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   max, min | Xrefs from: unknown */
int __fastcall clamp(int x, int lo, int hi) {
    __int64 v_8;
    _DWORD v4; // temp
    *(_DWORD *)(v5) = v4;
    // fixtures/src/calls.c:9
    v4 = *(_DWORD *)(v5);
    max(); min();
    return;
}
/* Function:   compute | Address: 0x1238 | Size: 0x7b (123 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   abs_val, add, clamp, cube, square, sub | Xrefs from: unknown */
int compute(int x) {
    __int64 v_8;
    __int64 v5; // temp
    _DWORD v4; // temp
    __int64 v3 = v3 - 8LL; // temp
    v5 += -36LL; *(_DWORD *)(v5) = v4;
    // fixtures/src/calls.c:12
    v4 = *(_DWORD *)(v5);
    add(); v3 += -20LL; *(_DWORD *)(v3) = v4;
    // fixtures/src/calls.c:13
    v4 = *(_DWORD *)(v3);
    sub(); *(_DWORD *)(v5) = v4;
    // fixtures/src/calls.c:14
    v4 = *(_DWORD *)(v5);
    square(); cube(); *(_DWORD *)(v3) = v4;
    v4 = *(_DWORD *)(v3); sub(); abs_val();
    *(_DWORD *)(v5) = v4;
    clamp();
    return;
}
/* Function:   main | Address: 0x12b4 | Size: 0x13 (19 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   compute | Xrefs from: unknown */
int main(void) {
    compute();
    return;
}
/* Function:   sub_10e0 | Address: 0x10e0 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   sub_1030, sub_1070 | Xrefs from: unknown */
void sub_10e0(void) {
    __int64 v2; // temp
    _QWORD v7; // temp
    _BYTE v3 = byte_4010; // temp
    if (v3 != '\0') {
        v2 = v2 - 8LL; *(_QWORD *)(v2) = v2;
        if (v7 == 0LL) {
            v7 = qword_4008;
            __int64 v9 = v7; // rdi
            sub_1030();
        }
        sub_1070(); byte_4008 = 1; return;
    } else {
        return;
    }
}
/* Function:   sub_1120 | Address: 0x1120 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1120(void) {
    sub_10a0();
}
/* Function:   sub_1070 | Address: 0x1070 | Size: 0x5b (91 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1070(void) {
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
