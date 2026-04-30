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
 * Address:    0x10c0
 * Size:       0x76 (118 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   _Z8identifyP6Animal, __printf_chk
 * Xrefs from: unknown
 */
void main(void) {
    int v9; // eax
    long long v3; // rax
    long long v2; // rsp
    int v4; // rip
    signed char v11; // ZF
    int v6; // temp
    long long v1; // temp
    int v13; // temp
    long long v10; // temp
    signed char v14; // temp
    signed char v7; // temp
    signed char v8; // temp

    v1 = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v1 = 0LL;
    v2 = 0LL;
    v3 = 0LL;
    v1 = 0LL;
    v1 = v4 + 0x3d00LL;
    v3 = 0LL;
    v1 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v1 = v4 + 0x3d28LL;
    v3 = 0LL;
    v1 = 0LL;
    *(_QWORD *)(0LL) = 0LL;
    v1 = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x10f9LL;
    _Z8identifyP6Animal();
    v5 = 0LL;
    v1 = 0LL;
    v2 = 0LL;
    *(_QWORD *)(0LL) = 0x1106LL;
    _Z8identifyP6Animal();
    v1 = v4 + "%s %s\n";
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v1 = 0LL;
    *(_QWORD *)(0LL) = 0x111fLL;
    __printf_chk();
    v10 = 0LL;
    v3 = 0LL;
    v1 = __readfsqword(0x28u);
    v10 = 0LL;
    v11 = 1;
    v12 = 0;
    if (v12) {
    } else {
        v6 = 0;
        v13 = 0;
        v14 = 0;
        v1 = 0LL;
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
 * Address:    0x1140
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
    *(_QWORD *)(0LL) = 0x1165LL;
    v3 = v9 + 0x3fe0LL;
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
 * Function:   _Z8identifyP6Animal
 * Address:    0x1230
 * Size:       0x55 (85 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs to:   __dynamic_cast
 * Xrefs from: unknown
 */
// identify(Animal*)
void identify(void) {
    long long v10; // rax
    long long v5; // rsp
    int v11; // rip
    signed char v2; // ZF
    long long result; // temp
    unsigned long long v8; // temp
    signed char v3; // temp
    signed char v4; // temp

    result = 0LL;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    if (v2) {
    } else {
        result = -24LL;
        v5 = 0LL;
        v6 = 0;
        v7 = 0;
        result = 0LL;
        result = 0LL;
        v5 = 0LL;
        *(_QWORD *)(0LL) = 0x125bLL;
        __dynamic_cast();
        result = 0LL;
        v8 = *(_QWORD *)(0LL);
        v9 = 0LL;
        result = 0LL;
        v2 = 1;
        if (v2) {
        label_0:;
        } else {
            result = *(_QWORD *)(0LL);
            v10 = 0LL;
            result = v11 + 0x1300LL;
            result = *(_QWORD *)(0LL);
            v12 = 0LL;
            result = 0LL;
            v2 = 1;
            v13 = 0;
            if (v13) {
            label_1:;
            } else {
                result = 0x10LL;
                v4 = 0;
                v5 = 0LL;
                result = *(_QWORD *)(0LL);
                return result;
            }
        }
        goto label_1;
    }
    goto label_0;
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
 * Function:   _ZN3Dog5speakEv
 * Address:    0x1300
 * Size:       0x4 (4 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
// Dog::speak()
void Dog_speak(void) {
    long long result; // temp

    result = 0LL;
    v2 = 0LL;
    v3 = 0LL;
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
 * Function:   _ZN3Cat5speakEv
 * Address:    0x1310
 * Size:       0x4 (4 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
// Cat::speak()
void Cat_speak(void) {
    long long result; // temp

    result = 0LL;
    v2 = 0LL;
    v3 = 0LL;
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
 * Function:   _ZN3DogD2Ev
 * Address:    0x1320
 * Size:       0x4 (4 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
// Dog::~Dog()
void Dog_Dog(void) {
    result = 0LL;
    v2 = 0LL;
    v3 = 0LL;
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
 * Function:   _ZN3CatD1Ev
 * Address:    0x1330
 * Size:       0x4 (4 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
// Cat::~Cat()
void Cat_Cat(void) {
    result = 0LL;
    v2 = 0LL;
    v3 = 0LL;
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
 * Function:   _ZN3CatD0Ev
 * Address:    0x1340
 * Size:       0x4 (4 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
// Cat::~Cat()
void Cat_Cat(void) {
    int v1;

    while (v1) {
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
 * Function:   _ZN3DogD0Ev
 * Address:    0x1350
 * Size:       0x4 (4 bytes)
 * Convention: unknown
 * Stack frame: 0x0 (0 bytes)
 * Xrefs from: unknown
 */
// Dog::~Dog()
void Dog_Dog(void) {
    int v1;

    while (v1) {
    }
}
