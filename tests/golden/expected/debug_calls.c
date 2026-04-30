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
 * Address:    0x1040
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

    v1 = 0;
    v2 = 0;
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v3 = 0LL;
    v6 = 0;
    v4 = 0LL;
    v5 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v4 = 0LL;
    v1 = 0;
    v7 = 0;
    v1 = 0;
    v8 = 0;
    v5 = 0LL;
    *(_QWORD *)(0LL) = 0x1065LL;
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
 * Function:   add
 * Address:    0x1129
 * Size:       0x17 (23 bytes)
 * Convention: System V AMD64
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
int add(int a, int b) {
    long long v2; // rsp
    long long v3; // rbp
    int v5; // esi
    int v4; // edi
    long long v1; // temp
    int v6; // temp

    v1 = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    v1 = 0LL;
    *(_DWORD *)(0LL) = v4;
    v1 = 0LL;
    *(_DWORD *)(0LL) = v5;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v1 = 0LL;
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
 * Function:   sub
 * Address:    0x1141
 * Size:       0x15 (21 bytes)
 * Convention: System V AMD64
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
int sub(int a, int b) {
    long long v2; // rsp
    long long v3; // rbp
    int v5; // esi
    int v4; // edi
    long long v1; // temp

    v1 = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    v1 = 0LL;
    *(_DWORD *)(0LL) = v4;
    v1 = 0LL;
    *(_DWORD *)(0LL) = v5;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v1 = 0LL;
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
 * Function:   mul
 * Address:    0x1157
 * Size:       0x16 (22 bytes)
 * Convention: System V AMD64
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
int mul(int a, int b) {
    long long v2; // rsp
    long long v3; // rbp
    int v5; // esi
    int v4; // edi
    long long result; // temp

    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    result = 0LL;
    *(_DWORD *)(0LL) = v4;
    result = 0LL;
    *(_DWORD *)(0LL) = v5;
    result = 0LL;
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
 * Function:   square
 * Address:    0x116e
 * Size:       0x1f (31 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   mul
 * Xrefs from: unknown
 */
int square(int x) {
    long long v2; // rsp
    long long v3; // rbp
    long long result; // temp
    int v4; // temp

    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    result = 0LL;
    v2 = 0LL;
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    result = 0LL;
    *(_QWORD *)(0LL) = 0x118cLL;
    mul();
    result = 0LL;
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
 * Function:   cube
 * Address:    0x118e
 * Size:       0x28 (40 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   mul, square
 * Xrefs from: unknown
 */
int cube(int x) {
    int v5; // eax
    long long v2; // rsp
    long long v3; // rbp
    long long result; // temp

    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    result = 0LL;
    v2 = 0LL;
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x11a7LL;
    square();
    v7 = 0;
    result = 0LL;
    *(_QWORD *)(0LL) = 0x11b5LL;
    mul();
    result = 0LL;
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
 * Function:   abs_val
 * Address:    0x11b7
 * Size:       0x16 (22 bytes)
 * Convention: System V AMD64
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
int abs_val(int x) {
    long long v2; // rsp
    long long v3; // rbp
    int v4; // edi
    long long result; // temp

    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    result = 0LL;
    *(_DWORD *)(0LL) = v4;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    result = 0LL;
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
 * Function:   max
 * Address:    0x11ce
 * Size:       0x1a (26 bytes)
 * Convention: System V AMD64
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
int max(int a, int b) {
    long long v2; // rsp
    long long v3; // rbp
    int v5; // esi
    int v4; // edi
    long long v1; // temp

    v1 = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    v1 = 0LL;
    *(_DWORD *)(0LL) = v4;
    v1 = 0LL;
    *(_DWORD *)(0LL) = v5;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v1 = 0LL;
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
 * Function:   min
 * Address:    0x11e9
 * Size:       0x1a (26 bytes)
 * Convention: System V AMD64
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
int min(int a, int b) {
    long long v2; // rsp
    long long v3; // rbp
    int v5; // esi
    int v4; // edi
    long long v1; // temp

    v1 = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    v1 = 0LL;
    *(_DWORD *)(0LL) = v4;
    v1 = 0LL;
    *(_DWORD *)(0LL) = v5;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v1 = 0LL;
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
 * Function:   clamp
 * Address:    0x1204
 * Size:       0x33 (51 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   max, min
 * Xrefs from: unknown
 */
int clamp(int x, int lo, int hi) {
    int v6; // eax
    int v5; // edx
    long long v2; // rsp
    long long v3; // rbp
    long long result; // temp

    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    result = 0LL;
    v2 = 0LL;
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    v4 = 0;
    v5 = 0;
    v4 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x1228LL;
    max();
    v5 = 0;
    result = 0LL;
    *(_QWORD *)(0LL) = 0x1236LL;
    min();
    result = 0LL;
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
 * Function:   compute
 * Address:    0x1238
 * Size:       0x7b (123 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   abs_val, add, clamp, cube, square, sub
 * Xrefs from: unknown
 */
int compute(int x) {
    int v5; // eax
    long long v2; // rsp
    long long v3; // rbp
    long long result; // temp

    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    result = 0LL;
    v2 = 0LL;
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x1256LL;
    add();
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    v4 = 0;
    v5 = 0;
    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x1268LL;
    sub();
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    v4 = 0;
    v5 = 0;
    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x1275LL;
    square();
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x1282LL;
    cube();
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    v4 = 0;
    v7 = 0;
    v4 = 0;
    v5 = 0;
    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x1294LL;
    sub();
    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x129bLL;
    abs_val();
    result = 0LL;
    *(_DWORD *)(0LL) = 0;
    result = 0LL;
    *(_QWORD *)(0LL) = 0x12b2LL;
    clamp();
    result = 0LL;
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
 * Function:   main
 * Address:    0x12b4
 * Size:       0x13 (19 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   compute
 * Xrefs from: unknown
 */
int main(void) {
    long long v2; // rsp
    long long result; // temp

    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v3 = 0LL;
    result = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x12c6LL;
    compute();
    v4 = 0LL;
    result = 0LL;
    return result;
}
