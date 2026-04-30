typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
typedef struct _OWORD { unsigned long long lo; unsigned long long hi; } _OWORD;
typedef unsigned char _BOOL;
typedef signed char __int8;
typedef signed short __int16;
typedef signed int __int32;
typedef signed long long __int64;
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

/*
 * Function:   main
 * Address:    0x1060
 * Size:       0x3e1 (993 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   f_ackermann, f_rec_fib, f_rec_power.constprop.0
 * Xrefs from: unknown
 */
void main(void) {
    int v14; // eax
    long long v12; // rax
    int v21; // edx
    long long v2; // rsp
    int v23; // esi
    long long v27; // rdi
    long long v25; // r8
    long long v24; // r9
    int v18; // r10d
    long long v28; // r11
    int v9; // rip
    signed char v16; // ZF
    __int128 v11; // xmm0
    __int128 v26; // xmm1
    __int128 v29; // xmm2
    int v17;
    signed char v15; // temp
    int v3; // temp
    long long v1; // temp
    _OWORD v30; // temp
    signed char v31; // temp
    int v4; // temp
    long long v19; // temp
    _OWORD v10; // temp
    signed char v5; // temp
    long long v20; // temp
    signed char v6; // temp
    signed char v7; // temp
    signed char v13; // temp
    signed char v22; // temp

    *(_QWORD *)(0LL) = 0LL;
    v5 = LOBYTE(0);
    v6 = 0;
    v7 = 0;
    v1 = v9 + 0x2010LL;
    v10 = *(_OWORD *)(0LL);
    v11 = _mm_load_si128(v10);
    v1 = __readfsqword(0x28u);
    _mm_load_ps(0LL, v11);
    v1 = v9 + 0x2020LL;
    v10 = *(_OWORD *)(0LL);
    v11 = _mm_load_si128(v10);
    _mm_load_ps(0LL, v11);
    v1 = v9 + 0x2030LL;
    v10 = *(_OWORD *)(0LL);
    v11 = _mm_load_si128(v10);
    _mm_load_ps(0LL, v11);
    v1 = v9 + 0x2040LL;
    v10 = *(_OWORD *)(0LL);
    v11 = _mm_load_si128(v10);
    _mm_load_ps(0LL, v11);
    while (v15) {
    }
    while (v17) {
        break;
    }
    if (v15) {
        v20 = 1LL;
    } else {
        v15 = 1;
        if (v14) {
            if (v14) {
                v20 = v20;
            label_0:;
                if (v5) {
                label_1:;
                label_2:;
                    if (v15) {
                    label_4:;
                        v15 = 1;
                        if (v22) {
                        label_5:;
                            if (v5) {
                            label_6:;
                                if (v22) {
                                label_7:;
                                    if (v15) {
                                    label_8:;
                                        v15 = 1;
                                        if (v5) {
                                        } else {
                                            goto label_7;
                                        }
                                    } else {
                                        goto label_6;
                                    }
                                }
                            label_9:;
                                if (v5) {
                                    goto label_6;
                                }
                            }
                        } else {
                        label_10:;
                            if (v15) {
                                goto label_8;
                            } else {
                                goto label_6;
                            }
                            goto label_9;
                        }
                    } else {
                    label_11:;
                        if (v23) {
                            goto label_10;
                        } else {
                        label_12:;
                            if (v14) {
                                while (v15) {
                                    v20 = v20;
                                }
                            }
                            while (v17) {
                                break;
                            }
                            v11 = _mm_xor_si128(v11, v11);
                            while (v17) {
                                break;
                            }
                            v26 = _mm_load_si128(v11);
                            v11 = _mm_add_epi32(v11, v26);
                            v26 = _mm_load_si128(v11);
                            v11 = _mm_add_epi32(v11, v26);
                            if (v16) {
                                while (v17) {
                                    break;
                                }
                            } else {
                                v3 = *(_DWORD *)(0LL);
                                if (v16) {
                                }
                            }
                            if (v6) {
                                while (v17) {
                                    break;
                                }
                            } else {
                                v3 = *(_DWORD *)(0LL);
                                if (v16) {
                                }
                            }
                            v29 = _mm_xor_si128(v29, v29);
                            while (v15) {
                                v30 = *(_OWORD *)(0LL);
                                v11 = _mm_load_si128(v30);
                                v26 = _mm_load_si128(v11);
                                v26 = _mm_shuffle_epi32(v26, v26);
                                v11 = _mm_shuffle_epi32(v11, v11);
                                v29 = _mm_add_epi32(v29, v26);
                            }
                            v11 = _mm_load_si128(v29);
                            v29 = _mm_add_epi32(v29, v11);
                            v11 = _mm_load_si128(v29);
                            v29 = _mm_add_epi32(v29, v11);
                            while (v16) {
                                v3 = *(_DWORD *)(0LL);
                                break;
                            }
                            if (v6) {
                                if (v15) {
                                    goto label_4;
                                } else {
                                    goto label_11;
                                }
                            } else {
                                if (v18) {
                                    goto label_11;
                                } else {
                                    goto label_2;
                                }
                            }
                        }
                    }
                } else {
                label_18:;
                    goto label_5;
                }
            } else {
                goto label_12;
            }
        } else {
            goto label_1;
        }
    label_19:;
        while (v17) {
            break;
        }
        v3 = *(_DWORD *)(0LL);
        if (v16) {
            if (v5) {
                goto label_11;
            } else {
                goto label_2;
            }
            goto label_19;
        }
        if (v31) {
        } else {
            goto label_0;
        }
    }
    if (v16) {
    } else {
        if (v16) {
            goto label_18;
        } else {
            goto label_10;
        }
        goto label_19;
    }
}
typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
typedef struct _OWORD { unsigned long long lo; unsigned long long hi; } _OWORD;
typedef unsigned char _BOOL;
typedef signed char __int8;
typedef signed short __int16;
typedef signed int __int32;
typedef signed long long __int64;
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

