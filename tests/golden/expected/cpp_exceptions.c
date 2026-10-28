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
_BYTE byte_4020;
_QWORD qword_3FD0;
_QWORD qword_3FD8;
_QWORD qword_3FE0;
_QWORD qword_3FE8;
_QWORD qword_4008;
__int64 sub_10b0();
__int64 sub_12c0();
__int64 sub_1300(void) /* // dropped 1 param(s) (dead in body) */;
void sub_1290(void);
void sub_1340(void);

/*
 * C++ Class Hierarchy (from RTTI):
 *   .2.1_p20260214 ::) 15.::.1
 */
/* Function:   may_throw(int) [clone .cold] | Address: 0x1140 | Size: 0x35 (53 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_throw | Xrefs from: unknown */
// may_throw(int) [clone .cold]
_Noreturn void may_throw(void) {
    __int64 v_8;
    __int64 c0; // rax
    __int64 v12; // rax
    v_8 = c0;
    /* allocate exception */
    c0 = __cxa_allocate_exception(0x10LL);
    __int64 v3 = c0; // rbx
    std_runtime_error_runtime_error();
    /* throw */
    v12 = __cxa_throw(v3, 0x3d40LL, qword_3FE0);
    return;
}

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    void * field_8;
};

/* Function:   safe_call(int) [clone .cold] | Address: 0x118d | Size: 0x9f (159 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_begin_catch, __cxa_end_catch, __cxa_throw, __printf_chk | Xrefs from: unknown */
// safe_call(int) [clone .cold]
_Noreturn int safe_call(void) {
    __int64 v13; // rax
    __int64 c2; // rbx
    __int64 c4 = 0x10; // rdi
    /* allocate exception */
    __int64 v11 = __cxa_allocate_exception(c4); // rax
    c2 = v11;
    std_runtime_error_runtime_error();
    /* throw */
    v13 = __cxa_throw(c2, 0x3d40LL, qword_3FE0);
    return 0;
}

/* Function:   main | Address: 0x1250 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int main(void) {
    return safe_call(0xffffffffLL);
}

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    void * field_8;
};

/* Function:   _start | Address: 0x1260 | Size: 0x20 (32 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs from: unknown */
void _start(void) {
    __int64 v_8;
    _QWORD pfn; // temp
    v_8 = (uintptr_t)&v_8;
    pfn = qword_3FD8;
    ((__int64 (*)())pfn)();
    __builtin_trap();
    return;
}

/* Function:   sub_1290 | Address: 0x1290 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1290(void) {
    int v5; // reg?
    if (v5) {
        return;
    } else {
        if (!qword_3FE8) {
            return;
        }
    }
    return;
}

/* Function:   sub_1300 | Address: 0x1300 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_10b0, sub_1290 | Xrefs from: unknown */
__int64 sub_1300(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 result; // rax
    if (byte_4020) {
        return result;
    } else {
        if (qword_3FD0) {
            __int64 c3 = qword_4008; // rdi
            result = sub_10b0();
        }
        result = sub_1290();
        byte_4020 = 1;
        return result;
    }
}

/* Function:   sub_1340 | Address: 0x1340 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1340(void) {
    sub_12c0();
}

/* Function:   may_throw(int) | Address: 0x1350 | Size: 0xc (12 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// may_throw(int)
void may_throw(int a1) {
    return;
}

/* Function:   safe_call(int) | Address: 0x1360 | Size: 0xe (14 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// safe_call(int)
int safe_call(int a1) {
    return 0;
}
