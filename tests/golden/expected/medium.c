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
    __int64 cond_47; // temp
    __int64 v23; // temp
    __int64 v24; // temp
    __int64 v32; // temp
    __int64 v40; // temp
    char buf_88[64];
    __int64 v_16;
    char buf_0[64]; // int buf_0[16]
    _QWORD c0; // rax
    __int64 v50; // rax
    __int64 v51; // rax
    __int64 v52; // rax
    _QWORD c3; // rbx
    _QWORD a2; // rsi
    _QWORD a1; // rdi
    _QWORD c8; // r10
    __m128i c16; // xmm1
    _DWORD v28; // temp
    _DWORD v29; // temp
    __int64 v27; // temp
    int v30; // temp
    int v44; // temp
    _QWORD v39; // temp
    __int64 c2 = 0xaLL; // rdx
    _BOOL c11 = !(__builtin_popcount(LOBYTE(0)) & 1); // PF
    __int64 c1 = 0LL; // rcx
    __m128i c15 = (((unsigned __int128)0x900000006ULL << 64) | 0x300000000ULL); // xmm0
    char c12 = 1; // ZF
    char c13 = LOBYTE(0); // SF
    char c10 = 0; // CF
    char c14 = 0; // OF
    c11 = c11; c0 = 1LL; *(_OWORD *)buf_0 = c15;
    c15 = (((unsigned __int128)0x1500000012ULL << 64) | 0xf0000000cULL); *(_OWORD *)(buf_0 + 16) = c15; c15 = (((unsigned __int128)0x210000001eULL << 64) | 0x1b00000018ULL);
    *(_OWORD *)(buf_0 + 32) = c15; c15 = (((unsigned __int128)0x2d0000002aULL << 64) | 0x2700000024ULL); *(_OWORD *)(buf_0 + 48) = c15;
    do {
        v28 = c0; a2 = c0; c0 = c0 + c1;
        c1 = v28; v28 = c2; c12 = c2 == 1;
        c13 = LOBYTE(c2 < 1); c10 = (_DWORD)c2 < (_DWORD)1; c14 = __OFSUB__(c2, 1);
        c11 = !(__builtin_popcount(LOBYTE(c2 - 1)) & 1); c2 = c2 - 1;
    } while (c2 != 0);
    c12 = c1 == -910; c13 = LOBYTE(c1 + 0x38e < 0); c10 = (c1 + 0x38e) < c1;
    c14 = __OFADD__(c1, 0x38e); c11 = !(__builtin_popcount(LOBYTE(c1 + 0x38e)) & 1); c1 = c1 + 0x38e;
    c2 = 0x24LL; c0 = 0x30LL;
    do {
        a2 = c2; c2 = c0 % a2; c0 = a2;
        c12 = !c2; c13 = LOBYTE(c2 < 0); c10 = 0;
        c14 = 0; c11 = !(__builtin_popcount(LOBYTE(c2)) & 1);
    } while (c2 != 0);
    c12 = c1 + a2 == 0; c13 = LOBYTE(c1 + a2 < 0); c10 = (c1 + c0) < c1;
    c14 = __OFADD__(c1, c0); c11 = !(__builtin_popcount(LOBYTE(c1 + a2)) & 1); c0 = 0x1bLL;
    while (1) {
        v28 = c0; v29 = c0 & 1; c8 = c0 & 1;
        if (v29 != 0) {
            v28 = LODWORD(c0 + (c0 << 1LL) + 1LL); c2 = c2 + 2; c12 = v28 >> 1 == 0;
            c13 = LOBYTE(v28 >> 1 < 0); c10 = 0; c14 = 0;
            c11 = !(__builtin_popcount(LOBYTE(v28 >> 1)) & 1); c0 = v28 >> 1; continue;
        } else {
            c0 = v28 >> 1; c2 = c2 + 1; c12 = c0 == 1;
            c13 = LOBYTE(c0 < 1); c10 = (_DWORD)c0 < (_DWORD)1; c14 = __OFSUB__(c0, 1);
            c11 = !(__builtin_popcount(LOBYTE((v28 >> 1) - 1)) & 1);
            if (c0 != 1) {
                continue;
            } else {
                break;
            }
        }
    }
    c1 = c1 + a2 + c2; c12 = 1; c13 = LOBYTE(0);
    c10 = 0; c14 = 0; c11 = c11;
    a2 = 0LL; c2 = 0x20LL; c0 = 0xdeadbeefLL;
    do {
        v28 = c0; c0 = (_DWORD)c0 >> 1; v29 = v28 & 1;
        a1 = v28 & 1; a2 = a2 + v29; v28 = c2;
        c12 = c2 == 1; c13 = LOBYTE(c2 < 1); c10 = (_DWORD)c2 < (_DWORD)1;
        c14 = __OFSUB__(c2, 1); c11 = !(__builtin_popcount(LOBYTE(c2 - 1)) & 1); c2 = c2 - 1;
    } while (c2 != 0);
    c1 = LODWORD(a2 + c1 + 0x46LL);
    __int64 c7 = (uintptr_t)buf_0; // r9
    __int64 v8 = (uintptr_t)(buf_0 + 64); // r8
    c0 = (uintptr_t)buf_0; c15 = 0;
    do {
        c15 = _mm_add_epi32(c15, *(_OWORD *)(c0)); v27 = c0 + 0x10LL; c0 = c0 + 0x10LL;
        v39 = (uintptr_t)(buf_0 + 64) - v27; c12 = (uintptr_t)(buf_0 + 64) == v27; c13 = LOBYTE((uintptr_t)(buf_0 + 64) < v27);
        c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)c0; c14 = __OFSUB__((uintptr_t)(buf_0 + 64), c0); c11 = !(__builtin_popcount(LOBYTE(v39)) & 1);
    } while ((uintptr_t)(buf_0 + 64) != c0);
    a1 = (uintptr_t)(buf_0 + 4); c0 = 0LL;
    __int64 c9 = (uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4); // r11
    a2 = (uintptr_t)(buf_0 + 4); c15 = _mm_add_epi32(c15, (_OWORD)c15 >> 0x40); c16 = (_OWORD)c15 >> 0x20;
    c15 = _mm_add_epi32(c15, c16); c2 = LODWORD(c15) + c1; c12 = !(c9 & 4);
    c13 = LOBYTE((c9 & 4) < 0); c10 = 0; c14 = 0;
    c11 = !(__builtin_popcount(LOBYTE(c9 & 4)) & 1); c9 = c9 & 4; c1 = (uintptr_t)(buf_0 + 4);
    if (!(c9 & 4)) {
        goto label_19;
    } else {
        a2 = *(_DWORD *)(buf_0 + 4); c0 = LODWORD(0LL) < a2 ? a2 : LODWORD(0LL); a2 = (uintptr_t)(buf_0 + 8);
        c12 = (uintptr_t)(buf_0 + 64) == (uintptr_t)(buf_0 + 8); c13 = LOBYTE((uintptr_t)(buf_0 + 64) < (uintptr_t)(buf_0 + 8)); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)(uintptr_t)(buf_0 + 8);
        c14 = __OFSUB__((uintptr_t)(buf_0 + 64), (uintptr_t)(buf_0 + 8)); c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 8))) & 1);
        if ((uintptr_t)(buf_0 + 64) != (uintptr_t)(buf_0 + 8)) {
            do {
                c9 = *(_DWORD *)(a2); v28 = c0 < c9 ? c9 : c0; c9 = *(_DWORD *)(a2 + 4LL);
                v29 = v28; v30 = v29 - c9; c0 = v29 < c9 ? c9 : v29;
                v27 = a2 + 8LL; a2 = a2 + 8LL; v40 = (uintptr_t)(buf_0 + 64) - v27;
                c12 = (uintptr_t)(buf_0 + 64) == v27; c13 = LOBYTE((uintptr_t)(buf_0 + 64) < v27); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)a2;
                c14 = __OFSUB__((uintptr_t)(buf_0 + 64), a2); c11 = !(__builtin_popcount(LOBYTE(v40)) & 1);
            } while ((uintptr_t)(buf_0 + 64) != a2);
        }
        v28 = c0 + c2; c0 = c0 + c2; c2 = 0LL;
        c12 = !(LODWORD((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4); c13 = LOBYTE((LODWORD((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4) < 0); c10 = 0;
        c14 = 0; c11 = !(__builtin_popcount(LOBYTE(LODWORD((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4)) & 1); a2 = LODWORD((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4;
        if (!(LODWORD((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4)) {
            goto label_18;
        } else {
            c1 = *(_DWORD *)(buf_0 + 4); c2 = LODWORD(0LL) != c1 && c1 <= LODWORD(0LL) ? c1 : LODWORD(0LL); c1 = (uintptr_t)(buf_0 + 8);
            c12 = (uintptr_t)(buf_0 + 64) == (uintptr_t)(buf_0 + 8); c13 = LOBYTE((uintptr_t)(buf_0 + 64) < (uintptr_t)(buf_0 + 8)); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)(uintptr_t)(buf_0 + 8);
            c14 = __OFSUB__((uintptr_t)(buf_0 + 64), (uintptr_t)(buf_0 + 8)); c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 8))) & 1);
            if ((uintptr_t)(buf_0 + 64) != (uintptr_t)(buf_0 + 8)) {
                do {
                    a2 = *(_DWORD *)(c1); c2 = c2 != a2 && a2 <= c2 ? a2 : c2; a2 = *(_DWORD *)(c1 + 4LL);
                    c2 = c2 != a2 && a2 <= c2 ? a2 : c2; v27 = c1 + 8LL; c1 = c1 + 8LL;
                    v39 = (uintptr_t)(buf_0 + 64) - v27; c12 = (uintptr_t)(buf_0 + 64) == v27; c13 = LOBYTE((uintptr_t)(buf_0 + 64) < v27);
                    c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)c1; c14 = __OFSUB__((uintptr_t)(buf_0 + 64), c1); c11 = !(__builtin_popcount(LOBYTE(v39)) & 1);
                } while ((uintptr_t)(buf_0 + 64) != c1);
            }
            c12 = c2 + v28 == 0; c13 = LOBYTE(c2 + v28 < 0); c10 = (c2 + c0) < c2;
            c14 = __OFADD__(c2, c0); c11 = !(__builtin_popcount(LOBYTE(c2 + v28)) & 1); c2 = c2 + v28;
            __m128i c17 = 0; // xmm2
            c0 = (uintptr_t)buf_0;
            do {
                c15 = *(_OWORD *)(c0); v27 = c0 + 0x10LL; c0 = c0 + 0x10LL;
                c16 = c15; c16 = _mm_mul_epu32(c15, c15); c15 = _mm_srli_epi64(c15, 0x20);
                c15 = _mm_mul_epu32(c15, c15); c16 = _mm_shuffle_epi32(c16, 8); c15 = _mm_shuffle_epi32(c15, 8);
                c16 = _mm_unpacklo_epi32(c16, c15); c17 = _mm_add_epi32(c17, c16); v39 = (uintptr_t)(buf_0 + 64) - v27;
                c12 = (uintptr_t)(buf_0 + 64) == v27; c13 = LOBYTE((uintptr_t)(buf_0 + 64) < v27); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)c0;
                c14 = __OFSUB__((uintptr_t)(buf_0 + 64), c0); c11 = !(__builtin_popcount(LOBYTE(v39)) & 1);
            } while ((uintptr_t)(buf_0 + 64) != c0);
            c0 = 0LL; c17 = _mm_add_epi32(c17, (_OWORD)c17 >> 0x40); c17 = _mm_add_epi32(c17, (_OWORD)c17 >> 0x20);
            c12 = LODWORD(c17) + c2 == 0; c13 = LOBYTE(LODWORD(c17) + c2 < 0); c10 = (LODWORD(c17) + c2) < LODWORD(c17);
            c14 = __OFADD__(LODWORD(c17), c2); c11 = !(__builtin_popcount(LOBYTE(LODWORD(c17) + c2)) & 1); c1 = LODWORD(c17) + c2;
            c2 = (uintptr_t)buf_0;
            while (1) {
                v28 = *(_DWORD *)(c2); v29 = v28 - 0xf; c12 = v28 == 0xf;
                c13 = LOBYTE(v28 < 0xf); c10 = (_DWORD)v28 < (_DWORD)0xf; c14 = __OFSUB__(v28, 0xf);
                c11 = !(__builtin_popcount(LOBYTE(v29)) & 1);
                if (v28 == 0xf) {
                    break;
                } else {
                    v28 = c0; v29 = c0 + 1; c0 = c0 + 1;
                    c2 = c2 + 4LL; v30 = v29; c12 = c0 == 0x10;
                    c13 = LOBYTE(c0 < 0x10); c10 = (_DWORD)c0 < (_DWORD)0x10; c14 = __OFSUB__(c0, 0x10);
                    c11 = !(__builtin_popcount(LOBYTE(v28 - 15)) & 1);
                    if (c0 != 0x10) {
                        continue;
                    } else {
                        goto label_2;
                    }
                }
            }
            a2 = 2LL; c9 = LODWORD(c0 + c1 + 0x581LL); c1 = 2LL;
            c12 = LODWORD(2LL) == 3; c13 = LOBYTE(LODWORD(2LL) < 3); c10 = (_DWORD)LODWORD(2LL) < (_DWORD)3;
            c14 = __OFSUB__(LODWORD(2LL), 3); c11 = !(__builtin_popcount(LOBYTE(LODWORD(2LL) - 3)) & 1);
            if (!(LODWORD(2LL) != 3 && 3 <= LODWORD(2LL))) {
                goto label_6;
            }
        label_4:;
            c0 = a2;
            while (1) {
                c0 = a2 / c1; c2 = a2 % c1; c12 = !c2;
                c13 = LOBYTE(c2 < 0); c11 = !(__builtin_popcount(LOBYTE(c2)) & 1);
                if (c2 != 0) {
                    c1 = c1 + 1; c0 = c1 * c1; c12 = c0 == a2;
                    c13 = LOBYTE(c0 < a2); c10 = (_DWORD)c0 < (_DWORD)a2; c14 = __OFSUB__(c0, a2);
                    c11 = !(__builtin_popcount(LOBYTE(c0 - a2)) & 1);
                    if (c0 != a2 && a2 <= c0) {
                        goto label_6;
                    } else {
                        continue;
                    }
                } else {
                    break;
                }
            }
        label_7:;
            a2 = a2 + 1; c1 = 2LL; c12 = a2 == 3;
            c13 = LOBYTE(a2 < 3); c10 = (_DWORD)a2 < (_DWORD)3; c14 = __OFSUB__(a2, 3);
            c11 = !(__builtin_popcount(LOBYTE(a2 - 3)) & 1);
            if (a2 != 3 && 3 <= a2) {
                goto label_4;
            } else {
            }
        label_6:;
            c8 = c8 + 1; c12 = c8 == 0xa; c13 = LOBYTE(c8 < 0xa);
            c10 = (_DWORD)c8 < (_DWORD)0xa; c14 = __OFSUB__(c8, 0xa); c11 = !(__builtin_popcount(LOBYTE(c8 - 0xa)) & 1);
            if (c8 != 0xa) {
                goto label_7;
            } else {
            }
            c12 = c9 + a2 == 0; c13 = LOBYTE(c9 + a2 < 0); c10 = (c9 + a2) < c9;
            c14 = __OFADD__(c9, a2); c11 = !(__builtin_popcount(LOBYTE(c9 + a2)) & 1); c9 = c9 + a2;
            c1 = 0x12LL; c3 = 0xcLL;
            do {
                v28 = LODWORD(c3); v44 = c1; c3 = c1;
                v29 = v28; v30 = v29 / c1; c0 = v30;
                c2 = v29 % c1; c1 = c2; c12 = !(c2 & c2);
                c13 = LOBYTE((c2 & c2) < 0); c10 = 0; c14 = 0;
                c11 = !(__builtin_popcount(LOBYTE(c2 & c2)) & 1);
            } while ((c2 & c2) != 0);
            c12 = 1; c13 = LOBYTE(0); c10 = 0;
            c14 = 0; c11 = c11; a2 = 0LL;
            c0 = LODWORD(0xd8LL) / v44; c2 = LODWORD(0xd8LL) % v44; c8 = LODWORD(c0 + c9 - 1218664206);
            while (1) {
                v28 = *(_DWORD *)(c7); c2 = v28; c0 = v28 * 0x66666667LL;
                v30 = c2; c0 = LODWORD(c0 >> 0x21) - (c2 >> 0x1f); c7 = LODWORD(c0 + (c0 << 2LL));
                c0 = c2 - LODWORD(c0 + (c0 << 2LL)); c12 = c0 == 2;
                char v33 = LOBYTE(c0 < 2); // temp
                c14 = __OFSUB__(c0, 2);
                if (c0 == 2) {
                    c12 = c2 == 5; c13 = LOBYTE(c2 < 5); c10 = (_DWORD)c2 < (_DWORD)5;
                    c14 = __OFSUB__(c2, 5); c11 = !(__builtin_popcount(LOBYTE(c2 - 5)) & 1); c2 = c2 - 5;
                } else {
                    if (c12 || v33 ^ c14) {
                        if (!(c0 & c0)) {
                            c12 = v30 + v30 == 0; c13 = LOBYTE(v30 + v30 < 0); c10 = (v30 + v30) < v30;
                            c11 = !(__builtin_popcount(LOBYTE(v30 + v30)) & 1); c2 = v30 + v30;
                        } else {
                            c7 = LODWORD(c2 + 0xaLL); c12 = c0 == 1; c13 = LOBYTE(c0 < 1);
                            c10 = (_DWORD)c0 < (_DWORD)1; c11 = !(__builtin_popcount(LOBYTE(c0 - 1)) & 1);
                            c2 = c12 ? LODWORD(c2 + 0xaLL) : c2;
                        }
                    } else {
                        v28 = c0; c12 = v28 == 3; c2 = c12 ? -v30 : v30;
                        c7 = a1; a2 = a2 + c2; c12 = (uintptr_t)(buf_0 + 64) == a1;
                        c13 = LOBYTE((uintptr_t)(buf_0 + 64) < a1); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)a1;
                        c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - a1)) & 1);
                        if ((uintptr_t)(buf_0 + 64) != a1) {
                            v27 = a1 + 4LL; c12 = a1 == -4LL; cond_47 = v27 < 0LL;
                            v32 = LOBYTE(cond_47); c13 = v32; c10 = (a1 + 4LL) < a1;
                            v32 = LOBYTE(v27); v23 = __builtin_popcount(v32);
                            v24 = v23 & 1; c11 = !v24; a1 = v27;
                            continue;
                        } else {
                            break;
                        }
                    }
                }
                a2 = a2 + c2; c7 = a1; c12 = (uintptr_t)(buf_0 + 64) == a1;
                c13 = LOBYTE((uintptr_t)(buf_0 + 64) < a1); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)a1;
                c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - a1)) & 1);
                if ((uintptr_t)(buf_0 + 64) == a1) {
                    break;
                } else {
                    v27 = a1 + 4LL; c12 = a1 == -4LL; cond_47 = v27 < 0LL;
                    v32 = LOBYTE(cond_47); c13 = v32; c10 = (a1 + 4LL) < a1;
                    v32 = LOBYTE(v27); v23 = __builtin_popcount(v32);
                    v24 = v23 & 1; c11 = !v24; a1 = v27;
                    continue;
                }
            }
            c2 = LODWORD(c8 + a2); c12 = 1; c13 = LOBYTE(0);
            c10 = 0; c14 = 0; c11 = c11;
            c0 = 0LL;
            while (1) {
                c12 = c0 == 9; c13 = LOBYTE(c0 < 9); c10 = (_DWORD)c0 < (_DWORD)9;
                if (c0 != 9 && 9 <= c0) {
                    c1 = LODWORD(c1 + c0 - 10); v28 = c0; v29 = c0 + 1;
                    c0 = c0 + 1; c12 = c0 == 0x14;
                    c13 = LOBYTE(c0 < 0x14); c10 = (_DWORD)c0 < (_DWORD)0x14;
                    if (c0 != 0x14) {
                        continue;
                    } else {
                        break;
                    }
                } else {
                    v28 = c0;
                    if (v28 <= 4) {
                        a2 = LODWORD(c0 + (c0 << 1LL)); c0 = c0 + 1; c12 = c1 + a2 == 0;
                        c13 = LOBYTE(c1 + a2 < 0); c10 = (c1 + a2) < c1;
                        c1 = c1 + a2; continue;
                    } else {
                        c1 = LODWORD(c1 + c0 + 0x14LL); c0 = v28 + 1; c12 = c0 == 9;
                        c13 = LOBYTE(c0 < 9); c10 = (_DWORD)c0 < (_DWORD)9;
                    }
                }
            }
            a2 = LODWORD(c2 + c1 + 0x12dLL); c0 = 0x30LL; c1 = 0x24LL;
            while (1) {
                c2 = c0 % c1; c0 = c1;
                if (c2 != 0) {
                    c1 = c2;
                } else {
                    break;
                }
            }
            v50 = f_rec_fib(8LL); c8 = LODWORD(v50 + LODWORD(a2 + c1 + 3LL)); v51 = f_rec_power_constprop_0(8LL);
            c8 = c8 + v51; v52 = f_ackermann(2LL, 3LL); v29 = LODWORD(c8 + v52 + 0xabe0cLL);
            c2 = (_DWORD)LODWORD(c8 + v52 + 0xabe0cLL) >> 0x1f >> 0x18; v28 = v29; c0 = (_QWORD)(LOBYTE(v28 + c2)) - c2;
            return c0;
        }
    }