/*
 * Function:   _start
 * Address:    0x1480
 * Size:       0x1f (31 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
void _start(void) {
    int v8; // ecx
    long long v4; // rsp
    int v9; // rip
    int v1; // temp
    long long v5; // temp
    signed char v6; // temp
    unsigned long long v10; // temp

    *(_QWORD *)(0LL) = 0x14a5LL;
    v3 = v9 + 0x3fd8LL;
    v10 = *(_QWORD *)(0LL);
}
typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
typedef struct _OWORD { unsigned long long lo; unsigned long long hi; } _OWORD;
typedef unsigned char _BOOL;
typedef signed char __int8;
typedef signed short __int16;
typedef signed int __int32;
typedef signed long long __int64;
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

/*
 * Function:   f_rec_fib
 * Address:    0x1570
 * Size:       0x276 (630 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   f_rec_fib
 * Xrefs from: unknown
 */
void f_rec_fib(void) {
    long long v11; // rsp
    long long v20; // rbp
    int v9; // edi
    int v13; // rdi
    long long v24; // r15
    signed char v2; // ZF
    signed char v16; // SF
    signed char v17; // temp
    int v1; // temp
    long long result; // temp
    signed char v8; // temp
    int v3; // temp
    long long v18; // temp
    signed char v4; // temp
    signed char v5; // temp
    signed char v6; // temp

    if (v9) {
    } else {
        *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL;
        result = v13 - 2;
        *(_QWORD *)(0LL) = 0LL;
        v4 = LOBYTE(0);
        v8 = 1;
        if (v8) {
        } else {
            while (v8) {
                if (v17) {
                } else {
                    if (v5) {
                    }
                label_1:;
                    if (v17) {
                    label_2:;
                    } else {
                        result = *(_QWORD *)(0LL);
                        result = *(_QWORD *)(0LL);
                        result = *(_QWORD *)(0LL);
                        result = *(_QWORD *)(0LL);
                        result = *(_QWORD *)(0LL);
                        result = *(_QWORD *)(0LL);
                        result = *(_QWORD *)(0LL);
                        return result;
                    }
                }
            }
        }
        goto label_1;
    }
    goto label_2;
}
typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
typedef struct _OWORD { unsigned long long lo; unsigned long long hi; } _OWORD;
typedef unsigned char _BOOL;
typedef signed char __int8;
typedef signed short __int16;
typedef signed int __int32;
typedef signed long long __int64;
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

