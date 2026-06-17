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
// Minimal executable semantics for the SSE vector helpers emitted below.
static inline unsigned int __unlace_vec_u32(unsigned __int128 v, unsigned int lane) { return (unsigned int)(v >> (lane * 32)); }
static inline unsigned long long __unlace_vec_u64(unsigned __int128 v, unsigned int lane) { return (unsigned long long)(v >> (lane * 64)); }
static inline unsigned __int128 _mm_add_epi32(unsigned __int128 a, unsigned __int128 b) { unsigned __int128 out = 0; for (unsigned int i = 0; i < 4; i++) out |= (unsigned __int128)(__unlace_vec_u32(a, i) + __unlace_vec_u32(b, i)) << (i * 32); return out; }
static inline unsigned __int128 _mm_mul_epu32(unsigned __int128 a, unsigned __int128 b) { unsigned long long lo = (unsigned long long)__unlace_vec_u32(a, 0) * __unlace_vec_u32(b, 0); unsigned long long hi = (unsigned long long)__unlace_vec_u32(a, 2) * __unlace_vec_u32(b, 2); return (unsigned __int128)lo | ((unsigned __int128)hi << 64); }
static inline unsigned __int128 _mm_shuffle_epi32(unsigned __int128 a, unsigned int imm) { unsigned __int128 out = 0; for (unsigned int i = 0; i < 4; i++) out |= (unsigned __int128)__unlace_vec_u32(a, (imm >> (i * 2)) & 3u) << (i * 32); return out; }
static inline unsigned __int128 __unlace_psrldq(unsigned __int128 a, unsigned int imm) { return imm >= 16 ? 0 : a >> (imm * 8); }
static inline unsigned __int128 __unlace_psrlq(unsigned __int128 a, unsigned int imm) { unsigned __int128 out = 0; for (unsigned int i = 0; i < 2; i++) { unsigned long long lane = __unlace_vec_u64(a, i); lane = imm >= 64 ? 0 : lane >> imm; out |= (unsigned __int128)lane << (i * 64); } return out; }
static inline unsigned __int128 __unlace_punpckldq(unsigned __int128 a, unsigned __int128 b) { return (unsigned __int128)__unlace_vec_u32(a, 0) | ((unsigned __int128)__unlace_vec_u32(b, 0) << 32) | ((unsigned __int128)__unlace_vec_u32(a, 1) << 64) | ((unsigned __int128)__unlace_vec_u32(b, 1) << 96); }
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
int sub_1560(void);
void sub_14b0(void);

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    void * field_8;
};
struct __anon1 {
    __int64 field_0;
    __int64 field_16;
    __int64 field_32;
};

