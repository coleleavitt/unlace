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
 * Function:   may_throw(int) [clone .cold]
 * Address:    0x1140
 * Size:       0x4c (76 bytes)
 * Convention: AArch64 AAPCS64
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   _Unwind_Resume, std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_free_exception, __cxa_throw
 * Xrefs from: unknown
 */
// may_throw(int) [clone .cold]
void __aapcs may_throw(void * a1) {
    int v3; // rax
    int v5; // rip
    long long v1; // temp
    unsigned long long v6; // temp

    *(_QWORD *)(0LL) = v3;
    *(_QWORD *)(0LL) = v3;
    *(_QWORD *)(0LL) = v3;
    *(_QWORD *)(0LL) = 0x114eLL;
    /* allocate exception */
    __cxa_allocate_exception();
    v4 = v3;
    *(_QWORD *)(0LL) = 0x1160LL;
    std_runtime_error_runtime_error();
    v1 = v5 + 0x3fe0LL;
    v6 = *(_QWORD *)(0LL);
    *(_QWORD *)(0LL) = 0x1176LL;
    /* throw */
    __cxa_throw();
    v7 = v3;
    *(_QWORD *)(0LL) = 0x1185LL;
    __cxa_free_exception();
    *(_QWORD *)(0LL) = 0x118dLL;
    _Unwind_Resume();
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
 * Function:   safe_call(int) [clone .cold]
 * Address:    0x118d
 * Size:       0x92 (146 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   std::runtime_error::runtime_error(char const*), __cxa_allocate_exception, __cxa_begin_catch, __cxa_free_exception, __cxa_throw
 * Xrefs from: unknown
 */
// safe_call(int) [clone .cold]
__int32 safe_call(void) {
    int v3; // rip
    long long result; // temp
    unsigned long long v5; // temp
    unsigned long long pfn; // temp
    signed char v12; // temp
    signed char v13; // temp

    *(_QWORD *)(8LL) = 8LL;
    *(_QWORD *)(0LL) = 0x119cLL;
    /* allocate exception */
    __cxa_allocate_exception();
    result = v3 + "negative";
    *(_QWORD *)(0LL) = 0x11aeLL;
    std_runtime_error_runtime_error();
    result = v3 + 0x3fe0LL;
    v5 = *(_QWORD *)(0LL);
    *(_QWORD *)(8LL) = 0x11c4LL;
    /* throw */
    __cxa_throw();
    *(_QWORD *)(8LL) = 8LL;
    *(_QWORD *)(8LL) = 8LL;
    *(_QWORD *)(8LL) = 0x11d9LL;
    __cxa_free_exception();
    v9 = 0;
    if (v9) {
    } else {
        *(_QWORD *)(0LL) = 0x11edLL;
        /* catch */
        __cxa_begin_catch();
        result = *(_QWORD *)(0LL);
        *(_QWORD *)(0LL) = 0x11f6LL;
        pfn = *(_QWORD *)(8LL);
        ((void (*)())pfn)();
        v12 = LOBYTE(0);
        v13 = 0;
        *(_QWORD *)(8LL) = 0x1211LL;
        result = *(_QWORD *)(8LL);
        result = *(_QWORD *)(8LL);
        return result;
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
 * Function:   main
 * Address:    0x1250
 * Size:       0x0 (0 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
void main(void) {
    int result;

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
 * Address:    0x1260
 * Size:       0x1f (31 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
void _start(void) {
    int v9; // rip
    unsigned long long v10; // temp

    *(_QWORD *)(0LL) = 0x1285LL;
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
 * Function:   may_throw(int)
 * Address:    0x1350
 * Size:       0xc (12 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
// may_throw(int)
void may_throw(void) {
    int v1; // edi
    _Bool cond; // PF
    signed char v6; // SF
    int v2; // temp

    do {
        v2 = v1;
        cond = v1 == 0;
        v6 = LOBYTE(v1 < 0);
        cond = (__builtin_popcount(LOBYTE(v1)) & 1) == 0;
    } while (v6);
    result = 0LL;
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
 * Function:   safe_call(int)
 * Address:    0x1360
 * Size:       0xe (14 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
// safe_call(int)
void safe_call(void) {
    int v1; // edi
    signed char v5; // SF
    int v2; // temp
    signed char v6; // temp
    signed char v7; // temp

    do {
        v2 = v1;
        v6 = LOBYTE(0);
        v7 = 0;
    } while (v5);
}