/*
 * Function:   f_ackermann
 * Address:    0x1830
 * Size:       0x1c7 (455 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   f_ackermann
 * Xrefs from: unknown
 */
void f_ackermann(void) {
    int v7; // rdx
    long long v11; // rbx
    long long v2; // rsp
    int v8; // ebp
    long long v12; // rbp
    long long v13; // r12
    long long v14; // r13
    long long v15; // r14
    long long v16; // r15
    signed char v10; // ZF
    signed char v6; // temp
    int v9; // temp
    long long result; // temp
    signed char v3; // temp
    signed char v4; // temp
    signed char v5; // temp

    *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    while (v6) {
        result = v7 - 1;
        break;
    }
    return result;
}
typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
typedef struct _OWORD { unsigned long long lo; unsigned long long hi; } _OWORD;
typedef unsigned char _BOOL;
typedef signed char __int8;
typedef signed short __int16;
typedef signed int __int32;
typedef signed long long __int64;
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

/*
 * Function:   f_rec_power.constprop.0
 * Address:    0x1b80
 * Size:       0xbb (187 bytes)
 * Convention: System V AMD64
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   f_rec_power.constprop.0
 * Xrefs from: unknown
 */
void f_rec_power.constprop.0(__int64 a1) {
    long long v20; // rsp
    int v15; // esi
    int v1; // dil
    int v11; // edi
    int v16; // r8d
    signed char v3; // ZF
    int v12;
    signed char v2; // temp
    int v8; // temp
    long long result; // temp
    signed char v4; // temp
    int v9; // temp
    int v18; // temp
    signed char v5; // temp
    signed char v6; // temp
    signed char v10; // temp
    signed char v13; // temp

    v2 = v1 & 1;
    v3 = 0;
    v5 = __builtin_popcount(1);
    if (v3) {
    } else {
        if (v12) {
        } else {
            v6 = LOBYTE(0);
            v10 = 0;
            if (v3) {
            } else {
                v3 = 1;
                if (v12) {
                label_0:;
                } else {
                    if (v3) {
                    } else {
                        if (v3) {
                        } else {
                            v3 = 1;
                            if (v3) {
                            } else {
                                v3 = 1;
                                if (v3) {
                                label_1:;
                                label_2:;
                                label_3:;
                                label_4:;
                                label_5:;
                                label_6:;
                                } else {
                                    result = v18 - 0x18LL;
                                    v20 = v18;
                                    result = v18 + 4LL;
                                    *(_DWORD *)(v18) = 0;
                                    result = v18;
                                    result = v18 - 4;
                                    *(_DWORD *)(v18) = 2;
                                    result = v18;
                                    v20 = v18;
                                    f_rec_power.constprop.0();
                                    result = v18 - 4;
                                    v9 = *(_DWORD *)(v18);
                                    result = v18;
                                    v9 = *(_DWORD *)(v18);
                                    result = v18 + 4LL;
                                    v9 = *(_DWORD *)(v18);
                                    v8 = *(_DWORD *)(v18);
                                    result = v18 + 0x10LL;
                                    v20 = v18;
                                    result = *(_QWORD *)(v18);
                                    return result;
                                }
                            }
                            goto label_5;
                        }
                        goto label_2;
                    }
                    goto label_4;
                }
                goto label_1;
            }
            goto label_3;
        }
        goto label_0;
    }
    goto label_6;
}