/* Function:   main | Address: 0x1060 | Size: 0x40d (1037 bytes) | Convention: System V AMD64 | Stack frame: 0x58 (88 bytes) | Xrefs to:   __stack_chk_fail, f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
int main(void) {
    char buf[64]; // int buf[16]
    _QWORD c0; // rax
    __int64 v769; // rax
    __int64 v770; // rax
    __int64 v771; // rax
    _QWORD c3; // rbx
    _QWORD a2; // rsi
    __int64 a1; // rdi
    _QWORD c8; // r10
    _DWORD v28; // temp
    int v29; // temp
    int v57; // temp
    __int64 v151; // temp
    __int64 v215; // temp
    __int64 v285; // temp
    __int64 v299; // temp
    int v432; // temp
    int v442; // temp
    __int64 c2 = 0xaLL; // rdx
    _BOOL c11 = !(__builtin_popcount(LOBYTE(0)) & 1); // PF
    __int64 c1 = 0LL; // rcx
    __int128 c15 = (((unsigned __int128)0x900000006ULL << 64) | 0x300000000ULL); // xmm0
    char c12 = 1; // ZF
    char c13 = LOBYTE(0); // SF
    char c10 = 0; // CF
    char c14 = 0; // OF
    c11 = c11; c0 = 1LL; *(_OWORD *)buf = c15;
    c15 = (((unsigned __int128)0x1500000012ULL << 64) | 0xf0000000cULL); *(_OWORD *)(buf + 16) = c15; c15 = (((unsigned __int128)0x210000001eULL << 64) | 0x1b00000018ULL);
    *(_OWORD *)(buf + 32) = c15; c15 = (((unsigned __int128)0x2d0000002aULL << 64) | 0x2700000024ULL); *(_OWORD *)(buf + 48) = c15;
    do {
        v28 = LODWORD(c0); a2 = LODWORD(c0); v29 = LODWORD(c0);
        c0 = a2 + c1;
        c1 = a2;
        c12 = c2 == 1;
        c13 = LOBYTE(c2 < 1); c10 = (_DWORD)c2 < (_DWORD)1; c14 = __OFSUB__(c2, 1);
        c11 = !(__builtin_popcount(LOBYTE(c2 - 1)) & 1); c2 = c2 - 1;
    } while (c2 != 0);
    int v46 = a2; // temp
    v28 = a2 + 0x38e; c12 = c1 == -910; c13 = LOBYTE(a2 + 0x38e < 0);
    c10 = (c1 + 0x38e) < c1; c14 = __OFADD__(c1, 0x38e); c11 = !(__builtin_popcount(LOBYTE(a2 + 0x38e)) & 1);
    c1 = a2 + 0x38e; c2 = 0x24LL; c0 = 0x30LL;
    do {
        a2 = c2;
        c2 = LODWORD(c0) % a2;
        c0 = a2;
        v57 = c2; c12 = !c2;
        c13 = LOBYTE(c2 < 0); c10 = 0; c14 = 0;
        c11 = !(__builtin_popcount(LOBYTE(v57)) & 1);
    } while (v57 != 0);
    v46 = c1; v28 = a2; v29 = c1 + a2;
    c12 = c1 + a2 == 0; c13 = LOBYTE(c1 + a2 < 0); c10 = (c1 + c0) < c1;
    c14 = __OFADD__(c1, c0); c11 = !(__builtin_popcount(LOBYTE(c1 + a2)) & 1); c0 = 0x1bLL;
    while (1) {
        int v85 = LODWORD(c0); // temp
        c8 = LODWORD(c0);
        int v87 = c8 & 1; // temp
        c8 = c8 & 1;
        if (v87 != 0) {
            int v69 = LODWORD(c0 + (c0 << 1LL) + 1LL); // temp
            c2 = c2 + 2;
            c12 = v69 >> 1 == 0;
            c13 = LOBYTE(v69 >> 1 < 0); c10 = 0; c14 = 0;
            c11 = !(__builtin_popcount(LOBYTE(v69 >> 1)) & 1); c0 = v69 >> 1; continue;
        } else {
            c0 = v85 >> 1;
            c2 = c2 + 1;
            c12 = c0 == 1;
            c13 = LOBYTE(c0 < 1); c10 = (_DWORD)c0 < (_DWORD)1; c14 = __OFSUB__(c0, 1);
            c11 = !(__builtin_popcount(LOBYTE((v85 >> 1) - 1)) & 1);
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
        int v117 = LODWORD(c0); // temp
        int v118 = LODWORD(c0); // temp
        c0 = (_DWORD)v118 >> 1;
        a1 = v117 & 1;
        a2 = a2 + (v117 & 1);
        c12 = c2 == 1;
        c13 = LOBYTE(c2 < 1); c10 = (_DWORD)c2 < (_DWORD)1; c14 = __OFSUB__(c2, 1);
        c11 = !(__builtin_popcount(LOBYTE(c2 - 1)) & 1); c2 = c2 - 1;
    } while (c2 != 0);
    c1 = LODWORD(a2 + c1 + 0x46LL);
    __int64 c7 = (uintptr_t)buf; // r9
    __int64 v8 = (uintptr_t)(buf + 64); // r8
    c0 = (uintptr_t)buf; c15 = 0;
    do {
        _OWORD v150 = *(_OWORD *)(c0); // temp
        c15 = _mm_add_epi32(c15, v150); v151 = c0 + 0x10LL;
        c0 = c0 + 0x10LL;
        c12 = (uintptr_t)(buf + 64) == v151;
        c13 = LOBYTE((uintptr_t)(buf + 64) < v151); c10 = (_QWORD)(uintptr_t)(buf + 64) < (_QWORD)c0; c14 = __OFSUB__((uintptr_t)(buf + 64), c0);
        c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf + 64) - v151)) & 1);
    } while ((uintptr_t)(buf + 64) != c0);
    __int128 c16 = c15; // xmm1
    a1 = (uintptr_t)(buf + 4); c0 = 0LL;
    c16 = __unlace_psrldq(c15, 8);
    __int64 c9 = (uintptr_t)(buf + 64) - (uintptr_t)(buf + 4); // r11
    a2 = (uintptr_t)(buf + 4); c15 = _mm_add_epi32(c15, c16); c16 = c15;
    c16 = __unlace_psrldq(c15, 4); c15 = _mm_add_epi32(c15, c16); c2 = LODWORD(c15) + c1;
    v46 = c9 & 4; c12 = !v46; c13 = LOBYTE((c9 & 4) < 0);
    c10 = 0; c14 = 0; c11 = !(__builtin_popcount(LOBYTE(c9 & 4)) & 1);
    c9 = c9 & 4; c1 = (uintptr_t)(buf + 4);
    if (!v46) {
        goto label_23;
    } else {
        a2 = *(_DWORD *)(buf + 4);
        c0 = LODWORD(0LL) < a2 ? a2 : LODWORD(0LL);
        a2 = (uintptr_t)(buf + 8);
        c12 = (uintptr_t)(buf + 64) == (uintptr_t)(buf + 8);
        c13 = LOBYTE((uintptr_t)(buf + 64) < (uintptr_t)(buf + 8)); c10 = (_QWORD)(uintptr_t)(buf + 64) < (_QWORD)(uintptr_t)(buf + 8); c14 = __OFSUB__((uintptr_t)(buf + 64), (uintptr_t)(buf + 8));
        c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf + 64) - (uintptr_t)(buf + 8))) & 1);
        if ((uintptr_t)(buf + 64) != (uintptr_t)(buf + 8)) {
            do {
                _DWORD v188 = *(_DWORD *)(a2); // temp
                c9 = v188;
                _DWORD v202 = *(_DWORD *)(a2 + 4LL); // temp
                c9 = v202;
                c0 = (LODWORD(c0) < c9 ? c9 : LODWORD(c0)) < c9 ? c9 : LODWORD(c0) < c9 ? c9 : LODWORD(c0); v215 = a2 + 8LL;
                a2 = a2 + 8LL;
                c12 = (uintptr_t)(buf + 64) == v215;
                c13 = LOBYTE((uintptr_t)(buf + 64) < v215); c10 = (_QWORD)(uintptr_t)(buf + 64) < (_QWORD)a2; c14 = __OFSUB__((uintptr_t)(buf + 64), a2);
                c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf + 64) - v215)) & 1);
            } while ((uintptr_t)(buf + 64) != a2);
        }
        v29 = LODWORD(c0) + c2; c0 = LODWORD(c0) + c2; c2 = 0LL;
        v46 = LODWORD((uintptr_t)(buf + 64) - (uintptr_t)(buf + 4)) & 4; c12 = !v46; c13 = LOBYTE((LODWORD((uintptr_t)(buf + 64) - (uintptr_t)(buf + 4)) & 4) < 0);
        c10 = 0; c14 = 0; c11 = !(__builtin_popcount(LOBYTE(LODWORD((uintptr_t)(buf + 64) - (uintptr_t)(buf + 4)) & 4)) & 1);
        a2 = LODWORD((uintptr_t)(buf + 64) - (uintptr_t)(buf + 4)) & 4;
        if (!v46) {
            goto label_22;
        } else {
            c1 = *(_DWORD *)(buf + 4);
            c2 = LODWORD(0LL) != c1 && c1 <= LODWORD(0LL) ? c1 : LODWORD(0LL);
            c1 = (uintptr_t)(buf + 8);
            c12 = (uintptr_t)(buf + 64) == (uintptr_t)(buf + 8);
            c13 = LOBYTE((uintptr_t)(buf + 64) < (uintptr_t)(buf + 8)); c10 = (_QWORD)(uintptr_t)(buf + 64) < (_QWORD)(uintptr_t)(buf + 8); c14 = __OFSUB__((uintptr_t)(buf + 64), (uintptr_t)(buf + 8));
            c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf + 64) - (uintptr_t)(buf + 8))) & 1);
            if ((uintptr_t)(buf + 64) != (uintptr_t)(buf + 8)) {
                do {
                    _DWORD v252 = *(_DWORD *)(c1); // temp
                    a2 = v252;
                    c2 = c2 != a2 && a2 <= c2 ? a2 : c2;
                    _DWORD v269 = *(_DWORD *)(c1 + 4LL); // temp
                    a2 = v269;
                    c2 = c2 != a2 && a2 <= c2 ? a2 : c2; v285 = c1 + 8LL;
                    c1 = c1 + 8LL;
                    c12 = (uintptr_t)(buf + 64) == v285;
                    c13 = LOBYTE((uintptr_t)(buf + 64) < v285); c10 = (_QWORD)(uintptr_t)(buf + 64) < (_QWORD)c1; c14 = __OFSUB__((uintptr_t)(buf + 64), c1);
                    c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf + 64) - v285)) & 1);
                } while ((uintptr_t)(buf + 64) != c1);
            }
            v28 = c2;
            c12 = c2 + v29 == 0; c13 = LOBYTE(c2 + v29 < 0); c10 = (c2 + c0) < c2;
            c14 = __OFADD__(c2, c0); c11 = !(__builtin_popcount(LOBYTE(c2 + v29)) & 1);
            __int128 c17 = 0; // xmm2
            c0 = (uintptr_t)buf;
            do {
                _OWORD v298 = *(_OWORD *)(c0); // temp
                c15 = v298; v299 = c0 + 0x10LL;
                c0 = c0 + 0x10LL; c16 = c15; c16 = _mm_mul_epu32(c15, c15);
                c15 = __unlace_psrlq(c15, 0x20); c15 = _mm_mul_epu32(c15, c15); c16 = _mm_shuffle_epi32(c16, 8);
                c15 = _mm_shuffle_epi32(c15, 8); c16 = __unlace_punpckldq(c16, c15); c17 = _mm_add_epi32(c17, c16);
                c12 = (uintptr_t)(buf + 64) == v299;
                c13 = LOBYTE((uintptr_t)(buf + 64) < v299); c10 = (_QWORD)(uintptr_t)(buf + 64) < (_QWORD)c0; c14 = __OFSUB__((uintptr_t)(buf + 64), c0);
                c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf + 64) - v299)) & 1);
            } while ((uintptr_t)(buf + 64) != c0);
            c15 = c17; c0 = 0LL; c15 = __unlace_psrldq(c17, 8);
            c17 = _mm_add_epi32(c17, c15); c15 = c17; c15 = __unlace_psrldq(c17, 4);
            c17 = _mm_add_epi32(c17, c15); c1 = LODWORD(c17) + c2 + v29; c2 = (uintptr_t)buf;
            v28 = *(_DWORD *)buf; c12 = v28 == 0xf;
            c13 = LOBYTE(*(_DWORD *)buf < 0xf); c10 = (_DWORD)*(_DWORD *)buf < (_DWORD)0xf;
            c14 = __OFSUB__(*(_DWORD *)buf, 0xf);
            c11 = !(__builtin_popcount(LOBYTE(*(_DWORD *)buf - 0xf)) & 1);
            if (v28 == 0xf) {
                goto label_4;
            } else {
            }
        label_2:;
            int v312 = LODWORD(c0); // temp
            c0 = LODWORD(c0) + 1;
            c2 = c2 + 4LL;
            c12 = c0 == 0x10;
            c13 = LOBYTE(c0 < 0x10); c10 = (_DWORD)c0 < (_DWORD)0x10; c14 = __OFSUB__(c0, 0x10);
            c11 = !(__builtin_popcount(LOBYTE(v312 - 15)) & 1);
            if (c0 != 0x10) {
            } else {
                c0 = 0xffffffffLL;
            }
            v28 = *(_DWORD *)(c2); c12 = v28 == 0xf;
            c13 = LOBYTE(v28 < 0xf);
            c10 = (_DWORD)v28 < (_DWORD)0xf; c14 = __OFSUB__(v28, 0xf);
            c11 = !(__builtin_popcount(LOBYTE(v28 - 0xf)) & 1);
            if (v28 == 0xf) {
                goto label_4;
            } else {
                goto label_2;
            }
        label_4:;
            a2 = 2LL;
            c9 = LODWORD(c0 + c1 + 0x581LL); c1 = 2LL;
            c12 = LODWORD(2LL) == 3;
            c13 = LOBYTE(LODWORD(2LL) < 3); c10 = (_DWORD)LODWORD(2LL) < (_DWORD)3; c14 = __OFSUB__(LODWORD(2LL), 3);
            c11 = !(__builtin_popcount(LOBYTE(LODWORD(2LL) - 3)) & 1);
            _BOOL cond_69 = LODWORD(2LL) != 3; // temp
            _BOOL cond_71 = 3 <= LODWORD(2LL); // temp
            if (!(cond_69 && cond_71)) {
                goto label_7;
            }
        label_5:;
            c0 = a2;
            while (1) {
                c0 = a2 / c1; c2 = a2 % c1;
                int v381 = c2; // temp
                c12 = !c2;
                c13 = LOBYTE(c2 < 0);
                c11 = !(__builtin_popcount(LOBYTE(v381)) & 1);
                if (v381 != 0) {
                    c1 = c1 + 1;
                    c0 = c1 * c1;
                    c12 = c0 == a2;
                    c13 = LOBYTE(c0 < a2); c10 = (_DWORD)c0 < (_DWORD)a2; c14 = __OFSUB__(c0, a2);
                    c11 = !(__builtin_popcount(LOBYTE(c0 - a2)) & 1);
                    _BOOL cond_75 = c0 != a2; // temp
                    _BOOL cond_77 = a2 <= c0; // temp
                    if (cond_75 && cond_77) {
                        goto label_7;
                    } else {
                        continue;
                    }
                } else {
                    break;
                }
            }
        label_8:;
            a2 = a2 + 1; c1 = 2LL;
            c12 = a2 == 3;
            c13 = LOBYTE(a2 < 3); c10 = (_DWORD)a2 < (_DWORD)3; c14 = __OFSUB__(a2, 3);
            c11 = !(__builtin_popcount(LOBYTE(a2 - 3)) & 1);
            _BOOL cond_83 = a2 != 3; // temp
            _BOOL cond_85 = 3 <= a2; // temp
            if (cond_83 && cond_85) {
                goto label_5;
            } else {
            }
        label_7:;
            c8 = c8 + 1;
            int v415 = c8; // temp
            c12 = c8 == 0xa;
            c13 = LOBYTE(c8 < 0xa); c10 = (_DWORD)c8 < (_DWORD)0xa; c14 = __OFSUB__(c8, 0xa);
            c11 = !(__builtin_popcount(LOBYTE(c8 - 0xa)) & 1);
            if (v415 != 0xa) {
                goto label_8;
            } else {
                goto label_9;
            }
        label_9:;
            c12 = c9 + a2 == 0;
            c13 = LOBYTE(c9 + a2 < 0); c10 = (c9 + a2) < c9; c14 = __OFADD__(c9, a2);
            c11 = !(__builtin_popcount(LOBYTE(c9 + a2)) & 1); c9 = c9 + a2; c1 = 0x12LL;
            c3 = 0xcLL;
            do {
                int v431 = LODWORD(c3); // temp
                v432 = c1; c3 = c1;
                int v433 = v431; // temp
                c0 = v433 / c1; c2 = v433 % c1;
                c1 = c2;
                v442 = c2 & c2; c12 = !(c2 & c2);
                c13 = LOBYTE((c2 & c2) < 0); c10 = 0; c14 = 0;
                c11 = !(__builtin_popcount(LOBYTE(c2 & c2)) & 1);
            } while (v442 != 0);
            c12 = 1;
            c13 = LOBYTE(0); c10 = 0; c14 = 0;
            c11 = c11; a2 = 0LL;
            c0 = LODWORD(0xd8LL) / v432; c2 = LODWORD(0xd8LL) % v432;
            c8 = LODWORD(c0 + c9 - 1218664206);
            while (1) {
                _DWORD v507 = *(_DWORD *)(c7); // temp
                c2 = v507;
                c0 = v507 * 0x66666667LL;
                int v510 = c2; // temp
                int v526 = LODWORD(c0 >> 0x21); // temp
                c0 = v526 - (c2 >> 0x1f);
                int v536 = LODWORD(c0 + (c0 << 2LL)); // temp
                c7 = LODWORD(c0 + (c0 << 2LL));
                c0 = c2 - v536;
                c12 = c0 == 2;
                char v549 = LOBYTE(c0 < 2); // temp
                c14 = __OFSUB__(c0, 2);
                if (c0 == 2) {
                    c12 = c2 == 5;
                    c13 = LOBYTE(c2 < 5); c10 = (_DWORD)c2 < (_DWORD)5; c14 = __OFSUB__(c2, 5);
                    c11 = !(__builtin_popcount(LOBYTE(c2 - 5)) & 1); c2 = c2 - 5;
                } else {
                    _BOOL cond_105 = v549 ^ c14; // temp
                    if (c12 || cond_105) {
                        int v469 = c0 & c0; // temp
                        c12 = !v469;
                        c13 = LOBYTE((c0 & c0) < 0); c10 = 0; c14 = 0;
                        c11 = !(__builtin_popcount(LOBYTE(c0 & c0)) & 1);
                        if (!v469) {
                            c12 = v510 + v510 == 0;
                            c13 = LOBYTE(v510 + v510 < 0); c10 = (v510 + v510) < v510;
                            c11 = !(__builtin_popcount(LOBYTE(v510 + v510)) & 1); c2 = v510 + v510;
                        } else {
                            int v476 = LODWORD(c2 + 0xaLL); // temp
                            c7 = LODWORD(c2 + 0xaLL);
                            c12 = c0 == 1;
                            c13 = LOBYTE(c0 < 1); c10 = (_DWORD)c0 < (_DWORD)1;
                            c11 = !(__builtin_popcount(LOBYTE(c0 - 1)) & 1);
                            c2 = c12 ? v476 : c2;
                        }
                        goto label_11;
                    } else {
                        c2 = c0 == 3 ? -v510 : v510; c7 = a1;
                        a2 = a2 + c2;
                        c12 = (uintptr_t)(buf + 64) == a1;
                        c13 = LOBYTE((uintptr_t)(buf + 64) < a1); c10 = (_QWORD)(uintptr_t)(buf + 64) < (_QWORD)a1;
                        c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf + 64) - a1)) & 1);
                        if ((uintptr_t)(buf + 64) != a1) {
                            c12 = a1 == -4LL;
                            c13 = LOBYTE(a1 + 4LL < 0LL); c10 = (a1 + 4LL) < a1;
                            c11 = !(__builtin_popcount(LOBYTE(a1 + 4LL)) & 1); a1 = a1 + 4LL;
                            continue;
                        } else {
                            break;
                        }
                    }
                }
            label_11:;
                a2 = a2 + c2; c7 = a1;
                c12 = (uintptr_t)(buf + 64) == a1;
                c13 = LOBYTE((uintptr_t)(buf + 64) < a1); c10 = (_QWORD)(uintptr_t)(buf + 64) < (_QWORD)a1;
                c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf + 64) - a1)) & 1);
                if ((uintptr_t)(buf + 64) == a1) {
                    break;
                } else {
                    c12 = a1 == -4LL;
                    c13 = LOBYTE(a1 + 4LL < 0LL); c10 = (a1 + 4LL) < a1;
                    c11 = !(__builtin_popcount(LOBYTE(a1 + 4LL)) & 1); a1 = a1 + 4LL;
                    continue;
                }
            }
            c2 = LODWORD(c8 + a2); c12 = 1;
            c13 = LOBYTE(0); c10 = 0; c14 = 0;
            c11 = c11; c0 = 0LL;
            while (1) {
                c12 = LODWORD(c0) == 9;
                c13 = LOBYTE(LODWORD(c0) < 9); c10 = (_DWORD)LODWORD(c0) < (_DWORD)9;
                _BOOL cond_113 = LODWORD(c0) != 9; // temp
                _BOOL cond_115 = 9 <= LODWORD(c0); // temp
                if (cond_113 && cond_115) {
                    c1 = LODWORD(c1 + c0 - 10);
                    c0 = LODWORD(c0) + 1;
                    c12 = c0 == 0x14;
                    c13 = LOBYTE(c0 < 0x14); c10 = (_DWORD)c0 < (_DWORD)0x14;
                    if (c0 != 0x14) {
                        continue;
                    } else {
                        break;
                    }
                } else {
                    int v607 = LODWORD(c0); // temp
                    if (v607 <= 4) {
                        a2 = LODWORD(c0 + (c0 << 1LL));
                        c0 = LODWORD(c0) + 1;
                        c12 = c1 + a2 == 0;
                        c13 = LOBYTE(c1 + a2 < 0); c10 = (c1 + a2) < c1;
                        c1 = c1 + a2; continue;
                    } else {
                        c1 = LODWORD(c1 + c0 + 0x14LL);
                        c0 = v607 + 1;
                        c12 = c0 == 9;
                        c13 = LOBYTE(c0 < 9);
                    }
                }
            }
            a2 = LODWORD(c2 + c1 + 0x12dLL); c1 = 0x24LL;
            int v661 = LODWORD(0x30LL); // temp
            c0 = LODWORD(0x30LL) / 0x24LL; c2 = v661 % 0x24LL;
            int v667 = c2; // temp
            if (v667 == 0) {
                goto label_20;
            }
            c1 = c2;
            a1 = a1 + 4LL;
        label_20:;
            c3 = LODWORD(a2 + c1 + 3LL); v769 = f_rec_fib(8LL);
            v770 = f_rec_power_constprop_0(8LL); a2 = 3LL; a1 = 2LL;
            c8 = LODWORD(v769 + c3) + LODWORD(v770); v771 = f_ackermann(a1, a2);
            int v689 = LODWORD(c8 + v771 + 0xabe0cLL); // temp
            int v690 = LODWORD(c8 + v771 + 0xabe0cLL); // temp
            c2 = (_DWORD)v689 >> 0x1f >> 0x18;
            return LODWORD((_QWORD)(LOBYTE(v690 + c2))) - c2;
        }
    }
label_22:;
label_23:;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    __int64 field_8;
};

/* Function:   _start | Address: 0x1480 | Size: 0x20 (32 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs from: unknown */
void _start(void) {
    __int64 v_8;
    __int64 v_0;
    _QWORD pfn; // temp
        v_8 = (uintptr_t)&v_0; pfn = qword_3FD8;
    ((__int64 (*)())pfn)(); __builtin_trap(); return;
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
    int v_4;
    int v_12;
    int v_16;
    int v_20;
    int v_24;
    int v_28;
    int v_32;
    int v_36;
    int v_40;
    int v_44;
    __int64 v_0;
    _QWORD result; // rax
    __int64 v621; // rax
    _QWORD saved_rbp; // rbx
    _QWORD c10; // r10
    _QWORD c12; // r12
    _QWORD c13; // r13
    _QWORD c15; // r15
    if (a1 <= 1) {
        return a1;
    } else {
        _BOOL c17 = !(__builtin_popcount(LOBYTE(0)) & 1); // PF
        __int64 c14 = 0LL; // r14
        _QWORD c5 = LODWORD(a1 - 2); // rbp
        __int64 v29 = (uintptr_t)&v_0 - 8LL; // temp
        saved_rbp = (uintptr_t)&v_0;
        _BOOL c18 = (uintptr_t)&v_0 == 0x38LL; // ZF
        char c19 = LOBYTE((uintptr_t)&v_0 < 0x38LL); // SF
        _BOOL c16 = (_QWORD)(uintptr_t)&v_0 < (_QWORD)0x38LL; // CF
        _BOOL c20 = __OFSUB__((uintptr_t)&v_0, 0x38LL); // OF
        c17 = !(__builtin_popcount(LOBYTE((uintptr_t)&v_0 - 0x38LL)) & 1);
        while (1) {
            c12 = LODWORD(saved_rbp - 2);
            int v35 = LODWORD(saved_rbp); // temp
            c18 = LODWORD(saved_rbp) == 1;
            c19 = LOBYTE(LODWORD(saved_rbp) < 1); c16 = (_DWORD)LODWORD(saved_rbp) < (_DWORD)1;
            c17 = !(__builtin_popcount(LOBYTE(LODWORD(saved_rbp) - 1)) & 1);
            if (v35 <= 1) {
            } else {
                c15 = LODWORD(saved_rbp);
                result = LODWORD(c14); c18 = 1;
                c19 = LOBYTE(0); c16 = 0; c20 = 0;
                c17 = c17; saved_rbp = 0LL;
                while (1) {
                    c5 = LODWORD(c12 - 2);
                    int v53 = LODWORD(c12); // temp
                    c18 = LODWORD(c12) == 1;
                    c19 = LOBYTE(LODWORD(c12) < 1); c16 = (_DWORD)LODWORD(c12) < (_DWORD)1;
                    c17 = !(__builtin_popcount(LOBYTE(LODWORD(c12) - 1)) & 1);
                    if (v53 <= 1) {
                    label_1:;
                        saved_rbp = LODWORD(saved_rbp) + LODWORD(c12);
                        int v537 = LODWORD(c12) & LODWORD(c12); // temp
                        if (v537 != 0) {
                            c18 = 1;
                            c19 = LOBYTE(0); c16 = 0; c20 = 0;
                            c17 = c17; c12 = 0LL; continue;
                        } else {
                            c14 = LODWORD(result + saved_rbp + 1LL);
                            int v548 = LODWORD(c15 - 1); // temp
                            saved_rbp = LODWORD(c15 - 1);
                            c12 = LODWORD(saved_rbp - 2);
                            c18 = saved_rbp == 1;
                            c19 = LOBYTE(saved_rbp < 1); c16 = (_DWORD)saved_rbp < (_DWORD)1;
                            c17 = !(__builtin_popcount(LOBYTE(v548 - 1)) & 1);
                            _BOOL cond_89 = saved_rbp != 1; // temp
                            _BOOL cond_91 = 1 <= saved_rbp; // temp
                            if (cond_89 && cond_91) {
                                c15 = LODWORD(saved_rbp); result = LODWORD(c14); c19 = LOBYTE(0);
                                c17 = c17;
                                v_12 = LODWORD(saved_rbp);
                                c13 = LODWORD(c12);
                                _QWORD c2 = result; // rdx
                                int v76 = LODWORD((uintptr_t)&v_0); // temp
                                c18 = LODWORD((uintptr_t)&v_0) == 1;
                                c19 = LOBYTE(LODWORD((uintptr_t)&v_0) < 1); c16 = (_DWORD)LODWORD((uintptr_t)&v_0) < (_DWORD)1;
                                c17 = !(__builtin_popcount(LOBYTE(LODWORD((uintptr_t)&v_0) - 1)) & 1);
                                if (v76 <= 1) {
                                    goto label_5;
                                } else {
                                    _QWORD c9 = LODWORD(c2); // r9
                                    _QWORD c6 = LODWORD(c12); // rsi
                                    c2 = LODWORD((uintptr_t)&v_0 - 2);
                                    _QWORD c1 = c15; // rcx
                                    c12 = LODWORD((uintptr_t)&v_0);
                                    saved_rbp = LODWORD(c2 - 2);
                                    int v98 = LODWORD(c2); // temp
                                    c18 = LODWORD(c2) == 1;
                                    c19 = LOBYTE(LODWORD(c2) < 1); c16 = (_DWORD)LODWORD(c2) < (_DWORD)1;
                                    c17 = !(__builtin_popcount(LOBYTE(LODWORD(c2) - 1)) & 1);
                                    if (v98 <= 1) {
                                        goto label_5;
                                    } else {
                                        _QWORD c11 = c9; // r11
                                        c9 = c6;
                                        c6 = LODWORD(c2);
                                        c15 = LODWORD(saved_rbp - 2);
                                        int v117 = LODWORD(saved_rbp); // temp
                                        c18 = LODWORD(saved_rbp) == 1;
                                        c19 = LOBYTE(LODWORD(saved_rbp) < 1); c16 = (_DWORD)LODWORD(saved_rbp) < (_DWORD)1;
                                        c17 = !(__builtin_popcount(LOBYTE(LODWORD(saved_rbp) - 1)) & 1);
                                        if (v117 <= 1) {
                                            continue;
                                        } else {
                                            int v126 = c15; // temp
                                            c18 = c15 == 1;
                                            c19 = LOBYTE(c15 < 1); c16 = (_DWORD)c15 < (_DWORD)1;
                                            c17 = !(__builtin_popcount(LOBYTE(c15 - 1)) & 1);
                                            if (v126 <= 1) {
                                            } else {
                                                c19 = LOBYTE(0); c17 = c17;
                                                v_0 = LODWORD(c2);
                                                result = c9;
                                                c9 = LODWORD(c15 - 2);
                                                _QWORD c8 = LODWORD(c9 - 2); // r8
                                                int v151 = c9; // temp
                                                c18 = c9 == 1;
                                                c19 = LOBYTE(c9 < 1); c16 = (_DWORD)c9 < (_DWORD)1;
                                                c17 = !(__builtin_popcount(LOBYTE(c9 - 1)) & 1);
                                                if (v151 <= 1) {
                                                } else {
                                                    a1 = c9;
                                                    c9 = c15;
                                                    c15 = LODWORD(saved_rbp);
                                                    int v165 = result; // temp
                                                    saved_rbp = result;
                                                    result = a1;
                                                    a1 = LODWORD(c8 - 2);
                                                    c18 = LODWORD(c8) == 1;
                                                    c19 = LOBYTE(LODWORD(c8) < 1); c16 = (_DWORD)LODWORD(c8) < (_DWORD)1;
                                                    c17 = !(__builtin_popcount(LOBYTE(LODWORD(c8) - 1)) & 1);
                                                    if (c16 || c18) {
                                                        goto label_5;
                                                    } else {
                                                        v_4 = c11;
                                                        c11 = result;
                                                        do {
                                                            v_44 = c11;
                                                            v_40 = c9;
                                                            v_36 = LODWORD(c8);
                                                            v_32 = LODWORD(c10);
                                                            v_28 = c6;
                                                            v_24 = LODWORD(c2);
                                                            v_20 = LODWORD(c1);
                                                            v_16 = a1; v621 = f_rec_fib(a1);
                                                            a1 = v_16;
                                                            c2 = v_24;
                                                            c6 = v_28;
                                                            a1 = a1 - 1;
                                                            c1 = v_20 + v621;
                                                            c10 = v_32;
                                                            c8 = v_36;
                                                            c18 = a1 == -1;
                                                            c19 = LOBYTE(a1 < -1); c16 = (_DWORD)a1 < (_DWORD)0xffffffffffffffffULL;
                                                            c17 = !(__builtin_popcount(LOBYTE(a1 - -1)) & 1);
                                                            c9 = v_40;
                                                            c11 = v_44;
                                                        } while (a1 != -2);
                                                        c8 = v_36 - 1;
                                                        result = c11;
                                                        c2 = LODWORD(c1 + c2 + 1LL);
                                                        c11 = v_4;
                                                        a1 = LODWORD(c8 - 2);
                                                        c1 = 0LL;
                                                        c18 = c8 == 1;
                                                        c19 = LOBYTE(c8 < 1); c16 = (_DWORD)c8 < (_DWORD)1;
                                                        c17 = !(__builtin_popcount(LOBYTE(v_36 - 1 - 1)) & 1);
                                                        _BOOL cond_31 = (_DWORD)1 <= (_DWORD)c8; // temp
                                                        _BOOL cond_32 = c8 != 1; // temp
                                                        if (!(cond_31 && cond_32)) {
                                                            goto label_10;
                                                        }
                                                    }
                                                label_10:;
                                                    c2 = LODWORD(c2) + LODWORD(c8);
                                                    int v280 = LODWORD(c8) & LODWORD(c8); // temp
                                                    if (v280 != 0) {
                                                        c18 = 1;
                                                        c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                                        c17 = c17; c8 = 0LL;
                                                    } else {
                                                        a1 = result;
                                                        result = v165;
                                                        saved_rbp = c15;
                                                        c15 = c9;
                                                        c9 = LODWORD(a1 - 1);
                                                        c10 = LODWORD(c2 + c10 + 1LL);
                                                        _DWORD v297 = *(_DWORD *)((uintptr_t)&v_0 + 8LL); // temp
                                                        c1 = v297;
                                                        c2 = 0LL;
                                                        c8 = LODWORD(c9 - 2);
                                                        c18 = c9 == 1;
                                                        c19 = LOBYTE(c9 < 1); c16 = (_DWORD)c9 < (_DWORD)1;
                                                        c17 = !(__builtin_popcount(LOBYTE(c9 - 1)) & 1);
                                                        _BOOL cond_38 = c9 != 1; // temp
                                                        _BOOL cond_40 = 1 <= c9; // temp
                                                        if (!(cond_38 && cond_40)) {
                                                            goto label_9;
                                                        }
                                                        continue;
                                                    }
                                                }
                                            label_9:;
                                                c10 = LODWORD(c10) + c9;
                                                int v326 = c9 & c9; // temp
                                                if (v326 != 0) {
                                                    c18 = 1;
                                                    c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                                    c17 = c17; c9 = 0LL;
                                                } else {
                                                    c2 = v_0;
                                                    c15 = c15 - 1;
                                                    c9 = result;
                                                    c2 = LODWORD(c2 + c10 + 1LL);
                                                    c18 = c15 == 1;
                                                    c19 = LOBYTE(c15 < 1); c16 = (_DWORD)c15 < (_DWORD)1;
                                                    c17 = !(__builtin_popcount(LOBYTE(c15 - 1)) & 1);
                                                    _BOOL cond_47 = c15 != 1; // temp
                                                    _BOOL cond_49 = 1 <= c15; // temp
                                                    if (!(cond_47 && cond_49)) {
                                                        goto label_8;
                                                    }
                                                }
                                                continue;
                                            }
                                        label_8:;
                                            c2 = LODWORD(c2) + c15;
                                            int v366 = c15 & c15; // temp
                                            if (v366 != 0) {
                                                c18 = 1;
                                                c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                                c17 = c17; c15 = 0LL;
                                            } else {
                                                saved_rbp = LODWORD(saved_rbp) - 1;
                                                c5 = LODWORD((uintptr_t)&v_0 + c2 + 1LL);
                                                c2 = 0LL;
                                                c15 = LODWORD(saved_rbp - 2);
                                                c18 = saved_rbp == 1;
                                                c19 = LOBYTE(saved_rbp < 1); c16 = (_DWORD)saved_rbp < (_DWORD)1;
                                                c17 = !(__builtin_popcount(LOBYTE(LODWORD(saved_rbp) - 1 - 1)) & 1);
                                                _BOOL cond_56 = saved_rbp != 1; // temp
                                                _BOOL cond_58 = 1 <= saved_rbp; // temp
                                                if (!(cond_56 && cond_58)) {
                                                    goto label_7;
                                                }
                                            }
                                        }
                                    label_7:;
                                        c5 = LODWORD((uintptr_t)&v_0) + LODWORD(saved_rbp);
                                        int v411 = LODWORD(saved_rbp) & LODWORD(saved_rbp); // temp
                                        if (v411 != 0) {
                                            c18 = 1;
                                            c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                            c17 = c17; saved_rbp = 0LL;
                                        } else {
                                            int v419 = LODWORD(c6 - 1); // temp
                                            c2 = LODWORD(c6 - 1);
                                            c14 = LODWORD(c14 + (uintptr_t)&v_0 + 1LL);
                                            c6 = c9;
                                            c9 = c11;
                                            saved_rbp = LODWORD(c2 - 2);
                                            c18 = c2 == 1;
                                            c19 = LOBYTE(c2 < 1); c16 = (_DWORD)c2 < (_DWORD)1;
                                            c17 = !(__builtin_popcount(LOBYTE(v419 - 1)) & 1);
                                            _BOOL cond_64 = c2 != 1; // temp
                                            _BOOL cond_66 = 1 <= c2; // temp
                                            if (!(cond_64 && cond_66)) {
                                                goto label_6;
                                            }
                                        }
                                    }
                                label_6:;
                                    c14 = LODWORD(c14) + LODWORD(c2);
                                    int v453 = LODWORD(c2) & LODWORD(c2); // temp
                                    if (v453 != 0) {
                                        c18 = 1;
                                        c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                        c17 = c17; c2 = 0LL;
                                    } else {
                                        c2 = c9;
                                        c12 = LODWORD(c6 + c14 + 1LL);
                                        c15 = LODWORD(c1);
                                        c5 = c12 - 1;
                                        c14 = 0LL;
                                        c18 = c5 == 1;
                                        c19 = LOBYTE(c5 < 1); c16 = (_DWORD)c5 < (_DWORD)1;
                                        c17 = !(__builtin_popcount(LOBYTE(c12 - 1 - 1)) & 1);
                                        _BOOL cond_73 = c5 != 1; // temp
                                        _BOOL cond_75 = 1 <= c5; // temp
                                        if (!(cond_73 && cond_75)) {
                                            goto label_4;
                                        }
                                        goto label_5;
                                    }
                                }
                            label_4:;
                                c12 = LODWORD(c12) + LODWORD((uintptr_t)&v_0);
                                int v499 = LODWORD((uintptr_t)&v_0) & LODWORD((uintptr_t)&v_0); // temp
                                if (v499 != 0) {
                                    c18 = 1;
                                    c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                    c17 = c17;
                                } else {
                                    saved_rbp = v_12;
                                    result = LODWORD(c2);
                                    saved_rbp = LODWORD(saved_rbp + c12 + 1LL);
                                    int v513 = LODWORD(c13 - 1); // temp
                                    c12 = LODWORD(c13 - 1);
                                    c18 = c12 == 1;
                                    c19 = LOBYTE(c12 < 1); c16 = (_DWORD)c12 < (_DWORD)1;
                                    c17 = !(__builtin_popcount(LOBYTE(v513 - 1)) & 1);
                                    _BOOL cond_81 = c12 != 1; // temp
                                    _BOOL cond_83 = 1 <= c12; // temp
                                    if (!(cond_81 && cond_83)) {
                                        goto label_1;
                                    }
                                    goto label_5;
                                }
                                goto label_5;
                            } else {
                                goto label_0;
                            }
                        }
                    }
                }
            }
        label_0:;
            c14 = LODWORD(c14) + LODWORD(saved_rbp);
            int v572 = LODWORD(saved_rbp) & LODWORD(saved_rbp); // temp
            if (v572 != 0) {
                saved_rbp = 0LL; continue;
            } else {
                break;
            }
        }
        result = LODWORD(c14 + 1LL); saved_rbp = v29;
        return 0;
    }
label_5:;
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
    __int64 v632; // temp
    __int64 v641; // temp
    int v_4;
    __int64 v_0;
    _QWORD result; // rax
    __int64 v648; // rax
    _QWORD saved_rbx; // rcx
    _QWORD saved_rbp; // rdx
    __int64 v642; // rdx
    _QWORD c3; // rbx
    _QWORD c5; // rbp
    _QWORD v645; // rbp
    _QWORD c9; // r12
    _QWORD c10; // r13
    _QWORD c11; // r14
    _QWORD saved_rbx_1; // r15
    int saved_rbx_2; // r15
    int saved_rbx_4; // r15
    __int64 saved_rbx_7; // r15
    _DWORD v26; // temp
    int v30; // temp
    _DWORD v637; // temp
    _DWORD v644; // temp
    result = a2;
    __int64 v21 = (uintptr_t)&v_0 - 8LL; // temp
    _BOOL c15 = (uintptr_t)&v_0 == 0x18LL; // ZF
    char c16 = LOBYTE((uintptr_t)&v_0 < 0x18LL); // SF
    _BOOL c13 = (_QWORD)(uintptr_t)&v_0 < (_QWORD)0x18LL; // CF
    _BOOL c17 = __OFSUB__((uintptr_t)&v_0, 0x18LL); // OF
    v21 = (uintptr_t)&v_0 + 0xcLL;
    while (1) {
        v26 = *(_DWORD *)((uintptr_t)&v_0 + 0xcLL); saved_rbp = v26;
        c5 = LODWORD(saved_rbp - 1);
        v30 = LODWORD(result); c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v30 != 0) {
            saved_rbp = (uintptr_t)&v_0;
            v637 = *(_DWORD *)((uintptr_t)&v_0 + 0xcLL); c5 = v637;
            continue;
        }
        c15 = !c5;
        c16 = LOBYTE(c5 < 0); c13 = 0; c17 = 0;
        if (!c5) {
            result = 1LL; break;
        }
        _DWORD v45 = *(_DWORD *)((uintptr_t)&v_0 + 0xcLL); // temp
        c15 = v45 == 2;
        c16 = LOBYTE(v45 < 2); c13 = (_DWORD)v45 < (_DWORD)2;
        result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_1:;
        c9 = LODWORD((uintptr_t)&v_0 - 1);
        int v61 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v61 != 0) {
            saved_rbp = c9; v632 = c5;
            c9 = c5; v641 = v637;
            v642 = (uintptr_t)&v_0; v644 = *(_DWORD *)((uintptr_t)&v_0 + 0xcLL); v645 = v644;
            continue;
        }
        int v68 = c9; // temp
        if (!v68) {
            goto label_31;
        }
        c15 = c5 == 2;
        c16 = LOBYTE(c5 < 2); c13 = (_DWORD)c5 < (_DWORD)2;
        c5 = c5 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_3:;
        c10 = LODWORD(c9 - 1);
        int v94 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v94 != 0) {
            saved_rbp = c10;
            c10 = c9; c9 = c10;
            v642 = c9; v641 = v644;
            v642 = (uintptr_t)&v_0; v645 = v644; continue;
        }
        int v101 = c10; // temp
        if (!v101) {
            goto label_30;
        }
        c15 = c9 == 2;
        c16 = LOBYTE(c9 < 2); c13 = (_DWORD)c9 < (_DWORD)2;
        c9 = c9 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_5:;
        c11 = LODWORD(c10 - 1);
        int v127 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v127 != 0) {
            goto label_38;
        }
        int v134 = c11; // temp
        if (!v134) {
            goto label_29;
        }
        c15 = c10 == 2;
        c16 = LOBYTE(c10 < 2); c13 = (_DWORD)c10 < (_DWORD)2;
        c10 = c10 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_7:;
        saved_rbx_1 = LODWORD(c11 - 1);
        int v160 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v160 != 0) {
            goto label_37;
        }
        int v167 = saved_rbx_1; // temp
        if (!v167) {
            goto label_28;
        }
        c15 = c11 == 2;
        c16 = LOBYTE(c11 < 2); c13 = (_DWORD)c11 < (_DWORD)2;
        c11 = c11 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_9:;
        c3 = LODWORD(saved_rbx_2 - 1);
        int v193 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v193 != 0) {
            goto label_36;
        }
        int v200 = c3; // temp
        if (!v200) {
            goto label_27;
        }
        c15 = saved_rbx_2 == 2;
        c16 = LOBYTE(saved_rbx_2 < 2); c13 = (_DWORD)saved_rbx_2 < (_DWORD)2;
        saved_rbx_3 = saved_rbx_2 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_11:;
        saved_rbx = LODWORD(c3 - 1);
        int v226 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v226 != 0) {
            goto label_35;
        }
        int v233 = saved_rbx; // temp
        if (!v233) {
            goto label_26;
        }
        c15 = c3 == 2;
        c16 = LOBYTE(c3 < 2); c13 = (_DWORD)c3 < (_DWORD)2;
        c3 = c3 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_13:;
        _QWORD c8 = LODWORD(saved_rbx - 1); // r8
        int v259 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v259 != 0) {
            goto label_34;
        }
        int v266 = c8; // temp
        if (!v266) {
            goto label_25;
        }
        c15 = saved_rbx == 2;
        c16 = LOBYTE(saved_rbx < 2); c13 = (_DWORD)saved_rbx < (_DWORD)2;
        saved_rbx = saved_rbx - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_15:;
        a1 = LODWORD(c8 - 1);
        int v292 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v292 != 0) {
            a2 = a1;
            a1 = c8;
            c8 = a1; result = 1LL; break;
        }
        int v299 = a1; // temp
        if (!v299) {
            goto label_24;
        }
        c15 = c8 == 2;
        c16 = LOBYTE(c8 < 2); c13 = (_DWORD)c8 < (_DWORD)2;
        c8 = c8 - 2; result = 1LL;
        a2 = LODWORD(result - 1);
        v_4 = saved_rbx; v648 = f_ackermann(a1, a2);
        _DWORD v321 = *(_DWORD *)((uintptr_t)&v_0 + 8LL); // temp
        c8 = v321;
        saved_rbx = v_4;
        int v326 = c8; // temp
        c15 = !c8;
        c16 = LOBYTE(c8 < 0); c13 = 0; c17 = 0;
        if (v326 != 0) {
            goto label_15;
        }
        result = LODWORD(v648) + 1;
        int v342 = saved_rbx; // temp
        c15 = !saved_rbx;
        c16 = LOBYTE(saved_rbx < 0); c13 = 0; c17 = 0;
        if (v342 != 0) {
            goto label_13;
        }
        result = LODWORD(result) + 1;
        int v358 = c3; // temp
        c15 = !c3;
        c16 = LOBYTE(c3 < 0); c13 = 0; c17 = 0;
        if (v358 != 0) {
            goto label_11;
        }
        result = LODWORD(result) + 1;
        int v374 = saved_rbx_4; // temp
        c15 = !saved_rbx_4;
        c16 = LOBYTE(saved_rbx_4 < 0); c13 = 0; c17 = 0;
        if (v374 != 0) {
            goto label_9;
        }
        result = LODWORD(result) + 1;
        int v390 = c11; // temp
        c15 = !c11;
        c16 = LOBYTE(c11 < 0); c13 = 0; c17 = 0;
        if (v390 != 0) {
            goto label_7;
        }
        result = LODWORD(result) + 1;
        int v406 = c10; // temp
        c15 = !c10;
        c16 = LOBYTE(c10 < 0); c13 = 0; c17 = 0;
        if (v406 != 0) {
            goto label_5;
        }
        result = LODWORD(result) + 1;
        int v422 = c9; // temp
        c15 = !c9;
        c16 = LOBYTE(c9 < 0); c13 = 0; c17 = 0;
        if (v422 != 0) {
            goto label_3;
        }
        result = LODWORD(result) + 1;
        int v438 = c5; // temp
        c15 = !c5;
        c16 = LOBYTE(c5 < 0); c13 = 0; c17 = 0;
        if (v438 != 0) {
            goto label_1;
        }
        _DWORD v446 = *(_DWORD *)((uintptr_t)&v_0 + 0xcLL); // temp
        saved_rbp = v446;
        result = LODWORD(result) + 1;
        int v456 = saved_rbp; // temp
        c15 = !saved_rbp;
        c16 = LOBYTE(saved_rbp < 0); c13 = 0; c17 = 0;
        if (v456 != 0) {
            continue;
        } else {
            break;
        }
    label_24:;
        result = LODWORD(1LL) + 1;
        int v473 = saved_rbx; // temp
        c15 = !saved_rbx;
        c16 = LOBYTE(saved_rbx < 0); c13 = 0; c17 = 0;
        if (v473 != 0) {
            goto label_13;
        }
    label_25:;
        result = LODWORD(1LL) + 1;
        int v490 = c3; // temp
        c15 = !c3;
        c16 = LOBYTE(c3 < 0); c13 = 0; c17 = 0;
        if (v490 != 0) {
            goto label_11;
        }
    label_26:;
        result = LODWORD(1LL) + 1;
        int v507 = saved_rbx_4; // temp
        c15 = !saved_rbx_4;
        c16 = LOBYTE(saved_rbx_4 < 0); c13 = 0; c17 = 0;
        if (v507 != 0) {
            goto label_9;
        }
    label_27:;
        result = LODWORD(1LL) + 1;
        int v524 = c11; // temp
        c15 = !c11;
        c16 = LOBYTE(c11 < 0); c13 = 0; c17 = 0;
        if (v524 != 0) {
            goto label_7;
        }
    label_28:;
        result = LODWORD(1LL) + 1;
        int v541 = c10; // temp
        c15 = !c10;
        c16 = LOBYTE(c10 < 0); c13 = 0; c17 = 0;
        if (v541 != 0) {
            goto label_5;
        }
    label_29:;
        result = LODWORD(1LL) + 1;
        int v558 = c9; // temp
        c15 = !c9;
        c16 = LOBYTE(c9 < 0); c13 = 0; c17 = 0;
        if (v558 != 0) {
            goto label_3;
        }
    label_30:;
        result = LODWORD(1LL) + 1;
        int v575 = c5; // temp
        c15 = !c5;
        c16 = LOBYTE(c5 < 0); c13 = 0; c17 = 0;
        if (v575 != 0) {
            goto label_1;
        }
    label_31:;
        _DWORD v584 = *(_DWORD *)((uintptr_t)&v_0 + 0xcLL); // temp
        saved_rbp = v584;
        result = LODWORD(1LL) + 1;
        int v594 = saved_rbp; // temp
        if (v594 != 0) {
            continue;
        }
        break;
    label_34:;
        a2 = c8;
        c8 = saved_rbx;
        saved_rbx = c8;
    label_35:;
        a2 = saved_rbx;
        saved_rbx = c3;
        c3 = saved_rbx;
    label_36:;
        saved_rbx = c3;
        c3 = saved_rbx_2;
        saved_rbx_5 = c3;
    label_37:;
        saved_rbp = saved_rbx_1;
        saved_rbx_6 = c11;
        c11 = saved_rbx_1;
    label_38:;
        saved_rbp = c11;
        c11 = c10;
        c10 = c11; v642 = c10; c10 = v645;
        c9 = c10; v642 = c9;
        v644 = *(_DWORD *)((uintptr_t)&v_0 + 0xcLL);
    }
    saved_rbx_7 = v21; return LODWORD(result) + 1;
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
    char buf[16]; // int buf[4]
    _QWORD result; // rax
    __int64 v87; // rax
    _QWORD c1; // rcx
    _QWORD c2; // rdx
    _QWORD c4; // rsi
    _QWORD c6; // r8
    __int64 c7; // r9
    char c8; // CF
    _BOOL c10; // ZF
    char c11; // SF
    char c12; // OF
    _DWORD v16; // temp
    char v15; // temp
    char v31; // temp
    int v36; // temp
    if (!(LOBYTE(a1) & 1)) {
        c2 = 1LL;
        v15 = 1;
        a1 = a1 >> 1;
        result = a1;
        v31 = LOBYTE(a1) & 1; c10 = !v31;
        c11 = (LOBYTE(a1) & 1) < '\0'; c8 = 0;
        c12 = 0;
        if (!v31) {
        }
        result = result >> 1;
        c1 = result; v15 = LOBYTE(result) & 1; c10 = !v15;
        c11 = (LOBYTE(result) & 1) < '\0'; c8 = 0; c12 = 0;
        if (!v15) {
            c6 = 1LL;
        } else {
            int v44 = result; // temp
            c10 = v44 == 1;
            c11 = LOBYTE(result < 1); c8 = (_DWORD)result < (_DWORD)1;
            result = result - 1; c6 = 2LL;
            c1 = result; result = 2LL;
            if (v44 != 1) {
                *(_DWORD *)(buf + 12) = LODWORD(c2);
                *(_DWORD *)(buf + 8) = LODWORD(c4);
                *(_DWORD *)(buf + 4) = LODWORD(c6); *(_DWORD *)buf = LODWORD(c7); v87 = f_rec_power_constprop_0(a1 >> 1);
                v16 = *(_DWORD *)(buf + 4); c6 = *(_DWORD *)(buf + 4);
                c4 = *(_DWORD *)(buf + 8); result = v87 * v87;
                c2 = *(_DWORD *)(buf + 12); result = result * *(_DWORD *)buf; result = result * result * *(_DWORD *)(buf + 4);
                result = result * result * *(_DWORD *)(buf + 8); return result * result * *(_DWORD *)(buf + 12);
            }
            v16 = result;
            result = result * result;
            result = result * LODWORD(c4); result = LODWORD(2LL) * LODWORD(2LL);
            result = result * LODWORD(c2); return 0;
        }
    } else {
        c2 = 2LL; v16 = a1;
        a1 = a1 - 1;
        if (v16 == 1) {
            return 2;
        } else {
            a1 = a1 >> 1;
            result = a1;
            v31 = LOBYTE(a1) & 1; c10 = !v31;
            c11 = (LOBYTE(a1) & 1) < '\0'; c8 = 0;
            c12 = 0;
            if (!v31) {
                goto label_0;
            } else {
                goto label_1;
            }
        }
    }
