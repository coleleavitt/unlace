#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
typedef unsigned char _BYTE;
typedef unsigned char _BOOL; typedef unsigned short _WORD; typedef unsigned int _DWORD; typedef unsigned long long _QWORD;
typedef unsigned __int128 _OWORD; typedef signed short __int16; typedef signed long long __int64;
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
// SIMD register types. 128-bit values are carried as raw bits so the vector
// helpers below stay plain C; wider registers use GCC vector types.
typedef unsigned long long __m64; typedef unsigned __int128 __m128i; typedef unsigned __int128 __m128; typedef unsigned __int128 __m128d;
typedef long long __m256i __attribute__((__vector_size__(32))); typedef float __m256 __attribute__((__vector_size__(32))); typedef double __m256d __attribute__((__vector_size__(32)));
typedef long long __m512i __attribute__((__vector_size__(64))); typedef float __m512 __attribute__((__vector_size__(64))); typedef double __m512d __attribute__((__vector_size__(64)));
// Minimal executable semantics for the SSE vector helpers emitted below.
static inline unsigned int __unlace_vec_u32(__m128i v, unsigned int lane) { return (unsigned int)(v >> (lane * 32)); }
static inline unsigned long long __unlace_vec_u64(__m128i v, unsigned int lane) { return (unsigned long long)(v >> (lane * 64)); }
static inline __m128i _mm_add_epi32(__m128i a, __m128i b) { __m128i out = 0; for (unsigned int i = 0; i < 4; i++) out |= (__m128i)(__unlace_vec_u32(a, i) + __unlace_vec_u32(b, i)) << (i * 32); return out; }
static inline __m128i _mm_mul_epu32(__m128i a, __m128i b) { unsigned long long lo = (unsigned long long)__unlace_vec_u32(a, 0) * __unlace_vec_u32(b, 0); unsigned long long hi = (unsigned long long)__unlace_vec_u32(a, 2) * __unlace_vec_u32(b, 2); return (__m128i)lo | ((__m128i)hi << 64); }
static inline __m128i _mm_shuffle_epi32(__m128i a, unsigned int imm) { __m128i out = 0; for (unsigned int i = 0; i < 4; i++) out |= (__m128i)__unlace_vec_u32(a, (imm >> (i * 2)) & 3u) << (i * 32); return out; }
static inline __m128i _mm_srli_epi64(__m128i a, unsigned int imm) { __m128i out = 0; for (unsigned int i = 0; i < 2; i++) { unsigned long long lane = __unlace_vec_u64(a, i); lane = imm >= 64 ? 0 : lane >> imm; out |= (__m128i)lane << (i * 64); } return out; }
static inline __m128i _mm_unpacklo_epi32(__m128i a, __m128i b) { return (__m128i)__unlace_vec_u32(a, 0) | ((__m128i)__unlace_vec_u32(b, 0) << 32) | ((__m128i)__unlace_vec_u32(a, 1) << 64) | ((__m128i)__unlace_vec_u32(b, 1) << 96); }
// Minimal C11 atomic declarations used by recovered AArch64 atomics.
typedef enum { memory_order_relaxed, memory_order_consume, memory_order_acquire, memory_order_release, memory_order_acq_rel, memory_order_seq_cst } memory_order;
#define _Atomic
unsigned long long atomic_load_explicit(_Atomic unsigned long long *obj, memory_order order);
void atomic_store_explicit(_Atomic unsigned long long *obj, unsigned long long desired, memory_order order);
unsigned long long atomic_fetch_add_explicit(_Atomic unsigned long long *obj, unsigned long long arg, memory_order order);
unsigned long long atomic_exchange_explicit(_Atomic unsigned long long *obj, unsigned long long desired, memory_order order);
_Bool atomic_compare_exchange_strong_explicit(_Atomic unsigned long long *obj, unsigned long long *expected, unsigned long long desired, memory_order success, memory_order failure);
_BYTE byte_4010;
_QWORD qword_3FD8;
_QWORD qword_3FE0;
_QWORD qword_3FF8;
_QWORD qword_4008;
__int64 sub_1030();
__int64 sub_10a0();
__int64 sub_10e0(void) /* // dropped 1 param(s) (dead in body) */;
void sub_1070(void);
void sub_1120(void);

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    void * field_8;
};