label_2:;
label_18:;
label_19:;
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
    v_8 = (uintptr_t)&v_8; pfn = qword_3FD8;
    ((__int64 (*)())pfn)(); __builtin_trap(); return;
}
/* Function:   sub_14b0 | Address: 0x14b0 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_14b0(void) {
    int v5; // reg?
    if (v5) {
        return;
    } else {
        if (qword_3FE0 == 0LL) {
            return;
        }
    }
    return;
}
/* Function:   sub_1520 | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1040, sub_14b0 | Xrefs from: unknown */
__int64 sub_1520(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 result; // rax
    if (byte_4010 != '\0') {
        return result;
    } else {
        if (qword_3FF8 != 0LL) {
            __int64 c3 = qword_4008; // rdi
            result = sub_1040();
        }
        result = sub_14b0(); byte_4010 = 1; return result;
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
    __int64 v53; // rax
    _QWORD c3; // rbx
    _QWORD c10; // r10
    _QWORD c13; // r13
    _QWORD c15; // r15
    _DWORD v32; // temp
    _DWORD v36; // temp
    _DWORD v49; // temp
    _DWORD v33; // temp
    if (a1 <= 1) {
        return a1;
    } else {
        _BOOL c17 = !(__builtin_popcount(LOBYTE(0)) & 1); // PF
        __int64 c14 = 0LL; // r14
        _QWORD c5 = LODWORD(a1 - 2); // rbp
        __int64 v29 = (uintptr_t)(buf_40 + 40) - 8LL; // temp
        *(_QWORD *)(buf_40 + 32) = (uintptr_t)(buf_40 + 40); c3 = (uintptr_t)(buf_40 + 40);
        _BOOL c18 = (uintptr_t)(buf_40 + 40) == 0x38LL; // ZF
        char c19 = LOBYTE((uintptr_t)(buf_40 + 40) < 0x38LL); // SF
        _BOOL c16 = (_QWORD)(uintptr_t)(buf_40 + 40) < (_QWORD)0x38LL; // CF
        _BOOL c20 = __OFSUB__((uintptr_t)(buf_40 + 40), 0x38LL); // OF
        c17 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_96 + 40))) & 1);
        while (1) {
            _QWORD c12 = LODWORD(c3 - 2); // r12
            c18 = LODWORD(c3) == 1; c19 = LOBYTE(LODWORD(c3) < 1); c16 = (_DWORD)LODWORD(c3) < (_DWORD)1;
            c17 = !(__builtin_popcount(LOBYTE(LODWORD(c3) - 1)) & 1);
            if (LODWORD(c3) > 1) {
                do {
                    c15 = LODWORD(c3); result = LODWORD(c14);
                    while (1) {
                        c5 = LODWORD(c12 - 2); c18 = LODWORD(c12) == 1; c19 = LOBYTE(LODWORD(c12) < 1);
                        c16 = (_DWORD)LODWORD(c12) < (_DWORD)1; c17 = !(__builtin_popcount(LOBYTE(LODWORD(c12) - 1)) & 1);
                        if (LODWORD(c12) > 1) {
                            c19 = LOBYTE(0); c17 = c17;
                            do {
                                v_12 = LODWORD(c3); c13 = LODWORD(c12);
                                _QWORD c2 = result; // rdx
                                while (1) {
                                    c18 = LODWORD((uintptr_t)(buf_40 + 40)) == 1; c19 = LOBYTE(LODWORD((uintptr_t)(buf_40 + 40)) < 1); c16 = (_DWORD)LODWORD((uintptr_t)(buf_40 + 40)) < (_DWORD)1;
                                    c17 = !(__builtin_popcount(LOBYTE(LODWORD((uintptr_t)(buf_40 + 40)) - 1)) & 1);
                                    if (LODWORD((uintptr_t)(buf_40 + 40)) > 1) {
                                        do {
                                            _QWORD c9 = LODWORD(c2); // r9
                                            _QWORD c6 = LODWORD(c12); // rsi
                                            c2 = LODWORD((uintptr_t)(buf_40 + 38));
                                            _QWORD c1 = LODWORD(c15); // rcx
                                            v32 = LODWORD((uintptr_t)(buf_40 + 40)); c12 = LODWORD((uintptr_t)(buf_40 + 40));
                                            while (1) {
                                                c3 = LODWORD(c2 - 2); c18 = LODWORD(c2) == 1; c19 = LOBYTE(LODWORD(c2) < 1);
                                                c16 = (_DWORD)LODWORD(c2) < (_DWORD)1; c17 = !(__builtin_popcount(LOBYTE(LODWORD(c2) - 1)) & 1);
                                                if (LODWORD(c2) > 1) {
                                                    do {
                                                        _QWORD c11 = LODWORD(c9); // r11
                                                        c9 = c6; c6 = LODWORD(c2);
                                                        while (1) {
                                                            c15 = LODWORD(c3 - 2); c18 = LODWORD(c3) == 1; c19 = LOBYTE(LODWORD(c3) < 1);
                                                            c16 = (_DWORD)LODWORD(c3) < (_DWORD)1; c17 = !(__builtin_popcount(LOBYTE(LODWORD(c3) - 1)) & 1);
                                                            if (LODWORD(c3) > 1) {
                                                                while (1) {
                                                                    c18 = LODWORD(c15) == 1; c19 = LOBYTE(LODWORD(c15) < 1); c16 = (_DWORD)LODWORD(c15) < (_DWORD)1;
                                                                    c17 = !(__builtin_popcount(LOBYTE(LODWORD(c15) - 1)) & 1);
                                                                    if (LODWORD(c15) > 1) {
                                                                        c19 = LOBYTE(0); c17 = c17;
                                                                        do {
                                                                            *(_DWORD *)(buf_40 + 40) = LODWORD(c2); result = LODWORD(c9); c9 = LODWORD(c15 - 2);
                                                                            while (1) {
                                                                                _QWORD c8 = LODWORD(c9 - 2); // r8
                                                                                c18 = LODWORD(c9) == 1; c19 = LOBYTE(LODWORD(c9) < 1); c16 = (_DWORD)LODWORD(c9) < (_DWORD)1;
                                                                                c17 = !(__builtin_popcount(LOBYTE(LODWORD(c9) - 1)) & 1);
                                                                                if (LODWORD(c9) > 1) {
                                                                                    do {
                                                                                        a1 = LODWORD(c9); c9 = LODWORD(c15); c15 = LODWORD(c3);
                                                                                        v33 = result; c3 = result; result = a1;
                                                                                        while (1) {
                                                                                            a1 = LODWORD(c8 - 2); c18 = LODWORD(c8) == 1; c19 = LOBYTE(LODWORD(c8) < 1);
                                                                                            c16 = (_DWORD)LODWORD(c8) < (_DWORD)1; c17 = !(__builtin_popcount(LOBYTE(LODWORD(c8) - 1)) & 1);
                                                                                            if (!(c16 || c18)) {
                                                                                                do {
                                                                                                    *(_DWORD *)(buf_40 + 44) = c11; c11 = result;
                                                                                                    do {
                                                                                                        v_44 = c11; v_40 = LODWORD(c9); v_36 = LODWORD(c8);
                                                                                                        v_32 = LODWORD(c10); v_28 = c6; v_24 = LODWORD(c2);
                                                                                                        v_20 = LODWORD(c1); v_16 = a1; v53 = f_rec_fib(a1);
                                                                                                        a1 = v_16; c2 = v_24; c6 = v_28;
                                                                                                        a1 = a1 - 1; c1 = v_20 + v53; c10 = v_32;
                                                                                                        v36 = v_36; c8 = v_36; c18 = a1 == -1;
                                                                                                        c19 = LOBYTE(a1 < -1); c16 = (_DWORD)a1 < (_DWORD)0xffffffffffffffffULL;
                                                                                                        c17 = !(__builtin_popcount(LOBYTE(a1 - -1)) & 1); c9 = v_40; c11 = v_44;
                                                                                                    } while (a1 != -2);
                                                                                                    v49 = v_36 - 1; c8 = v_36 - 1; result = c11;
                                                                                                    c2 = LODWORD(c1 + c2 + 1LL); c11 = *(_DWORD *)(buf_40 + 44); a1 = LODWORD(c8 - 2);
                                                                                                    c1 = 0LL; c18 = c8 == 1; c19 = LOBYTE(c8 < 1);
                                                                                                    c16 = (_DWORD)c8 < (_DWORD)1; c17 = !(__builtin_popcount(LOBYTE(v49 - 1)) & 1);
                                                                                                } while ((_DWORD)1 <= (_DWORD)c8 && c8 != 1);
                                                                                            }
                                                                                            c2 = LODWORD(c2) + LODWORD(c8);
                                                                                            if ((LODWORD(c8) & LODWORD(c8)) != 0) {
                                                                                                c18 = 1; c19 = LOBYTE(0); c16 = 0;
                                                                                                c20 = 0; c17 = c17; c8 = 0LL;
                                                                                            } else {
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                        a1 = result; result = v33; c3 = c15;
                                                                                        c15 = LODWORD(c9); c9 = LODWORD(a1 - 1); c10 = LODWORD(c2 + c10 + 1LL);
                                                                                        c1 = *(_DWORD *)((uintptr_t)(buf_40 + 48)); c2 = 0LL; c8 = LODWORD(c9 - 2);
                                                                                        c18 = c9 == 1; c19 = LOBYTE(c9 < 1); c16 = (_DWORD)c9 < (_DWORD)1;
                                                                                        c17 = !(__builtin_popcount(LOBYTE(LODWORD(a1 - 1) - 1)) & 1);
                                                                                    } while (c9 != 1 && 1 <= c9);
                                                                                }
                                                                                c10 = LODWORD(c10) + LODWORD(c9);
                                                                                if ((LODWORD(c9) & LODWORD(c9)) != 0) {
                                                                                    c18 = 1; c19 = LOBYTE(0); c16 = 0;
                                                                                    c20 = 0; c17 = c17; c9 = 0LL;
                                                                                } else {
                                                                                    break;
                                                                                }
                                                                            }
                                                                            c2 = *(_DWORD *)(buf_40 + 40); v36 = LODWORD(c15) - 1; c15 = LODWORD(c15) - 1;
                                                                            c9 = result; c2 = LODWORD(c2 + c10 + 1LL); c18 = c15 == 1;
                                                                            c19 = LOBYTE(c15 < 1); c16 = (_DWORD)c15 < (_DWORD)1;
                                                                            c17 = !(__builtin_popcount(LOBYTE(v36 - 1)) & 1);
                                                                        } while (c15 != 1 && 1 <= c15);
                                                                    }
                                                                    c2 = LODWORD(c2) + LODWORD(c15);
                                                                    if ((LODWORD(c15) & LODWORD(c15)) != 0) {
                                                                        c18 = 1; c19 = LOBYTE(0); c16 = 0;
                                                                        c20 = 0; c17 = c17; c15 = 0LL;
                                                                    } else {
                                                                        v36 = LODWORD(c3) - 1; c3 = LODWORD(c3) - 1; c5 = LODWORD((uintptr_t)(buf_40 + 40) + c2 + 1LL);
                                                                        c2 = 0LL; c15 = LODWORD(c3 - 2); c18 = c3 == 1;
                                                                        c19 = LOBYTE(c3 < 1); c16 = (_DWORD)c3 < (_DWORD)1;
                                                                        c17 = !(__builtin_popcount(LOBYTE(v36 - 1)) & 1);
                                                                        if (!(c3 != 1 && 1 <= c3)) {
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            c5 = LODWORD((uintptr_t)(buf_40 + 40)) + LODWORD(c3);
                                                            if ((LODWORD(c3) & LODWORD(c3)) != 0) {
                                                                c18 = 1; c19 = LOBYTE(0); c16 = 0;
                                                                c20 = 0; c17 = c17; c3 = 0LL;
                                                            } else {
                                                                break;
                                                            }
                                                        }
                                                        v33 = LODWORD(c6 - 1); c2 = LODWORD(c6 - 1); c14 = LODWORD(c14 + (uintptr_t)(buf_40 + 40) + 1LL);
                                                        c6 = LODWORD(c9); c5 = 0LL; c9 = c11;
                                                        c3 = LODWORD(c2 - 2); c18 = c2 == 1; c19 = LOBYTE(c2 < 1);
                                                        c16 = (_DWORD)c2 < (_DWORD)1; c17 = !(__builtin_popcount(LOBYTE(v33 - 1)) & 1);
                                                    } while (c2 != 1 && 1 <= c2);
                                                }
                                                c14 = LODWORD(c14) + LODWORD(c2);
                                                if ((LODWORD(c2) & LODWORD(c2)) != 0) {
                                                    c18 = 1; c19 = LOBYTE(0); c16 = 0;
                                                    c20 = 0; c17 = c17; c2 = 0LL;
                                                } else {
                                                    break;
                                                }
                                            }
                                            v33 = v32; c2 = LODWORD(c9); c12 = LODWORD(c6 + c14 + 1LL);
                                            c15 = LODWORD(c1); c5 = v33 - 1; c14 = 0LL;
                                            v32 = v33 - 1; c18 = v32 == 1; c19 = LOBYTE(v32 < 1);
                                            c16 = (_DWORD)v32 < (_DWORD)1; c17 = !(__builtin_popcount(LOBYTE(v33 - 1 - 1)) & 1);
                                        } while (v32 != 1 && 1 <= v32);
                                    }
                                    c12 = LODWORD(c12) + LODWORD((uintptr_t)(buf_40 + 40));
                                    if ((LODWORD((uintptr_t)(buf_40 + 40)) & LODWORD((uintptr_t)(buf_40 + 40))) != 0) {
                                        c18 = 1; c19 = LOBYTE(0); c16 = 0;
                                        c20 = 0; c17 = c17; c5 = 0LL;
                                    } else {
                                        break;
                                    }
                                }
                                c3 = v_12; result = LODWORD(c2); c3 = LODWORD(c3 + c12 + 1LL);
                                c12 = LODWORD(c13 - 1); c18 = c12 == 1;
                                c19 = LOBYTE(c12 < 1); c16 = (_DWORD)c12 < (_DWORD)1;
                                c17 = !(__builtin_popcount(LOBYTE(LODWORD(c13 - 1) - 1)) & 1);
                            } while (c12 != 1 && 1 <= c12);
                        }
                        c3 = LODWORD(c3) + LODWORD(c12);
                        if ((LODWORD(c12) & LODWORD(c12)) != 0) {
                            c18 = 1; c19 = LOBYTE(0); c16 = 0;
                            c20 = 0; c17 = c17; c12 = 0LL;
                        } else {
                            break;
                        }
                    }
                    c14 = LODWORD(result + c3 + 1LL); c3 = LODWORD(c15 - 1); c12 = LODWORD(c3 - 2);
                    c18 = c3 == 1; c19 = LOBYTE(c3 < 1); c16 = (_DWORD)c3 < (_DWORD)1;
                    c17 = !(__builtin_popcount(LOBYTE(LODWORD(c15 - 1) - 1)) & 1);
                } while (c3 != 1 && 1 <= c3);
            }
            c14 = LODWORD(c14) + LODWORD(c3);
            if ((LODWORD(c3) & LODWORD(c3)) != 0) {
                c3 = 0LL;
            } else {
                result = LODWORD(c14 + 1LL); c3 = v29; c12 = v29;
                c14 = v29;
                return 0;
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
    __int64 c4; // temp
    __int64 v29; // temp
    int v_4;
    int v_52;
    _QWORD result; // rax
    __int64 v35; // rax
    _QWORD c1; // rcx
    _QWORD c3; // rbx
    _QWORD c5; // rbp
    _QWORD c9; // r12
    _QWORD c10; // r13
    _QWORD c11; // r14
    _QWORD c12; // r15
    _DWORD v27; // temp
    result = a2;
    _BOOL c15 = c4 == 0x18LL; // ZF
    char c16 = LOBYTE(c4 < 0x18LL); // SF
    _BOOL c13 = (_QWORD)c4 < (_QWORD)0x18LL; // CF
    _BOOL c17 = __OFSUB__(c4, 0x18LL); // OF
    while (1) {
        _QWORD c2 = *(_DWORD *)(c4 + 0xcLL); // rdx
        c5 = LODWORD(c2 - 1); c15 = !LODWORD(result); c16 = LOBYTE(LODWORD(result) < 0);
        if (LODWORD(result) != 0) {
            c2 = c5; c5 = *(_DWORD *)(c4 + 0xcLL);
        } else {
            v29 = c5; c15 = !c5; c16 = LOBYTE(c5 < 0);
            c13 = 0; c17 = 0;
            if (!c5) {
                result = 1LL; break;
            } else {
                v27 = *(_DWORD *)(c4 + 0xcLL); c15 = v27 == 2;
                c16 = LOBYTE(v27 < 2); c13 = (_DWORD)v27 < (_DWORD)2;
                result = 1LL;
            }
        }
        c15 = LODWORD(result) == 1; c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
        while (1) {
            c9 = LODWORD(c5 - 1); c15 = !LODWORD(result); c16 = LOBYTE(LODWORD(result) < 0);
            if (LODWORD(result) != 0) {
                c2 = c9; c9 = c5; c5 = c9;
            } else {
                v29 = c9;
                if (!c9) {
                    goto label_53;
                } else {
                    c15 = c5 == 2; c16 = LOBYTE(c5 < 2); c13 = (_DWORD)c5 < (_DWORD)2;
                    c5 = c5 - 2;
                    result = 1LL;
                }
            }
            c15 = LODWORD(result) == 1; c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
            result = LODWORD(result) - 1;
            while (1) {
                c10 = LODWORD(c9 - 1); c15 = !LODWORD(result); c16 = LOBYTE(LODWORD(result) < 0);
                if (LODWORD(result) != 0) {
                    c2 = c10; c10 = c9; c9 = c10;
                } else {
                    v29 = c10;
                    if (!c10) {
                        goto label_52;
                    } else {
                        c15 = c9 == 2; c16 = LOBYTE(c9 < 2); c13 = (_DWORD)c9 < (_DWORD)2;
                        c9 = c9 - 2;
                        result = 1LL;
                    }
                }
                c15 = LODWORD(result) == 1; c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
                result = LODWORD(result) - 1;
                while (1) {
                    c11 = LODWORD(c10 - 1); c15 = !LODWORD(result); c16 = LOBYTE(LODWORD(result) < 0);
                    if (LODWORD(result) != 0) {
                        c2 = c11; c11 = c10; c10 = c11;
                    } else {
                        v29 = c11;
                        if (!c11) {
                            goto label_51;
                        } else {
                            c15 = c10 == 2; c16 = LOBYTE(c10 < 2); c13 = (_DWORD)c10 < (_DWORD)2;
                            c10 = c10 - 2;
                            result = 1LL;
                        }
                    }
                    c15 = LODWORD(result) == 1; c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
                    result = LODWORD(result) - 1;
                    while (1) {
                        c12 = LODWORD(c11 - 1); c15 = !LODWORD(result); c16 = LOBYTE(LODWORD(result) < 0);
                        if (LODWORD(result) != 0) {
                            c2 = c12; c12 = c11; c11 = c12;
                        } else {
                            v29 = c12;
                            if (!c12) {
                                goto label_50;
                            } else {
                                c15 = c11 == 2; c16 = LOBYTE(c11 < 2); c13 = (_DWORD)c11 < (_DWORD)2;
                                c11 = c11 - 2;
                                result = 1LL;
                            }
                        }
                        c15 = LODWORD(result) == 1; c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
                        result = LODWORD(result) - 1;
                        while (1) {
                            c3 = LODWORD(c12 - 1); c15 = !LODWORD(result); c16 = LOBYTE(LODWORD(result) < 0);
                            if (LODWORD(result) != 0) {
                                c1 = c3; c3 = c12; c12 = c3;
                            } else {
                                v29 = c3;
                                if (!c3) {
                                    goto label_49;
                                } else {
                                    c15 = c12 == 2; c16 = LOBYTE(c12 < 2); c13 = (_DWORD)c12 < (_DWORD)2;
                                    c12 = c12 - 2;
                                    result = 1LL;
                                }
                            }
                            c15 = LODWORD(result) == 1; c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
                            result = LODWORD(result) - 1;
                            while (1) {
                                c1 = LODWORD(c3 - 1); c15 = !LODWORD(result); c16 = LOBYTE(LODWORD(result) < 0);
                                if (LODWORD(result) != 0) {
                                    a2 = c1; c1 = c3; c3 = c1;
                                } else {
                                    v29 = c1;
                                    if (!c1) {
                                        goto label_48;
                                    } else {
                                        c15 = c3 == 2; c16 = LOBYTE(c3 < 2); c13 = (_DWORD)c3 < (_DWORD)2;
                                        c3 = c3 - 2;
                                        result = 1LL;
                                    }
                                }
                                c15 = LODWORD(result) == 1; c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
                                result = LODWORD(result) - 1;
                                while (1) {
                                    _QWORD c8 = LODWORD(c1 - 1); // r8
                                    c15 = !LODWORD(result); c16 = LOBYTE(LODWORD(result) < 0);
                                    if (LODWORD(result) != 0) {
                                        a2 = c8; c8 = c1; c1 = c8;
                                    } else {
                                        v29 = c8;
                                        if (!c8) {
                                            goto label_47;
                                        } else {
                                            c15 = c1 == 2; c16 = LOBYTE(c1 < 2); c13 = (_DWORD)c1 < (_DWORD)2;
                                            c1 = c1 - 2;
                                            result = 1LL;
                                        }
                                    }
                                    c15 = LODWORD(result) == 1; c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
                                    result = LODWORD(result) - 1;
                                    while (1) {
                                        a1 = LODWORD(c8 - 1); c15 = !LODWORD(result); c16 = LOBYTE(LODWORD(result) < 0);
                                        if (LODWORD(result) != 0) {
                                            a2 = a1; a1 = c8; c8 = a1;
                                        } else {
                                            if (!a1) {
                                                break;
                                            } else {
                                                c15 = c8 == 2; c16 = LOBYTE(c8 < 2); c13 = (_DWORD)c8 < (_DWORD)2;
                                                c8 = c8 - 2;
                                                result = 1LL;
                                            }
                                        }
                                        a2 = LODWORD(result - 1); v_4 = c1; v35 = f_ackermann(a1, a2);
                                        c8 = *(_DWORD *)(c4 + 8LL); c1 = v_4; c15 = !c8;
                                        c16 = LOBYTE(c8 < 0); c13 = 0; c17 = 0;
                                        if (c8 == 0) {
                                            goto label_37;
                                        }
                                    }
                                    result = LODWORD(1LL) + 1; c15 = !c1; c16 = LOBYTE(c1 < 0);
                                    c13 = 0; c17 = 0;
                                    if (c1 != 0) {
                                        continue;
                                    } else {
                                        break;
                                    }
                                label_37:;
                                    result = LODWORD(v35) + 1; c15 = !c1; c16 = LOBYTE(c1 < 0);
                                    c13 = 0; c17 = 0;
                                    if (c1 == 0) {
                                        break;
                                    }
                                }
                                result = LODWORD(result) + 1; c15 = !c3; c16 = LOBYTE(c3 < 0);
                                c13 = 0; c17 = 0;
                                if (c3 != 0) {
                                    continue;
                                } else {
                                    break;
                                }
                            label_47:;
                                result = LODWORD(1LL) + 1; c15 = !c3; c16 = LOBYTE(c3 < 0);
                                c13 = 0; c17 = 0;
                                if (c3 == 0) {
                                    break;
                                }
                            }
                            result = LODWORD(result) + 1; c15 = !c12; c16 = LOBYTE(c12 < 0);
                            c13 = 0; c17 = 0;
                            if (c12 != 0) {
                                continue;
                            } else {
                                break;
                            }
                        label_48:;
                            result = LODWORD(1LL) + 1; c15 = !c12; c16 = LOBYTE(c12 < 0);
                            c13 = 0; c17 = 0;
                            if (c12 == 0) {
                                break;
                            }
                        }
                        result = LODWORD(result) + 1; c15 = !c11; c16 = LOBYTE(c11 < 0);
                        c13 = 0; c17 = 0;
                        if (c11 != 0) {
                            continue;
                        } else {
                            break;
                        }
                    label_49:;
                        result = LODWORD(1LL) + 1; c15 = !c11; c16 = LOBYTE(c11 < 0);
                        c13 = 0; c17 = 0;
                        if (c11 == 0) {
                            break;
                        }
                    }
                    result = LODWORD(result) + 1; c15 = !c10; c16 = LOBYTE(c10 < 0);
                    c13 = 0; c17 = 0;
                    if (c10 != 0) {
                        continue;
                    } else {
                        break;
                    }
                label_50:;
                    result = LODWORD(1LL) + 1; c15 = !c10; c16 = LOBYTE(c10 < 0);
                    c13 = 0; c17 = 0;
                    if (c10 == 0) {
                        break;
                    }
                }
                result = LODWORD(result) + 1; c15 = !c9; c16 = LOBYTE(c9 < 0);
                c13 = 0; c17 = 0;
                if (c9 != 0) {
                    continue;
                } else {
                    break;
                }
            label_51:;
                result = LODWORD(1LL) + 1; c15 = !c9; c16 = LOBYTE(c9 < 0);
                c13 = 0; c17 = 0;
                if (c9 == 0) {
                    break;
                }
            }
            result = LODWORD(result) + 1; c15 = !c5; c16 = LOBYTE(c5 < 0);
            c13 = 0; c17 = 0;
            if (c5 != 0) {
                continue;
            } else {
                break;
            }
        label_52:;
            result = LODWORD(1LL) + 1; c15 = !c5; c16 = LOBYTE(c5 < 0);
            c13 = 0; c17 = 0;
            if (c5 == 0) {
                break;
            }
        }
        c2 = *(_DWORD *)(c4 + 0xcLL); result = LODWORD(result) + 1; c15 = !c2;
        c16 = LOBYTE(c2 < 0); c13 = 0; c17 = 0;
        if (c2 != 0) {
            continue;
        } else {
            break;
        }
    label_53:;
        c2 = *(_DWORD *)(c4 + 0xcLL); result = LODWORD(1LL) + 1;
        if (c2 == 0) {
            break;
        }
    }
    return LODWORD(result) + 1;
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
    __int64 v33; // rax
    _QWORD v30; // rax
    _QWORD c2; // rdx
    _QWORD c4; // rsi
    _QWORD c6; // r8
    __int64 c7; // r9
    _DWORD v17; // temp
    _DWORD v18; // temp
    _DWORD v21; // temp
    _BOOL c10 = !(LOBYTE(a1) & 1); // ZF
    char c11 = (LOBYTE(a1) & 1) < '\0'; // SF
    char c8 = 0; // CF
    char c12 = 0; // OF
    if (!(LOBYTE(a1) & 1)) {
        c2 = 1LL;
    } else {
        c2 = 2LL; c10 = a1 == 1; c11 = LOBYTE(a1 < 1);
        c8 = (_DWORD)a1 < (_DWORD)1;
        a1 = a1 - 1;
        if (a1 == 1) {
            return 2;
        }
    }
    a1 = a1 >> 1; result = a1; c10 = !(LOBYTE(a1) & 1);
    c11 = (LOBYTE(a1) & 1) < '\0'; c8 = 0; c12 = 0;
    if (!(LOBYTE(a1) & 1)) {
        c4 = 1LL;
    } else {
        c4 = 2LL; c10 = result == 1; c11 = LOBYTE(result < 1);
        c8 = (_DWORD)result < (_DWORD)1;
        result = a1 - 1;
        if (result == 1) {
            result = LODWORD(2LL) * LODWORD(2LL); return result * LODWORD(c2);
        }
    }
    result = result >> 1;
    __int64 c1 = result; // rcx
    c10 = !(LOBYTE(result) & 1); c11 = (LOBYTE(result) & 1) < '\0'; c8 = 0;
    c12 = 0;
    if (!(LOBYTE(result) & 1)) {
        c6 = 1LL;
    } else {
        c10 = result == 1; c11 = LOBYTE(result < 1); c8 = (_DWORD)result < (_DWORD)1;
        c6 = 2LL;
        c1 = result - 1; result = 2LL;
        if (result == 1) {
            v17 = result * result; result = v17; v17 = LODWORD(c4);
            v18 = result * v17; result = v18; result = result * result;
            v18 = result * LODWORD(c2); result = result * LODWORD(c2); return 0;
        }
    }
    c1 = c1 >> 1; a1 = c1; c10 = !(LOBYTE(c1) & 1);
    c11 = (LOBYTE(c1) & 1) < '\0'; c8 = 0; c12 = 0;
    if (!(LOBYTE(c1) & 1)) {
        c7 = 1LL;
    } else {
        c1 = c1 - 1;
        c7 = 2LL; a1 = c1;
        if (c1 == 1) {
            result = LODWORD(2LL) * LODWORD(2LL); result = result * LODWORD(c6);
            v17 = result * result; result = v17; v17 = LODWORD(c4);
            v18 = result * v17; result = v18; v30 = v18 * v18;
            return 0;
        }
    }
    *(_DWORD *)(buf_0 + 12) = LODWORD(c2); *(_DWORD *)(buf_0 + 8) = LODWORD(c4); *(_DWORD *)(buf_0 + 4) = LODWORD(c6);
    *(_DWORD *)buf_0 = LODWORD(c7); v33 = f_rec_power_constprop_0(a1 >> 1); v17 = *(_DWORD *)(buf_0 + 4);
    v18 = *(_DWORD *)(buf_0 + 8);
    result = v33 * v33; v21 = *(_DWORD *)(buf_0 + 12);
    result = result * *(_DWORD *)buf_0; result = result * result * v17; result = result * result * v18;
    return result * result * v21;
}