label_1:;
    c4 = 2LL; v36 = result;
    c10 = v36 == 1;
    c11 = LOBYTE(result < 1); c8 = (_DWORD)result < (_DWORD)1;
    result = result - 1;
    if (v36 == 1) {
        result = result * result; result = result * LODWORD(c2);
        return 0;
    } else {
        c1 = c1 >> 1;
        a1 = c1;
        char v62 = LOBYTE(c1) & 1; // temp
        c10 = !v62;
        c11 = (LOBYTE(c1) & 1) < '\0'; c8 = 0; c12 = 0;
        if (!v62) {
            c7 = 1LL;
        } else {
            int v67 = c1; // temp
            c1 = c1 - 1;
            a1 = c1;
            if (v67 == 1) {
                result = LODWORD(2LL) * LODWORD(2LL);
            } else {
            }
        }
    }
label_0:;
    return 0;
}
/* Function:   sub_1520 | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1040, sub_14b0 | Xrefs from: unknown */
__int64 sub_1520(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 v_0;
    __int64 result; // rax
    if (byte_4010 != '\0') {
        return result;
    } else {
        if (qword_3FF8 != 0LL) {
            _QWORD v13 = qword_4008; // temp
            __int64 c3 = v13; // rdi
            result = sub_1040();
        }
        result = sub_14b0(); byte_4010 = 1;
                        return result;
    }
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

/* Function:   sub_1560 | Address: 0x1560 | Size: 0x735 (1845 bytes) | Convention: System V AMD64 | Stack frame: 0x38 (56 bytes) | Xrefs to:   f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
int sub_1560(void) {
    int v_4;
    int v_12;
    int v_16;
    int v_20;
    int v_24;
    int v_28;
    int v_32;
    int v_36;
    int v_40;
    int v_44;
    __int64 v_0;
    _QWORD result; // rax
    __int64 v621; // rax
    __int64 saved_rbx; // rax
    _QWORD saved_rbp; // rbx
    _QWORD c7; // rdi
    _QWORD c10; // r10
    _QWORD c12; // r12
    _QWORD c13; // r13
    _QWORD c15; // r15
    return sub_14e0();
    if (c7 <= 1) {
        return c7;
    } else {
        _BOOL c17 = !(__builtin_popcount(LOBYTE(0)) & 1); // PF
        __int64 c14 = 0LL; // r14
        _QWORD c5 = LODWORD(c7 - 2); // rbp
        __int64 v29 = (uintptr_t)&v_0 - 8LL; // temp
        saved_rbp = (uintptr_t)&v_0;
        _BOOL c18 = (uintptr_t)&v_0 == 0x38LL; // ZF
        char c19 = LOBYTE((uintptr_t)&v_0 < 0x38LL); // SF
        _BOOL c16 = (_QWORD)(uintptr_t)&v_0 < (_QWORD)0x38LL; // CF
        _BOOL c20 = __OFSUB__((uintptr_t)&v_0, 0x38LL); // OF
        c17 = !(__builtin_popcount(LOBYTE((uintptr_t)&v_0 - 0x38LL)) & 1);
        while (1) {
            c12 = LODWORD(saved_rbp - 2);
            int v35 = LODWORD(saved_rbp); // temp
            c18 = LODWORD(saved_rbp) == 1;
            c19 = LOBYTE(LODWORD(saved_rbp) < 1); c16 = (_DWORD)LODWORD(saved_rbp) < (_DWORD)1;
            c17 = !(__builtin_popcount(LOBYTE(LODWORD(saved_rbp) - 1)) & 1);
            if (v35 <= 1) {
            } else {
                while (1) {
                    c15 = LODWORD(saved_rbp);
                    result = LODWORD(c14);
                    c5 = LODWORD(c12 - 2);
                    int v53 = LODWORD(c12); // temp
                    c18 = LODWORD(c12) == 1;
                    c19 = LOBYTE(LODWORD(c12) < 1); c16 = (_DWORD)LODWORD(c12) < (_DWORD)1;
                    c17 = !(__builtin_popcount(LOBYTE(LODWORD(c12) - 1)) & 1);
                    if (v53 <= 1) {
                        goto label_2;
                    } else {
                        c19 = LOBYTE(0); c17 = c17;
                        v_12 = LODWORD(saved_rbp);
                        c13 = LODWORD(c12);
                        _QWORD c2 = LODWORD(result); // rdx
                        int v76 = LODWORD((uintptr_t)&v_0); // temp
                        c18 = LODWORD((uintptr_t)&v_0) == 1;
                        c19 = LOBYTE(LODWORD((uintptr_t)&v_0) < 1); c16 = (_DWORD)LODWORD((uintptr_t)&v_0) < (_DWORD)1;
                        c17 = !(__builtin_popcount(LOBYTE(LODWORD((uintptr_t)&v_0) - 1)) & 1);
                        if (v76 <= 1) {
                        } else {
                            _QWORD c9 = LODWORD(c2); // r9
                            _QWORD c6 = LODWORD(c12); // rsi
                            c2 = LODWORD((uintptr_t)&v_0 - 2);
                            _QWORD c1 = LODWORD(c15); // rcx
                            int v90 = LODWORD((uintptr_t)&v_0); // temp
                            c12 = LODWORD((uintptr_t)&v_0);
                            saved_rbp = LODWORD(c2 - 2);
                            int v98 = LODWORD(c2); // temp
                            c18 = LODWORD(c2) == 1;
                            c19 = LOBYTE(LODWORD(c2) < 1); c16 = (_DWORD)LODWORD(c2) < (_DWORD)1;
                            c17 = !(__builtin_popcount(LOBYTE(LODWORD(c2) - 1)) & 1);
                            if (v98 <= 1) {
                                goto label_2;
                            } else {
                                _QWORD c11 = c9; // r11
                                c9 = c6;
                                c6 = LODWORD(c2);
                                c15 = LODWORD(saved_rbp - 2);
                                int v117 = LODWORD(saved_rbp); // temp
                                c18 = LODWORD(saved_rbp) == 1;
                                c19 = LOBYTE(LODWORD(saved_rbp) < 1); c16 = (_DWORD)LODWORD(saved_rbp) < (_DWORD)1;
                                c17 = !(__builtin_popcount(LOBYTE(LODWORD(saved_rbp) - 1)) & 1);
                                if (v117 <= 1) {
                                    goto label_2;
                                } else {
                                    int v126 = LODWORD(c15); // temp
                                    c18 = LODWORD(c15) == 1;
                                    c19 = LOBYTE(LODWORD(c15) < 1); c16 = (_DWORD)LODWORD(c15) < (_DWORD)1;
                                    c17 = !(__builtin_popcount(LOBYTE(LODWORD(c15) - 1)) & 1);
                                    if (v126 <= 1) {
                                    } else {
                                        c19 = LOBYTE(0); c17 = c17;
                                        v_0 = LODWORD(c2);
                                        result = c9;
                                        c9 = LODWORD(c15 - 2);
                                        _QWORD c8 = LODWORD(c9 - 2); // r8
                                        int v151 = c9; // temp
                                        c18 = c9 == 1;
                                        c19 = LOBYTE(c9 < 1); c16 = (_DWORD)c9 < (_DWORD)1;
                                        c17 = !(__builtin_popcount(LOBYTE(c9 - 1)) & 1);
                                        if (v151 <= 1) {
                                        } else {
                                            c7 = c9;
                                            c9 = LODWORD(c15);
                                            c15 = LODWORD(saved_rbp);
                                            saved_rbp = LODWORD(result);
                                            result = c7;
                                            c7 = LODWORD(c8 - 2);
                                            c18 = LODWORD(c8) == 1;
                                            c19 = LOBYTE(LODWORD(c8) < 1); c16 = (_DWORD)LODWORD(c8) < (_DWORD)1;
                                            c17 = !(__builtin_popcount(LOBYTE(LODWORD(c8) - 1)) & 1);
                                            if (c16 || c18) {
                                            } else {
                                                v_4 = c11;
                                                c11 = LODWORD(result);
                                                do {
                                                    v_44 = c11;
                                                    v_40 = c9;
                                                    v_36 = LODWORD(c8);
                                                    v_32 = LODWORD(c10);
                                                    v_28 = c6;
                                                    v_24 = LODWORD(c2);
                                                    v_20 = LODWORD(c1);
                                                    v_16 = c7; v621 = f_rec_fib(c7);
                                                    c7 = v_16;
                                                    c2 = v_24;
                                                    c6 = v_28;
                                                    c7 = c7 - 1;
                                                    c1 = v_20 + LODWORD(v621);
                                                    c10 = v_32;
                                                    c8 = v_36;
                                                    c18 = c7 == -1;
                                                    c19 = LOBYTE(c7 < -1); c16 = (_DWORD)c7 < (_DWORD)0xffffffffffffffffULL;
                                                    c17 = !(__builtin_popcount(LOBYTE(c7 - -1)) & 1);
                                                    c9 = v_40;
                                                    c11 = v_44;
                                                } while (c7 != -2);
                                                c8 = v_36 - 1;
                                                result = c11;
                                                c2 = LODWORD(c1 + c2 + 1LL);
                                                c11 = v_4;
                                                c7 = LODWORD(c8 - 2);
                                                c1 = 0LL;
                                                c18 = c8 == 1;
                                                c19 = LOBYTE(c8 < 1); c16 = (_DWORD)c8 < (_DWORD)1;
                                                c17 = !(__builtin_popcount(LOBYTE(v_36 - 1 - 1)) & 1);
                                                _BOOL cond_31 = (_DWORD)1 <= (_DWORD)c8; // temp
                                                _BOOL cond_32 = c8 != 1; // temp
                                                if (!(cond_31 && cond_32)) {
                                                    goto label_8;
                                                }
                                                goto label_2;
                                            }
                                        label_8:;
                                            c2 = LODWORD(c2) + LODWORD(c8);
                                            int v280 = LODWORD(c8) & LODWORD(c8); // temp
                                            if (v280 != 0) {
                                                c18 = 1;
                                                c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                                c17 = c17; c8 = 0LL;
                                            } else {
                                                c7 = LODWORD(result);
                                                saved_rbx = saved_rbp;
                                                saved_rbp = c15;
                                                c15 = c9;
                                                c9 = LODWORD(c7 - 1);
                                                c10 = LODWORD(c2 + c10 + 1LL);
                                                _DWORD v297 = *(_DWORD *)((uintptr_t)&v_0 + 8LL); // temp
                                                c1 = v297;
                                                c2 = 0LL;
                                                c8 = LODWORD(c9 - 2);
                                                c18 = c9 == 1;
                                                c19 = LOBYTE(c9 < 1); c16 = (_DWORD)c9 < (_DWORD)1;
                                                c17 = !(__builtin_popcount(LOBYTE(c9 - 1)) & 1);
                                                _BOOL cond_38 = c9 != 1; // temp
                                                _BOOL cond_40 = 1 <= c9; // temp
                                                if (!(cond_38 && cond_40)) {
                                                    goto label_7;
                                                }
                                            }
                                            goto label_2;
                                        }
                                    label_7:;
                                        c10 = LODWORD(c10) + c9;
                                        int v326 = c9 & c9; // temp
                                        if (v326 != 0) {
                                            c18 = 1;
                                            c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                            c17 = c17; c9 = 0LL;
                                        } else {
                                            c2 = v_0;
                                            c15 = LODWORD(c15) - 1;
                                            c9 = LODWORD(result);
                                            c2 = LODWORD(c2 + c10 + 1LL);
                                            c18 = c15 == 1;
                                            c19 = LOBYTE(c15 < 1); c16 = (_DWORD)c15 < (_DWORD)1;
                                            c17 = !(__builtin_popcount(LOBYTE(LODWORD(c15) - 1 - 1)) & 1);
                                            _BOOL cond_47 = c15 != 1; // temp
                                            _BOOL cond_49 = 1 <= c15; // temp
                                            if (!(cond_47 && cond_49)) {
                                                goto label_6;
                                            }
                                        }
                                    }
                                label_6:;
                                    c2 = LODWORD(c2) + LODWORD(c15);
                                    int v366 = LODWORD(c15) & LODWORD(c15); // temp
                                    if (v366 != 0) {
                                        c18 = 1;
                                        c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                        c17 = c17; c15 = 0LL;
                                    } else {
                                        saved_rbp = LODWORD(saved_rbp) - 1;
                                        c5 = LODWORD((uintptr_t)&v_0 + c2 + 1LL);
                                        c2 = 0LL;
                                        c15 = LODWORD(saved_rbp - 2);
                                        c18 = saved_rbp == 1;
                                        c19 = LOBYTE(saved_rbp < 1); c16 = (_DWORD)saved_rbp < (_DWORD)1;
                                        c17 = !(__builtin_popcount(LOBYTE(LODWORD(saved_rbp) - 1 - 1)) & 1);
                                        _BOOL cond_56 = saved_rbp != 1; // temp
                                        _BOOL cond_58 = 1 <= saved_rbp; // temp
                                        if (!(cond_56 && cond_58)) {
                                            goto label_5;
                                        }
                                        goto label_2;
                                    }
                                }
                            label_5:;
                                c5 = LODWORD((uintptr_t)&v_0) + LODWORD(saved_rbp);
                                int v411 = LODWORD(saved_rbp) & LODWORD(saved_rbp); // temp
                                if (v411 != 0) {
                                    c18 = 1;
                                    c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                    c17 = c17; saved_rbp = 0LL;
                                } else {
                                    int v419 = LODWORD(c6 - 1); // temp
                                    c2 = LODWORD(c6 - 1);
                                    c14 = LODWORD(c14 + (uintptr_t)&v_0 + 1LL);
                                    c6 = c9;
                                    c9 = c11;
                                    saved_rbp = LODWORD(c2 - 2);
                                    c18 = c2 == 1;
                                    c19 = LOBYTE(c2 < 1); c16 = (_DWORD)c2 < (_DWORD)1;
                                    c17 = !(__builtin_popcount(LOBYTE(v419 - 1)) & 1);
                                    _BOOL cond_64 = c2 != 1; // temp
                                    _BOOL cond_66 = 1 <= c2; // temp
                                    if (!(cond_64 && cond_66)) {
                                        goto label_4;
                                    }
                                    goto label_2;
                                }
                                goto label_2;
                            }
                        label_4:;
                            c14 = LODWORD(c14) + LODWORD(c2);
                            int v453 = LODWORD(c2) & LODWORD(c2); // temp
                            if (v453 != 0) {
                                c18 = 1;
                                c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                c17 = c17; c2 = 0LL;
                            } else {
                                c2 = c9;
                                c12 = LODWORD(c6 + c14 + 1LL);
                                c15 = LODWORD(c1);
                                c5 = v90 - 1;
                                c14 = 0LL;
                                c18 = c5 == 1;
                                c19 = LOBYTE(c5 < 1); c16 = (_DWORD)c5 < (_DWORD)1;
                                c17 = !(__builtin_popcount(LOBYTE(v90 - 1 - 1)) & 1);
                                _BOOL cond_73 = c5 != 1; // temp
                                _BOOL cond_75 = 1 <= c5; // temp
                                if (!(cond_73 && cond_75)) {
                                    goto label_3;
                                }
                            }
                        }
                    label_3:;
                        c12 = LODWORD(c12) + LODWORD((uintptr_t)&v_0);
                        int v499 = LODWORD((uintptr_t)&v_0) & LODWORD((uintptr_t)&v_0); // temp
                        if (v499 != 0) {
                            c18 = 1;
                            c19 = LOBYTE(0); c16 = 0; c20 = 0;
                            c17 = c17;
                        } else {
                            saved_rbp = v_12;
                            result = LODWORD(c2);
                            saved_rbp = LODWORD(saved_rbp + c12 + 1LL);
                            int v513 = LODWORD(c13 - 1); // temp
                            c12 = LODWORD(c13 - 1);
                            c18 = c12 == 1;
                            c19 = LOBYTE(c12 < 1); c16 = (_DWORD)c12 < (_DWORD)1;
                            c17 = !(__builtin_popcount(LOBYTE(v513 - 1)) & 1);
                            _BOOL cond_81 = c12 != 1; // temp
                            _BOOL cond_83 = 1 <= c12; // temp
                            if (!(cond_81 && cond_83)) {
                                goto label_1;
                            }
                            goto label_2;
                        }
                    }
                label_1:;
                    saved_rbp = LODWORD(saved_rbp) + LODWORD(c12);
                    int v537 = LODWORD(c12) & LODWORD(c12); // temp
                    if (v537 != 0) {
                        c18 = 1;
                        c19 = LOBYTE(0); c16 = 0; c20 = 0;
                        c17 = c17; c12 = 0LL;
                    } else {
                        c14 = LODWORD(result + saved_rbp + 1LL);
                        int v548 = LODWORD(c15 - 1); // temp
                        saved_rbp = LODWORD(c15 - 1);
                        c12 = LODWORD(saved_rbp - 2);
                        c18 = saved_rbp == 1;
                        c19 = LOBYTE(saved_rbp < 1); c16 = (_DWORD)saved_rbp < (_DWORD)1;
                        c17 = !(__builtin_popcount(LOBYTE(v548 - 1)) & 1);
                        _BOOL cond_89 = saved_rbp != 1; // temp
                        _BOOL cond_91 = 1 <= saved_rbp; // temp
                        if (!(cond_89 && cond_91)) {
                            goto label_0;
                        }
                        goto label_2;
                    }
                    goto label_2;
                }
            }
        label_0:;
            c14 = LODWORD(c14) + LODWORD(saved_rbp);
            int v572 = LODWORD(saved_rbp) & LODWORD(saved_rbp); // temp
            if (v572 != 0) {
                saved_rbp = 0LL; continue;
            } else {
                break;
            }
        }
        result = LODWORD(c14 + 1LL); saved_rbp = v29;
        return 0;
    }
label_2:;
}
/* Function:   sub_14b0 | Address: 0x14b0 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_14b0(void) {
    int v7; // reg?
    if (v7) {
        return;
    } else {
        if (qword_3FE0 == 0LL) {
            return;
        }
    }
    return;
}
