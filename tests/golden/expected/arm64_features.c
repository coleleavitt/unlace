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
 * Address:    0x400100
 * Size:       0xc (12 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   bitfield_test, csel_test, mul_test
 * Xrefs from: unknown
 */
void _start(void) {
    mul_test();
    csel_test();
    bitfield_test();
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
 * Function:   mul_test
 * Address:    0x400118
 * Size:       0x4 (4 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
void mul_test(void) {
    int result; // reg?

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
 * Function:   csel_test
 * Address:    0x400128
 * Size:       0x20 (32 bytes)
 * Convention: Microsoft x64
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
void __fastcall csel_test(__int64 a1) {
    int v1; // rax
    int v2; // rcx
    long long v10; // rdx
    long long v11; // rbx
    long long v12; // rsp
    long long v14; // rbp
    int result; // reg?
    _Bool cond; // reg?
    long long v3; // temp

    v3 = v1 - v2;
    cond = v3 == 0LL;
    v6 = LOBYTE(v3 < 0LL);
    v7 = v6;
    v10 = __csel__(v6 ^ __OFSUB__(v1, v2), v1, v2);
    v11 = __csinc__(cond, v1, v2);
    cond = v3 != 0LL;
    v12 = __csinv__(cond, v1, v2);
    v14 = __csneg__(!cond, v1, v2);
    if (cond) {
    } else {
        v3 = v1 + v2;
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
 * Function:   bitfield_test
 * Address:    0x400148
 * Size:       0x1c (28 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
void bitfield_test(void) {
    int v5; // rbp
    long long result; // reg?
    int v1; // reg?
    long long v2; // temp
    unsigned long long v4; // temp

    v2 = v1 - 16;
    *(_QWORD *)(v2) = v2;
    v2[1] = v4;
    v3 = v5 << 0x30;
    v6 = *(_QWORD *)(v1);
    v4 = v1->field_8;
    result = v4;
    __dmb__();
    return result;
}