// debug language: C
/* Function:   _start | Address: 0x1040 | Size: 0x20 (32 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs from: unknown */
void _start(void) {
    __int64 v_8;
    _QWORD pfn; // temp
    v_8 = (uintptr_t)&v_8;
    pfn = qword_3FD8;
    ((__int64 (*)())pfn)();
    __builtin_trap();
    return;
}
// debug language: C
/* Function:   sub_1070 | Address: 0x1070 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1070(void) {
    int v0; // reg?
    if (v0) {
        return;
    } else {
        if (!qword_3FE0) {
            return;
        }
    }
    return;
}
// debug language: C
/* Function:   sub_10e0 | Address: 0x10e0 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   sub_1030, sub_1070 | Xrefs from: unknown */
__int64 sub_10e0(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 result; // rax
    if (byte_4010) {
        return result;
    } else {
        if (qword_3FF8) {
            __int64 v1 = qword_4008; // rdi
            result = sub_1030();
        }
        result = sub_1070();
        byte_4010 = 1;
        return result;
    }
}
// debug language: C
/* Function:   sub_1120 | Address: 0x1120 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1120(void) {
    sub_10a0();
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    int field_0;
    int field_4;
};

// debug language: C
/* Function:   add | Address: 0x1129 | Size: 0x17 (23 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int add(int a, int b) {
    int v_8;
    int v_4;
    v_4 = (_DWORD)a;
    v_8 = (_DWORD)b;
    // fixtures/src/calls.c:1
    _QWORD v2 = v_4; // rdx
    return v_8 + v2;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    int field_0;
    int field_4;
};

// debug language: C
/* Function:   sub | Address: 0x1141 | Size: 0x15 (21 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int sub(int a, int b) {
    int v_8;
    int v_4;
    v_4 = (_DWORD)a;
    v_8 = (_DWORD)b;
    int v2 = v_4; // temp
    return v2 - v_8;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    int field_0;
    int field_4;
};

// debug language: C
/* Function:   mul | Address: 0x1157 | Size: 0x16 (22 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int mul(int a, int b) {
    __int64 result; // temp
    int v_8;
    int v_4;
    v_4 = (_DWORD)a;
    v_8 = (_DWORD)b;
    // fixtures/src/calls.c:3
    result = v_4;
    return result * v_8;
}
// debug language: C
/* Function:   square | Address: 0x116e | Size: 0x1f (31 bytes) | Convention: System V AMD64 | Stack frame: 0x4 (4 bytes) | Xrefs to:   mul | Xrefs from: unknown */
int square(int x) {
    int v_4;
    v_4 = x;
    x = v_4;
    return mul(x, v_4);
}
// debug language: C
/* Function:   cube | Address: 0x118e | Size: 0x28 (40 bytes) | Convention: System V AMD64 | Stack frame: 0x4 (4 bytes) | Xrefs to:   mul, square | Xrefs from: unknown */
int cube(int x) {
    int v_4;
    v_4 = x;
    x = v_4;
    int v1 = (_DWORD)square(x); // temp
    return mul(v1, v_4);
}
// debug language: C
/* Function:   abs_val | Address: 0x11b7 | Size: 0x16 (22 bytes) | Convention: System V AMD64 | Stack frame: 0x4 (4 bytes) | Xrefs from: unknown */
int abs_val(int x) {
    int v_4;
    _QWORD result; // rax
    v_4 = (_DWORD)x;
    // fixtures/src/calls.c:6
    result = v_4;
    _QWORD v2 = result; // rdx
    return !(_BYTE)(result < 0) ? v2 : result;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    int field_0;
    int field_4;
};

// debug language: C
/* Function:   max | Address: 0x11ce | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int max(int a, int b) {
    int v_8;
    int v_4;
    _QWORD result; // rax
    v_4 = (_DWORD)a;
    v_8 = (_DWORD)b;
    // fixtures/src/calls.c:7
    _QWORD v3 = v_8; // rdx
    result = v_4;
    return result <= v3 ? v3 : result;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    int field_0;
    int field_4;
};

// debug language: C
/* Function:   min | Address: 0x11e9 | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
int min(int a, int b) {
    int v_8;
    int v_4;
    _QWORD result; // rax
    v_4 = (_DWORD)a;
    v_8 = (_DWORD)b;
    // fixtures/src/calls.c:8
    _QWORD v3 = v_8; // rdx
    result = v_4;
    return v3 <= result ? v3 : result;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    int field_0;
    int field_4;
    int field_8;
};

// debug language: C
/* Function:   clamp | Address: 0x1204 | Size: 0x33 (51 bytes) | Convention: System V AMD64 | Stack frame: 0xc (12 bytes) | Xrefs to:   max, min | Xrefs from: unknown */
int clamp(int x, int lo, int hi) {
    int v_12;
    int v_8;
    int v_4;
    v_4 = x;
    v_8 = lo;
    v_12 = hi;
    // fixtures/src/calls.c:9
    hi = v_8;
    lo = hi;
    x = v_4;
    hi = (_DWORD)max(x, lo);
    return min(hi, v_12);
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    int field_0;
    int field_4;
    int field_8;
    int field_12;
    int field_16;
};

// debug language: C
/* Function:   compute | Address: 0x1238 | Size: 0x7b (123 bytes) | Convention: System V AMD64 | Stack frame: 0x24 (36 bytes) | Xrefs to:   abs_val, add, clamp, cube, square, sub | Xrefs from: unknown */
int compute(int x) {
    // DWARF locals
    //   int a;
    //   int b;
    //   int c;
    //   int d;
    //   int e;
    int a;
    int b;
    int c;
    int d;
    int e;
    int v_16;
    int v_12;
    int v_8;
    int v_4;
    __int64 v1; // rax
    __int64 v2; // rax
    __int64 v3; // rax
    a = x;
    x = a;
    e = (_DWORD)add(x, 0xaLL);
    v1 = sub(e, 3LL);
    v_16 = (_DWORD)v1;
    v2 = square(v_16);
    v_12 = (_DWORD)v2;
    v_8 = (_DWORD)cube(2LL);
    // fixtures/src/calls.c:16
    _QWORD v4 = v_8; // rdx
    v3 = sub(v_12, v4);
    v_4 = (_DWORD)abs_val((_DWORD)v3);
    return clamp(v_4, 0LL, 0x64LL);
}
// debug language: C
/* Function:   main | Address: 0x12b4 | Size: 0x13 (19 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   compute | Xrefs from: unknown */
int main(void) {
    return compute(5LL);
}
