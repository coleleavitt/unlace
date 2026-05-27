typedef unsigned char _BYTE;
typedef unsigned char _BOOL; typedef unsigned short _WORD; typedef unsigned int _DWORD; typedef unsigned long long _QWORD;
typedef struct _OWORD { unsigned long long lo; unsigned long long hi; } _OWORD; typedef signed short __int16; typedef signed long long __int64;
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
// Minimal C11 atomic declarations used by recovered AArch64 atomics.
typedef enum { memory_order_relaxed, memory_order_consume, memory_order_acquire, memory_order_release, memory_order_acq_rel, memory_order_seq_cst } memory_order;
#define _Atomic
unsigned long long atomic_load_explicit(_Atomic unsigned long long *obj, memory_order order);
void atomic_store_explicit(_Atomic unsigned long long *obj, unsigned long long desired, memory_order order);
unsigned long long atomic_fetch_add_explicit(_Atomic unsigned long long *obj, unsigned long long arg, memory_order order);
unsigned long long atomic_exchange_explicit(_Atomic unsigned long long *obj, unsigned long long desired, memory_order order);
_Bool atomic_compare_exchange_strong_explicit(_Atomic unsigned long long *obj, unsigned long long *expected, unsigned long long desired, memory_order success, memory_order failure);
_BYTE byte_4008;
_BYTE byte_4010;
_QWORD qword_3FD8;
_QWORD qword_4008;
__int64 sub_1040();
void sub_14b0(void);
void sub_1520(void);
void sub_1560(void);

