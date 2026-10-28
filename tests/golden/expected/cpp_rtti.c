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
_QWORD qword_3FE8;
_QWORD qword_4008;
__int64 sub_1070();
__int64 sub_11a0();
__int64 sub_11e0(void) /* // dropped 1 param(s) (dead in body) */;
void sub_1170(void);
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
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    void * field_8;
    __int64 field_16;
    __int64 field_24;
    void * field_32;
};

/* Function:   main | Address: 0x10c0 | Size: 0x77 (119 bytes) | Convention: System V AMD64 | Stack frame: 0x28 (40 bytes) | Xrefs to:   identify(Animal*), __printf_chk, __stack_chk_fail | Xrefs from: unknown */
int main(void) {
    __int64 v_8;
    __int64 v_16;
    __int64 v_32;
    __int64 v0; // rax
    __int64 v1; // rax
    __int64 result_0; // rax
    __int64 v2; // rax
    __int64 v3; // rbx
    _QWORD v4; // temp
    result_0 = v4;
    result_0 = 0x3d00;
    __int64 v5 = (uintptr_t)&v_16; // rdi
    v_8 = result_0;
    result_0 = 0x3d28;
    v_16 = result_0;
    v0 = identify(&v_16);
    v3 = v0;
    v1 = identify(&v_8);
    __int64 v6 = v1; // rdx
    v2 = printf("%s %s\n", (char *)v6, (char *)v3);
    return 0;
    return 0;
}

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    void * field_8;
};

/* Function:   _start | Address: 0x1140 | Size: 0x20 (32 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs from: unknown */
void _start(void) {
    __int64 v_8;
    _QWORD pfn; // temp
    v_8 = (uintptr_t)&v_8;
    pfn = qword_3FE0;
    ((__int64 (*)())pfn)();
    __builtin_trap();
    return;
}

/* Function:   sub_1170 | Address: 0x1170 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1170(void) {
    int v0; // reg?
    if (v0) {
        return;
    } else {
        if (!qword_3FE8) {
            return;
        }
    }
    return;
}

/* Function:   sub_11e0 | Address: 0x11e0 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1070, sub_1170 | Xrefs from: unknown */
__int64 sub_11e0(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 result; // rax
    if (byte_4010) {
        return result;
    } else {
        if (qword_3FD8) {
            __int64 v1 = qword_4008; // rdi
            result = sub_1070();
        }
        result = sub_1170();
        byte_4010 = 1;
        return result;
    }
}

/* Function:   sub_1220 | Address: 0x1220 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1220(void) {
    sub_11a0();
}

/* Function:   identify(Animal*) | Address: 0x1230 | Size: 0xc7 (199 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   __dynamic_cast | Xrefs from: unknown */
// identify(Animal*)
char * identify(Animal *a1) {
    __int64 v_16;
    __int64 v1; // rax
    __int64 v2; // rax
    __int64 result; // rax
    __int64 v4; // rcx
    __int64 v5; // rsp
    if (!a1) {
        result = "unknown";
        return "unknown";
    } else {
        __int64 v6 = 0x3d40; // rsi
        /* dynamic cast */
        v1 = __dynamic_cast(a1, 0x3d40LL, 0x3d50LL, 0LL);
        a1 = *(_QWORD *)(v5 + 8LL);
        __int64 v7 = v1; // rdx
        if (!v1) {
            v7 = 0x3d68;
            v6 = 0x3d40;
            /* dynamic cast */
            v2 = __dynamic_cast(a1, 0x3d40LL, 0x3d68LL, 0LL);
            a1 = v2;
            if (!v2) {
                result = "unknown";
                return result;
            } else {
                result = *(_QWORD *)v2;
                v4 = 0x1310;
                v7 = *(_QWORD *)result;
                result = "meow";
                if (v7 == v4) {
                    return "meow";
                } else {
                    return v2->speak();
                }
            }
        } else {
            result = *(_QWORD *)v1;
            v6 = 0x1300;
            v4 = *(_QWORD *)result;
            result = "woof";
            if (v4 != v6) {
                a1 = v7;
                return v1->speak();
            } else {
                return result;
            }
        }
    }
    return 0;
}

/* Function:   Dog::speak() | Address: 0x1300 | Size: 0xb (11 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Dog::speak()
char * Dog_speak(Dog *this) {
    return "woof";
}

/* Function:   Cat::speak() | Address: 0x1310 | Size: 0xb (11 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
// Cat::speak()
char * Cat_speak(Cat *this) {
    return "meow";
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
