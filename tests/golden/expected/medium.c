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
    char buf_88[64];
    __int64 v_16;
    char buf_0[64]; // int buf_0[16]
    _QWORD c0; // rax
    __int64 v767; // rax
    __int64 v768; // rax
    __int64 v769; // rax
    _QWORD c3; // rbx
    _QWORD a2; // rsi
    _QWORD a1; // rdi
    _QWORD c8; // r10
    _DWORD v28; // temp
    int v29; // temp
    int v30; // temp
    int v56; // temp
    __int64 v150; // temp
    __int64 v213; // temp
    __int64 v283; // temp
    __int64 v297; // temp
    int v430; // temp
    int v440; // temp
    int v736; // temp
    __int64 c2 = 0xaLL; // rdx
    _BOOL c11 = !(__builtin_popcount(LOBYTE(0)) & 1); // PF
    __int64 c1 = 0LL; // rcx
    __int128 c15 = (((unsigned __int128)0x900000006ULL << 64) | 0x300000000ULL); // xmm0
    char c12 = 1; // ZF
    char c13 = LOBYTE(0); // SF
    char c10 = 0; // CF
    char c14 = 0; // OF
    c11 = c11; c0 = 1LL; *(_OWORD *)buf_0 = c15;
    c15 = (((unsigned __int128)0x1500000012ULL << 64) | 0xf0000000cULL); *(_OWORD *)(buf_0 + 16) = c15; c15 = (((unsigned __int128)0x210000001eULL << 64) | 0x1b00000018ULL);
    *(_OWORD *)(buf_0 + 32) = c15; c15 = (((unsigned __int128)0x2d0000002aULL << 64) | 0x2700000024ULL); *(_OWORD *)(buf_0 + 48) = c15;
    do {
        v28 = LODWORD(c0); a2 = LODWORD(c0); v29 = LODWORD(c0);
        v30 = c1;
        c0 = a2 + c1;
        c1 = a2;
        c12 = c2 == 1;
        c13 = LOBYTE(c2 < 1); c10 = (_DWORD)c2 < (_DWORD)1; c14 = __OFSUB__(c2, 1);
        c11 = !(__builtin_popcount(LOBYTE(c2 - 1)) & 1); c2 = c2 - 1;
    } while (c2 != 0);
    v28 = a2; v29 = a2 + 0x38e; c12 = c1 == -910;
    c13 = LOBYTE(a2 + 0x38e < 0); c10 = (c1 + 0x38e) < c1; c14 = __OFADD__(c1, 0x38e);
    c11 = !(__builtin_popcount(LOBYTE(a2 + 0x38e)) & 1); c1 = a2 + 0x38e; c2 = 0x24LL;
    c0 = 0x30LL;
    do {
        a2 = c2;
        c2 = LODWORD(c0) % a2;
        c0 = a2;
        v56 = c2; c12 = !c2;
        c13 = LOBYTE(c2 < 0); c10 = 0; c14 = 0;
        c11 = !(__builtin_popcount(LOBYTE(v56)) & 1);
    } while (c2 != 0);
    v28 = c1; v29 = a2; v30 = c1 + a2;
    c12 = c1 + a2 == 0; c13 = LOBYTE(c1 + a2 < 0); c10 = (c1 + c0) < c1;
    c14 = __OFADD__(c1, c0); c11 = !(__builtin_popcount(LOBYTE(c1 + a2)) & 1); c0 = 0x1bLL;
    int v86 = c8 & 1; // temp
    while (1) {
        int v84 = LODWORD(c0); // temp
        c8 = LODWORD(c0);
        c8 = c8 & 1;
        if (v86 != 0) {
            int v68 = LODWORD(c0 + (c0 << 1LL) + 1LL); // temp
            c2 = c2 + 2;
            c12 = v68 >> 1 == 0;
            c13 = LOBYTE(v68 >> 1 < 0); c10 = 0; c14 = 0;
            c11 = !(__builtin_popcount(LOBYTE(v68 >> 1)) & 1); c0 = v68 >> 1; continue;
        } else {
            c0 = v84 >> 1;
            c2 = c2 + 1;
            c12 = c0 == 1;
            c13 = LOBYTE(c0 < 1); c10 = (_DWORD)c0 < (_DWORD)1; c14 = __OFSUB__(c0, 1);
            c11 = !(__builtin_popcount(LOBYTE((v84 >> 1) - 1)) & 1);
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
        int v116 = LODWORD(c0); // temp
        int v117 = LODWORD(c0); // temp
        c0 = (_DWORD)v117 >> 1;
        a1 = v116 & 1;
        a2 = a2 + (v116 & 1);
        c12 = c2 == 1;
        c13 = LOBYTE(c2 < 1); c10 = (_DWORD)c2 < (_DWORD)1; c14 = __OFSUB__(c2, 1);
        c11 = !(__builtin_popcount(LOBYTE(c2 - 1)) & 1); c2 = c2 - 1;
    } while (c2 != 0);
    c1 = LODWORD(a2 + c1 + 0x46LL);
    __int64 c7 = (uintptr_t)buf_0; // r9
    __int64 v8 = (uintptr_t)(buf_0 + 64); // r8
    c0 = (uintptr_t)buf_0; c15 = 0;
    do {
        _OWORD v149 = *(_OWORD *)(c0); // temp
        c15 = _mm_add_epi32(c15, v149); v150 = c0 + 0x10LL;
        c0 = c0 + 0x10LL;
        c12 = (uintptr_t)(buf_0 + 64) == v150;
        c13 = LOBYTE((uintptr_t)(buf_0 + 64) < v150); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)c0; c14 = __OFSUB__((uintptr_t)(buf_0 + 64), c0);
        c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - v150)) & 1);
    } while ((uintptr_t)(buf_0 + 64) != c0);
    __int128 c16 = c15; // xmm1
    a1 = (uintptr_t)(buf_0 + 4); c0 = 0LL;
    c16 = __unlace_psrldq(c15, 8);
    __int64 c9 = (uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4); // r11
    a2 = (uintptr_t)(buf_0 + 4); c15 = _mm_add_epi32(c15, c16); c16 = c15;
    c16 = __unlace_psrldq(c15, 4); c15 = _mm_add_epi32(c15, c16); c2 = LODWORD(c15) + c1;
    v28 = c9 & 4; c12 = !v28; c13 = LOBYTE((c9 & 4) < 0);
    c10 = 0; c14 = 0; c11 = !(__builtin_popcount(LOBYTE(c9 & 4)) & 1);
    c9 = c9 & 4; c1 = (uintptr_t)(buf_0 + 4);
    if (!v28) {
        goto label_23;
    } else {
        a2 = *(_DWORD *)(buf_0 + 4);
        c0 = LODWORD(0LL) < a2 ? a2 : LODWORD(0LL);
        a2 = (uintptr_t)(buf_0 + 8);
        c12 = (uintptr_t)(buf_0 + 64) == (uintptr_t)(buf_0 + 8);
        c13 = LOBYTE((uintptr_t)(buf_0 + 64) < (uintptr_t)(buf_0 + 8)); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)(uintptr_t)(buf_0 + 8); c14 = __OFSUB__((uintptr_t)(buf_0 + 64), (uintptr_t)(buf_0 + 8));
        c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 8))) & 1);
        if ((uintptr_t)(buf_0 + 64) != (uintptr_t)(buf_0 + 8)) {
            do {
                _DWORD v186 = *(_DWORD *)(a2); // temp
                c9 = v186;
                char v197 = LODWORD(c0) < c9; // temp
                _DWORD v200 = *(_DWORD *)(a2 + 4LL); // temp
                c9 = v200;
                char v211 = (v197 ? c9 : LODWORD(c0)) < c9; // temp
                c0 = v211 ? c9 : v197 ? c9 : LODWORD(c0); v213 = a2 + 8LL;
                a2 = a2 + 8LL;
                c12 = (uintptr_t)(buf_0 + 64) == v213;
                c13 = LOBYTE((uintptr_t)(buf_0 + 64) < v213); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)a2; c14 = __OFSUB__((uintptr_t)(buf_0 + 64), a2);
                c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - v213)) & 1);
            } while ((uintptr_t)(buf_0 + 64) != a2);
        }
        v29 = LODWORD(c0) + c2; c0 = LODWORD(c0) + c2; c2 = 0LL;
        v30 = LODWORD((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4; c12 = !v30; c13 = LOBYTE((LODWORD((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4) < 0);
        c10 = 0; c14 = 0; c11 = !(__builtin_popcount(LOBYTE(LODWORD((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4)) & 1);
        a2 = LODWORD((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 4)) & 4;
        if (!v30) {
            goto label_22;
        } else {
            c1 = *(_DWORD *)(buf_0 + 4);
            c2 = LODWORD(0LL) != c1 && c1 <= LODWORD(0LL) ? c1 : LODWORD(0LL);
            c1 = (uintptr_t)(buf_0 + 8);
            c12 = (uintptr_t)(buf_0 + 64) == (uintptr_t)(buf_0 + 8);
            c13 = LOBYTE((uintptr_t)(buf_0 + 64) < (uintptr_t)(buf_0 + 8)); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)(uintptr_t)(buf_0 + 8); c14 = __OFSUB__((uintptr_t)(buf_0 + 64), (uintptr_t)(buf_0 + 8));
            c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - (uintptr_t)(buf_0 + 8))) & 1);
            if ((uintptr_t)(buf_0 + 64) != (uintptr_t)(buf_0 + 8)) {
                do {
                    _DWORD v250 = *(_DWORD *)(c1); // temp
                    a2 = v250;
                    c2 = c2 != a2 && a2 <= c2 ? a2 : c2;
                    _DWORD v267 = *(_DWORD *)(c1 + 4LL); // temp
                    a2 = v267;
                    c2 = c2 != a2 && a2 <= c2 ? a2 : c2; v283 = c1 + 8LL;
                    c1 = c1 + 8LL;
                    c12 = (uintptr_t)(buf_0 + 64) == v283;
                    c13 = LOBYTE((uintptr_t)(buf_0 + 64) < v283); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)c1; c14 = __OFSUB__((uintptr_t)(buf_0 + 64), c1);
                    c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - v283)) & 1);
                } while ((uintptr_t)(buf_0 + 64) != c1);
            }
            v28 = c2;
            c12 = c2 + v29 == 0; c13 = LOBYTE(c2 + v29 < 0); c10 = (c2 + c0) < c2;
            c14 = __OFADD__(c2, c0); c11 = !(__builtin_popcount(LOBYTE(c2 + v29)) & 1);
            __int128 c17 = 0; // xmm2
            c0 = (uintptr_t)buf_0;
            do {
                _OWORD v296 = *(_OWORD *)(c0); // temp
                c15 = v296; v297 = c0 + 0x10LL;
                c0 = c0 + 0x10LL; c16 = c15; c16 = _mm_mul_epu32(c15, c15);
                c15 = __unlace_psrlq(c15, 0x20); c15 = _mm_mul_epu32(c15, c15); c16 = _mm_shuffle_epi32(c16, 8);
                c15 = _mm_shuffle_epi32(c15, 8); c16 = __unlace_punpckldq(c16, c15); c17 = _mm_add_epi32(c17, c16);
                c12 = (uintptr_t)(buf_0 + 64) == v297;
                c13 = LOBYTE((uintptr_t)(buf_0 + 64) < v297); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)c0; c14 = __OFSUB__((uintptr_t)(buf_0 + 64), c0);
                c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - v297)) & 1);
            } while ((uintptr_t)(buf_0 + 64) != c0);
            c15 = c17; c0 = 0LL; c15 = __unlace_psrldq(c17, 8);
            c17 = _mm_add_epi32(c17, c15); c15 = c17; c15 = __unlace_psrldq(c17, 4);
            c17 = _mm_add_epi32(c17, c15); c1 = LODWORD(c17) + c2 + v29; c2 = (uintptr_t)buf_0;
            v28 = *(_DWORD *)buf_0; c12 = v28 == 0xf;
            c13 = LOBYTE(*(_DWORD *)buf_0 < 0xf); c10 = (_DWORD)*(_DWORD *)buf_0 < (_DWORD)0xf;
            c14 = __OFSUB__(*(_DWORD *)buf_0, 0xf);
            c11 = !(__builtin_popcount(LOBYTE(*(_DWORD *)buf_0 - 0xf)) & 1);
            if (v28 == 0xf) {
                goto label_4;
            } else {
            }
        label_2:;
            int v310 = LODWORD(c0); // temp
            c0 = LODWORD(c0) + 1;
            c2 = c2 + 4LL;
            c12 = c0 == 0x10;
            c13 = LOBYTE(c0 < 0x10); c10 = (_DWORD)c0 < (_DWORD)0x10; c14 = __OFSUB__(c0, 0x10);
            c11 = !(__builtin_popcount(LOBYTE(v310 - 15)) & 1);
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
            _BOOL cond_63 = LODWORD(2LL) != 3; // temp
            _BOOL cond_64 = 3 <= LODWORD(2LL); // temp
            if (!(cond_63 && cond_64)) {
                goto label_7;
            }
        label_5:;
            c0 = a2;
            while (1) {
                c0 = a2 / c1; c2 = a2 % c1;
                int v379 = c2; // temp
                c12 = !c2;
                c13 = LOBYTE(c2 < 0);
                c11 = !(__builtin_popcount(LOBYTE(v379)) & 1);
                if (v379 != 0) {
                    c1 = c1 + 1;
                    c0 = c1 * c1;
                    c12 = c0 == a2;
                    c13 = LOBYTE(c0 < a2); c10 = (_DWORD)c0 < (_DWORD)a2; c14 = __OFSUB__(c0, a2);
                    c11 = !(__builtin_popcount(LOBYTE(c0 - a2)) & 1);
                    _BOOL cond_68 = c0 != a2; // temp
                    _BOOL cond_69 = a2 <= c0; // temp
                    if (cond_68 && cond_69) {
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
            _BOOL cond_75 = a2 != 3; // temp
            _BOOL cond_76 = 3 <= a2; // temp
            if (cond_75 && cond_76) {
                goto label_5;
            } else {
            }
        label_7:;
            c8 = c8 + 1;
            int v413 = c8; // temp
            c12 = c8 == 0xa;
            c13 = LOBYTE(c8 < 0xa); c10 = (_DWORD)c8 < (_DWORD)0xa; c14 = __OFSUB__(c8, 0xa);
            c11 = !(__builtin_popcount(LOBYTE(c8 - 0xa)) & 1);
            if (v413 != 0xa) {
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
                int v429 = LODWORD(c3); // temp
                v430 = c1; c3 = c1;
                int v431 = v429; // temp
                c0 = v431 / c1; c2 = v431 % c1;
                c1 = c2;
                v440 = c2 & c2; c12 = !(c2 & c2);
                c13 = LOBYTE((c2 & c2) < 0); c10 = 0; c14 = 0;
                c11 = !(__builtin_popcount(LOBYTE(c2 & c2)) & 1);
            } while (v440 != 0);
            c12 = 1;
            c13 = LOBYTE(0); c10 = 0; c14 = 0;
            c11 = c11; a2 = 0LL;
            c0 = LODWORD(0xd8LL) / v430; c2 = LODWORD(0xd8LL) % v430;
            c8 = LODWORD(c0 + c9 - 1218664206);
            int v485 = a2; // temp
            while (1) {
                _DWORD v505 = *(_DWORD *)(c7); // temp
                c2 = v505;
                c0 = v505 * 0x66666667LL;
                int v508 = c2; // temp
                int v509 = v736; // temp
                char v521 = LOBYTE(c0 >> 0x21); // temp
                int v524 = v521; // temp
                c0 = v524 - (v509 >> 0x1f);
                int v534 = LODWORD(c0 + (c0 << 2LL)); // temp
                c7 = LODWORD(c0 + (c0 << 2LL));
                c0 = c2 - v534;
                c12 = c0 == 2;
                char v547 = LOBYTE(c0 < 2); // temp
                c14 = __OFSUB__(c0, 2);
                if (c0 == 2) {
                    c12 = c2 == 5;
                    c13 = LOBYTE(c2 < 5); c10 = (_DWORD)c2 < (_DWORD)5; c14 = __OFSUB__(c2, 5);
                    c11 = !(__builtin_popcount(LOBYTE(c2 - 5)) & 1); c2 = c2 - 5;
                } else {
                    _BOOL cond_96 = v547 ^ c14; // temp
                    if (c12 || cond_96) {
                        int v467 = c0 & c0; // temp
                        c12 = !v467;
                        c13 = LOBYTE((c0 & c0) < 0); c10 = 0; c14 = 0;
                        c11 = !(__builtin_popcount(LOBYTE(c0 & c0)) & 1);
                        if (!v467) {
                            v736 = v508 + v508; c12 = v508 + v508 == 0;
                            c13 = LOBYTE(v508 + v508 < 0); c10 = (v508 + v508) < v508;
                            c11 = !(__builtin_popcount(LOBYTE(v508 + v508)) & 1); c2 = v508 + v508;
                        } else {
                            int v474 = LODWORD(c2 + 0xaLL); // temp
                            c7 = LODWORD(c2 + 0xaLL);
                            c12 = c0 == 1;
                            c13 = LOBYTE(c0 < 1); c10 = (_DWORD)c0 < (_DWORD)1;
                            c11 = !(__builtin_popcount(LOBYTE(c0 - 1)) & 1);
                            c2 = c12 ? v474 : c2;
                        }
                        goto label_11;
                    } else {
                        c2 = c0 == 3 ? -v508 : v508; c7 = a1;
                        a2 = a2 + c2;
                        c12 = (uintptr_t)(buf_0 + 64) == a1;
                        c13 = LOBYTE((uintptr_t)(buf_0 + 64) < a1); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)a1;
                        c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - a1)) & 1);
                        if ((uintptr_t)(buf_0 + 64) != a1) {
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
                a2 = v485 + c2; c7 = a1;
                c12 = (uintptr_t)(buf_0 + 64) == a1;
                c13 = LOBYTE((uintptr_t)(buf_0 + 64) < a1); c10 = (_QWORD)(uintptr_t)(buf_0 + 64) < (_QWORD)a1;
                c11 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_0 + 64) - a1)) & 1);
                if ((uintptr_t)(buf_0 + 64) == a1) {
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
                _BOOL cond_104 = LODWORD(c0) != 9; // temp
                _BOOL cond_105 = 9 <= LODWORD(c0); // temp
                if (cond_104 && cond_105) {
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
                    int v605 = LODWORD(c0); // temp
                    if (v605 <= 4) {
                        a2 = LODWORD(c0 + (c0 << 1LL));
                        c0 = LODWORD(c0) + 1;
                        c12 = c1 + a2 == 0;
                        c13 = LOBYTE(c1 + a2 < 0); c10 = (c1 + a2) < c1;
                        c1 = c1 + a2; continue;
                    } else {
                        c1 = LODWORD(c1 + c0 + 0x14LL);
                        c0 = v605 + 1;
                        c12 = c0 == 9;
                        c13 = LOBYTE(c0 < 9);
                    }
                }
            }
            a2 = LODWORD(c2 + c1 + 0x12dLL); c1 = 0x24LL;
            int v659 = LODWORD(0x30LL); // temp
            c0 = LODWORD(0x30LL) / 0x24LL; c2 = v659 % 0x24LL;
            int v665 = c2; // temp
            if (v665 == 0) {
                goto label_20;
            }
            c1 = c2;
            a1 = a1 + 4LL;
        label_20:;
            c3 = LODWORD(a2 + c1 + 3LL); v767 = f_rec_fib(8LL);
            v768 = f_rec_power_constprop_0(8LL); a2 = 3LL; a1 = 2LL;
            c8 = LODWORD(v767 + c3) + LODWORD(v768); v769 = f_ackermann(a1, a2);
            int v687 = LODWORD(c8 + v769 + 0xabe0cLL); // temp
            int v688 = LODWORD(c8 + v769 + 0xabe0cLL); // temp
            c2 = (_DWORD)v687 >> 0x1f >> 0x18;
            return LODWORD((_QWORD)(LOBYTE(v688 + c2))) - c2;
        }
    }
