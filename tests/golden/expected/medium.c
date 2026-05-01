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
 * Xrefs to:   f_rec_fib, f_rec_power.constprop.0
 * Xrefs from: unknown
 */
void main(void) {
    int v15; // eax
    int v38; // rcx
    int v33; // edx
    long long v37; // rdx
    long long v22; // rdi
    long long v20; // r8
    int v18; // r10d
    int v8; // rip
    signed char v12; // ZF
    __int128 v10; // xmm0
    __int128 v21; // xmm1
    __int128 v31; // xmm2
    int result;
    int v17;
    signed char v16; // temp
    int v3; // temp
    signed char v29; // temp
    int v13; // temp
    long long v24; // temp
    _OWORD v9; // temp
    signed char v14; // temp
    signed char v4; // temp

    *(_QWORD *)(0x48LL) = 0x48LL;
    v4 = 0;
    result = v8 + 0x2010LL;
    v9 = *(_OWORD *)(0LL);
    v10 = _mm_load_si128(v9);
    result = __readfsqword(0x28u);
    _mm_load_ps(0LL, v10);
    result = v8 + 0x2020LL;
    v9 = *(_OWORD *)(0LL);
    v10 = _mm_load_si128(v9);
    _mm_load_ps(0LL, v10);
    result = v8 + 0x2030LL;
    v9 = *(_OWORD *)(0LL);
    v10 = _mm_load_si128(v9);
    _mm_load_ps(0LL, v10);
    result = v8 + 0x2040LL;
    v9 = *(_OWORD *)(0LL);
    v10 = _mm_load_si128(v9);
    _mm_load_ps(0LL, v10);
    while (v16) {
    }
    if (v17) {
    }
    while (v16) {
    }
    if (v17) {
    }
    v20 = 0LL;
    v10 = _mm_xor_si128(v10, v10);
    if (v17) {
    }
    v21 = _mm_load_si128(v10);
    v22 = 0LL;
    v10 = _mm_add_epi32(v10, v21);
    v21 = _mm_load_si128(v10);
    v10 = _mm_add_epi32(v10, v21);
    if (v10) {
        if (v17) {
        }
    } else {
        v3 = *(_DWORD *)(0LL);
        v16 = 0;
        if (0x18) { -3 = 3; }
        if (v22) {
        }
    }
    if (v20) {
        while (v14) {
            v3 = *(_DWORD *)(0x48LL);
            if (0) { 1 = 3; }
            v13 = *(_DWORD *)(0x48LL);
            if (1) { 1 = 3; }
        }
    } else {
        v3 = *(_DWORD *)(0x48LL);
        if (0) { 1 = 1; }
        if (v22) {
        }
    }
    v31 = _mm_xor_si128(v31, v31);
    if (v17) {
    }
    v10 = _mm_load_si128(v31);
    v31 = _mm_add_epi32(v31, v10);
    v10 = _mm_load_si128(v31);
    if (v12) {
        v3 = *(_DWORD *)(0x48LL);
    }
    if (v14) {
        while (v16) {
        }
    }
    if (v4) {
    }
    if (v18) {
    }
    if (v17) {
    }
    if (v17) {
        if (v29) {
        } else {
            if (0) { 1 = -3; }
            if (v33) {
            }
        }
        while (v14) {
        }
        v16 = 1;
        if (v16) {
        } else {
            *(_QWORD *)(0x48LL) = 0x13f9LL;
            f_rec_fib();
            *(_QWORD *)(0x48LL) = 0x1407LL;
            f_rec_power.constprop.0();
            *(_QWORD *)(0x48LL) = 0x1419LL;
            v24 = *(_QWORD *)(0x48LL);
            result = __readfsqword(0x28u);
            if (v38) {
            } else {
                result = *(_QWORD *)(0x48LL);
                result = *(_QWORD *)(0x48LL);
                return result;
            }
        }
        if (v15) {
        } else {
            if (0) { 1 = 0x48LL; }
            if (v37) {
            } else {
            }
        }
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
 * Function:   _start
 * Address:    0x1480
 * Size:       0x1f (31 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
void _start(void) {
    int v9; // rip
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
    int v9; // edi
    int v13; // rdi
    signed char v16; // temp
    long long result; // temp
    signed char v8; // temp
    signed char v4; // temp
    signed char v5; // temp

    if (v9) {
    } else {
        v11 = 0LL;
        *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL;
        *(_QWORD *)(0LL) = 0LL;
        result = v13 - 2;
        *(_QWORD *)(0LL) = 0LL;
        v4 = LOBYTE(0);
        if (v11) {
        } else {
            while (v8) {
                v16 = v16;
                if (v16) {
                } else {
                    if (v5) {
                    }
                }
            }
        }
        v16 = v16;
        if (v16) {
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
    *(_QWORD *)(0LL) = 0LL;
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
    signed char v6; // temp
    long long result; // temp

    *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    if (v6) {
        result = v7 - 1;
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
    int v1; // dil
    signed char v3; // ZF
    int v12;
    signed char v2; // temp
    int v8; // temp
    long long result; // temp
    int v9; // temp
    int v18; // temp
    signed char v5; // temp

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
                        }
                    }
                }
            }
        }
    }
}
