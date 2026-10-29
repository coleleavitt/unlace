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
_QWORD qword_3FF8;
_QWORD qword_4008;
__int64 sub_1040();
__int64 sub_14e0();
__int64 sub_1520(void) /* // dropped 1 param(s) (dead in body) */;
void sub_14b0(void);
void sub_1560(void);

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    _QWORD field_0;
    __int128 field_8;
};
struct __anon1 {
    __int128 field_0;
    __int128 field_16;
    __int128 field_32;
};


/* Function:   main | Address: 0x1060 | Size: 0x40d (1037 bytes) | Convention: System V AMD64 | Stack frame: 0x58 (88 bytes) | Xrefs to:   __stack_chk_fail, f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
int main(void) {
    __int64 v0; // temp
    __int64 v1; // temp
    __int64 v2; // temp
    __int64 v3; // temp
    __int64 v4; // temp
    __int64 v5; // temp
    __int64 v6; // temp
    int buf_8[2];
    char buf_88[16];
    char buf_72[16];
    char buf_56[16];
    char buf_40[16];
    __int64 v_16;
    char buf_0[64]; // int buf_0[16]
    int v7; // eax
    _QWORD v8; // rax
    __int64 v9; // rax
    __int64 v10; // rax
    __int64 v11; // rax
    _QWORD v12; // rbx
    _QWORD v13; // rsi
    _QWORD v14; // rdi
    _QWORD v15; // r10
    __m128i v16; // xmm1
    _DWORD v17; // temp
    _DWORD v18; // temp
    __int64 v19; // temp
    _DWORD v20; // temp
    int v21; // temp
    __int64 v22 = 0xa; // rdx
    _BOOL v23 = !(__builtin_popcount(0) & 1); // PF
    __int64 v24 = 0; // rcx
    __m128i v25 = (((unsigned __int128)0x900000006ULL << 64) | 0x300000000ULL); // xmm0
    char v26 = 1; // ZF
    char v27 = 0; // SF
    char v28 = 0; // CF
    char v29 = 0; // OF
    v7 = 1;
    *(_OWORD *)buf_0 = v25;
    v25 = (((unsigned __int128)0x1500000012ULL << 64) | 0xf0000000cULL);
    *(_OWORD *)(uintptr_t)(buf_0 + 16) = v25;
    v25 = (((unsigned __int128)0x210000001eULL << 64) | 0x1b00000018ULL);
    *(_OWORD *)((uintptr_t)buf_0 + 0x20LL) = v25;
    v25 = (((unsigned __int128)0x2d0000002aULL << 64) | 0x2700000024ULL);
    *(_OWORD *)((uintptr_t)buf_0 + 0x30LL) = v25;
    do {
        v13 = (_QWORD)v7;
        v7 += v24;
        v24 = v13;
        v17 = v22;
        v26 = v22 == 1;
        v27 = (_BYTE)(v22 < 1);
        v28 = (_DWORD)v22 < 1;
        v29 = __OFSUB__(v22, 1);
        --v22;
    } while (v22);
    v26 = v24 == -910;
    v27 = (_BYTE)(v13 + 0x38e < 0);
    v28 = (v24 + 0x38e) < v24;
    v29 = __OFADD__(v24, 0x38e);
    v24 = v13 + 0x38e;
    v22 = 0x24;
    v7 = 0x30;
    do {
        v13 = v22;
        v22 = v7 % v13;
        v7 = v13;
        v26 = !v22;
        v27 = (_BYTE)(v22 < 0);
        v28 = 0;
        v29 = 0;
    } while (v22);
    v26 = v24 + v13 == 0;
    v27 = (_BYTE)(v24 + v13 < 0);
    v28 = (v24 + v7) < v24;
    v29 = __OFADD__(v24, v7);
    v8 = 0x1b;
    while (1) {
        v17 = (_DWORD)v8;
        v18 = (_DWORD)v8 & 1;
        v15 = v18;
        if (v18) {
            v17 = (_DWORD)(v8 + (v8 << 1LL) + 1LL);
            v22 += 2;
            v26 = v17 >> 1 == 0;
            v27 = (_BYTE)(v17 >> 1 < 0);
            v28 = 0;
            v29 = 0;
            v8 = v17 >> 1;
        } else {
            v8 = v17 >> 1;
            ++v22;
            v26 = v8 == 1;
            v27 = (_BYTE)(v8 < 1);
            v28 = (_DWORD)v8 < 1;
            v29 = __OFSUB__(v8, 1);
            if (v8 == 1) {
                break;
            }
        }
    }
    v24 = v24 + v13 + v22;
    v26 = 1;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v13 = 0;
    v22 = 0x20;
    v7 = -559038737;
    do {
        v17 = v7;
        v7 = (_DWORD)v7 >> 1;
        v18 = v17 & 1;
        v14 = v17 & 1;
        v13 += v18;
        v17 = v22;
        v26 = v22 == 1;
        v27 = (_BYTE)(v22 < 1);
        v28 = (_DWORD)v22 < 1;
        v29 = __OFSUB__(v22, 1);
        --v22;
    } while (v22);
    v24 = (_DWORD)(v13 + v24 + 0x46LL);
    __int64 v30 = (uintptr_t)buf_0; // r9
    __int64 v31 = (uintptr_t)buf_0 + 0x40LL; // r8
    v8 = (uintptr_t)buf_0;
    v25 = 0;
    do {
        v25 = _mm_add_epi32(v25, *(_OWORD *)v8);
        v19 = v8 + 0x10LL;
        v8 += 0x10LL;
        v4 = v31 - v19;
        v26 = v31 == v19;
        v27 = (_BYTE)(v31 < v19);
        v28 = (_QWORD)v31 < (_QWORD)v8;
        v29 = __OFSUB__(v31, v8);
    } while (v31 != v8);
    v14 = (uintptr_t)(buf_0 + 4);
    __int64 v32 = v31 - (uintptr_t)(buf_0 + 4); // r11
    v13 = (uintptr_t)(buf_0 + 4);
    v25 = _mm_add_epi32(v25, (_OWORD)v25 >> 0x40);
    v16 = (_OWORD)v25 >> 0x20;
    v25 = _mm_add_epi32(v25, v16);
    v22 = (_DWORD)v25 + v24;
    int v33 = v32 & 4; // r11d
    v24 = (uintptr_t)(buf_0 + 4);
    v13 = *(_DWORD *)(buf_0 + 4);
    v7 = 0u < v13 ? v13 : 0u;
    v13 = (uintptr_t)(buf_0 + 8);
    v26 = v31 == (uintptr_t)(buf_0 + 8);
    v27 = (_BYTE)(v31 < (uintptr_t)(buf_0 + 8));
    v28 = (_QWORD)v31 < (_QWORD)(uintptr_t)(buf_0 + 8);
    v29 = __OFSUB__(v31, (uintptr_t)(buf_0 + 8));
    do {
        v32 = *(_DWORD *)v13;
        v18 = v7 < v32 ? v32 : v7;
        v32 = *(_DWORD *)(v13 + 4LL);
        v20 = v18;
        v7 = v20 < v32 ? v32 : v20;
        v19 = v13 + 8LL;
        v13 += 8LL;
        v5 = v31 - v19;
        v26 = v31 == v19;
        v27 = (_BYTE)(v31 < v19);
        v28 = (_QWORD)v31 < (_QWORD)v13;
        v29 = __OFSUB__(v31, v13);
    } while (v31 != v13);
    v18 = v7 + v22;
    v8 = v7 + v22;
    v13 = (_DWORD)(v31 - (uintptr_t)(buf_0 + 4)) & 4;
    v24 = *(_DWORD *)(buf_0 + 4);
    v6 = 0;
    v22 = 0u != v24 && v24 <= 0u ? v24 : v6;
    v24 = (uintptr_t)(buf_0 + 8);
    v26 = v31 == (uintptr_t)(buf_0 + 8);
    v27 = (_BYTE)(v31 < (uintptr_t)(buf_0 + 8));
    v28 = (_QWORD)v31 < (_QWORD)(uintptr_t)(buf_0 + 8);
    v29 = __OFSUB__(v31, (uintptr_t)(buf_0 + 8));
    do {
        v13 = *(_DWORD *)v24;
        v22 = v22 != v13 && v13 <= v22 ? v13 : v22;
        v13 = *(_DWORD *)(v24 + 4LL);
        v22 = v22 != v13 && v13 <= v22 ? v13 : v22;
        v19 = v24 + 8LL;
        v24 += 8LL;
        v4 = v31 - v19;
        v26 = v31 == v19;
        v27 = (_BYTE)(v31 < v19);
        v28 = (_QWORD)v31 < (_QWORD)v24;
        v29 = __OFSUB__(v31, v24);
    } while (v31 != v24);
    v26 = v22 + v18 == 0;
    v27 = (_BYTE)(v22 + v18 < 0);
    v28 = (v22 + v8) < v22;
    v29 = __OFADD__(v22, v8);
    v22 += v18;
    __m128i v34 = 0; // xmm2
    v8 = (uintptr_t)buf_0;
    do {
        v25 = *(_OWORD *)v8;
        v19 = v8 + 0x10LL;
        v8 += 0x10LL;
        v16 = v25;
        v16 = _mm_mul_epu32(v25, v25);
        v25 = _mm_srli_epi64(v25, 0x20);
        v25 = _mm_mul_epu32(v25, v25);
        v16 = _mm_shuffle_epi32(v16, 8);
        v25 = _mm_shuffle_epi32(v25, 8);
        v16 = _mm_unpacklo_epi32(v16, v25);
        v34 = _mm_add_epi32(v34, v16);
        v4 = v31 - v19;
        v26 = v31 == v19;
        v27 = (_BYTE)(v31 < v19);
        v28 = (_QWORD)v31 < (_QWORD)v8;
        v29 = __OFSUB__(v31, v8);
    } while (v31 != v8);
    v8 = 0;
    v34 = _mm_add_epi32(v34, (_OWORD)v34 >> 0x40);
    v34 = _mm_add_epi32(v34, (_OWORD)v34 >> 0x20);
    v26 = (_DWORD)v34 + v22 == 0;
    v27 = (_BYTE)((_DWORD)v34 + v22 < 0);
    v28 = ((_DWORD)v34 + v22) < (_DWORD)v34;
    v29 = __OFADD__((_DWORD)v34, v22);
    v24 = (_DWORD)v34 + v22;
    v22 = (uintptr_t)buf_0;
    while (1) {
        v17 = *(_DWORD *)v22;
        v18 = v17 - 0xf;
        v26 = v17 == 0xf;
        v27 = (_BYTE)(v17 < 0xf);
        v28 = (_DWORD)v17 < 0xf;
        v29 = __OFSUB__(v17, 0xf);
        if (v17 == 0xf) {
            break;
        } else {
            v17 = (_DWORD)v8;
            v18 = (_DWORD)v8 + 1;
            v8 = v18;
            v22 += 4LL;
            v20 = v18;
            v26 = v8 == 0x10;
            v27 = (_BYTE)(v8 < 0x10);
            v28 = (_DWORD)v8 < 0x10;
            v29 = __OFSUB__(v8, 0x10);
            if (v8 == 0x10) {
                v8 = 0xffffffff;
                break;
            }
        }
    }
    v13 = 2;
    v32 = (_DWORD)(v8 + v24 + 0x581LL);
    v26 = 2u == 3;
    v27 = (_BYTE)(2u < 3);
    v28 = (_DWORD)2u < 3;
    v29 = __OFSUB__(2u, 3);
    while (1) {
        ++v15;
        v26 = v15 == 0xa;
        v27 = (_BYTE)(v15 < 0xa);
        v28 = (_DWORD)v15 < 0xa;
        v29 = __OFSUB__(v15, 0xa);
        if (v15 != 0xa) {
            while (1) {
                ++v13;
                v24 = 2;
                v26 = v13 == 3;
                v27 = (_BYTE)(v13 < 3);
                v28 = (_DWORD)v13 < 3;
                v29 = __OFSUB__(v13, 3);
                if (v13 != 3 && 3 <= v13) {
                    while (1) {
                        v7 = v13 / v24;
                        v22 = v13 % v24;
                        v26 = !v22;
                        v27 = (_BYTE)(v22 < 0);
                        v28 = 0;
                        v29 = 0;
                        if (v22) {
                            ++v24;
                            v7 = v24 * v24;
                            v26 = v7 == v13;
                            v27 = (_BYTE)(v7 < v13);
                            v28 = (_DWORD)v7 < (_DWORD)v13;
                            v29 = __OFSUB__(v7, v13);
                            if (v7 != v13 && v13 <= v7) {
                                break;
                            }
                        } else {
                            break;
                        }
                    }
                    if (v22) {
                        break;
                    }
                } else {
                    break;
                }
            }
        } else {
            break;
        }
    }
    v26 = v32 + v13 == 0;
    v27 = (_BYTE)(v32 + v13 < 0);
    v28 = (v32 + v13) < v32;
    v29 = __OFADD__(v32, v13);
    v32 += v13;
    v24 = 0x12;
    v12 = 0xc;
    do {
        v17 = (_DWORD)v12;
        v21 = v24;
        v12 = v24;
        v18 = v17;
        v20 = v18 / v24;
        v7 = v20;
        v22 = v18 % v24;
        v24 = v22;
        v26 = !v22;
        v27 = (_BYTE)(v22 < 0);
        v28 = 0;
        v29 = 0;
    } while (v22);
    v26 = 1;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v13 = 0;
    int v35 = 0xd8u % v21; // edx
    v15 = (_DWORD)(0xd8u / v21 + v32 - 1218664206);
    while (1) {
        v17 = *(_DWORD *)v30;
        v22 = v17;
        v8 = v17 * 0x66666667LL;
        v20 = v22;
        v8 = (_DWORD)(v8 >> 0x21) - (v22 >> 0x1f);
        v17 = (_DWORD)(v8 + (v8 << 2LL));
        int v36 = (_DWORD)(v8 + (v8 << 2LL)); // r9d
        v8 = v22;
        v7 = v8 - v17;
        v26 = v7 == 2;
        char v37 = (_BYTE)(v7 < 2); // temp
        v29 = __OFSUB__(v7, 2);
        if (v7 == 2) {
            v26 = v22 == 5;
            v27 = (_BYTE)(v22 < 5);
            v28 = (_DWORD)v22 < 5;
            v29 = __OFSUB__(v22, 5);
            v22 -= 5;
        } else {
            if (v26 || v37 ^ v29) {
                if (!v7) {
                    v26 = v20 + v20 == 0;
                    v27 = (_BYTE)(v20 + v20 < 0);
                    v28 = (v20 + v20) < v20;
                    v22 = v20 + v20;
                } else {
                    v36 = (_DWORD)(v22 + 0xaLL);
                    v26 = v7 == 1;
                    v27 = (_BYTE)(v7 < 1);
                    v28 = (_DWORD)v7 < 1;
                    v22 = v26 ? (_DWORD)(v22 + 0xaLL) : v22;
                }
            } else {
                v22 = v7 == 3 ? -v20 : v20;
                v30 = v14;
                v13 += v22;
                v26 = v31 == v14;
                v27 = (_BYTE)(v31 < v14);
                v28 = (_QWORD)v31 < (_QWORD)v14;
                if (v31 != v14) {
                    v19 = v14 + 4LL;
                    v26 = v14 == -4LL;
                    v0 = v19 < 0;
                    v3 = (_BYTE)v0;
                    v27 = v3;
                    v28 = (v14 + 4LL) < v14;
                    v3 = (_BYTE)v19;
                    v1 = __builtin_popcount(v3);
                    v2 = v1 & 1;
                    v23 = !v2;
                    v14 = v19;
                    continue;
                } else {
                    break;
                }
            }
        }
        v13 += v22;
        v30 = v14;
        v26 = v31 == v14;
        v27 = (_BYTE)(v31 < v14);
        v28 = (_QWORD)v31 < (_QWORD)v14;
        if (v31 == v14) {
            break;
        }
        v19 = v14 + 4LL;
        v26 = v14 == -4LL;
        v0 = v19 < 0;
        v3 = (_BYTE)v0;
        v27 = v3;
        v28 = (v14 + 4LL) < v14;
        v3 = (_BYTE)v19;
        v1 = __builtin_popcount(v3);
        v2 = v1 & 1;
        v23 = !v2;
        v14 = v19;
    }
    v22 = (_DWORD)(v15 + v13);
    v26 = 1;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v8 = 0;
    while (1) {
        v26 = (_DWORD)v8 == 9;
        v27 = (_BYTE)((_DWORD)v8 < 9);
        v28 = (_DWORD)v8 < 9;
        if (!((_DWORD)v8 != 9 && 9 <= (_DWORD)v8)) {
            while (1) {
                v17 = (_DWORD)v8;
                v18 = (_DWORD)v8 - 4;
                if (v17 <= 4) {
                    break;
                } else {
                    v24 = (_DWORD)(v24 + v8 + 0x14LL);
                    v8 = (_DWORD)v8 + 1;
                    v26 = v8 == 9;
                    v27 = (_BYTE)(v8 < 9);
                    v28 = (_DWORD)v8 < 9;
                    if (v8 > 9) {
                        break;
                    }
                }
            }
            if (v17 <= 4) {
                v13 = (_DWORD)(v8 + (v8 << 1LL));
                v8 = v17 + 1;
                v26 = v24 + v13 == 0;
                v27 = (_BYTE)(v24 + v13 < 0);
                v28 = (v24 + v13) < v24;
                v24 += v13;
                continue;
            }
        }
        v24 = (_DWORD)(v24 + v8 - 10);
        v17 = (_DWORD)v8;
        v18 = (_DWORD)v8 + 1;
        v8 = v18;
        v26 = v8 == 0x14;
        v27 = (_BYTE)(v8 < 0x14);
        v28 = (_DWORD)v8 < 0x14;
        if (v8 == 0x14) {
            break;
        }
    }
    v13 = (_DWORD)(v22 + v24 + 0x12dLL);
    v8 = 0x30;
    v24 = 0x24;
    while (1) {
        v22 = (_DWORD)v8 % v24;
        v8 = v24;
        if (v22) {
            v24 = v22;
        } else {
            break;
        }
    }
    v9 = f_rec_fib(8LL);
    v15 = (_DWORD)(v9 + (_DWORD)(v13 + v24 + 3LL));
    v10 = f_rec_power_constprop_0(8LL);
    v15 += (_DWORD)v10;
    v11 = f_ackermann(2LL, 3LL);
    v18 = (_DWORD)(v15 + v11 + 0xabe0cLL);
    v22 = (_DWORD)(v15 + v11 + 0xabe0cLL) >> 0x1f >> 0x18;
    v17 = v18;
    return (_DWORD)(_BYTE)(v17 + v22) - v22;
    return 0;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    void * field_0;
    void * field_8;
};

/* Function:   _start | Address: 0x1480 | Size: 0x20 (32 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs from: unknown */
void _start(void) {
    __int64 v_8;
    _QWORD pfn; // temp
    v_8 = (uintptr_t)&v_8;
    pfn = qword_3FD8;
    ((__int64 (*)())pfn)();
    __builtin_trap();
    return;
}
/* Function:   sub_14b0 | Address: 0x14b0 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_14b0(void) {
    return;
}
/* Function:   sub_1520 | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   sub_1040, sub_14b0 | Xrefs from: unknown */
__int64 sub_1520(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 result; // rax
    if (byte_4010) {
        return result;
    } else {
        if (qword_3FF8) {
            __int64 v1 = qword_4008; // rdi
            result = sub_1040(v1);
        }
        result = sub_14b0();
        byte_4010 = 1;
        return result;
    }
}
/* Function:   sub_1560 | Address: 0x1560 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1560(void) {
    sub_14e0();
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    void * field_8;
};
struct __anon1 {
    int field_0;
    int field_4;
    int field_8;
    int field_12;
    int field_16;
    int field_20;
    int field_24;
    int field_28;
    int field_32;
    int field_36;
    int field_40;
};

/* Function:   f_rec_fib | Address: 0x1570 | Size: 0x2ae (686 bytes) | Convention: System V AMD64 | Stack frame: 0x38 (56 bytes) | Xrefs to:   f_rec_fib | Xrefs from: unknown */
int f_rec_fib(int a1) {
    int v_96;
    int v_92;
    int v_88;
    int v_84;
    int v_80;
    int v_76;
    int v_72;
    int v_68;
    int v_64;
    int v_60;
    int v_56;
    int v_52;
    char buf[88]; // int buf[22]
    _QWORD result; // rax
    __int64 v2; // rax
    _QWORD v3; // rbx
    _QWORD v4; // r13
    _QWORD v5; // r14
    _QWORD v6; // r15
    _DWORD v7; // temp
    _DWORD v8; // temp
    _DWORD v9; // temp
    if (a1 <= 1) {
        return a1;
    } else {
        int v10 = 0; // r14d
        _QWORD v11 = (_DWORD)(a1 - 2); // rbp
        __int64 v12 = (uintptr_t)(buf + 40) - 8LL; // temp
        *(_QWORD *)(buf + 32) = (uintptr_t)(buf + 40);
        v3 = (uintptr_t)(buf + 40);
        _BOOL v13 = (uintptr_t)(buf + 40) == 0x38; // ZF
        char v14 = (_BYTE)((uintptr_t)(buf + 40) < 0x38); // SF
        _BOOL v15 = (_QWORD)(uintptr_t)(buf + 40) < 0x38; // CF
        _BOOL v16 = __OFSUB__((uintptr_t)(buf + 40), 0x38LL); // OF
        while (1) {
            _QWORD v17 = (_DWORD)(v3 - 2); // r12
            v13 = (_DWORD)v3 == 1;
            v14 = (_BYTE)((_DWORD)v3 < 1);
            v15 = (_DWORD)v3 < 1;
            if ((_DWORD)v3 > 1) {
                do {
                    v6 = (_DWORD)v3;
                    result = v10;
                    v13 = 1;
                    v14 = 0;
                    v15 = 0;
                    v16 = 0;
                    v3 = 0;
                    while (1) {
                        v11 = (_DWORD)(v17 - 2);
                        v13 = (_DWORD)v17 == 1;
                        v14 = (_BYTE)((_DWORD)v17 < 1);
                        v15 = (_DWORD)v17 < 1;
                        if ((_DWORD)v17 > 1) {
                            do {
                                *(_DWORD *)(buf + 52) = (_DWORD)v3;
                                v4 = (_DWORD)v17;
                                _QWORD v18 = result; // rdx
                                v13 = 1;
                                v14 = 0;
                                v15 = 0;
                                v16 = 0;
                                v17 = 0;
                                while (1) {
                                    v5 = 0;
                                    v13 = (_DWORD)(uintptr_t)(buf + 40) == 1;
                                    v14 = (_BYTE)((_DWORD)(uintptr_t)(buf + 40) < 1);
                                    v15 = (_DWORD)(uintptr_t)(buf + 40) < 1;
                                    if ((_DWORD)(uintptr_t)(buf + 40) > 1) {
                                        do {
                                            _QWORD v19 = (_DWORD)v18; // r9
                                            _QWORD v20 = (_DWORD)v17; // rsi
                                            v18 = (_DWORD)(uintptr_t)(buf + 38);
                                            _QWORD v21 = (_DWORD)v6; // rcx
                                            v7 = (_DWORD)(uintptr_t)(buf + 40);
                                            v17 = (_DWORD)(uintptr_t)(buf + 40);
                                            while (1) {
                                                v3 = (_DWORD)(v18 - 2);
                                                v11 = 0;
                                                v13 = (_DWORD)v18 == 1;
                                                v14 = (_BYTE)((_DWORD)v18 < 1);
                                                v15 = (_DWORD)v18 < 1;
                                                if ((_DWORD)v18 > 1) {
                                                    do {
                                                        _QWORD v22 = (_DWORD)v19; // r11
                                                        v19 = v20;
                                                        v20 = (_DWORD)v18;
                                                        while (1) {
                                                            v6 = (_DWORD)(v3 - 2);
                                                            v18 = 0;
                                                            v13 = (_DWORD)v3 == 1;
                                                            v14 = (_BYTE)((_DWORD)v3 < 1);
                                                            v15 = (_DWORD)v3 < 1;
                                                            if ((_DWORD)v3 > 1) {
                                                                while (1) {
                                                                    v13 = (_DWORD)v6 == 1;
                                                                    v14 = (_BYTE)((_DWORD)v6 < 1);
                                                                    v15 = (_DWORD)v6 < 1;
                                                                    if ((_DWORD)v6 > 1) {
                                                                        do {
                                                                            *(_DWORD *)(buf + 40) = (_DWORD)v18;
                                                                            result = (_DWORD)v19;
                                                                            v13 = 1;
                                                                            v14 = 0;
                                                                            v15 = 0;
                                                                            v16 = 0;
                                                                            __int64 v23 = 0; // r10
                                                                            v19 = (_DWORD)(v6 - 2);
                                                                            while (1) {
                                                                                _QWORD v24 = (_DWORD)(v19 - 2); // r8
                                                                                v18 = 0;
                                                                                v13 = (_DWORD)v19 == 1;
                                                                                v14 = (_BYTE)((_DWORD)v19 < 1);
                                                                                v15 = (_DWORD)v19 < 1;
                                                                                if ((_DWORD)v19 > 1) {
                                                                                    do {
                                                                                        *(_DWORD *)(buf + 48) = v21;
                                                                                        a1 = (_DWORD)v19;
                                                                                        v19 = (_DWORD)v6;
                                                                                        v6 = (_DWORD)v3;
                                                                                        v9 = result;
                                                                                        v3 = result;
                                                                                        result = a1;
                                                                                        while (1) {
                                                                                            a1 = (_DWORD)(v24 - 2);
                                                                                            v21 = 0;
                                                                                            v13 = (_DWORD)v24 == 1;
                                                                                            v14 = (_BYTE)((_DWORD)v24 < 1);
                                                                                            v15 = (_DWORD)v24 < 1;
                                                                                            if (!(v15 || v13)) {
                                                                                                do {
                                                                                                    *(_DWORD *)(buf + 44) = v22;
                                                                                                    v22 = result;
                                                                                                    do {
                                                                                                        *(_DWORD *)(buf + 84) = v22;
                                                                                                        *(_DWORD *)(buf + 80) = (_DWORD)v19;
                                                                                                        *(_DWORD *)(buf + 76) = (_DWORD)v24;
                                                                                                        *(_DWORD *)(buf + 72) = v23;
                                                                                                        *(_DWORD *)(buf + 68) = v20;
                                                                                                        *(_DWORD *)(buf + 64) = (_DWORD)v18;
                                                                                                        *(_DWORD *)(buf + 60) = v21;
                                                                                                        *(_DWORD *)(buf + 56) = a1;
                                                                                                        v2 = f_rec_fib(a1);
                                                                                                        a1 = *(_DWORD *)(buf + 56);
                                                                                                        v21 = *(_DWORD *)(buf + 60);
                                                                                                        v18 = *(_DWORD *)(buf + 64);
                                                                                                        v20 = *(_DWORD *)(buf + 68);
                                                                                                        --a1;
                                                                                                        v21 += v2;
                                                                                                        v23 = *(_DWORD *)(buf + 72);
                                                                                                        v8 = *(_DWORD *)(buf + 76);
                                                                                                        v24 = *(_DWORD *)(buf + 76);
                                                                                                        v13 = a1 == -1;
                                                                                                        v14 = (_BYTE)(a1 < -1);
                                                                                                        v15 = (_DWORD)a1 < (_DWORD)0xffffffffffffffffULL;
                                                                                                        v19 = *(_DWORD *)(buf + 80);
                                                                                                        v22 = *(_DWORD *)(buf + 84);
                                                                                                    } while (a1 != -2);
                                                                                                    v24 = *(_DWORD *)(buf + 76) - 1;
                                                                                                    result = v22;
                                                                                                    v18 = (_DWORD)(v21 + v18 + 1LL);
                                                                                                    v22 = *(_DWORD *)(buf + 44);
                                                                                                    a1 = (_DWORD)(v24 - 2);
                                                                                                    v21 = 0;
                                                                                                    v13 = v24 == 1;
                                                                                                    v14 = (_BYTE)(v24 < 1);
                                                                                                    v15 = (_DWORD)v24 < 1;
                                                                                                } while ((_DWORD)1 <= (_DWORD)v24 && v24 != 1);
                                                                                            }
                                                                                            v18 = (_DWORD)v18 + (_DWORD)v24;
                                                                                            if ((_DWORD)v24) {
                                                                                                v13 = 1;
                                                                                                v14 = 0;
                                                                                                v15 = 0;
                                                                                                v16 = 0;
                                                                                                v24 = 0;
                                                                                            } else {
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                        a1 = result;
                                                                                        result = v9;
                                                                                        v3 = v6;
                                                                                        v6 = (_DWORD)v19;
                                                                                        v19 = (_DWORD)(a1 - 1);
                                                                                        v23 = (_DWORD)(v18 + v23 + 1LL);
                                                                                        v21 = *(_DWORD *)(buf + 48);
                                                                                        v18 = 0;
                                                                                        v24 = (_DWORD)(v19 - 2);
                                                                                        v13 = v19 == 1;
                                                                                        v14 = (_BYTE)(v19 < 1);
                                                                                        v15 = (_DWORD)v19 < 1;
                                                                                    } while (v19 != 1 && 1 <= v19);
                                                                                }
                                                                                v23 += (_DWORD)v19;
                                                                                if ((_DWORD)v19) {
                                                                                    v13 = 1;
                                                                                    v14 = 0;
                                                                                    v15 = 0;
                                                                                    v16 = 0;
                                                                                    v19 = 0;
                                                                                } else {
                                                                                    break;
                                                                                }
                                                                            }
                                                                            v18 = *(_DWORD *)(buf + 40);
                                                                            v8 = (_DWORD)v6 - 1;
                                                                            v6 = (_DWORD)v6 - 1;
                                                                            v19 = result;
                                                                            v18 = (_DWORD)(v18 + v23 + 1LL);
                                                                            v13 = v6 == 1;
                                                                            v14 = (_BYTE)(v6 < 1);
                                                                            v15 = (_DWORD)v6 < 1;
                                                                        } while (v6 != 1 && 1 <= v6);
                                                                    }
                                                                    v18 = (_DWORD)v18 + (_DWORD)v6;
                                                                    if ((_DWORD)v6) {
                                                                        v13 = 1;
                                                                        v14 = 0;
                                                                        v15 = 0;
                                                                        v16 = 0;
                                                                        v6 = 0;
                                                                    } else {
                                                                        v8 = (_DWORD)v3 - 1;
                                                                        v3 = (_DWORD)v3 - 1;
                                                                        v11 = (_DWORD)((uintptr_t)(buf + 40) + v18 + 1LL);
                                                                        v18 = 0;
                                                                        v6 = (_DWORD)(v3 - 2);
                                                                        v13 = v3 == 1;
                                                                        v14 = (_BYTE)(v3 < 1);
                                                                        v15 = (_DWORD)v3 < 1;
                                                                        if (!(v3 != 1 && 1 <= v3)) {
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            v11 = (_DWORD)(uintptr_t)(buf + 40) + (_DWORD)v3;
                                                            if ((_DWORD)v3) {
                                                                v13 = 1;
                                                                v14 = 0;
                                                                v15 = 0;
                                                                v16 = 0;
                                                                v3 = 0;
                                                            } else {
                                                                break;
                                                            }
                                                        }
                                                        v9 = (_DWORD)(v20 - 1);
                                                        v18 = (_DWORD)(v20 - 1);
                                                        v5 = (_DWORD)(v5 + (uintptr_t)(buf + 40) + 1LL);
                                                        v20 = (_DWORD)v19;
                                                        v11 = 0;
                                                        v19 = v22;
                                                        v3 = (_DWORD)(v18 - 2);
                                                        v13 = v18 == 1;
                                                        v14 = (_BYTE)(v18 < 1);
                                                        v15 = (_DWORD)v18 < 1;
                                                    } while (v18 != 1 && 1 <= v18);
                                                }
                                                v5 = (_DWORD)v5 + (_DWORD)v18;
                                                if ((_DWORD)v18) {
                                                    v13 = 1;
                                                    v14 = 0;
                                                    v15 = 0;
                                                    v16 = 0;
                                                    v18 = 0;
                                                } else {
                                                    break;
                                                }
                                            }
                                            v9 = v7;
                                            v18 = (_DWORD)v19;
                                            v17 = (_DWORD)(v20 + v5 + 1LL);
                                            v6 = v21;
                                            v11 = v9 - 1;
                                            v5 = 0;
                                            v7 = v9 - 1;
                                            v13 = v7 == 1;
                                            v14 = (_BYTE)(v7 < 1);
                                            v15 = (_DWORD)v7 < 1;
                                        } while (v7 != 1 && 1 <= v7);
                                    }
                                    v17 = (_DWORD)v17 + (_DWORD)(uintptr_t)(buf + 40);
                                    if ((_DWORD)(uintptr_t)(buf + 40)) {
                                        v13 = 1;
                                        v14 = 0;
                                        v15 = 0;
                                        v16 = 0;
                                        v11 = 0;
                                    } else {
                                        break;
                                    }
                                }
                                v3 = *(_DWORD *)(buf + 52);
                                result = (_DWORD)v18;
                                v3 = (_DWORD)(v3 + v17 + 1LL);
                                v17 = (_DWORD)(v4 - 1);
                                v13 = v17 == 1;
                                v14 = (_BYTE)(v17 < 1);
                                v15 = (_DWORD)v17 < 1;
                            } while (v17 != 1 && 1 <= v17);
                        }
                        v3 = (_DWORD)v3 + (_DWORD)v17;
                        if ((_DWORD)v17) {
                            v13 = 1;
                            v14 = 0;
                            v15 = 0;
                            v16 = 0;
                            v17 = 0;
                        } else {
                            break;
                        }
                    }
                    v10 = (_DWORD)(result + v3 + 1LL);
                    v3 = (_DWORD)(v6 - 1);
                    v17 = (_DWORD)(v3 - 2);
                    v13 = v3 == 1;
                    v14 = (_BYTE)(v3 < 1);
                    v15 = (_DWORD)v3 < 1;
                } while (v3 != 1 && 1 <= v3);
            }
            v8 = v10 + (_DWORD)v3;
            v10 += (_DWORD)v3;
            if ((_DWORD)v3) {
                v3 = 0;
            } else {
                result = v8 + 1;
                v3 = v12;
                v17 = v12;
                return result;
            }
        }
    }
    return 0;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    void * field_8;
};
struct __anon1 {
    int field_0;
    int field_4;
    int field_8;
};

/* Function:   f_ackermann | Address: 0x1830 | Size: 0x34e (846 bytes) | Convention: System V AMD64 | Stack frame: 0x18 (24 bytes) | Xrefs to:   f_ackermann | Xrefs from: unknown */
int f_ackermann(int a1, int a2) {
    __int64 v2; // temp
    int v_4;
    int v_52;
    int v_12;
    int v3; // eax
    _QWORD result; // rax
    __int64 v5; // rax
    _QWORD v6; // rcx
    _QWORD v7; // rbx
    _QWORD v8; // rbp
    _QWORD v9; // r12
    _QWORD v10; // r13
    _QWORD v11; // r14
    _QWORD v12; // r15
    int v13; // temp
    v3 = a2;
    _BOOL v14 = v2 == 0x18; // ZF
    char v15 = (_BYTE)(v2 < 0x18); // SF
    _BOOL v16 = (_QWORD)v2 < 0x18; // CF
    _BOOL v17 = __OFSUB__(v2, 0x18LL); // OF
    v_12 = a1;
    while (1) {
        _QWORD v18 = v_12; // rdx
        v8 = (_DWORD)(v18 - 1);
        v14 = !v3;
        v15 = (_BYTE)(v3 < 0);
        v16 = 0;
        v17 = 0;
        if (v3) {
            v18 = v8;
            v8 = v_12;
            v_12 = v18;
        } else {
            v13 = v8;
            v14 = !v8;
            v15 = (_BYTE)(v8 < 0);
            v16 = 0;
            v17 = 0;
            if (!v8) {
                v3 = 1;
                break;
            } else {
                v13 = v_12 - 2;
                v14 = v_12 == 2;
                v15 = (_BYTE)(v_12 < 2);
                v16 = (_DWORD)v_12 < 2;
                v_12 = v13;
                v3 = 1;
            }
        }
        v14 = v3 == 1;
        v15 = (_BYTE)(v3 < 1);
        v16 = (_DWORD)v3 < 1;
        --v3;
        while (1) {
            v9 = (_DWORD)(v8 - 1);
            v14 = !v3;
            v15 = (_BYTE)(v3 < 0);
            v16 = 0;
            v17 = 0;
            if (v3) {
                v18 = v9;
                v9 = v8;
                v8 = v9;
            } else {
                if (!v9) {
                    goto label_53;
                } else {
                    v14 = v8 == 2;
                    v15 = (_BYTE)(v8 < 2);
                    v16 = (_DWORD)v8 < 2;
                    v8 -= 2;
                    v3 = 1;
                }
            }
            v14 = v3 == 1;
            v15 = (_BYTE)(v3 < 1);
            v16 = (_DWORD)v3 < 1;
            --v3;
            while (1) {
                v10 = (_DWORD)(v9 - 1);
                v14 = !v3;
                v15 = (_BYTE)(v3 < 0);
                v16 = 0;
                v17 = 0;
                if (v3) {
                    v18 = v10;
                    v10 = v9;
                    v9 = v10;
                } else {
                    if (!v10) {
                        goto label_52;
                    } else {
                        v14 = v9 == 2;
                        v15 = (_BYTE)(v9 < 2);
                        v16 = (_DWORD)v9 < 2;
                        v9 -= 2;
                        v3 = 1;
                    }
                }
                v14 = v3 == 1;
                v15 = (_BYTE)(v3 < 1);
                v16 = (_DWORD)v3 < 1;
                --v3;
                while (1) {
                    v11 = (_DWORD)(v10 - 1);
                    v14 = !v3;
                    v15 = (_BYTE)(v3 < 0);
                    v16 = 0;
                    v17 = 0;
                    if (v3) {
                        v18 = v11;
                        v11 = v10;
                        v10 = v11;
                    } else {
                        if (!v11) {
                            goto label_51;
                        } else {
                            v14 = v10 == 2;
                            v15 = (_BYTE)(v10 < 2);
                            v16 = (_DWORD)v10 < 2;
                            v10 -= 2;
                            v3 = 1;
                        }
                    }
                    v14 = v3 == 1;
                    v15 = (_BYTE)(v3 < 1);
                    v16 = (_DWORD)v3 < 1;
                    --v3;
                    while (1) {
                        v12 = (_DWORD)(v11 - 1);
                        v14 = !v3;
                        v15 = (_BYTE)(v3 < 0);
                        v16 = 0;
                        v17 = 0;
                        if (v3) {
                            v18 = v12;
                            v12 = v11;
                            v11 = v12;
                        } else {
                            if (!v12) {
                                goto label_50;
                            } else {
                                v14 = v11 == 2;
                                v15 = (_BYTE)(v11 < 2);
                                v16 = (_DWORD)v11 < 2;
                                v11 -= 2;
                                v3 = 1;
                            }
                        }
                        v14 = v3 == 1;
                        v15 = (_BYTE)(v3 < 1);
                        v16 = (_DWORD)v3 < 1;
                        --v3;
                        while (1) {
                            v7 = (_DWORD)(v12 - 1);
                            v14 = !v3;
                            v15 = (_BYTE)(v3 < 0);
                            v16 = 0;
                            v17 = 0;
                            if (v3) {
                                v6 = v7;
                                v7 = v12;
                                v12 = v7;
                            } else {
                                if (!v7) {
                                    goto label_49;
                                } else {
                                    v14 = v12 == 2;
                                    v15 = (_BYTE)(v12 < 2);
                                    v16 = (_DWORD)v12 < 2;
                                    v12 -= 2;
                                    v3 = 1;
                                }
                            }
                            v14 = v3 == 1;
                            v15 = (_BYTE)(v3 < 1);
                            v16 = (_DWORD)v3 < 1;
                            --v3;
                            while (1) {
                                v6 = (_DWORD)(v7 - 1);
                                v14 = !v3;
                                v15 = (_BYTE)(v3 < 0);
                                v16 = 0;
                                v17 = 0;
                                if (v3) {
                                    a2 = v6;
                                    v6 = v7;
                                    v7 = v6;
                                } else {
                                    if (!v6) {
                                        goto label_48;
                                    } else {
                                        v14 = v7 == 2;
                                        v15 = (_BYTE)(v7 < 2);
                                        v16 = (_DWORD)v7 < 2;
                                        v7 -= 2;
                                        v3 = 1;
                                    }
                                }
                                v14 = v3 == 1;
                                v15 = (_BYTE)(v3 < 1);
                                v16 = (_DWORD)v3 < 1;
                                --v3;
                                while (1) {
                                    _QWORD v19 = (_DWORD)(v6 - 1); // r8
                                    v14 = !v3;
                                    v15 = (_BYTE)(v3 < 0);
                                    v16 = 0;
                                    v17 = 0;
                                    if (v3) {
                                        a2 = v19;
                                        v19 = v6;
                                        v6 = v19;
                                    } else {
                                        if (!v19) {
                                            goto label_47;
                                        } else {
                                            v14 = v6 == 2;
                                            v15 = (_BYTE)(v6 < 2);
                                            v16 = (_DWORD)v6 < 2;
                                            v6 -= 2;
                                            v3 = 1;
                                        }
                                    }
                                    v14 = v3 == 1;
                                    v15 = (_BYTE)(v3 < 1);
                                    v16 = (_DWORD)v3 < 1;
                                    result = v3 - 1;
                                    while (1) {
                                        a1 = (_DWORD)(v19 - 1);
                                        v14 = !result;
                                        v15 = (_BYTE)(result < 0);
                                        v16 = 0;
                                        v17 = 0;
                                        if (result) {
                                            a2 = a1;
                                            a1 = v19;
                                            v19 = a1;
                                        } else {
                                            if (!a1) {
                                                break;
                                            } else {
                                                v14 = v19 == 2;
                                                v15 = (_BYTE)(v19 < 2);
                                                v16 = (_DWORD)v19 < 2;
                                                v19 -= 2;
                                                result = 1;
                                            }
                                        }
                                        a2 = (_DWORD)(result - 1);
                                        *(_DWORD *)(v2 + 8LL) = v19;
                                        v_4 = v6;
                                        v5 = f_ackermann(a1, a2);
                                        v19 = *(_DWORD *)(v2 + 8LL);
                                        v6 = v_4;
                                        v14 = !v19;
                                        v15 = (_BYTE)(v19 < 0);
                                        v16 = 0;
                                        v17 = 0;
                                        if (!v19) {
                                            goto label_37;
                                        }
                                    }
                                    v3 = 1u + 1;
                                    v14 = !v6;
                                    v15 = (_BYTE)(v6 < 0);
                                    v16 = 0;
                                    v17 = 0;
                                    if (v6) {
                                        continue;
                                    } else {
                                        break;
                                    }
                                label_37:;
                                    v3 = v5 + 2;
                                    v14 = !v6;
                                    v15 = (_BYTE)(v6 < 0);
                                    v16 = 0;
                                    v17 = 0;
                                    if (!v6) {
                                        break;
                                    }
                                }
                                ++v3;
                                v14 = !v7;
                                v15 = (_BYTE)(v7 < 0);
                                v16 = 0;
                                v17 = 0;
                                if (v7) {
                                    continue;
                                } else {
                                    break;
                                }
                            label_47:;
                                v3 = 1u + 1;
                                v14 = !v7;
                                v15 = (_BYTE)(v7 < 0);
                                v16 = 0;
                                v17 = 0;
                                if (!v7) {
                                    break;
                                }
                            }
                            ++v3;
                            v14 = !v12;
                            v15 = (_BYTE)(v12 < 0);
                            v16 = 0;
                            v17 = 0;
                            if (v12) {
                                continue;
                            } else {
                                break;
                            }
                        label_48:;
                            v3 = 1u + 1;
                            v14 = !v12;
                            v15 = (_BYTE)(v12 < 0);
                            v16 = 0;
                            v17 = 0;
                            if (!v12) {
                                break;
                            }
                        }
                        ++v3;
                        v14 = !v11;
                        v15 = (_BYTE)(v11 < 0);
                        v16 = 0;
                        v17 = 0;
                        if (v11) {
                            continue;
                        } else {
                            break;
                        }
                    label_49:;
                        v3 = 1u + 1;
                        v14 = !v11;
                        v15 = (_BYTE)(v11 < 0);
                        v16 = 0;
                        v17 = 0;
                        if (!v11) {
                            break;
                        }
                    }
                    ++v3;
                    v14 = !v10;
                    v15 = (_BYTE)(v10 < 0);
                    v16 = 0;
                    v17 = 0;
                    if (v10) {
                        continue;
                    } else {
                        break;
                    }
                label_50:;
                    v3 = 1u + 1;
                    v14 = !v10;
                    v15 = (_BYTE)(v10 < 0);
                    v16 = 0;
                    v17 = 0;
                    if (!v10) {
                        break;
                    }
                }
                ++v3;
                v14 = !v9;
                v15 = (_BYTE)(v9 < 0);
                v16 = 0;
                v17 = 0;
                if (v9) {
                    continue;
                } else {
                    break;
                }
            label_51:;
                v3 = 1u + 1;
                v14 = !v9;
                v15 = (_BYTE)(v9 < 0);
                v16 = 0;
                v17 = 0;
                if (!v9) {
                    break;
                }
            }
            ++v3;
            v14 = !v8;
            v15 = (_BYTE)(v8 < 0);
            v16 = 0;
            v17 = 0;
            if (v8) {
                continue;
            } else {
                break;
            }
        label_52:;
            v3 = 1u + 1;
            v14 = !v8;
            v15 = (_BYTE)(v8 < 0);
            v16 = 0;
            v17 = 0;
            if (!v8) {
                break;
            }
        }
        v18 = v_12;
        ++v3;
        v14 = !v18;
        v15 = (_BYTE)(v18 < 0);
        v16 = 0;
        v17 = 0;
        if (v18) {
            continue;
        } else {
            break;
        }
    label_53:;
        v18 = v_12;
        v3 = 1u + 1;
        if (!v18) {
            break;
        }
    }
    return v3 + 1;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    int field_0;
    int field_4;
    int field_8;
    int field_12;
};

/* Function:   f_rec_power.constprop.0 | Address: 0x1b80 | Size: 0x119 (281 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs to:   f_rec_power.constprop.0 | Xrefs from: unknown */
int f_rec_power_constprop_0(char a1) {
    __int64 v1; // temp
    __int64 v2; // temp
    int v_24;
    int v_20;
    int v_16;
    int v_12;
    int v_8;
    _QWORD result; // rax
    __int64 v4; // rax
    _QWORD v5; // rdx
    _QWORD v6; // rsi
    _QWORD v7; // r8
    __int64 v8; // r9
    _DWORD v9; // temp
    _DWORD v10; // temp
    _DWORD v11; // temp
    _BOOL v12 = !((_BYTE)a1 & 1); // ZF
    char v13 = ((_BYTE)a1 & 1) < '\0'; // SF
    char v14 = 0; // CF
    char v15 = 0; // OF
    if (!((_BYTE)a1 & 1)) {
        v5 = 1;
    } else {
        v5 = 2;
        v12 = a1 == 1;
        v13 = (_BYTE)(a1 < 1);
        v14 = (_DWORD)a1 < 1;
        --a1;
        if (a1 == 1) {
            return 2;
        }
    }
    a1 >>= 1;
    result = a1;
    v12 = !((_BYTE)a1 & 1);
    v13 = ((_BYTE)a1 & 1) < '\0';
    v14 = 0;
    v15 = 0;
    if (!((_BYTE)a1 & 1)) {
        v6 = 1;
    } else {
        v6 = 2;
        v12 = result == 1;
        v13 = (_BYTE)(result < 1);
        v14 = (_DWORD)result < 1;
        result = a1 - 1;
        if (result == 1) {
            result = 2u * 2u;
            return result * (_DWORD)v5;
        }
    }
    result >>= 1;
    __int64 v16 = result; // rcx
    v12 = !((_BYTE)result & 1);
    v13 = ((_BYTE)result & 1) < '\0';
    v14 = 0;
    v15 = 0;
    if (!((_BYTE)result & 1)) {
        v7 = 1;
    } else {
        v12 = result == 1;
        v13 = (_BYTE)(result < 1);
        v14 = (_DWORD)result < 1;
        v7 = 2;
        v16 = result - 1;
        result = 2;
        if (result == 1) {
            v9 = result * result;
            result = v9;
            v9 = (_DWORD)v6;
            v10 = result * v9;
            result = v10;
            v9 = result * result;
            result = v9;
            v9 = (_DWORD)v5;
            v10 = result * v9;
            result = v10;
            return result;
        }
    }
    v16 >>= 1;
    a1 = v16;
    v12 = !((_BYTE)v16 & 1);
    v13 = ((_BYTE)v16 & 1) < '\0';
    v14 = 0;
    v15 = 0;
    if (!((_BYTE)v16 & 1)) {
        v8 = 1;
    } else {
        --v16;
        a1 = v16;
        if (v16 == 1) {
            result = 2u * 2u;
            result *= (_DWORD)v7;
            v9 = result * result;
            result = v9;
            v9 = (_DWORD)v6;
            v10 = result * v9;
            result = v10;
            v9 = result * result;
            result = v9;
            v9 = (_DWORD)v5;
            v10 = result * v9;
            result = v10;
            return result;
        }
    }
    v_12 = (_DWORD)v5;
    v_8 = (_DWORD)v6;
    v4 = f_rec_power_constprop_0(a1 >> 1);
    v9 = *(_DWORD *)(v1 + 4LL);
    v10 = v_8;
    result = v4 * v4;
    v11 = v_12;
    result *= v2;
    result = result * result * v9;
    result = result * result * v10;
    return result * result * v11;
}