label_22:;
label_23:;
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
    v_8 = (uintptr_t)&v_8; pfn = qword_3FD8; ((__int64 (*)())pfn)();
    __builtin_trap(); return;
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
/* Function:   sub_1520 | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1040, sub_14b0 | Xrefs from: unknown */
__int64 sub_1520(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 result; // rax
    if (byte_4010 != '\0') {
        return result;
    } else {
        if (qword_3FF8 != 0LL) {
            _QWORD v13 = qword_4008; // temp
            __int64 c3 = v13; // rdi
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
    __int64 v642; // rax
    _QWORD c3; // rbx
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
        *(_QWORD *)(buf_40 + 32) = (uintptr_t)(buf_40 + 40); c3 = (uintptr_t)(buf_40 + 40);
        _BOOL c18 = (uintptr_t)(buf_40 + 40) == 0x38LL; // ZF
        char c19 = LOBYTE((uintptr_t)(buf_40 + 40) < 0x38LL); // SF
        _BOOL c16 = (_QWORD)(uintptr_t)(buf_40 + 40) < (_QWORD)0x38LL; // CF
        _BOOL c20 = __OFSUB__((uintptr_t)(buf_40 + 40), 0x38LL); // OF
        c17 = !(__builtin_popcount(LOBYTE((uintptr_t)(buf_96 + 40))) & 1);
        while (1) {
            c12 = LODWORD(c3 - 2);
            int v42 = LODWORD(c3); // temp
            c18 = LODWORD(c3) == 1;
            c19 = LOBYTE(LODWORD(c3) < 1); c16 = (_DWORD)LODWORD(c3) < (_DWORD)1;
            c17 = !(__builtin_popcount(LOBYTE(LODWORD(c3) - 1)) & 1);
            if (v42 <= 1) {
            } else {
                c15 = LODWORD(c3);
                result = LODWORD(c14); c18 = 1;
                c19 = LOBYTE(0); c16 = 0; c20 = 0;
                c17 = c17; c3 = 0LL;
                while (1) {
                    c5 = LODWORD(c12 - 2);
                    int v60 = LODWORD(c12); // temp
                    c18 = LODWORD(c12) == 1;
                    c19 = LOBYTE(LODWORD(c12) < 1); c16 = (_DWORD)LODWORD(c12) < (_DWORD)1;
                    c17 = !(__builtin_popcount(LOBYTE(LODWORD(c12) - 1)) & 1);
                    if (v60 <= 1) {
                    label_1:;
                        c3 = LODWORD(c3) + LODWORD(c12);
                        int v544 = LODWORD(c12) & LODWORD(c12); // temp
                        if (v544 != 0) {
                            c18 = 1;
                            c19 = LOBYTE(0); c16 = 0; c20 = 0;
                            c17 = c17; c12 = 0LL; continue;
                        } else {
                            c14 = LODWORD(result + c3 + 1LL);
                            int v555 = LODWORD(c15 - 1); // temp
                            c3 = LODWORD(c15 - 1);
                            c12 = LODWORD(c3 - 2);
                            c18 = c3 == 1;
                            c19 = LOBYTE(c3 < 1); c16 = (_DWORD)c3 < (_DWORD)1;
                            c17 = !(__builtin_popcount(LOBYTE(v555 - 1)) & 1);
                            _BOOL cond_76 = c3 != 1; // temp
                            _BOOL cond_77 = 1 <= c3; // temp
                            if (cond_76 && cond_77) {
                                c15 = LODWORD(c3); result = LODWORD(c14); c19 = LOBYTE(0);
                                c17 = c17;
                                v_12 = LODWORD(c3);
                                c13 = LODWORD(c12);
                                _QWORD c2 = result; // rdx
                                int v83 = LODWORD((uintptr_t)(buf_40 + 40)); // temp
                                c18 = LODWORD((uintptr_t)(buf_40 + 40)) == 1;
                                c19 = LOBYTE(LODWORD((uintptr_t)(buf_40 + 40)) < 1); c16 = (_DWORD)LODWORD((uintptr_t)(buf_40 + 40)) < (_DWORD)1;
                                c17 = !(__builtin_popcount(LOBYTE(LODWORD((uintptr_t)(buf_40 + 40)) - 1)) & 1);
                                if (v83 <= 1) {
                                    goto label_5;
                                } else {
                                    _QWORD c9 = LODWORD(c2); // r9
                                    _QWORD c6 = LODWORD(c12); // rsi
                                    c2 = LODWORD((uintptr_t)(buf_40 + 38));
                                    _QWORD c1 = c15; // rcx
                                    c12 = LODWORD((uintptr_t)(buf_40 + 40));
                                    c3 = LODWORD(c2 - 2);
                                    int v105 = LODWORD(c2); // temp
                                    c18 = LODWORD(c2) == 1;
                                    c19 = LOBYTE(LODWORD(c2) < 1); c16 = (_DWORD)LODWORD(c2) < (_DWORD)1;
                                    c17 = !(__builtin_popcount(LOBYTE(LODWORD(c2) - 1)) & 1);
                                    if (v105 <= 1) {
                                        goto label_5;
                                    } else {
                                        _QWORD c11 = c9; // r11
                                        c9 = c6;
                                        c6 = LODWORD(c2);
                                        c15 = LODWORD(c3 - 2);
                                        int v124 = LODWORD(c3); // temp
                                        c18 = LODWORD(c3) == 1;
                                        c19 = LOBYTE(LODWORD(c3) < 1); c16 = (_DWORD)LODWORD(c3) < (_DWORD)1;
                                        c17 = !(__builtin_popcount(LOBYTE(LODWORD(c3) - 1)) & 1);
                                        if (v124 <= 1) {
                                            continue;
                                        } else {
                                            int v133 = c15; // temp
                                            c18 = c15 == 1;
                                            c19 = LOBYTE(c15 < 1); c16 = (_DWORD)c15 < (_DWORD)1;
                                            c17 = !(__builtin_popcount(LOBYTE(c15 - 1)) & 1);
                                            if (v133 <= 1) {
                                            } else {
                                                c19 = LOBYTE(0); c17 = c17;
                                                *(_DWORD *)(buf_40 + 40) = LODWORD(c2);
                                                result = c9;
                                                c9 = LODWORD(c15 - 2);
                                                _QWORD c8 = LODWORD(c9 - 2); // r8
                                                int v158 = c9; // temp
                                                c18 = c9 == 1;
                                                c19 = LOBYTE(c9 < 1); c16 = (_DWORD)c9 < (_DWORD)1;
                                                c17 = !(__builtin_popcount(LOBYTE(c9 - 1)) & 1);
                                                if (v158 <= 1) {
                                                } else {
                                                    a1 = c9;
                                                    c9 = c15;
                                                    c15 = LODWORD(c3);
                                                    int v172 = result; // temp
                                                    c3 = result;
                                                    result = a1;
                                                    a1 = LODWORD(c8 - 2);
                                                    c18 = LODWORD(c8) == 1;
                                                    c19 = LOBYTE(LODWORD(c8) < 1); c16 = (_DWORD)LODWORD(c8) < (_DWORD)1;
                                                    c17 = !(__builtin_popcount(LOBYTE(LODWORD(c8) - 1)) & 1);
                                                    if (c16 || c18) {
                                                        goto label_5;
                                                    } else {
                                                        *(_DWORD *)(buf_40 + 44) = c11;
                                                        c11 = result;
                                                        do {
                                                            v_44 = c11;
                                                            v_40 = c9;
                                                            v_36 = LODWORD(c8);
                                                            v_32 = LODWORD(c10);
                                                            v_28 = c6;
                                                            v_24 = LODWORD(c2);
                                                            v_20 = LODWORD(c1);
                                                            v_16 = a1; v642 = f_rec_fib(a1);
                                                            a1 = v_16;
                                                            c2 = v_24;
                                                            c6 = v_28;
                                                            a1 = a1 - 1;
                                                            c1 = v_20 + v642;
                                                            c10 = v_32;
                                                            c8 = v_36;
                                                            c18 = a1 == -1;
                                                            c19 = LOBYTE(a1 < -1); c16 = (_DWORD)a1 < (_DWORD)0xffffffffffffffffULL;
                                                            c17 = !(__builtin_popcount(LOBYTE(a1 - -1)) & 1);
                                                            c9 = v_40;
                                                            c11 = v_44;
                                                        } while (a1 != -1);
                                                        c8 = v_36 - 1;
                                                        result = c11;
                                                        c2 = LODWORD(c1 + c2 + 1LL);
                                                        c11 = *(_DWORD *)(buf_40 + 44);
                                                        a1 = LODWORD(c8 - 2);
                                                        c1 = 0LL;
                                                        c18 = c8 == 1;
                                                        c19 = LOBYTE(c8 < 1); c16 = (_DWORD)c8 < (_DWORD)1;
                                                        c17 = !(__builtin_popcount(LOBYTE(v_36 - 1 - 1)) & 1);
                                                        _BOOL cond_24 = (_DWORD)1 <= (_DWORD)c8; // temp
                                                        _BOOL cond_25 = c8 != 1; // temp
                                                        if (!(cond_24 && cond_25)) {
                                                            goto label_10;
                                                        }
                                                    }
                                                label_10:;
                                                    c2 = LODWORD(c2) + LODWORD(c8);
                                                    int v287 = LODWORD(c8) & LODWORD(c8); // temp
                                                    if (v287 != 0) {
                                                        c18 = 1;
                                                        c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                                        c17 = c17; c8 = 0LL;
                                                    } else {
                                                        a1 = result;
                                                        result = v172;
                                                        c3 = c15;
                                                        c15 = c9;
                                                        c9 = LODWORD(a1 - 1);
                                                        c10 = LODWORD(c2 + c10 + 1LL);
                                                        _DWORD v304 = *(_DWORD *)((uintptr_t)(buf_40 + 48)); // temp
                                                        c1 = v304;
                                                        c2 = 0LL;
                                                        c8 = LODWORD(c9 - 2);
                                                        c18 = c9 == 1;
                                                        c19 = LOBYTE(c9 < 1); c16 = (_DWORD)c9 < (_DWORD)1;
                                                        c17 = !(__builtin_popcount(LOBYTE(c9 - 1)) & 1);
                                                        _BOOL cond_31 = c9 != 1; // temp
                                                        _BOOL cond_32 = 1 <= c9; // temp
                                                        if (!(cond_31 && cond_32)) {
                                                            goto label_9;
                                                        }
                                                        continue;
                                                    }
                                                }
                                            label_9:;
                                                c10 = LODWORD(c10) + c9;
                                                int v333 = c9 & c9; // temp
                                                if (v333 != 0) {
                                                    c18 = 1;
                                                    c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                                    c17 = c17; c9 = 0LL;
                                                } else {
                                                                                                        c2 = *(_DWORD *)(buf_40 + 40);
                                                    int v342 = c15 - 1; // temp
                                                    c15 = c15 - 1;
                                                    c9 = result;
                                                    c2 = LODWORD(c2 + c10 + 1LL);
                                                    int v353 = v342; // temp
                                                    c18 = c15 == 1;
                                                    c19 = LOBYTE(c15 < 1); c16 = (_DWORD)c15 < (_DWORD)1;
                                                    c17 = !(__builtin_popcount(LOBYTE(v353)) & 1);
                                                    _BOOL cond_39 = c15 != 1; // temp
                                                    _BOOL cond_40 = 1 <= c15; // temp
                                                    if (!(cond_39 && cond_40)) {
                                                        goto label_8;
                                                    }
                                                }
                                                continue;
                                            }
                                        label_8:;
                                            c2 = LODWORD(c2) + c15;
                                            int v373 = c15 & c15; // temp
                                            if (v373 != 0) {
                                                c18 = 1;
                                                c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                                c17 = c17; c15 = 0LL;
                                            } else {
                                                c3 = LODWORD(c3) - 1;
                                                c5 = LODWORD((uintptr_t)(buf_40 + 40) + c2 + 1LL);
                                                c2 = 0LL;
                                                c15 = LODWORD(c3 - 2);
                                                c18 = c3 == 1;
                                                c19 = LOBYTE(c3 < 1); c16 = (_DWORD)c3 < (_DWORD)1;
                                                c17 = !(__builtin_popcount(LOBYTE(LODWORD(c3) - 1 - 1)) & 1);
                                                _BOOL cond_47 = c3 != 1; // temp
                                                _BOOL cond_48 = 1 <= c3; // temp
                                                if (!(cond_47 && cond_48)) {
                                                    goto label_7;
                                                }
                                            }
                                        }
                                    label_7:;
                                        c5 = LODWORD((uintptr_t)(buf_40 + 40)) + LODWORD(c3);
                                        int v418 = LODWORD(c3) & LODWORD(c3); // temp
                                        if (v418 != 0) {
                                            c18 = 1;
                                            c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                            c17 = c17; c3 = 0LL;
                                        } else {
                                            int v426 = LODWORD(c6 - 1); // temp
                                            c2 = LODWORD(c6 - 1);
                                            c14 = LODWORD(c14 + (uintptr_t)(buf_40 + 40) + 1LL);
                                            c6 = c9;
                                            c5 = 0LL;
                                            c9 = c11;
                                            c3 = LODWORD(c2 - 2);
                                            c18 = c2 == 1;
                                            c19 = LOBYTE(c2 < 1); c16 = (_DWORD)c2 < (_DWORD)1;
                                            c17 = !(__builtin_popcount(LOBYTE(v426 - 1)) & 1);
                                            _BOOL cond_54 = c2 != 1; // temp
                                            _BOOL cond_55 = 1 <= c2; // temp
                                            if (!(cond_54 && cond_55)) {
                                                goto label_6;
                                            }
                                        }
                                    }
                                label_6:;
                                    c14 = LODWORD(c14) + LODWORD(c2);
                                    int v460 = LODWORD(c2) & LODWORD(c2); // temp
                                    if (v460 != 0) {
                                        c18 = 1;
                                        c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                        c17 = c17; c2 = 0LL;
                                    } else {
                                        c2 = c9;
                                        c12 = LODWORD(c6 + c14 + 1LL);
                                        c15 = LODWORD(c1);
                                        c5 = c12 - 1;
                                        c14 = 0LL;
                                        c18 = c12 - 1 == 1;
                                        c19 = LOBYTE(c12 - 1 < 1); c16 = (_DWORD)c12 - 1 < (_DWORD)1;
                                        c17 = !(__builtin_popcount(LOBYTE(c12 - 1 - 1)) & 1);
                                        _BOOL cond_62 = c12 - 1 != 1; // temp
                                        _BOOL cond_63 = 1 <= c12 - 1; // temp
                                        if (!(cond_62 && cond_63)) {
                                            goto label_4;
                                        }
                                        goto label_5;
                                    }
                                }
                            label_4:;
                                c12 = LODWORD(c12) + LODWORD((uintptr_t)(buf_40 + 40));
                                int v506 = LODWORD((uintptr_t)(buf_40 + 40)) & LODWORD((uintptr_t)(buf_40 + 40)); // temp
                                if (v506 != 0) {
                                    c18 = 1;
                                    c19 = LOBYTE(0); c16 = 0; c20 = 0;
                                    c17 = c17; c5 = 0LL;
                                } else {
                                    c3 = v_12;
                                    result = LODWORD(c2);
                                    c3 = LODWORD(c3 + c12 + 1LL);
                                    int v520 = LODWORD(c13 - 1); // temp
                                    c12 = LODWORD(c13 - 1);
                                    c18 = c12 == 1;
                                    c19 = LOBYTE(c12 < 1); c16 = (_DWORD)c12 < (_DWORD)1;
                                    c17 = !(__builtin_popcount(LOBYTE(v520 - 1)) & 1);
                                    _BOOL cond_69 = c12 != 1; // temp
                                    _BOOL cond_70 = 1 <= c12; // temp
                                    if (!(cond_69 && cond_70)) {
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
            c14 = LODWORD(c14) + LODWORD(c3);
            int v579 = LODWORD(c3) & LODWORD(c3); // temp
            if (v579 != 0) {
                c3 = 0LL; continue;
            } else {
                break;
            }
        }
        result = LODWORD(c14 + 1LL);
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
    __int64 v659; // temp
    __int64 v670; // temp
    __int64 v672; // temp
    int v_4;
    int v_52;
    _QWORD result; // rax
    __int64 v675; // rax
    __int64 v671; // rdx
    _QWORD c3; // rbx
    __int64 c4; // rsp
    _QWORD c5; // rbp
    _QWORD c9; // r12
    _QWORD c10; // r13
    _QWORD c11; // r14
    _QWORD c12; // r15
    _DWORD v664; // temp
    result = a2;
    _BOOL c15 = c4 == 0x18LL; // ZF
    char c16 = LOBYTE(c4 < 0x18LL); // SF
    _BOOL c13 = (_QWORD)c4 < (_QWORD)0x18LL; // CF
    _BOOL c17 = __OFSUB__(c4, 0x18LL); // OF
    __int64 v54 = c4 + 0xcLL; // temp
    __int64 v457 = c4 + 0xcLL; // temp
    __int64 v610 = c4 + 0xcLL; // temp
    __int64 v663 = c4 + 0xcLL; // temp
    while (1) {
        _DWORD v33 = *(_DWORD *)(c4 + 0xcLL); // temp
        _QWORD c2 = v33; // rdx
        c5 = LODWORD(c2 - 1);
        int v38 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v38 != 0) {
            c2 = c5; v664 = *(_DWORD *)(v663);
            c5 = v664; continue;
        }
        int v45 = c5; // temp
        c15 = !v45;
        c16 = LOBYTE(c5 < 0); c13 = 0; c17 = 0;
        if (!v45) {
            result = 1LL; break;
        }
        _DWORD v55 = *(_DWORD *)(v54); // temp
        c15 = v55 == 2;
        c16 = LOBYTE(v55 < 2); c13 = (_DWORD)v55 < (_DWORD)2;
        result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_1:;
        c9 = LODWORD(c5 - 1);
        int v73 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v73 != 0) {
            c2 = c9; v659 = c5;
            c9 = c5; c5 = c9;
            v670 = v664; v671 = c5; continue;
        }
        int v80 = c9; // temp
        if (!v80) {
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
        int v106 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v106 != 0) {
            c2 = c10;
            c10 = c9; c9 = c10;
            v671 = c9; v659 = v672; v670 = v672;
            v671 = v672; continue;
        }
        int v113 = c10; // temp
        if (!v113) {
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
        int v139 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v139 != 0) {
            goto label_38;
        }
        int v146 = c11; // temp
        if (!v146) {
            goto label_29;
        }
        c15 = c10 == 2;
        c16 = LOBYTE(c10 < 2); c13 = (_DWORD)c10 < (_DWORD)2;
        c10 = c10 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_7:;
        c12 = LODWORD(c11 - 1);
        int v172 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v172 != 0) {
            goto label_37;
        }
        int v179 = c12; // temp
        if (!v179) {
            goto label_28;
        }
        c15 = c11 == 2;
        c16 = LOBYTE(c11 < 2); c13 = (_DWORD)c11 < (_DWORD)2;
        c11 = c11 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_9:;
        c3 = LODWORD(c12 - 1);
        int v205 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v205 != 0) {
            goto label_36;
        }
        int v212 = c3; // temp
        if (!v212) {
            goto label_27;
        }
        c15 = c12 == 2;
        c16 = LOBYTE(c12 < 2); c13 = (_DWORD)c12 < (_DWORD)2;
        c12 = c12 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_11:;
        _QWORD c1 = LODWORD(c3 - 1); // rcx
        int v238 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v238 != 0) {
            goto label_35;
        }
        int v245 = c1; // temp
        if (!v245) {
            goto label_26;
        }
        c15 = c3 == 2;
        c16 = LOBYTE(c3 < 2); c13 = (_DWORD)c3 < (_DWORD)2;
        c3 = c3 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_13:;
        _QWORD c8 = LODWORD(c1 - 1); // r8
        int v271 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v271 != 0) {
            goto label_34;
        }
        int v278 = c8; // temp
        if (!v278) {
            goto label_25;
        }
        c15 = c1 == 2;
        c16 = LOBYTE(c1 < 2); c13 = (_DWORD)c1 < (_DWORD)2;
        c1 = c1 - 2; result = 1LL;
        c15 = LODWORD(result) == 1;
        c16 = LOBYTE(LODWORD(result) < 1); c13 = (_DWORD)LODWORD(result) < (_DWORD)1;
        result = LODWORD(result) - 1;
    label_15:;
        a1 = LODWORD(c8 - 1);
        int v304 = LODWORD(result); // temp
        c15 = !LODWORD(result);
        c16 = LOBYTE(LODWORD(result) < 0);
        if (v304 != 0) {
            a2 = a1;
            a1 = c8;
            c8 = a1; result = 1LL; break;
        }
        int v311 = a1; // temp
        if (!v311) {
            goto label_24;
        }
        c15 = c8 == 2;
        c16 = LOBYTE(c8 < 2); c13 = (_DWORD)c8 < (_DWORD)2;
        c8 = c8 - 2; result = 1LL;
        a2 = LODWORD(result - 1);
        v_4 = c1; v675 = f_ackermann(a1, a2);
        _DWORD v333 = *(_DWORD *)(c4 + 8LL); // temp
        c8 = v333;
        c1 = v_4;
        int v338 = c8; // temp
        c15 = !c8;
        c16 = LOBYTE(c8 < 0); c13 = 0; c17 = 0;
        if (v338 != 0) {
            goto label_15;
        }
        result = LODWORD(v675) + 1;
        int v354 = c1; // temp
        c15 = !c1;
        c16 = LOBYTE(c1 < 0); c13 = 0; c17 = 0;
        if (v354 != 0) {
            goto label_13;
        }
        result = LODWORD(result) + 1;
        int v370 = c3; // temp
        c15 = !c3;
        c16 = LOBYTE(c3 < 0); c13 = 0; c17 = 0;
        if (v370 != 0) {
            goto label_11;
        }
        result = LODWORD(result) + 1;
        int v386 = c12; // temp
        c15 = !c12;
        c16 = LOBYTE(c12 < 0); c13 = 0; c17 = 0;
        if (v386 != 0) {
            goto label_9;
        }
        result = LODWORD(result) + 1;
        int v402 = c11; // temp
        c15 = !c11;
        c16 = LOBYTE(c11 < 0); c13 = 0; c17 = 0;
        if (v402 != 0) {
            goto label_7;
        }
        result = LODWORD(result) + 1;
        int v418 = c10; // temp
        c15 = !c10;
        c16 = LOBYTE(c10 < 0); c13 = 0; c17 = 0;
        if (v418 != 0) {
            goto label_5;
        }
        result = LODWORD(result) + 1;
        int v434 = c9; // temp
        c15 = !c9;
        c16 = LOBYTE(c9 < 0); c13 = 0; c17 = 0;
        if (v434 != 0) {
            goto label_3;
        }
        result = LODWORD(result) + 1;
        int v450 = c5; // temp
        c15 = !c5;
        c16 = LOBYTE(c5 < 0); c13 = 0; c17 = 0;
        if (v450 != 0) {
            goto label_1;
        }
        _DWORD v458 = *(_DWORD *)(v457); // temp
        c2 = v458;
        result = LODWORD(result) + 1;
        int v468 = c2; // temp
        c15 = !c2;
        c16 = LOBYTE(c2 < 0); c13 = 0; c17 = 0;
        if (v468 != 0) {
            continue;
        } else {
            break;
        }
    label_24:;
        result = LODWORD(1LL) + 1;
        int v500 = c1; // temp
        c15 = !c1;
        c16 = LOBYTE(c1 < 0); c13 = 0; c17 = 0;
        if (v500 != 0) {
            goto label_13;
        }
    label_25:;
        result = LODWORD(1LL) + 1;
        int v517 = c3; // temp
        c15 = !c3;
        c16 = LOBYTE(c3 < 0); c13 = 0; c17 = 0;
        if (v517 != 0) {
            goto label_11;
        }
    label_26:;
        result = LODWORD(1LL) + 1;
        int v534 = c12; // temp
        c15 = !c12;
        c16 = LOBYTE(c12 < 0); c13 = 0; c17 = 0;
        if (v534 != 0) {
            goto label_9;
        }
    label_27:;
        result = LODWORD(1LL) + 1;
        int v551 = c11; // temp
        c15 = !c11;
        c16 = LOBYTE(c11 < 0); c13 = 0; c17 = 0;
        if (v551 != 0) {
            goto label_7;
        }
    label_28:;
        result = LODWORD(1LL) + 1;
        int v568 = c10; // temp
        c15 = !c10;
        c16 = LOBYTE(c10 < 0); c13 = 0; c17 = 0;
        if (v568 != 0) {
            goto label_5;
        }
    label_29:;
        result = LODWORD(1LL) + 1;
        int v585 = c9; // temp
        c15 = !c9;
        c16 = LOBYTE(c9 < 0); c13 = 0; c17 = 0;
        if (v585 != 0) {
            goto label_3;
        }
    label_30:;
        result = LODWORD(1LL) + 1;
        int v602 = c5; // temp
        c15 = !c5;
        c16 = LOBYTE(c5 < 0); c13 = 0; c17 = 0;
        if (v602 != 0) {
            goto label_1;
        }
    label_31:;
        _DWORD v611 = *(_DWORD *)(v610); // temp
        c2 = v611;
        result = LODWORD(1LL) + 1;
        int v621 = c2; // temp
        if (v621 != 0) {
            continue;
        }
        break;
    label_34:;
        a2 = c8;
        c8 = c1;
        c1 = c8;
    label_35:;
        a2 = c1;
        c1 = c3;
        c3 = c1;
    label_36:;
        c1 = c3;
        c3 = c12;
        c12 = c3;
    label_37:;
        c2 = c12;
        c12 = c11;
        c11 = c12;
    label_38:;
        c2 = c11;
        c11 = c10;
        c10 = c11; v671 = c10; c10 = v659;
        c9 = c10; v671 = c9;
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
    __int64 v86; // rax
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
    _DWORD v23; // temp
    char v15; // temp
    char v31; // temp
    int v36; // temp
    if (!(LOBYTE(a1) & 1)) {
        c2 = 1LL;
        v23 = a1;
        v15 = __builtin_popcount(LOBYTE(a1 >> 1)) & 1; a1 = a1 >> 1;
        result = a1;
        v31 = LOBYTE(a1) & 1; c10 = !v31;
        c11 = (LOBYTE(a1) & 1) < '\0'; c8 = 0;
        c12 = 0;
        if (v31) {
        }
        result = result >> 1; v16 = result; c1 = result;
        v15 = LOBYTE(result) & 1; c10 = !v15; c11 = (LOBYTE(result) & 1) < '\0';
        c8 = 0; c12 = 0;
        if (!v15) {
            c6 = 1LL;
        } else {
            int v43 = result; // temp
            c10 = v43 == 1;
            c11 = LOBYTE(result < 1); c8 = (_DWORD)result < (_DWORD)1;
            result = result - 1; c6 = 2LL;
            c1 = result; result = 2LL;
            if (v43 != 1) {
                *(_DWORD *)(buf_0 + 12) = LODWORD(c2);
                *(_DWORD *)(buf_0 + 8) = LODWORD(c4);
                *(_DWORD *)(buf_0 + 4) = LODWORD(c6); *(_DWORD *)buf_0 = LODWORD(c7); v86 = f_rec_power_constprop_0(a1 >> 1);
                v16 = *(_DWORD *)(buf_0 + 4); c6 = *(_DWORD *)(buf_0 + 4);
                c4 = *(_DWORD *)(buf_0 + 8); v23 = v86 * v86; result = v86 * v86;
                v23 = *(_DWORD *)(buf_0 + 12); c2 = *(_DWORD *)(buf_0 + 12); result = result * *(_DWORD *)buf_0;
                result = v23 * *(_DWORD *)(buf_0 + 4); result = v23 * *(_DWORD *)(buf_0 + 8); return v23 * *(_DWORD *)(buf_0 + 12);
            }
            v16 = result;
            result = result * result;
            v36 = result * LODWORD(c4); result = result * LODWORD(c4); result = LODWORD(2LL) * LODWORD(2LL);
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
        char v61 = LOBYTE(c1) & 1; // temp
        c10 = !v61;
        c11 = (LOBYTE(c1) & 1) < '\0'; c8 = 0; c12 = 0;
        if (!v61) {
            c7 = 1LL;
        } else {
            int v66 = c1; // temp
            c1 = c1 - 1;
            a1 = c1;
            if (v66 == 1) {
                result = LODWORD(2LL) * LODWORD(2LL);
            } else {
            }
        }
    }
label_0:;
    return 0;
}
