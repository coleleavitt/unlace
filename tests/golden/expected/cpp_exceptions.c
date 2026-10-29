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
_QWORD qword_4008;
__int64 sub_10b0();
__int64 sub_12c0();

/*
 * C++ Class Hierarchy (from RTTI):
 *   .2.1_p20260214 ::) 15.::.1
 */
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    __int64 field_8;
    __int64 field_16;
};

/* Function:   may_throw(int) [clone .cold] | Address: 0x1140 | Size: 0x4c (76 bytes) | Convention: System V AMD64 | Stack frame: 0x18 (24 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_free_exception, __cxa_throw | Xrefs from: unknown */
// may_throw(int) [clone .cold]
_Noreturn void may_throw(void) {
    __int64 v_24;
    __int64 v0; // rax
    __int64 v1; // rax
    __int64 v2; // rax
    __int64 v3; // rax
    __int64 v4; // rax
    __int64 v5; // rbx
    __int64 v6; // rdi
    __int64 v7; // r14
    v_24 = v0;
    /* allocate exception */
    v1 = __cxa_allocate_exception(0x10LL);
    v6 = v1;
    v5 = v1;
    __try {
        v2 = std_runtime_error_runtime_error(v6, "negative");
        /* throw */
        v3 = __cxa_throw(v5, 0x3d40LL, qword_3FE0);
    } __finally {
        v0 = __eh_exception();
        v7 = v0;
        /* free exception */
        v4 = __cxa_free_exception(v5);
        _Unwind_Resume(v7);
    }
    return;
}

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    __int64 field_8;
    __int64 field_16;
};

/* Function:   safe_call(int) [clone .cold] | Address: 0x118d | Size: 0xb3 (179 bytes) | Convention: System V AMD64 | Stack frame: 0x18 (24 bytes) | Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_begin_catch, __cxa_end_catch, __cxa_free_exception, __cxa_throw, __printf_chk | Xrefs from: unknown */
// safe_call(int) [clone .cold]
int safe_call(void) {
    __int64 v_24;
    __int64 v_16;
    __int64 v0; // rax
    __int64 v1; // rax
    __int64 result_0; // rax
    __int64 v2; // rax
    __int64 v3; // rax
    __int64 v4; // rax
    __int64 v5; // rax
    __int64 v6; // rax
    __int64 v7; // rdx
    __int64 v8; // rbx
    __int64 v9; // rdi
    /* allocate exception */
    __int64 v10 = __cxa_allocate_exception(0x10LL); // rax
    __int64 v11 = "negative"; // rsi
    v9 = v10;
    v8 = v10;
    try {
        v0 = std_runtime_error_runtime_error(v9, "negative");
        v7 = qword_3FE0;
        v11 = 0x3d40;
        v9 = v8;
        try {
            /* throw */
            v1 = __cxa_throw(v9, 0x3d40LL, v7);
        } catch (struct std__exception e) {
            result_0 = __eh_exception();
            v7 = 1;
            v9 = result_0;
            result_0 = 1;
        }
    } catch (struct std__exception e) {
        result_0 = __eh_exception();
        v7 = __eh_selector();
        v_24 = result_0;
        v_16 = v7;
        /* free exception */
        v2 = __cxa_free_exception(v8);
        v9 = v_24;
        result_0 = v_16;
    }
    --result_0;
    if (result_0 != 1) {
        _Unwind_Resume(v9);
    } else {
        /* catch */
        v3 = __cxa_begin_catch(v9);
        v7 = v3->__vftable->method_2();
        __try {
            v4 = printf("caught: %s\n", (char *)v7);
            /* end catch */
            v5 = __cxa_end_catch();
            return 0xffffffff;
        } __finally {
            result_0 = __eh_exception();
            v8 = result_0;
            /* end catch */
            v6 = __cxa_end_catch();
            _Unwind_Resume(v8);
        }
    }
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

/* Function:   deregister_tm_clones | Address: 0x1290 | Size: 0x2c (44 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void deregister_tm_clones(void) {
    return;
}

/* Function:   __do_global_dtors_aux | Address: 0x1300 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   deregister_tm_clones, sub_10b0 | Xrefs from: unknown */
__int64 __do_global_dtors_aux(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 result; // rax
    __int64 v1; // rax
    if (byte_4020) {
        return result;
    } else {
        if (qword_3FD0) {
            __int64 v2 = qword_4008; // rdi
            v1 = sub_10b0(v2);
        }
        result = deregister_tm_clones();
        byte_4020 = 1;
        return result;
    }
}

/* Function:   frame_dummy | Address: 0x1340 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void frame_dummy(void) {
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
