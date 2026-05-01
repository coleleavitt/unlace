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
    int v31; // rcx
    int v34; // edx
    long long v39; // rdx
    long long v23; // rdi
    long long v21; // r8
    int v19; // r10d
    int v10; // rip
    __int128 v12; // xmm0
    __int128 v22; // xmm1
    __int128 v32; // xmm2
    int result;
    int v18;

    *(_QWORD *)(0x48LL) = 0x48LL;
    result = v10 + 0x2010LL;
    v12 = _mm_load_si128(*(_OWORD *)(0LL));
    result = __readfsqword(0x28u);
    v5 = LOBYTE(1);
    _mm_load_ps(0LL, v12);
    result = v10 + 0x2020LL;
    v12 = _mm_load_si128(*(_OWORD *)(0LL));
    _mm_load_ps(0LL, v12);
    result = v10 + 0x2030LL;
    v12 = _mm_load_si128(*(_OWORD *)(0LL));
    _mm_load_ps(0LL, v12);
    result = v10 + 0x2040LL;
    v12 = _mm_load_si128(*(_OWORD *)(0LL));
    _mm_load_ps(0LL, v12);
    while (v16) {
    }
    if (v18) {
    }
    while (v16) {
    }
    if (v18) {
    }
    v21 = 0LL;
    v12 = _mm_xor_si128(v12, v12);
    if (v18) {
    }
    v22 = _mm_load_si128(v12);
    v23 = 0LL;
    v12 = _mm_add_epi32(v12, v22);
    v22 = _mm_load_si128(v12);
    v12 = _mm_add_epi32(v12, v22);
    if (v12) {
        if (v18) {
        }
    } else {
        v3 = *(_DWORD *)(0LL);
        v6 = LOBYTE(-3);
        v7 = 0;
        v16 = 0;
        if (0x18) { -3 = 3; }
        if (v23) {
        }
    }
    if (v21) {
        while (v5) {
            v3 = *(_DWORD *)(0x48LL);
            if (0) { 1 = 3; }
            v4 = *(_DWORD *)(0x48LL);
            if (1) { 1 = 3; }
        }
    } else {
        v3 = *(_DWORD *)(0x48LL);
        if (0) { 1 = 1; }
        if (v31) {
        }
    }
    v32 = _mm_xor_si128(v32, v32);
    if (v18) {
    }
    v12 = _mm_load_si128(v32);
    v32 = _mm_add_epi32(v32, v12);
    v12 = _mm_load_si128(v32);
    if (v14) {
        v3 = *(_DWORD *)(0x48LL);
    }
    if (v5) {
        while (v16) {
        }
    }
    if (v35) {
    }
    if (v19) {
    }
    if (v18) {
    }
    if (v18) {
        if (v29) {
        } else {
            if (0) { 1 = 0x48LL; }
            if (v34) {
            }
        }
        while (v5) {
        }
        v16 = 1;
        if (v16) {
        } else {
            *(_QWORD *)(0x48LL) = 0x13f9LL;
            f_rec_fib();
            *(_QWORD *)(0x48LL) = 0x1407LL;
            f_rec_power.constprop.0();
            *(_QWORD *)(0x48LL) = 0x1419LL;
            v25 = *(_QWORD *)(0x48LL);
            result = __readfsqword(0x28u);
            if (v31) {
            } else {
                result = *(_QWORD *)(0x48LL);
                result = *(_QWORD *)(0x48LL);
                return result;
            }
        }
        if (v15) {
        } else {
            if (0) { 1 = 0x48LL; }
            if (v39) {
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
    int v12;
    int v18; // temp

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
