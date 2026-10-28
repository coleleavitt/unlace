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
__int64 sub_1040();
__int64 sub_14e0();
__int64 sub_1520(void) /* // dropped 1 param(s) (dead in body) */;
void sub_14b0(void);
void sub_1560(void);

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    void * field_8;
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
    char buf_88[64];
    __int64 v_16;
    char buf_0[64]; // int buf_0[16]
    _QWORD result; // rax
    __int64 v6; // rax
    __int64 v7; // rax
    __int64 v8; // rax
    _QWORD v9; // rbx
    _QWORD v10; // rsi
    _QWORD v11; // rdi
    _QWORD v12; // r10
    __m128i v13; // xmm1
    _DWORD v14; // temp
    _DWORD v15; // temp
    __int64 v16; // temp
    int v17; // temp
    int v18; // temp
    _QWORD v19; // temp
    __int64 v20 = 0xa; // rdx
    _BOOL v21 = !(__builtin_popcount(0) & 1); // PF
    __int64 v22 = 0; // rcx
    __m128i v23 = (((unsigned __int128)0x900000006ULL << 64) | 0x300000000ULL); // xmm0
    char v24 = 1; // ZF
    char v25 = 0; // SF
    char v26 = 0; // CF
    char v27 = 0; // OF
    result = 1;
    *(_OWORD *)buf_0 = v23;
    v23 = (((unsigned __int128)0x1500000012ULL << 64) | 0xf0000000cULL);
    *(_OWORD *)(buf_0 + 16) = v23;
    v23 = (((unsigned __int128)0x210000001eULL << 64) | 0x1b00000018ULL);
    *(_OWORD *)(buf_0 + 32) = v23;
    v23 = (((unsigned __int128)0x2d0000002aULL << 64) | 0x2700000024ULL);
    *(_OWORD *)(buf_0 + 48) = v23;
    do {
        v14 = result;
        v10 = result;
        result += v22;
        v22 = v14;
        v14 = v20;
        v24 = v20 == 1;
        v25 = (_BYTE)(v20 < 1);
        v26 = (_DWORD)v20 < 1;
        v27 = __OFSUB__(v20, 1);
        --v20;
    } while (v20);
    v24 = v22 == -910;
    v25 = (_BYTE)(v22 + 0x38e < 0);
    v26 = (v22 + 0x38e) < v22;
    v27 = __OFADD__(v22, 0x38e);
    v22 += 0x38e;
    v20 = 0x24;
    result = 0x30;
    do {
        v10 = v20;
        v20 = result % v10;
        result = v10;
        v24 = !v20;
        v25 = (_BYTE)(v20 < 0);
        v26 = 0;
        v27 = 0;
    } while (v20);
    v24 = v22 + v10 == 0;
    v25 = (_BYTE)(v22 + v10 < 0);
    v26 = (v22 + result) < v22;
    v27 = __OFADD__(v22, result);
    result = 0x1b;
    while (1) {
        v14 = result;
        v15 = result & 1;
        v12 = result & 1;
        if (v15) {
            v14 = (_DWORD)(result + (result << 1LL) + 1LL);
            v20 += 2;
            v24 = v14 >> 1 == 0;
            v25 = (_BYTE)(v14 >> 1 < 0);
            v26 = 0;
            v27 = 0;
            result = v14 >> 1;
        } else {
            result = v14 >> 1;
            ++v20;
            v24 = result == 1;
            v25 = (_BYTE)(result < 1);
            v26 = (_DWORD)result < 1;
            v27 = __OFSUB__(result, 1);
            if (result == 1) {
                break;
            }
        }
    }
    v22 = v22 + v10 + v20;
    v24 = 1;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v10 = 0;
    v20 = 0x20;
    result = 0xdeadbeef;
    do {
        v14 = result;
        result = (_DWORD)result >> 1;
        v15 = v14 & 1;
        v11 = v14 & 1;
        v10 += v15;
        v14 = v20;
        v24 = v20 == 1;
        v25 = (_BYTE)(v20 < 1);
        v26 = (_DWORD)v20 < 1;
        v27 = __OFSUB__(v20, 1);
        --v20;
    } while (v20);
    v22 = (_DWORD)(v10 + v22 + 0x46LL);
    __int64 v28 = (uintptr_t)buf_0; // r9
    __int64 v29 = (uintptr_t)(buf_0 + 64); // r8
    result = (uintptr_t)buf_0;
    v23 = 0;
    do {
        v23 = _mm_add_epi32(v23, *(_OWORD *)result);
        v16 = result + 0x10LL;
        result += 0x10LL;
        v24 = (uintptr_t)(buf_0 + 64) == v16;
        v25 = (_BYTE)((uintptr_t)(buf_0 + 64) < v16);
        v26 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)result;
        v27 = __OFSUB__((uintptr_t)(buf_0 + 64), result);
    } while ((uintptr_t)(buf_0 + 64) != result);
    v11 = (uintptr_t)(buf_0 + 4);
    result = 0;
    __int64 v30 = (uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4); // r11
    v10 = (uintptr_t)(buf_0 + 4);
    v23 = _mm_add_epi32(v23, (_OWORD)v23 >> 0x40);
    v13 = (_OWORD)v23 >> 0x20;
    v23 = _mm_add_epi32(v23, v13);
    v20 = (_DWORD)v23 + v22;
    v24 = !(v30 & 4);
    v25 = (_BYTE)((v30 & 4) < 0);
    v26 = 0;
    v27 = 0;
    v30 &= 4;
    v22 = (uintptr_t)(buf_0 + 4);
    if (!(v30 & 4)) {
        goto label_14;
    } else {
        v10 = *(_DWORD *)(buf_0 + 4);
        result = 0u < v10 ? v10 : 0u;
        v10 = (uintptr_t)(buf_0 + 8);
        v24 = (uintptr_t)(buf_0 + 64) == (uintptr_t)(buf_0 + 8);
        v25 = (_BYTE)((uintptr_t)(buf_0 + 64) < (uintptr_t)(buf_0 + 8));
        v26 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)(uintptr_t)(buf_0 + 8);
        v27 = __OFSUB__((uintptr_t)(buf_0 + 64), (uintptr_t)(buf_0 + 8));
        if ((uintptr_t)(buf_0 + 64) == (uintptr_t)(buf_0 + 8)) {
            goto label_15;
        } else {
            goto label_14;
        }
    }
    do {
    label_14:;
        v30 = *(_DWORD *)v10;
        v14 = result < v30 ? v30 : result;
        v30 = *(_DWORD *)(v10 + 4LL);
        v15 = v14;
        v17 = v15 - v30;
        result = v15 < v30 ? v30 : v15;
        v16 = v10 + 8LL;
        v10 += 8LL;
        v4 = (uintptr_t)(buf_0 + 64) - v16;
        v24 = (uintptr_t)(buf_0 + 64) == v16;
        v25 = (_BYTE)((uintptr_t)(buf_0 + 64) < v16);
        v26 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)v10;
        v27 = __OFSUB__((uintptr_t)(buf_0 + 64), v10);
    } while ((uintptr_t)(buf_0 + 64) != v10);