/* Function:   main | Address: 0x1060 | Size: 0x40d (1037 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   __stack_chk_fail, f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
void __noreturn main(void) {
    int v34; // temp
    int v20; // eax
    __int64 v29; // rcx
    int v4; // edx
    int v41; // ebx
    int v3; // rbx
    int v22; // esi
    __int64 v28; // rsi
    int v23; // r10d
    _BOOL cond; // ZF
    int v37; // reg?
    int v10; // temp
    _OWORD v33; // temp
    __int64 v2 = v2 - 8LL; // temp
    *(_QWORD *)(v2) = v3;
    int v6 = 0; // ecx
    _OWORD v9 = unk_2010; // temp
    v2 = __readfsqword(0x28u); v2 += 0x48LL; *(_QWORD *)(v2) = v2;
    v20 = 1; _mm_load_ps(v2, v9); v2 = v8 + 0x2020LL;
    v9 = unk_2020; _mm_load_ps(v2 + 0x10LL, v9); v2 = v8 + 0x2030LL;
    v9 = unk_2030; _mm_load_ps(v2 + 0x20LL, v9); v2 = v8 + 0x2040LL;
    v9 = unk_2040; v2 += 0x30LL; _mm_load_ps(v2, v9);
    do {
        v22 = v20; v20 = v20 + v6; v6 = v20;
        v10 = v4 - 1;
    } while (v10 != 1);
    v10 = v20 + 0x38e; cond = 0;
    do {
        v22 = v4; v4 = cond; v20 = v4;
    } while (cond != 0);
    for (; v10 != 0; cond = 1) {
        v23 = v10; v2 <<= 1LL; v10 = v4 + 2;
        v4 = v10; cond = 1; v20 = cond;
    }
    v22 = 0; cond = 0;
    do {
        v10 = cond & 1;
        int v27 = v10; // edi
        v22 = v22 + v10;
    } while (v10 != 1);
    v2 = v2 + v2; v6 = v2 + 0x46LL;
    __int64 v30 = v2; // r9
    __int64 v31 = v2 + 0x40LL; // rax
    __int128 v32 = 0; // xmm0
    do {
        v33 = *(_OWORD *)(v31); v32 = _mm_add_epi32(v32, v33); v31 = v31 + 0x10LL;
    } while (v31);
    __int64 v34 = v2 + 4LL; // rdi
    v2 = 0LL; v32 = _mm_add_epi32(v32, v32);
    __int128 v35 = v32; // xmm1
    v32 = _mm_add_epi32(v32, v32);
    if (v4 == cond) {
        v10 = *(_DWORD *)(v2); v22 = v10; v10 = 0;
        v20 = cond ^ __OFSUB__(0, v10) ? v10 : 0; v28 = v2 + 8LL;
        if (v37) {
            do {
                v10 = *(_DWORD *)(v28); v10 = v20 - v10; v20 = LOBYTE(v10 < 0) ^ __OFSUB__(v20, v10) ? v10 : v20;
                cond = v20 < cond; v20 = LOBYTE(cond) ^ __OFSUB__(v20, cond) ? cond : v20;
            } while (v20);
        }
    }
    v22 = v10;
    if (!v10) {
        v10 = *(_DWORD *)(v2); v6 = v10; v10 = 0;
        cond = 0; v4 = 0 ? v10 : 0; v29 = v2 + 8LL;
        if (v37) {
            do {
                v10 = *(_DWORD *)(v29); v10 = v4 - v10; v4 = v4 != v10 && !(LOBYTE(v10 < 0) ^ __OFSUB__(v4, v10)) ? v10 : v4;
                v22 = cond; cond = v4 < cond; v4 = cond ? cond : v4;
            } while (v6);
        }
    }
    v4 = v10;
    __int128 v39 = 0; // xmm2
    v31 = v2;
    do {
        v33 = *(_OWORD *)(v31); v31 = v31 + 0x10LL; v35 = _mm_mul_epu32(v33, v33);
        v32 = _mm_mul_epu32(v33, v33); v35 = _mm_shuffle_epi32(v35, v35); v32 = _mm_shuffle_epi32(v32, v32);
        v39 = _mm_add_epi32(v39, v35);
    } while (v31);
    v20 = 0; v39 = _mm_add_epi32(v39, v39);
    __int64 v40 = v2; // rdx
    for (; v20 == 0x1f; cond = v20 == 0x1f) {
        v20 = v20 + 1; v40 = v2;
    }
    if (!cond) {
    } else {
    }
    for (; v10 != v22; cond = v10 != v22) {
        v20 = v22 / v6; v4 = cond; v6 = v10;
        v20 = v10;
    }
    v22 = v22 + 1;
    if (v22 != 5 && !(cond ^ __OFSUB__(v10, 3))) {
    } else {
    }
    v23 = v23 + 1;
    if (v23 != 0x13) {
    }
    do {
        v41 = v6; v20 = v41 / v6; v4 = cond;
        v6 = cond;
    } while (cond != 0);
    v20 = 0xd8 / v6; v4 = 0xd8 % v6;
    if (cond == 0) {
        v10 = *(_DWORD *)(v30);
        cond += cond << 2LL;
        int v42 = cond; // r9d
        v10 = v4 - cond;
        if (v10 == 2 || LOBYTE(v10 < 0) ^ __OFSUB__(v10, 2)) {
            cond = v4 == cond;
            if (v4 == cond) {
                v42 = v2; v4 = v10 == 1 ? v2 : v4;
            } else {
                v4 = v10;
            }
            v30 = v34;
            if (v2 == v34) {
            }
        } else {
            v10 = -v4;
            if (v2 != v34) {
            }
        }
        v2 = v34 + 4LL;
    }
    return;
}
/* Function:   _start | Address: 0x1480 | Size: 0x1a (26 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs from: unknown */
void _start(void) {
    __int64 v_0;
    __int64 v1; // rsp
    __int64 v3; // temp
    __int64 pfn = v1 + 8LL; // temp
    v3 = (pfn & 0xfffffffffffffff0ULL) - 8LL - 8LL; *(_QWORD *)(v3) = v3;
    pfn = qword_3FD8; ((void (*)())pfn)(); return;
}
/* Function:   f_rec_fib | Address: 0x1570 | Size: 0x2b1 (689 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   f_rec_fib | Xrefs from: unknown */
void f_rec_fib(void) {
    int v15; // temp
    int v1; // edi
    _BOOL cond;
    if (v1 == 1 || LOBYTE(v1 < 1) ^ __OFSUB__(v1, 1)) {
        __int64 v11 = v11 - 8LL; // temp
        int v12 = 0; // r14d
        int v14 = v11; // ebp
        int v15 = v11; // ebx
        for (; cond || v15 != 0; cond = cond || v15 != 0) {
            int v22 = v11; // r12d
            if (v15 == 0) {
            }
            break;
        }
    } else {
        return;
    }
    return;
}
/* Function:   f_ackermann | Address: 0x1830 | Size: 0x34e (846 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   f_ackermann | Xrefs from: unknown */
void f_ackermann(void) {
    int v21; // temp
    int v4; // eax
    int v33; // ecx
    int v32; // ebx
    int v27; // ebp
    int v3; // esi
    int v16; // edi
    int v34; // r8d
    int v28; // r12d
    int v29; // r13d
    int v30; // r14d
    int v31; // r15d
    int v20; // temp
    _BOOL cond;
    __int64 v2 = v2 - 8LL; // temp
    v4 = v3; *(_DWORD *)(v2) = v16;
    while (v4 != 0) {
        _DWORD cond = *(_DWORD *)(v2); // temp
        int v19 = cond; // edx
        if (v21 == 2) {
            cond = v21 == 2; v20 = v4 - 1; v4 = v20;
            while (v4 != 0) {
                if (v4 == 0) {
                    v20 = v27 - 2; v27 = v20; v20 = v4 - 1;
                    v4 = v20;
                    if (cond != 0) {
                        cond = v4 == 0;
                        if (v4 == 0) {
                            v20 = v28 - 2; v28 = v20; v20 = v4 - 1;
                            v4 = v20;
                            if (v31 != 0) {
                                if (v4 == 0) {
                                    v20 = v29 - 2; v29 = v20; v20 = v4 - 1;
                                    v4 = v20;
                                    if (v28 != 0) {
                                        cond = v4 == 0;
                                        if (v4 == 0) {
                                            v20 = v30 - 2; v30 = v20; v20 = v4 - 1;
                                            v4 = v20;
                                            if (cond != 0) {
                                                if (v31 == 0) {
                                                    v20 = v31 - 2; v31 = v20; v20 = v4 - 1;
                                                    v4 = v20;
                                                    if (v4 != 0) {
                                                        cond = v4 == 0;
                                                        if (v27 == 0) {
                                                            v20 = v32 - 2; v32 = v20; v20 = v4 - 1;
                                                            v4 = v20;
                                                            if (v4 != 0) {
                                                                if (v2 == 0) {
                                                                    v20 = v33 - 2; v33 = v20; v20 = v4 - 1;
                                                                    v4 = v20;
                                                                    if (v4 != 0) {
                                                                        cond = v4 == 0;
                                                                        if (v2 == 0) {
                                                                            v20 = v34 - 2; v34 = v20; v4 = 1;
                                                                            f_ackermann(); cond = *(_DWORD *)(v2);
                                                                            v33 = cond;
                                                                            if (cond == 0) {
                                                                                v4 = v4 + 1; cond = cond < 0;
                                                                                if (cond == 0) {
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (v33 != 0) {
                                                                            } else {
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    v4 = 2;
                                                                    if (v32 != 0) {
                                                                    } else {
                                                                    }
                                                                }
                                                            }
                                                            v4 = v4 + 1;
                                                            if (v32 == 0) {
                                                            }
                                                        } else {
                                                            v4 = 2; cond = v31 == 0;
                                                            if (v31 != 0) {
                                                            } else {
                                                            }
                                                        }
                                                    }
                                                    v4 = v4 + 1;
                                                    if (v31 == 0) {
                                                    }
                                                } else {
                                                    v4 = 2;
                                                    if (v30 != 0) {
                                                    } else {
                                                    }
                                                }
                                            }
                                            v4 = v4 + 1;
                                            if (v30 == 0) {
                                            }
                                        } else {
                                            v4 = 2;
                                            if (v27 != 0) {
                                            } else {
                                            }
                                        }
                                    }
                                    v4 = v4 + 1;
                                    if (v29 == 0) {
                                    }
                                } else {
                                    v4 = 2;
                                    if (v30 != 0) {
                                    } else {
                                    }
                                }
                            }
                            v4 = v4 + 1;
                            if (v28 == 0) {
                            }
                        } else {
                            v4 = 2; cond = v27 == 0;
                            if (v32 != 0) {
                            } else {
                            }
                        }
                    }
                    v4 = v4 + 1;
                    if (v27 == 0) {
                    }
                } else {
                    v19 = cond; v4 = 2;
                    if (v4 != 0) {
                    }
                }
            }
            cond = cond < 0;
            if (cond != 0) {
            }
        } else {
        }
    }
    v2 = *(_QWORD *)(v15 + 0x17LL); cond = v15 + 0x1eLL;
    __int64 v36 = v2; // rbx
    v2 = *(_QWORD *)(cond);
    __int64 v37 = v2; // rbp
    v2 = *(_QWORD *)(cond);
    __int64 v38 = v2; // r12
    v2 = *(_QWORD *)(cond);
    __int64 v39 = v2; // r13
    v2 = *(_QWORD *)(cond);
    __int64 v40 = v2; // r14
    v2 = *(_QWORD *)(cond);
    __int64 v41 = v2; // r15
    return;
}
/* Function:   f_rec_power.constprop.0 | Address: 0x1b80 | Size: 0x119 (281 bytes) | Convention: System V AMD64 | Stack frame: 0x4 (4 bytes) | Xrefs to:   f_rec_power.constprop.0 | Xrefs from: unknown */
int f_rec_power.constprop.0(char a1) {
    int v17; // temp
    int v_24;
    int v38; // eax
    int v4; // ecx
    int v9; // edi
    int v10; // r8d
    int v11; // r9d
    int result; // temp
    _BOOL cond;
    _BOOL cond = !v17; // ZF
    if (!v17) {
        result = v9 - 1; cond = v9 == 1; v9 = result;
        if (v9 == 1) {
            v4 = cond;
            if (!v17) {
                v4 = result;
                if (cond == 1) {
                    v_24 = v11; f_rec_power.constprop.0(); result = cond * cond;
                    result *= cond; result = result * result * cond; return result;
                }
                return result;
            } else {
                v10 = 1;
            }
        } else {
            return 2;
        }
    } else {
    }
    v9 = cond; v38 = cond; cond = v17 == '\0';
    if (v17 == '\0') {
        result = cond - 1; cond = cond == 1;
        v38 = result;
        if (cond == 1) {
            v4 = cond; v9 = cond;
            if (!v17) {
                result = cond - 1;
                if (cond != 1) {
                }
            } else {
            }
        } else {
            return result;
        }
    } else {
    }
    return 0;
}
/* Function:   sub_1520 | Address: 0x1520 | Size: 0x38 (56 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   sub_1040, sub_14b0 | Xrefs from: unknown */
void sub_1520(void) {
    __int64 v2; // temp
    _QWORD v7; // temp
    _BYTE v3 = byte_4010; // temp
    if (v3 != '\0') {
        v2 = v2 - 8LL; *(_QWORD *)(v2) = v2;
        if (v7 == 0LL) {
            v7 = qword_4008;
            __int64 v9 = v7; // rdi
            sub_1040();
        }
        sub_14b0(); byte_4008 = 1; return;
    } else {
        return;
    }
}
/* Function:   sub_1560 | Address: 0x1560 | Size: 0x735 (1845 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs to:   f_ackermann, f_rec_fib, f_rec_power.constprop.0 | Xrefs from: unknown */
void sub_1560(void) {
    int v15; // temp
    int v1; // edi
    char v7; // temp
    if (v1 == 1 || LOBYTE(v1 < 1) ^ __OFSUB__(v1, 1)) {
        __int64 v11 = v11 - 8LL; // temp
        int v12 = 0; // r14d
        int v14 = v11; // ebp
        int v15 = v11; // ebx
        if (v1 == 1 || LOBYTE(v1 < 1) ^ __OFSUB__(v1, 1)) {
            int v22 = v11; // r12d
            v7 = LOBYTE(v15 - 1);
            if (v15 == 0) {
            }
        }
    } else {
        return;
    }
    return;
}
/* Function:   sub_14b0 | Address: 0x14b0 | Size: 0x5b (91 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_14b0(void) {
    int v4; // temp
    int v1; // reg?
    if (v1) {
        if (v4 != 0LL) {
            return;
        }
    } else {
        return;
    }
    return;
}
