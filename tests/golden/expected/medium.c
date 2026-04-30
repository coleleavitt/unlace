typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
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
// FS-segment TLS reads (stack canary, GLIBC TCB).
_QWORD __readfsqword(unsigned int offset);
_DWORD __readfsdword(unsigned int offset);

/*
 * Function:   main
 * Address:    0x1060
 * Size:       0x3e1 (993 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   f_rec_fib, f_rec_power.constprop.0
 * Xrefs from: unknown
 */
void main(void) {
    int v15; // eax
    long long v13; // rax
    int v9; // ecx
    long long v2; // rsp
    long long v26; // rsi
    long long v22; // rdi
    long long v20; // r8
    int v18; // r10d
    int v10; // rip
    signed char v14; // ZF
    signed char v28; // SF
    int v12; // xmm0
    int v21; // xmm1
    int v27; // xmm2
    int v16;
    signed char v17; // temp
    int v3; // temp
    long long v1; // temp
    signed char v29; // temp
    int v4; // temp
    long long v24; // temp
    unsigned int v11; // temp
    signed char v5; // temp
    signed char v6; // temp
    signed char v7; // temp
    signed char v8; // temp
    signed char v30; // temp
    signed char v31; // temp

    *(_QWORD *)(0x48LL) = 0x48LL;
    v5 = 0;
    v8 = 0;
    v1 = v10 + 0x2010LL;
    v11 = *(_QWORD *)(0LL);
    v12 = _mm_load_si128(v11);
    v1 = __readfsqword(0x28u);
    v1 = v10 + 0x2020LL;
    v11 = *(_QWORD *)(0LL);
    v12 = _mm_load_si128(v11);
    /* CALLOTHER 258 */ 0;
    v1 = v10 + 0x2030LL;
    v11 = *(_QWORD *)(0LL);
    v12 = _mm_load_si128(v11);
    /* CALLOTHER 258 */ 0;
    v1 = v10 + 0x2040LL;
    v11 = *(_QWORD *)(0LL);
    v12 = _mm_load_si128(v11);
    /* CALLOTHER 258 */ 0;
    while (v16) {
        break;
    }
    v3 = 0x391;
    v9 = 0x391;
    while (v16) {
        break;
    }
    v3 = 0x394;
    while (v17) {
    }
    while (v16) {
        break;
    }
    v20 = 0LL;
    v12 = _mm_xor_si128(v12, v12);
    while (v16) {
        break;
    }
    v21 = _mm_load_si128(v12);
    v12 = _mm_add_epi32(v12, v21);
    v21 = _mm_load_si128(v12);
    v12 = _mm_add_epi32(v12, v21);
    if (v12) {
        while (v16) {
            break;
        }
    } else {
        v3 = *(_DWORD *)(0LL);
        v14 = 1;
        v7 = 0;
        if (v14) {
        }
    }
    v14 = 1;
    if (v20) {
        while (v16) {
            break;
        }
    } else {
        v3 = *(_DWORD *)(0x48LL);
        v14 = 1;
        if (v14) {
        }
    }
    while (v16) {
        break;
    }
    v12 = _mm_load_si128(0);
    v27 = _mm_add_epi32(0, v12);
    v12 = _mm_load_si128(0);
    while (v14) {
        v3 = *(_DWORD *)(0x48LL);
        v4 = -15;
        v14 = 1;
        break;
    }
    v30 = 1;
    if (v5) {
        while (v16) {
            break;
        }
    label_5:;
        if (v8) {
        }
    }
    v3 = 1;
    v18 = 1;
    v3 = -9;
    if (v18) {
        goto label_5;
    }
    while (v16) {
        break;
    }
    while (v16) {
        if (v29) {
        } else {
            v14 = 1;
            v17 = 1;
            if (v5) {
            label_7:;
            }
        label_8:;
            while (v5) {
                v3 = 1;
                v15 = 1;
                v3 = -19;
            }
            v1 = 0x48LL;
            v24 = 0x175LL;
            while (v16) {
                break;
            }
        }
        v3 = -2;
        if (v14) {
        } else {
            v14 = 1;
            if (v14) {
            } else {
                goto label_7;
            }
            goto label_8;
        }
        break;
        break;
    }
}
typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
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
        v14 = 0x30LL;
        *(_QWORD *)(0LL) = 0LL;
        v15 = 0x30LL;
        v1 = -1;
        v2 = 1;
        v4 = LOBYTE(0);
        v8 = 1;
        if (v8) {
        } else {
            while (v8) {
                v8 = 1;
                if (v17) {
                } else {
                    if (v5) {
                    }
                label_1:;
                    if (v17) {
                    label_2:;
                    } else {
                        result = 0x30LL;
                        v11 = 0x30LL;
                        result = *(_QWORD *)(0LL);
                        v19 = 0x30LL;
                        result = *(_QWORD *)(0LL);
                        v20 = 0x30LL;
                        result = *(_QWORD *)(0LL);
                        v21 = 0x30LL;
                        result = *(_QWORD *)(0LL);
                        v22 = 0x30LL;
                        result = *(_QWORD *)(0LL);
                        v23 = 0x30LL;
                        result = *(_QWORD *)(0LL);
                        v24 = 0x30LL;
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
        v7 = 2;
        if (v12) {
        } else {
            v6 = LOBYTE(0);
            v10 = 0;
            v2 = 1;
            if (v3) {
            } else {
                v15 = 2;
                v8 = -1;
                v3 = 1;
                if (v12) {
                label_0:;
                } else {
                    v3 = 1;
                    if (v3) {
                    } else {
                        v8 = -1;
                        v3 = 1;
                        v16 = 2;
                        if (v3) {
                        } else {
                            v3 = 1;
                            if (v3) {
                            } else {
                                v8 = -1;
                                v3 = 1;
                                v17 = 2;
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
                                    v9 = -1;
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
                                    v9 = -1;
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