label_15:;
    v14 = result + v20;
    result += v20;
    v20 = 0;
    v24 = !((_DWORD)((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4);
    v25 = (_BYTE)(((_DWORD)((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4) < 0);
    v26 = 0;
    v27 = 0;
    v10 = (_DWORD)((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4;
    if (!((_DWORD)((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4)) {
        goto label_17;
    } else {
        v22 = *(_DWORD *)(buf_0 + 4);
        v20 = 0u != v22 && v22 <= 0u ? v22 : 0u;
        v22 = (uintptr_t)(buf_0 + 8);
        v24 = (uintptr_t)(buf_0 + 64) == (uintptr_t)(buf_0 + 8);
        v25 = (_BYTE)((uintptr_t)(buf_0 + 64) < (uintptr_t)(buf_0 + 8));
        v26 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)(uintptr_t)(buf_0 + 8);
        v27 = __OFSUB__((uintptr_t)(buf_0 + 64), (uintptr_t)(buf_0 + 8));
        if ((uintptr_t)(buf_0 + 64) == (uintptr_t)(buf_0 + 8)) {
            goto label_18;
        } else {
            goto label_17;
        }
    }
    do {
    label_17:;
        v10 = *(_DWORD *)v22;
        v20 = v20 != v10 && v10 <= v20 ? v10 : v20;
        v10 = *(_DWORD *)(v22 + 4LL);
        v20 = v20 != v10 && v10 <= v20 ? v10 : v20;
        v16 = v22 + 8LL;
        v22 += 8LL;
        v24 = (uintptr_t)(buf_0 + 64) == v16;
        v25 = (_BYTE)((uintptr_t)(buf_0 + 64) < v16);
        v26 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)v22;
        v27 = __OFSUB__((uintptr_t)(buf_0 + 64), v22);
    } while ((uintptr_t)(buf_0 + 64) != v22);
label_18:;
    v24 = v20 + v14 == 0;
    v25 = (_BYTE)(v20 + v14 < 0);
    v26 = (v20 + result) < v20;
    v27 = __OFADD__(v20, result);
    v20 += v14;
    __m128i v31 = 0; // xmm2
    result = (uintptr_t)buf_0;
    do {
        v23 = *(_OWORD *)result;
        v16 = result + 0x10LL;
        result += 0x10LL;
        v13 = v23;
        v13 = _mm_mul_epu32(v23, v23);
        v23 = _mm_srli_epi64(v23, 0x20);
        v23 = _mm_mul_epu32(v23, v23);
        v13 = _mm_shuffle_epi32(v13, 8);
        v23 = _mm_shuffle_epi32(v23, 8);
        v13 = _mm_unpacklo_epi32(v13, v23);
        v31 = _mm_add_epi32(v31, v13);
        v24 = (uintptr_t)(buf_0 + 64) == v16;
        v25 = (_BYTE)((uintptr_t)(buf_0 + 64) < v16);
        v26 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)result;
        v27 = __OFSUB__((uintptr_t)(buf_0 + 64), result);
    } while ((uintptr_t)(buf_0 + 64) != result);
    result = 0;
    v31 = _mm_add_epi32(v31, (_OWORD)v31 >> 0x40);
    v31 = _mm_add_epi32(v31, (_OWORD)v31 >> 0x20);
    v24 = (_DWORD)v31 + v20 == 0;
    v25 = (_BYTE)((_DWORD)v31 + v20 < 0);
    v26 = ((_DWORD)v31 + v20) < (_DWORD)v31;
    v27 = __OFADD__((_DWORD)v31, v20);
    v22 = (_DWORD)v31 + v20;
    v20 = (uintptr_t)buf_0;
    while (1) {
        v14 = *(_DWORD *)v20;
        v15 = v14 - 0xf;
        v24 = v14 == 0xf;
        v25 = (_BYTE)(v14 < 0xf);
        v26 = (_DWORD)v14 < 0xf;
        v27 = __OFSUB__(v14, 0xf);
        if (v14 == 0xf) {
            break;
        } else {
            v14 = result;
            v15 = result + 1;
            ++result;
            v20 += 4LL;
            v17 = v15;
            v24 = result == 0x10;
            v25 = (_BYTE)(result < 0x10);
            v26 = (_DWORD)result < 0x10;
            v27 = __OFSUB__(result, 0x10);
            if (result == 0x10) {
                result = 0xffffffff;
                break;
            }
        }
    }
    v10 = 2;
    v30 = (_DWORD)(result + v22 + 0x581LL);
    v22 = 2;
    v24 = 2u == 3;
    v25 = (_BYTE)(2u < 3);
    v26 = (_DWORD)2u < 3;
    v27 = __OFSUB__(2u, 3);
    if (!(2u != 3 && 3 <= 2u)) {
        goto label_28;
    }
label_53:;
    result = v10;
    while (1) {
        result = v10 / v22;
        v20 = v10 % v22;
        v24 = !v20;
        v25 = (_BYTE)(v20 < 0);
        if (v20) {
            ++v22;
            result = v22 * v22;
            v24 = result == v10;
            v25 = (_BYTE)(result < v10);
            v26 = (_DWORD)result < (_DWORD)v10;
            v27 = __OFSUB__(result, v10);
            if (result != v10 && v10 <= result) {
                break;
            }
        } else {
            goto label_27;
        }
    }
label_28:;
    ++v12;
    v24 = v12 == 0xa;
    v25 = (_BYTE)(v12 < 0xa);
    v26 = (_DWORD)v12 < 0xa;
    v27 = __OFSUB__(v12, 0xa);
    if (v12 == 0xa) {
        v24 = v30 + v10 == 0;
        v25 = (_BYTE)(v30 + v10 < 0);
        v26 = (v30 + v10) < v30;
        v27 = __OFADD__(v30, v10);
        v30 += v10;
        v22 = 0x12;
        v9 = 0xc;
        do {
            v14 = (_DWORD)v9;
            v18 = v22;
            v9 = v22;
            v15 = v14;
            v17 = v15 / v22;
            result = v17;
            v20 = v15 % v22;
            v22 = v20;
            v24 = !v20;
            v25 = (_BYTE)(v20 < 0);
            v26 = 0;
            v27 = 0;
        } while (v20);
        v24 = 1;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v10 = 0;
        result = 0xd8u / v18;
        v20 = 0xd8u % v18;
        v12 = (_DWORD)(result + v30 - 1218664206);
        while (1) {
            v14 = *(_DWORD *)v28;
            v20 = v14;
            result = v14 * 0x66666667LL;
            v17 = v20;
            result = (_DWORD)(result >> 0x21) - (v20 >> 0x1f);
            v28 = (_DWORD)(result + (result << 2LL));
            result = v20 - (_DWORD)(result + (result << 2LL));
            v24 = result == 2;
            char v32 = (_BYTE)(result < 2); // temp
            v27 = __OFSUB__(result, 2);
            if (result == 2) {
                v24 = v20 == 5;
                v25 = (_BYTE)(v20 < 5);
                v26 = (_DWORD)v20 < 5;
                v27 = __OFSUB__(v20, 5);
                v20 -= 5;
            } else {
                if (v24 || v32 ^ v27) {
                    if (!result) {
                        v24 = v17 + v17 == 0;
                        v25 = (_BYTE)(v17 + v17 < 0);
                        v26 = (v17 + v17) < v17;
                        v27 = __OFADD__(v17, v17);
                        v20 = v17 + v17;
                    } else {
                        v28 = (_DWORD)(v20 + 0xaLL);
                        v24 = result == 1;
                        v25 = (_BYTE)(result < 1);
                        v26 = (_DWORD)result < 1;
                        v27 = __OFSUB__(result, 1);
                        v20 = v24 ? (_DWORD)(v20 + 0xaLL) : v20;
                    }
                } else {
                    v14 = result;
                    v24 = v14 == 3;
                    v20 = v24 ? -v17 : v17;
                    v28 = v11;
                    v10 += v20;
                    v24 = (uintptr_t)(buf_0 + 64) == v11;
                    v25 = (_BYTE)((uintptr_t)(buf_0 + 64) < v11);
                    v26 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)v11;
                    v27 = __OFSUB__((uintptr_t)(buf_0 + 64), v11);
                    if ((uintptr_t)(buf_0 + 64) != v11) {
                        v16 = v11 + 4LL;
                        v24 = v11 == -4LL;
                        v0 = v16 < 0;
                        v3 = (_BYTE)v0;
                        v25 = v3;
                        v26 = (v11 + 4LL) < v11;
                        v27 = __OFADD__(v11, 4LL);
                        v3 = (_BYTE)v16;
                        v1 = __builtin_popcount(v3);
                        v2 = v1 & 1;
                        v21 = !v2;
                        v11 = v16;
                        continue;
                    } else {
                        break;
                    }
                }
            }
            v10 += v20;
            v28 = v11;
            v24 = (uintptr_t)(buf_0 + 64) == v11;
            v25 = (_BYTE)((uintptr_t)(buf_0 + 64) < v11);
            v26 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)v11;
            v27 = __OFSUB__((uintptr_t)(buf_0 + 64), v11);
            if ((uintptr_t)(buf_0 + 64) == v11) {
                break;
            }
            v16 = v11 + 4LL;
            v24 = v11 == -4LL;
            v0 = v16 < 0;
            v3 = (_BYTE)v0;
            v25 = v3;
            v26 = (v11 + 4LL) < v11;
            v27 = __OFADD__(v11, 4LL);
            v3 = (_BYTE)v16;
            v1 = __builtin_popcount(v3);
            v2 = v1 & 1;
            v21 = !v2;
            v11 = v16;
        }
        v20 = (_DWORD)(v12 + v10);
        v24 = 1;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        result = 0;
        while (1) {
            v24 = result == 9;
            v25 = (_BYTE)(result < 9);
            v26 = (_DWORD)result < 9;
            v27 = __OFSUB__(result, 9);
            if (!(result != 9 && 9 <= result)) {
                while (1) {
                    v14 = result;
                    if (v14 <= 4) {
                        break;
                    } else {
                        v22 = (_DWORD)(v22 + result + 0x14LL);
                        ++result;
                        v24 = result == 9;
                        v25 = (_BYTE)(result < 9);
                        v26 = (_DWORD)result < 9;
                        v27 = __OFSUB__(result, 9);
                        if (result > 9) {
                            goto label_43;
                        }
                    }
                }
                v10 = (_DWORD)(result + (result << 1LL));
                result = v14 + 1;
                v24 = v22 + v10 == 0;
                v25 = (_BYTE)(v22 + v10 < 0);
                v26 = (v22 + v10) < v22;
                v27 = __OFADD__(v22, v10);
                v22 += v10;
                continue;
            }
        label_43:;
            v22 = (_DWORD)(v22 + result - 10);
            v14 = result;
            v15 = result + 1;
            ++result;
            v17 = v15;
            v24 = result == 0x14;
            v25 = (_BYTE)(result < 0x14);
            v26 = (_DWORD)result < 0x14;
            v27 = __OFSUB__(result, 0x14);
            if (result == 0x14) {
                break;
            }
        }
        v10 = (_DWORD)(v20 + v22 + 0x12dLL);
        result = 0x30;
        v22 = 0x24;
        while (1) {
            v20 = result % v22;
            result = v22;
            v24 = !v20;
            v25 = (_BYTE)(v20 < 0);
            v26 = 0;
            v27 = 0;
            if (v20) {
                v22 = v20;
            } else {
                break;
            }
        }
        v6 = f_rec_fib(8LL);
        v12 = (_DWORD)(v6 + (_DWORD)(v10 + v22 + 3LL));
        v7 = f_rec_power_constprop_0(8LL);
        v12 += v7;
        v8 = f_ackermann(2LL, 3LL);
        v15 = (_DWORD)(v12 + v8 + 0xabe0cLL);
        v20 = (_DWORD)(v12 + v8 + 0xabe0cLL) >> 0x1f >> 0x18;
        v14 = v15;
        result = (_QWORD)(_BYTE)(v14 + v20) - v20;
        v9 = v19;
        return result;
    }
label_27:;
    ++v10;
    v22 = 2;
    v24 = v10 == 3;
    v27 = __OFSUB__(v10, 3);
    if (v10 != 3 && 3 <= v10) {
        goto label_53;
    } else {
        goto label_28;
    }
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
/* Function:   sub_1520 | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1040, sub_14b0 | Xrefs from: unknown */
__int64 sub_1520(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 result; // rax
    if (byte_4010) {
        return result;
    } else {
        if (qword_3FF8) {
            __int64 v1 = qword_4008; // rdi
            result = sub_1040();
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
    int v_12;
    int v_16;
    int v_20;
    int v_24;
    int v_28;
    int v_32;
    int v_36;
    int v_40;
    int v_44;
    char buf_96[48];
    char buf_40[48];
    _QWORD result; // rax
    __int64 v2; // rax
    _QWORD v3; // rbx
    _QWORD v4; // r10
    _QWORD v5; // r13
    _QWORD v6; // r15
    _DWORD v7; // temp
    _DWORD v8; // temp
    if (a1 <= 1) {
        return a1;
    } else {
        __int64 v9 = 0; // r14
        _QWORD v10 = (_DWORD)(a1 - 2); // rbp
        __int64 v11 = (uintptr_t)(buf_40 + 40) - 8LL; // temp
        *(_QWORD *)(buf_40 + 32) = (uintptr_t)(buf_40 + 40);
        v3 = (uintptr_t)(buf_40 + 40);
        _BOOL v12 = (uintptr_t)(buf_40 + 40) == 0x38; // ZF
        char v13 = (_BYTE)((uintptr_t)(buf_40 + 40) < 0x38); // SF
        _BOOL v14 = (_QWORD)(uintptr_t)(buf_40 + 40) < 0x38; // CF
        _BOOL v15 = __OFSUB__((uintptr_t)(buf_40 + 40), 0x38LL); // OF
        while (1) {
            _QWORD v16 = (_DWORD)(v3 - 2); // r12
            v12 = (_DWORD)v3 == 1;
            v13 = (_BYTE)((_DWORD)v3 < 1);
            v14 = (_DWORD)v3 < 1;
            if ((_DWORD)v3 > 1) {
                do {
                    v6 = (_DWORD)v3;
                    result = (_DWORD)v9;
                    while (1) {
                        v10 = (_DWORD)(v16 - 2);
                        v12 = (_DWORD)v16 == 1;
                        v13 = (_BYTE)((_DWORD)v16 < 1);
                        v14 = (_DWORD)v16 < 1;
                        if ((_DWORD)v16 > 1) {
                            v13 = 0;
                            do {
                                v_12 = (_DWORD)v3;
                                v5 = (_DWORD)v16;
                                _QWORD v17 = result; // rdx
                                while (1) {
                                    v12 = (_DWORD)(uintptr_t)(buf_40 + 40) == 1;
                                    v13 = (_BYTE)((_DWORD)(uintptr_t)(buf_40 + 40) < 1);
                                    v14 = (_DWORD)(uintptr_t)(buf_40 + 40) < 1;
                                    if ((_DWORD)(uintptr_t)(buf_40 + 40) > 1) {
                                        do {
                                            _QWORD v18 = (_DWORD)v17; // r9
                                            _QWORD v19 = (_DWORD)v16; // rsi
                                            v17 = (_DWORD)(uintptr_t)(buf_40 + 38);
                                            _QWORD v20 = (_DWORD)v6; // rcx
                                            v7 = (_DWORD)(uintptr_t)(buf_40 + 40);
                                            v16 = (_DWORD)(uintptr_t)(buf_40 + 40);
                                            while (1) {
                                                v3 = (_DWORD)(v17 - 2);
                                                v12 = (_DWORD)v17 == 1;
                                                v13 = (_BYTE)((_DWORD)v17 < 1);
                                                v14 = (_DWORD)v17 < 1;
                                                if ((_DWORD)v17 > 1) {
                                                    do {
                                                        _QWORD v21 = (_DWORD)v18; // r11
                                                        v18 = v19;
                                                        v19 = (_DWORD)v17;
                                                        while (1) {
                                                            v6 = (_DWORD)(v3 - 2);
                                                            v12 = (_DWORD)v3 == 1;
                                                            v13 = (_BYTE)((_DWORD)v3 < 1);
                                                            v14 = (_DWORD)v3 < 1;
                                                            if ((_DWORD)v3 > 1) {
                                                                while (1) {
                                                                    v12 = (_DWORD)v6 == 1;
                                                                    v13 = (_BYTE)((_DWORD)v6 < 1);
                                                                    v14 = (_DWORD)v6 < 1;
                                                                    if ((_DWORD)v6 > 1) {
                                                                        v13 = 0;
                                                                        do {
                                                                            *(_DWORD *)(buf_40 + 40) = (_DWORD)v17;
                                                                            result = (_DWORD)v18;
                                                                            v18 = (_DWORD)(v6 - 2);
                                                                            while (1) {
                                                                                _QWORD v22 = (_DWORD)(v18 - 2); // r8
                                                                                v12 = (_DWORD)v18 == 1;
                                                                                v13 = (_BYTE)((_DWORD)v18 < 1);
                                                                                v14 = (_DWORD)v18 < 1;
                                                                                if ((_DWORD)v18 > 1) {
                                                                                    do {
                                                                                        a1 = (_DWORD)v18;
                                                                                        v18 = (_DWORD)v6;
                                                                                        v6 = (_DWORD)v3;
                                                                                        v8 = result;
                                                                                        v3 = result;
                                                                                        result = a1;
                                                                                        while (1) {
                                                                                            a1 = (_DWORD)(v22 - 2);
                                                                                            v12 = (_DWORD)v22 == 1;
                                                                                            v13 = (_BYTE)((_DWORD)v22 < 1);
                                                                                            v14 = (_DWORD)v22 < 1;
                                                                                            if (!(v14 || v12)) {
                                                                                                do {
                                                                                                    *(_DWORD *)(buf_40 + 44) = v21;
                                                                                                    v21 = result;
                                                                                                    do {
                                                                                                        v_44 = v21;
                                                                                                        v_40 = (_DWORD)v18;
                                                                                                        v_36 = (_DWORD)v22;
                                                                                                        v_32 = (_DWORD)v4;
                                                                                                        v_28 = v19;
                                                                                                        v_24 = (_DWORD)v17;
                                                                                                        v_20 = (_DWORD)v20;
                                                                                                        v_16 = a1;
                                                                                                        v2 = f_rec_fib(a1);
                                                                                                        a1 = v_16;
                                                                                                        v17 = v_24;
                                                                                                        v19 = v_28;
                                                                                                        --a1;
                                                                                                        v20 = v_20 + v2;
                                                                                                        v4 = v_32;
                                                                                                        v22 = v_36;
                                                                                                        v12 = a1 == -1;
                                                                                                        v13 = (_BYTE)(a1 < -1);
                                                                                                        v14 = (_DWORD)a1 < (_DWORD)0xffffffffffffffffULL;
                                                                                                        v18 = v_40;
                                                                                                        v21 = v_44;
                                                                                                    } while (a1 != -2);
                                                                                                    v22 = v_36 - 1;
                                                                                                    result = v21;
                                                                                                    v17 = (_DWORD)(v20 + v17 + 1LL);
                                                                                                    v21 = *(_DWORD *)(buf_40 + 44);
                                                                                                    a1 = (_DWORD)(v22 - 2);
                                                                                                    v20 = 0;
                                                                                                    v12 = v22 == 1;
                                                                                                    v13 = (_BYTE)(v22 < 1);
                                                                                                    v14 = (_DWORD)v22 < 1;
                                                                                                } while ((_DWORD)1 <= (_DWORD)v22 && v22 != 1);
                                                                                            }
                                                                                            v17 = (_DWORD)v17 + (_DWORD)v22;
                                                                                            if ((_DWORD)v22) {
                                                                                                v12 = 1;
                                                                                                v13 = 0;
                                                                                                v14 = 0;
                                                                                                v15 = 0;
                                                                                                v22 = 0;
                                                                                            } else {
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                        a1 = result;
                                                                                        result = v8;
                                                                                        v3 = v6;
                                                                                        v6 = (_DWORD)v18;
                                                                                        v18 = (_DWORD)(a1 - 1);
                                                                                        v4 = (_DWORD)(v17 + v4 + 1LL);
                                                                                        v20 = *(_DWORD *)(uintptr_t)(buf_40 + 48);
                                                                                        v17 = 0;
                                                                                        v22 = (_DWORD)(v18 - 2);
                                                                                        v12 = v18 == 1;
                                                                                        v13 = (_BYTE)(v18 < 1);
                                                                                        v14 = (_DWORD)v18 < 1;
                                                                                    } while (v18 != 1 && 1 <= v18);
                                                                                }
                                                                                v4 = (_DWORD)v4 + (_DWORD)v18;
                                                                                if ((_DWORD)v18) {
                                                                                    v12 = 1;
                                                                                    v13 = 0;
                                                                                    v14 = 0;
                                                                                    v15 = 0;
                                                                                    v18 = 0;
                                                                                } else {
                                                                                    break;
                                                                                }
                                                                            }
                                                                            v17 = *(_DWORD *)(buf_40 + 40);
                                                                            v6 = (_DWORD)v6 - 1;
                                                                            v18 = result;
                                                                            v17 = (_DWORD)(v17 + v4 + 1LL);
                                                                            v12 = v6 == 1;
                                                                            v13 = (_BYTE)(v6 < 1);
                                                                            v14 = (_DWORD)v6 < 1;
                                                                        } while (v6 != 1 && 1 <= v6);
                                                                    }
                                                                    v17 = (_DWORD)v17 + (_DWORD)v6;
                                                                    if ((_DWORD)v6) {
                                                                        v12 = 1;
                                                                        v13 = 0;
                                                                        v14 = 0;
                                                                        v15 = 0;
                                                                        v6 = 0;
                                                                    } else {
                                                                        v3 = (_DWORD)v3 - 1;
                                                                        v10 = (_DWORD)((uintptr_t)(buf_40 + 40) + v17 + 1LL);
                                                                        v17 = 0;
                                                                        v6 = (_DWORD)(v3 - 2);
                                                                        v12 = v3 == 1;
                                                                        v13 = (_BYTE)(v3 < 1);
                                                                        v14 = (_DWORD)v3 < 1;
                                                                        if (!(v3 != 1 && 1 <= v3)) {
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            v10 = (_DWORD)(uintptr_t)(buf_40 + 40) + (_DWORD)v3;
                                                            if ((_DWORD)v3) {
                                                                v12 = 1;
                                                                v13 = 0;
                                                                v14 = 0;
                                                                v15 = 0;
                                                                v3 = 0;
                                                            } else {
                                                                break;
                                                            }
                                                        }
                                                        v8 = (_DWORD)(v19 - 1);
                                                        v17 = (_DWORD)(v19 - 1);
                                                        v9 = (_DWORD)(v9 + (uintptr_t)(buf_40 + 40) + 1LL);
                                                        v19 = (_DWORD)v18;
                                                        v10 = 0;
                                                        v18 = v21;
                                                        v3 = (_DWORD)(v17 - 2);
                                                        v12 = v17 == 1;
                                                        v13 = (_BYTE)(v17 < 1);
                                                        v14 = (_DWORD)v17 < 1;
                                                    } while (v17 != 1 && 1 <= v17);
                                                }
                                                v9 = (_DWORD)v9 + (_DWORD)v17;
                                                if ((_DWORD)v17) {
                                                    v12 = 1;
                                                    v13 = 0;
                                                    v14 = 0;
                                                    v15 = 0;
                                                    v17 = 0;
                                                } else {
                                                    break;
                                                }
                                            }
                                            v8 = v7;
                                            v17 = (_DWORD)v18;
                                            v16 = (_DWORD)(v19 + v9 + 1LL);
                                            v6 = (_DWORD)v20;
                                            v10 = v8 - 1;
                                            v9 = 0;
                                            v7 = v8 - 1;
                                            v12 = v7 == 1;
                                            v13 = (_BYTE)(v7 < 1);
                                            v14 = (_DWORD)v7 < 1;
                                        } while (v7 != 1 && 1 <= v7);
                                    }
                                    v16 = (_DWORD)v16 + (_DWORD)(uintptr_t)(buf_40 + 40);
                                    if ((_DWORD)(uintptr_t)(buf_40 + 40)) {
                                        v12 = 1;
                                        v13 = 0;
                                        v14 = 0;
                                        v15 = 0;
                                        v10 = 0;
                                    } else {
                                        break;
                                    }
                                }
                                v3 = v_12;
                                result = (_DWORD)v17;
                                v3 = (_DWORD)(v3 + v16 + 1LL);
                                v16 = (_DWORD)(v5 - 1);
                                v12 = v16 == 1;
                                v13 = (_BYTE)(v16 < 1);
                                v14 = (_DWORD)v16 < 1;
                            } while (v16 != 1 && 1 <= v16);
                        }
                        v3 = (_DWORD)v3 + (_DWORD)v16;
                        if ((_DWORD)v16) {
                            v12 = 1;
                            v13 = 0;
                            v14 = 0;
                            v15 = 0;
                            v16 = 0;
                        } else {
                            break;
                        }
                    }
                    v9 = (_DWORD)(result + v3 + 1LL);
                    v3 = (_DWORD)(v6 - 1);
                    v16 = (_DWORD)(v3 - 2);
                    v12 = v3 == 1;
                    v13 = (_BYTE)(v3 < 1);
                    v14 = (_DWORD)v3 < 1;
                } while (v3 != 1 && 1 <= v3);
            }
            v9 = (_DWORD)v9 + (_DWORD)v3;
            if ((_DWORD)v3) {
                v3 = 0;
            } else {
                result = (_DWORD)(v9 + 1LL);
                v3 = v11;
                v16 = v11;
                v9 = v11;
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
    __int64 v3; // temp
    int v_4;
    int v_52;
    _QWORD result; // rax
    __int64 v5; // rax
    _QWORD v6; // rcx
    _QWORD v7; // rbx
    _QWORD v8; // rbp
    _QWORD v9; // r12
    _QWORD v10; // r13
    _QWORD v11; // r14
    _QWORD v12; // r15
    _DWORD v13; // temp
    result = a2;
    _BOOL v14 = v2 == 0x18; // ZF
    char v15 = (_BYTE)(v2 < 0x18); // SF
    _BOOL v16 = (_QWORD)v2 < 0x18; // CF
    _BOOL v17 = __OFSUB__(v2, 0x18LL); // OF
    while (1) {
        _QWORD v18 = *(_DWORD *)(v2 + 0xcLL); // rdx
        v8 = (_DWORD)(v18 - 1);
        v14 = !(_DWORD)result;
        v15 = (_BYTE)((_DWORD)result < 0);
        if ((_DWORD)result) {
            v18 = v8;
            v8 = *(_DWORD *)(v2 + 0xcLL);
        } else {
            v3 = v8;
            v14 = !v8;
            v15 = (_BYTE)(v8 < 0);
            v16 = 0;
            v17 = 0;
            if (!v8) {
                result = 1;
                break;
            } else {
                v13 = *(_DWORD *)(v2 + 0xcLL);
                v14 = v13 == 2;
                v15 = (_BYTE)(v13 < 2);
                v16 = (_DWORD)v13 < 2;
                result = 1;
            }
        }
        v14 = (_DWORD)result == 1;
        v15 = (_BYTE)((_DWORD)result < 1);
        v16 = (_DWORD)result < 1;
        result = (_DWORD)result - 1;
        while (1) {
            v9 = (_DWORD)(v8 - 1);
            v14 = !(_DWORD)result;
            v15 = (_BYTE)((_DWORD)result < 0);
            if ((_DWORD)result) {
                v18 = v9;
                v9 = v8;
                v8 = v9;
            } else {
                v3 = v9;
                if (!v9) {
                    goto label_53;
                } else {
                    v14 = v8 == 2;
                    v15 = (_BYTE)(v8 < 2);
                    v16 = (_DWORD)v8 < 2;
                    v8 -= 2;
                    result = 1;
                }
            }
            v14 = (_DWORD)result == 1;
            v15 = (_BYTE)((_DWORD)result < 1);
            v16 = (_DWORD)result < 1;
            result = (_DWORD)result - 1;
            while (1) {
                v10 = (_DWORD)(v9 - 1);
                v14 = !(_DWORD)result;
                v15 = (_BYTE)((_DWORD)result < 0);
                if ((_DWORD)result) {
                    v18 = v10;
                    v10 = v9;
                    v9 = v10;
                } else {
                    v3 = v10;
                    if (!v10) {
                        goto label_52;
                    } else {
                        v14 = v9 == 2;
                        v15 = (_BYTE)(v9 < 2);
                        v16 = (_DWORD)v9 < 2;
                        v9 -= 2;
                        result = 1;
                    }
                }
                v14 = (_DWORD)result == 1;
                v15 = (_BYTE)((_DWORD)result < 1);
                v16 = (_DWORD)result < 1;
                result = (_DWORD)result - 1;
                while (1) {
                    v11 = (_DWORD)(v10 - 1);
                    v14 = !(_DWORD)result;
                    v15 = (_BYTE)((_DWORD)result < 0);
                    if ((_DWORD)result) {
                        v18 = v11;
                        v11 = v10;
                        v10 = v11;
                    } else {
                        v3 = v11;
                        if (!v11) {
                            goto label_51;
                        } else {
                            v14 = v10 == 2;
                            v15 = (_BYTE)(v10 < 2);
                            v16 = (_DWORD)v10 < 2;
                            v10 -= 2;
                            result = 1;
                        }
                    }
                    v14 = (_DWORD)result == 1;
                    v15 = (_BYTE)((_DWORD)result < 1);
                    v16 = (_DWORD)result < 1;
                    result = (_DWORD)result - 1;
                    while (1) {
                        v12 = (_DWORD)(v11 - 1);
                        v14 = !(_DWORD)result;
                        v15 = (_BYTE)((_DWORD)result < 0);
                        if ((_DWORD)result) {
                            v18 = v12;
                            v12 = v11;
                            v11 = v12;
                        } else {
                            v3 = v12;
                            if (!v12) {
                                goto label_50;
                            } else {
                                v14 = v11 == 2;
                                v15 = (_BYTE)(v11 < 2);
                                v16 = (_DWORD)v11 < 2;
                                v11 -= 2;
                                result = 1;
                            }
                        }
                        v14 = (_DWORD)result == 1;
                        v15 = (_BYTE)((_DWORD)result < 1);
                        v16 = (_DWORD)result < 1;
                        result = (_DWORD)result - 1;
                        while (1) {
                            v7 = (_DWORD)(v12 - 1);
                            v14 = !(_DWORD)result;
                            v15 = (_BYTE)((_DWORD)result < 0);
                            if ((_DWORD)result) {
                                v6 = v7;
                                v7 = v12;
                                v12 = v7;
                            } else {
                                v3 = v7;
                                if (!v7) {
                                    goto label_49;
                                } else {
                                    v14 = v12 == 2;
                                    v15 = (_BYTE)(v12 < 2);
                                    v16 = (_DWORD)v12 < 2;
                                    v12 -= 2;
                                    result = 1;
                                }
                            }
                            v14 = (_DWORD)result == 1;
                            v15 = (_BYTE)((_DWORD)result < 1);
                            v16 = (_DWORD)result < 1;
                            result = (_DWORD)result - 1;
                            while (1) {
                                v6 = (_DWORD)(v7 - 1);
                                v14 = !(_DWORD)result;
                                v15 = (_BYTE)((_DWORD)result < 0);
                                if ((_DWORD)result) {
                                    a2 = v6;
                                    v6 = v7;
                                    v7 = v6;
                                } else {
                                    v3 = v6;
                                    if (!v6) {
                                        goto label_48;
                                    } else {
                                        v14 = v7 == 2;
                                        v15 = (_BYTE)(v7 < 2);
                                        v16 = (_DWORD)v7 < 2;
                                        v7 -= 2;
                                        result = 1;
                                    }
                                }
                                v14 = (_DWORD)result == 1;
                                v15 = (_BYTE)((_DWORD)result < 1);
                                v16 = (_DWORD)result < 1;
                                result = (_DWORD)result - 1;
                                while (1) {
                                    _QWORD v19 = (_DWORD)(v6 - 1); // r8
                                    v14 = !(_DWORD)result;
                                    v15 = (_BYTE)((_DWORD)result < 0);
                                    if ((_DWORD)result) {
                                        a2 = v19;
                                        v19 = v6;
                                        v6 = v19;
                                    } else {
                                        v3 = v19;
                                        if (!v19) {
                                            goto label_47;
                                        } else {
                                            v14 = v6 == 2;
                                            v15 = (_BYTE)(v6 < 2);
                                            v16 = (_DWORD)v6 < 2;
                                            v6 -= 2;
                                            result = 1;
                                        }
                                    }
                                    v14 = (_DWORD)result == 1;
                                    v15 = (_BYTE)((_DWORD)result < 1);
                                    v16 = (_DWORD)result < 1;
                                    result = (_DWORD)result - 1;
                                    while (1) {
                                        a1 = (_DWORD)(v19 - 1);
                                        v14 = !(_DWORD)result;
                                        v15 = (_BYTE)((_DWORD)result < 0);
                                        if ((_DWORD)result) {
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
                                    result = 1u + 1;
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
                                    result = (_DWORD)v5 + 1;
                                    v14 = !v6;
                                    v15 = (_BYTE)(v6 < 0);
                                    v16 = 0;
                                    v17 = 0;
                                    if (!v6) {
                                        break;
                                    }
                                }
                                result = (_DWORD)result + 1;
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
                                result = 1u + 1;
                                v14 = !v7;
                                v15 = (_BYTE)(v7 < 0);
                                v16 = 0;
                                v17 = 0;
                                if (!v7) {
                                    break;
                                }
                            }
                            result = (_DWORD)result + 1;
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
                            result = 1u + 1;
                            v14 = !v12;
                            v15 = (_BYTE)(v12 < 0);
                            v16 = 0;
                            v17 = 0;
                            if (!v12) {
                                break;
                            }
                        }
                        result = (_DWORD)result + 1;
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
                        result = 1u + 1;
                        v14 = !v11;
                        v15 = (_BYTE)(v11 < 0);
                        v16 = 0;
                        v17 = 0;
                        if (!v11) {
                            break;
                        }
                    }
                    result = (_DWORD)result + 1;
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
                    result = 1u + 1;
                    v14 = !v10;
                    v15 = (_BYTE)(v10 < 0);
                    v16 = 0;
                    v17 = 0;
                    if (!v10) {
                        break;
                    }
                }
                result = (_DWORD)result + 1;
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
                result = 1u + 1;
                v14 = !v9;
                v15 = (_BYTE)(v9 < 0);
                v16 = 0;
                v17 = 0;
                if (!v9) {
                    break;
                }
            }
            result = (_DWORD)result + 1;
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
            result = 1u + 1;
            v14 = !v8;
            v15 = (_BYTE)(v8 < 0);
            v16 = 0;
            v17 = 0;
            if (!v8) {
                break;
            }
        }
        v18 = *(_DWORD *)(v2 + 0xcLL);
        result = (_DWORD)result + 1;
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
        v18 = *(_DWORD *)(v2 + 0xcLL);
        result = 1u + 1;
        if (!v18) {
            break;
        }
    }
    return (_DWORD)result + 1;
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
    char buf_24[16];
    char buf_0[16]; // int buf_0[4]
    _QWORD result; // rax
    __int64 v2; // rax
    _QWORD v3; // rdx
    _QWORD v4; // rsi
    _QWORD v5; // r8
    __int64 v6; // r9
    _DWORD v7; // temp
    _DWORD v8; // temp
    _DWORD v9; // temp
    _BOOL v10 = !((_BYTE)a1 & 1); // ZF
    char v11 = ((_BYTE)a1 & 1) < '\0'; // SF
    char v12 = 0; // CF
    char v13 = 0; // OF
    if (!((_BYTE)a1 & 1)) {
        v3 = 1;
    } else {
        v3 = 2;
        v10 = a1 == 1;
        v11 = (_BYTE)(a1 < 1);
        v12 = (_DWORD)a1 < 1;
        --a1;
        if (a1 == 1) {
            return 2;
        }
    }
    a1 >>= 1;
    result = a1;
    v10 = !((_BYTE)a1 & 1);
    v11 = ((_BYTE)a1 & 1) < '\0';
    v12 = 0;
    v13 = 0;
    if (!((_BYTE)a1 & 1)) {
        v4 = 1;
    } else {
        v4 = 2;
        v10 = result == 1;
        v11 = (_BYTE)(result < 1);
        v12 = (_DWORD)result < 1;
        result = a1 - 1;
        if (result == 1) {
            result = 2u * 2u;
            return result * (_DWORD)v3;
        }
    }
    result >>= 1;
    __int64 v14 = result; // rcx
    v10 = !((_BYTE)result & 1);
    v11 = ((_BYTE)result & 1) < '\0';
    v12 = 0;
    v13 = 0;
    if (!((_BYTE)result & 1)) {
        v5 = 1;
    } else {
        v10 = result == 1;
        v11 = (_BYTE)(result < 1);
        v12 = (_DWORD)result < 1;
        v5 = 2;
        v14 = result - 1;
        result = 2;
        if (result == 1) {
            v7 = result * result;
            result = v7;
            v7 = (_DWORD)v4;
            v8 = result * v7;
            result = v8;
            v7 = result * result;
            result = v7;
            v7 = (_DWORD)v3;
            v8 = result * v7;
            result = v8;
            return result;
        }
    }
    v14 >>= 1;
    a1 = v14;
    v10 = !((_BYTE)v14 & 1);
    v11 = ((_BYTE)v14 & 1) < '\0';
    v12 = 0;
    v13 = 0;
    if (!((_BYTE)v14 & 1)) {
        v6 = 1;
    } else {
        --v14;
        v6 = 2;
        a1 = v14;
        if (v14 == 1) {
            result = 2u * 2u;
            result *= (_DWORD)v5;
            v7 = result * result;
            result = v7;
            v7 = (_DWORD)v4;
            v8 = result * v7;
            result = v8;
            v7 = result * result;
            result = v7;
            v7 = (_DWORD)v3;
            v8 = result * v7;
            result = v8;
            return result;
        }
    }
    *(_DWORD *)(buf_0 + 12) = (_DWORD)v3;
    *(_DWORD *)(buf_0 + 8) = (_DWORD)v4;
    *(_DWORD *)(buf_0 + 4) = (_DWORD)v5;
    *(_DWORD *)buf_0 = (_DWORD)v6;
    v2 = f_rec_power_constprop_0(a1 >> 1);
    v7 = *(_DWORD *)(buf_0 + 4);
    v8 = *(_DWORD *)(buf_0 + 8);
    result = v2 * v2;
    v9 = *(_DWORD *)(buf_0 + 12);
    result *= *(_DWORD *)buf_0;
    result = result * result * v7;
    result = result * result * v8;
    return result * result * v9;
}
