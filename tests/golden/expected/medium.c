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

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int128 field_0;
    __int128 field_16;
    __int128 field_32;
};
struct __anon1 {
    void * field_0;
    __int64 field_8;
};


/* Function:   main | Address: 0x1060 | Size: 0x40d (1037 bytes) | Convention: System V AMD64 | Stack frame: 0x58 (88 bytes) | Xrefs to:   __stack_chk_fail, f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
int main(void) {
    int buf_8[2];
    char buf_88[64]; // int buf_88[16]
    char buf_16[16];
    int v0; // eax
    _QWORD v1; // rax
    __int64 v2; // rax
    __int64 v3; // rax
    __int64 v4; // rax
    int v5; // rbx
    _QWORD v6; // rsi
    _QWORD v7; // rdi
    _QWORD v8; // r10
    _QWORD v9; // r11
    __m128i v10; // xmm1
    *(_QWORD *)(buf_16 + 8) = v5;
    __int64 v11 = 0xa; // rdx
    __int64 v12 = 0; // rcx
    __m128i v13 = (((unsigned __int128)0x900000006ULL << 64) | 0x300000000ULL); // xmm0
    v0 = 1;
    *(_OWORD *)buf_88 = v13;
    *(_OWORD *)(buf_88 + 16) = (((unsigned __int128)0x1500000012ULL << 64) | 0xf0000000cULL);
    *(_OWORD *)(buf_88 + 32) = (((unsigned __int128)0x210000001eULL << 64) | 0x1b00000018ULL);
    *(_OWORD *)(buf_88 + 48) = (((unsigned __int128)0x2d0000002aULL << 64) | 0x2700000024ULL);
    do {
        v6 = (_QWORD)v0;
        v0 += v12;
        v12 = v6;
        --v11;
    } while (v11);
    v12 = v6 + 0x38e;
    v11 = 0x24;
    v0 = 0x30;
    do {
        v6 = v11;
        v11 = v0 % v6;
        v0 = v6;
    } while (v11);
    v1 = 0x1b;
    while (1) {
        v8 = v1 & 1;
        if (v8) {
            v11 += 2;
            v1 = (_DWORD)(v1 + (v1 << 1LL) + 1LL) >> 1;
        } else {
            v1 >>= 1;
            ++v11;
            if (v1 == 1) {
                break;
            }
        }
    }
    v12 = v12 + v6 + v11;
    v6 = 0;
    v11 = 0x20;
    v0 = -559038737;
    do {
        v7 = v0;
        v0 = (_DWORD)v0 >> 1;
        v7 &= 1;
        v6 += v7;
        --v11;
    } while (v11);
    v12 = (_DWORD)(v6 + v12 + 0x46LL);
    __int64 v14 = (uintptr_t)buf_88; // r9
    __int64 v15 = (uintptr_t)(buf_88 + 64); // r8
    v1 = (uintptr_t)buf_88;
    v13 = 0;
    do {
        v13 = _mm_add_epi32(v13, *(_OWORD *)v1);
        v1 += 0x10LL;
    } while ((uintptr_t)(buf_88 + 64) != v1);
    v7 = (uintptr_t)(buf_88 + 4);
    v6 = (uintptr_t)(buf_88 + 4);
    v13 = _mm_add_epi32(v13, (_OWORD)v13 >> 0x40);
    v10 = (_OWORD)v13 >> 0x20;
    v13 = _mm_add_epi32(v13, v10);
    v11 = (_DWORD)v13 + v12;
    int v16 = ((uintptr_t)(buf_88 + 64) - (uintptr_t)(buf_88 + 4)) & 4; // r11d
    v12 = (uintptr_t)(buf_88 + 4);
    v6 = *(_DWORD *)(buf_88 + 4);
    v0 = 0u < v6 ? v6 : 0u;
    v6 = (uintptr_t)(buf_88 + 8);
    do {
        v9 = *(_DWORD *)v6;
        v0 = v0 < v9 ? v9 : v0;
        v9 = *(_DWORD *)(v6 + 4LL);
        v0 = v0 < v9 ? v9 : v0;
        v6 += 8LL;
    } while ((uintptr_t)(buf_88 + 64) != v6);
    v1 = v0 + v11;
    v6 = (_DWORD)((uintptr_t)(buf_88 + 64) - (uintptr_t)(buf_88 + 4)) & 4;
    v12 = *(_DWORD *)(buf_88 + 4);
    v11 = 0u != v12 && v12 <= 0u ? v12 : 0u;
    v12 = (uintptr_t)(buf_88 + 8);
    do {
        v6 = *(_DWORD *)v12;
        v11 = v11 != v6 && v6 <= v11 ? v6 : v11;
        v6 = *(_DWORD *)(v12 + 4LL);
        v11 = v11 != v6 && v6 <= v11 ? v6 : v11;
        v12 += 8LL;
    } while ((uintptr_t)(buf_88 + 64) != v12);
    v11 += v1;
    __m128i v17 = 0; // xmm2
    v1 = (uintptr_t)buf_88;
    do {
        v13 = *(_OWORD *)v1;
        v1 += 0x10LL;
        v10 = v13;
        v10 = _mm_mul_epu32(v13, v13);
        v13 = _mm_srli_epi64(v13, 0x20);
        v13 = _mm_mul_epu32(v13, v13);
        v10 = _mm_shuffle_epi32(v10, 8);
        v13 = _mm_shuffle_epi32(v13, 8);
        v10 = _mm_unpacklo_epi32(v10, v13);
        v17 = _mm_add_epi32(v17, v10);
    } while ((uintptr_t)(buf_88 + 64) != v1);
    v1 = 0;
    v17 = _mm_add_epi32(v17, (_OWORD)v17 >> 0x40);
    v17 = _mm_add_epi32(v17, (_OWORD)v17 >> 0x20);
    v12 = (_DWORD)v17 + v11;
    v11 = (uintptr_t)buf_88;
    while (1) {
        if (*(_DWORD *)v11 == 0xf) {
            break;
        } else {
            ++v1;
            v11 += 4LL;
            if (v1 == 0x10) {
                v1 = 0xffffffff;
                break;
            }
        }
    }
    v6 = 2;
    v9 = (_DWORD)(v1 + v12 + 0x581LL);
    while (1) {
        ++v8;
        if (v8 != 0xa) {
            while (1) {
                ++v6;
                v12 = 2;
                if (v6 != 3 && 3 <= v6) {
                    while (1) {
                        v0 = v6 / v12;
                        v11 = v6 % v12;
                        if (v11) {
                            ++v12;
                            v0 = v12 * v12;
                            if (v0 != v6 && v6 <= v0) {
                                break;
                            }
                        } else {
                            break;
                        }
                    }
                    if (v11) {
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
    v9 += v6;
    v12 = 0x12;
    int v18 = 0xc; // ebx
    do {
        v11 = v18;
        v18 = v12;
        v0 = v11 / v12;
        v11 %= v12;
        v12 = v11;
    } while (v11);
    v6 = 0;
    int v19 = 0xd8u % v18; // edx
    while (1) {
        v1 = *(_DWORD *)v14;
        v11 = v1;
        v1 = (_DWORD)((v1 * 0x66666667LL) >> 0x21) - (v11 >> 0x1f);
        int v20 = (_DWORD)(v1 + (v1 << 2LL)); // r9d
        v1 = v11;
        v0 = v11 - v20;
        if (v0 == 2) {
            v11 -= 5;
        } else {
            if (v0 <= 2) {
                if (!v0) {
                    v11 = v11 + v11;
                } else {
                    v11 = v0 == 1 ? (_DWORD)(v11 + 0xaLL) : v11;
                }
            } else {
                v11 = v0 == 3 ? -v11 : v11;
                v14 = v7;
                v6 += v11;
                if ((uintptr_t)(buf_88 + 64) != v7) {
                    v7 += 4LL;
                    continue;
                } else {
                    break;
                }
            }
        }
        v6 += v11;
        v14 = v7;
        if ((uintptr_t)(buf_88 + 64) == v7) {
            break;
        }
        v7 += 4LL;
    }
    v11 = (_DWORD)((_DWORD)(0xd8u / v18 + v9 - 1218664206) + v6);
    v1 = 0;
    while (1) {
        if (!(v1 != 9 && 9 <= v1)) {
            while (1) {
                if (v1 <= 4) {
                    break;
                } else {
                    v12 = (_DWORD)(v12 + v1 + 0x14LL);
                    ++v1;
                    if (v1 > 9) {
                        break;
                    }
                }
            }
            if (v1 <= 9) {
                v6 = (_DWORD)(v1 + (v1 << 1LL));
                ++v1;
                v12 += v6;
                continue;
            }
        }
        v12 = (_DWORD)(v12 + v1 - 10);
        ++v1;
        if (v1 == 0x14) {
            break;
        }
    }
    v6 = (_DWORD)(v11 + v12 + 0x12dLL);
    v1 = 0x30;
    v12 = 0x24;
    while (1) {
        v11 = v1 % v12;
        v1 = v12;
        if (v11) {
            v12 = v11;
        } else {
            break;
        }
    }
    v2 = f_rec_fib(8LL);
    v8 = (_DWORD)(v2 + (_DWORD)(v6 + v12 + 3LL));
    v3 = f_rec_power_constprop_0(8LL);
    v8 += v3;
    v4 = f_ackermann(2LL, 3LL);
    v11 = (_DWORD)(v8 + v4 + 0xabe0cLL) >> 0x1f >> 0x18;
    return (_DWORD)(_BYTE)((_DWORD)(v8 + v4 + 0xabe0cLL) + v11) - v11;
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
/* Function:   deregister_tm_clones | Address: 0x14b0 | Size: 0x2c (44 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void deregister_tm_clones(void) {
    return;
}
/* Function:   __do_global_dtors_aux | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   deregister_tm_clones, sub_1040 | Xrefs from: unknown */
__int64 __do_global_dtors_aux(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 result; // rax
    __int64 v1; // rax
    if (byte_4010) {
        return result;
    } else {
        if (qword_3FF8) {
            __int64 v2 = qword_4008; // rdi
            v1 = sub_1040(v2);
        }
        result = deregister_tm_clones();
        byte_4010 = 1;
        return result;
    }
}
/* Function:   frame_dummy | Address: 0x1560 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void frame_dummy(void) {
    sub_14e0();
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
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
    int field_44;
};
struct __anon1 {
    __int64 field_0;
    __int64 field_8;
    __int64 field_16;
    __int64 field_24;
    void * field_32;
    void * field_40;
};

/* Function:   f_rec_fib | Address: 0x1570 | Size: 0x2ae (686 bytes) | Convention: System V AMD64 | Stack frame: 0x68 (104 bytes) | Xrefs to:   f_rec_fib | Xrefs from: unknown */
int f_rec_fib(int a1) {
    int v_104;
    int v_100;
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
    _QWORD result; // rax
    __int64 v2; // rax
    _QWORD v3; // rbx
    _QWORD v4; // rbp
    _QWORD v5; // r12
    _QWORD v6; // r13
    if (a1 <= 1) {
        return a1;
    } else {
        int v7 = 0; // r14d
        v4 = (_DWORD)(a1 - 2);
        v3 = v4;
        while (1) {
            v5 = (_DWORD)(v3 - 2);
            if (v3 > 1) {
                do {
                    _QWORD v8 = v3; // r15
                    result = v7;
                    v3 = 0;
                    while (1) {
                        v4 = (_DWORD)(v5 - 2);
                        if (v5 > 1) {
                            do {
                                v_92 = v3;
                                v6 = v5;
                                _QWORD v9 = result; // rdx
                                v5 = 0;
                                while (1) {
                                    __int64 v10 = 0; // r14
                                    if (v4 > 1) {
                                        do {
                                            _QWORD v11 = v9; // r9
                                            _QWORD v12 = v5; // rsi
                                            v9 = (_DWORD)(v4 - 2);
                                            _QWORD v13 = v8; // rcx
                                            v5 = v4;
                                            while (1) {
                                                v3 = (_DWORD)(v9 - 2);
                                                v4 = 0;
                                                if (v9 > 1) {
                                                    do {
                                                        _QWORD v14 = v11; // r11
                                                        v11 = v12;
                                                        v12 = v9;
                                                        while (1) {
                                                            v8 = (_DWORD)(v3 - 2);
                                                            v9 = 0;
                                                            if (v3 > 1) {
                                                                while (1) {
                                                                    if (v8 > 1) {
                                                                        do {
                                                                            v_104 = v9;
                                                                            result = v11;
                                                                            __int64 v15 = 0; // r10
                                                                            v11 = (_DWORD)(v8 - 2);
                                                                            while (1) {
                                                                                _QWORD v16 = (_DWORD)(v11 - 2); // r8
                                                                                v9 = 0;
                                                                                if (v11 > 1) {
                                                                                    do {
                                                                                        v_96 = v13;
                                                                                        a1 = v11;
                                                                                        v11 = v8;
                                                                                        v8 = v3;
                                                                                        v3 = result;
                                                                                        result = a1;
                                                                                        while (1) {
                                                                                            a1 = (_DWORD)(v16 - 2);
                                                                                            v13 = 0;
                                                                                            if (!((_DWORD)v16 < 1 || v16 == 1)) {
                                                                                                do {
                                                                                                    v_100 = v14;
                                                                                                    v14 = result;
                                                                                                    do {
                                                                                                        v_60 = v14;
                                                                                                        v_64 = v11;
                                                                                                        v_68 = v16;
                                                                                                        v_72 = v15;
                                                                                                        v_76 = v12;
                                                                                                        v_80 = v9;
                                                                                                        v_84 = v13;
                                                                                                        v_88 = a1;
                                                                                                        v2 = f_rec_fib(a1);
                                                                                                        v9 = v_80;
                                                                                                        v12 = v_76;
                                                                                                        a1 = v_88 - 1;
                                                                                                        v13 = v_84 + v2;
                                                                                                        v15 = v_72;
                                                                                                        v16 = v_68;
                                                                                                        v11 = v_64;
                                                                                                        v14 = v_60;
                                                                                                    } while (a1 != -1);
                                                                                                    --v16;
                                                                                                    result = v14;
                                                                                                    v9 = (_DWORD)(v13 + v9 + 1LL);
                                                                                                    v14 = v_100;
                                                                                                    a1 = (_DWORD)(v16 - 2);
                                                                                                    v13 = 0;
                                                                                                } while ((_DWORD)1 <= (_DWORD)v16 && v16 != 1);
                                                                                            }
                                                                                            v9 += v16;
                                                                                            if (v16) {
                                                                                                v16 = 0;
                                                                                            } else {
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                        a1 = result;
                                                                                        result = v3;
                                                                                        v3 = v8;
                                                                                        v8 = v11;
                                                                                        v11 = (_DWORD)(a1 - 1);
                                                                                        v15 = (_DWORD)(v9 + v15 + 1LL);
                                                                                        v13 = v_96;
                                                                                        v9 = 0;
                                                                                        v16 = (_DWORD)(v11 - 2);
                                                                                    } while (v11 != 1 && 1 <= v11);
                                                                                }
                                                                                v15 += v11;
                                                                                if (v11) {
                                                                                    v11 = 0;
                                                                                } else {
                                                                                    break;
                                                                                }
                                                                            }
                                                                            --v8;
                                                                            v11 = result;
                                                                            v9 = (_DWORD)(v_104 + v15 + 1LL);
                                                                        } while (v8 != 1 && 1 <= v8);
                                                                    }
                                                                    v9 += v8;
                                                                    if (v8) {
                                                                        v8 = 0;
                                                                    } else {
                                                                        --v3;
                                                                        v4 = (_DWORD)(v4 + v9 + 1LL);
                                                                        v9 = 0;
                                                                        v8 = (_DWORD)(v3 - 2);
                                                                        if (!(v3 != 1 && 1 <= v3)) {
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            v4 += v3;
                                                            if (v3) {
                                                                v3 = 0;
                                                            } else {
                                                                break;
                                                            }
                                                        }
                                                        v9 = (_DWORD)(v12 - 1);
                                                        v10 = (_DWORD)(v10 + v4 + 1LL);
                                                        v12 = v11;
                                                        v4 = 0;
                                                        v11 = v14;
                                                        v3 = (_DWORD)(v9 - 2);
                                                    } while (v9 != 1 && 1 <= v9);
                                                }
                                                v10 += v9;
                                                if (v9) {
                                                    v9 = 0;
                                                } else {
                                                    break;
                                                }
                                            }
                                            v9 = v11;
                                            v4 = v5;
                                            v5 = (_DWORD)(v12 + v10 + 1LL);
                                            v8 = v13;
                                            --v4;
                                            v10 = 0;
                                        } while (v4 != 1 && 1 <= v4);
                                    }
                                    v5 += v4;
                                    if (v4) {
                                        v4 = 0;
                                    } else {
                                        break;
                                    }
                                }
                                result = v9;
                                v3 = (_DWORD)(v_92 + v5 + 1LL);
                                v5 = (_DWORD)(v6 - 1);
                                v4 = (_DWORD)(v5 - 2);
                            } while (v5 != 1 && 1 <= v5);
                        }
                        v3 += v5;
                        if (v5) {
                            v5 = 0;
                        } else {
                            break;
                        }
                    }
                    v7 = (_DWORD)(result + v3 + 1LL);
                    v3 = (_DWORD)(v8 - 1);
                    v5 = (_DWORD)(v3 - 2);
                } while (v3 != 1 && 1 <= v3);
            }
            v7 += v3;
            if (v3) {
                v3 = 0;
            } else {
                return v7 + 1;
            }
        }
    }
    return 0;
}
// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    int field_0;
    int field_4;
    int field_8;
};
struct __anon1 {
    __int64 field_0;
    __int64 field_8;
    __int64 field_16;
    __int64 field_24;
    __int64 field_32;
    __int64 field_40;
};

/* Function:   f_ackermann | Address: 0x1830 | Size: 0x34e (846 bytes) | Convention: System V AMD64 | Stack frame: 0x44 (68 bytes) | Xrefs to:   f_ackermann | Xrefs from: unknown */
int f_ackermann(int a1, int a2) {
    int v_68;
    int v_64;
    int v_60;
    int v2; // eax
    _QWORD result; // rax
    __int64 v4; // rax
    _QWORD v5; // rcx
    _QWORD v6; // rbx
    _QWORD v7; // rbp
    _QWORD v8; // r12
    _QWORD v9; // r13
    _QWORD v10; // r14
    _QWORD v11; // r15
    v2 = a2;
    v_60 = a1;
    while (1) {
        _QWORD v12 = v_60; // rdx
        v7 = (_DWORD)(v12 - 1);
        if (v2) {
            v12 = v7;
            v7 = v_60;
            v_60 = v12;
        } else {
            if (!v7) {
                v2 = 1;
                break;
            } else {
                v_60 -= 2;
                v2 = 1;
            }
        }
        --v2;
        while (1) {
            v8 = (_DWORD)(v7 - 1);
            if (v2) {
                v12 = v8;
                v8 = v7;
                v7 = v8;
            } else {
                if (!v8) {
                    goto label_53;
                } else {
                    v7 -= 2;
                    v2 = 1;
                }
            }
            --v2;
            while (1) {
                v9 = (_DWORD)(v8 - 1);
                if (v2) {
                    v12 = v9;
                    v9 = v8;
                    v8 = v9;
                } else {
                    if (!v9) {
                        goto label_52;
                    } else {
                        v8 -= 2;
                        v2 = 1;
                    }
                }
                --v2;
                while (1) {
                    v10 = (_DWORD)(v9 - 1);
                    if (v2) {
                        v12 = v10;
                        v10 = v9;
                        v9 = v10;
                    } else {
                        if (!v10) {
                            goto label_51;
                        } else {
                            v9 -= 2;
                            v2 = 1;
                        }
                    }
                    --v2;
                    while (1) {
                        v11 = (_DWORD)(v10 - 1);
                        if (v2) {
                            v12 = v11;
                            v11 = v10;
                            v10 = v11;
                        } else {
                            if (!v11) {
                                goto label_50;
                            } else {
                                v10 -= 2;
                                v2 = 1;
                            }
                        }
                        --v2;
                        while (1) {
                            v6 = (_DWORD)(v11 - 1);
                            if (v2) {
                                v5 = v6;
                                v6 = v11;
                                v11 = v6;
                            } else {
                                if (!v6) {
                                    goto label_49;
                                } else {
                                    v11 -= 2;
                                    v2 = 1;
                                }
                            }
                            --v2;
                            while (1) {
                                v5 = (_DWORD)(v6 - 1);
                                if (v2) {
                                    a2 = v5;
                                    v5 = v6;
                                    v6 = v5;
                                } else {
                                    if (!v5) {
                                        goto label_48;
                                    } else {
                                        v6 -= 2;
                                        v2 = 1;
                                    }
                                }
                                --v2;
                                while (1) {
                                    _QWORD v13 = (_DWORD)(v5 - 1); // r8
                                    if (v2) {
                                        a2 = v13;
                                        v13 = v5;
                                        v5 = v13;
                                    } else {
                                        if (!v13) {
                                            goto label_47;
                                        } else {
                                            v5 -= 2;
                                            v2 = 1;
                                        }
                                    }
                                    result = v2 - 1;
                                    while (1) {
                                        a1 = (_DWORD)(v13 - 1);
                                        if (result) {
                                            a2 = a1;
                                            a1 = v13;
                                            v13 = a1;
                                        } else {
                                            if (!a1) {
                                                break;
                                            } else {
                                                v13 -= 2;
                                                result = 1;
                                            }
                                        }
                                        a2 = (_DWORD)(result - 1);
                                        v_64 = v13;
                                        v_68 = v5;
                                        v4 = f_ackermann(a1, a2);
                                        v13 = v_64;
                                        v5 = v_68;
                                        if (!v13) {
                                            goto label_37;
                                        }
                                    }
                                    v2 = 1u + 1;
                                    if (v5) {
                                        continue;
                                    } else {
                                        break;
                                    }
                                label_37:;
                                    v2 = v4 + 2;
                                    if (!v5) {
                                        break;
                                    }
                                }
                                ++v2;
                                if (v6) {
                                    continue;
                                } else {
                                    break;
                                }
                            label_47:;
                                v2 = 1u + 1;
                                if (!v6) {
                                    break;
                                }
                            }
                            ++v2;
                            if (v11) {
                                continue;
                            } else {
                                break;
                            }
                        label_48:;
                            v2 = 1u + 1;
                            if (!v11) {
                                break;
                            }
                        }
                        ++v2;
                        if (v10) {
                            continue;
                        } else {
                            break;
                        }
                    label_49:;
                        v2 = 1u + 1;
                        if (!v10) {
                            break;
                        }
                    }
                    ++v2;
                    if (v9) {
                        continue;
                    } else {
                        break;
                    }
                label_50:;
                    v2 = 1u + 1;
                    if (!v9) {
                        break;
                    }
                }
                ++v2;
                if (v8) {
                    continue;
                } else {
                    break;
                }
            label_51:;
                v2 = 1u + 1;
                if (!v8) {
                    break;
                }
            }
            ++v2;
            if (v7) {
                continue;
            } else {
                break;
            }
        label_52:;
            v2 = 1u + 1;
            if (!v7) {
                break;
            }
        }
        v12 = v_60;
        ++v2;
        if (v12) {
            continue;
        } else {
            break;
        }
    label_53:;
        v12 = v_60;
        v2 = 1u + 1;
        if (!v12) {
            break;
        }
    }
    return v2 + 1;
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
    int v_24;
    int v_20;
    int v_16;
    int v_12;
    _QWORD result; // rax
    __int64 v2; // rax
    __int64 v3; // rdx
    __int64 v4; // rsi
    __int64 v5; // r8
    __int64 v6; // r9
    if (!((_BYTE)a1 & 1)) {
        v3 = 1;
    } else {
        v3 = 2;
        --a1;
        if (a1 == 1) {
            return 2;
        }
    }
    a1 >>= 1;
    result = a1;
    if (!((_BYTE)a1 & 1)) {
        v4 = 1;
    } else {
        v4 = 2;
        result = a1 - 1;
        if (a1 == 1) {
            return 2u * 2u * v3;
        }
    }
    result >>= 1;
    __int64 v7 = result; // rcx
    if (!((_BYTE)result & 1)) {
        v5 = 1;
    } else {
        v5 = 2;
        v7 = result - 1;
        result = 2;
        if (result == 1) {
            result = result * result;
            result *= v4;
            result = result * result;
            result *= v3;
            return result;
        }
    }
    v7 >>= 1;
    a1 = v7;
    if (!((_BYTE)v7 & 1)) {
        v6 = 1;
    } else {
        --v7;
        v6 = 2;
        a1 = v7;
        if (v7 == 1) {
            result = 2u * 2u * v5;
            result = result * result;
            result *= v4;
            result = result * result;
            result *= v3;
            return result;
        }
    }
    v_12 = v3;
    v_16 = v4;
    v_20 = v5;
    v_24 = v6;
    v2 = f_rec_power_constprop_0(a1 >> 1);
    result = v2 * v2 * v_24;
    result = result * result * v_20;
    result = result * result * v_16;
    return result * result * v_12;
}
