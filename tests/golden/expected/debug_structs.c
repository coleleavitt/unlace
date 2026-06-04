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
// Minimal executable semantics for the SSE vector helpers emitted below.
static inline unsigned int __unlace_vec_u32(unsigned __int128 v, unsigned int lane) { return (unsigned int)(v >> (lane * 32)); }
static inline unsigned long long __unlace_vec_u64(unsigned __int128 v, unsigned int lane) { return (unsigned long long)(v >> (lane * 64)); }
static inline unsigned __int128 _mm_add_epi32(unsigned __int128 a, unsigned __int128 b) { unsigned __int128 out = 0; for (unsigned int i = 0; i < 4; i++) out |= (unsigned __int128)(__unlace_vec_u32(a, i) + __unlace_vec_u32(b, i)) << (i * 32); return out; }
static inline unsigned __int128 _mm_mul_epu32(unsigned __int128 a, unsigned __int128 b) { unsigned long long lo = (unsigned long long)__unlace_vec_u32(a, 0) * __unlace_vec_u32(b, 0); unsigned long long hi = (unsigned long long)__unlace_vec_u32(a, 2) * __unlace_vec_u32(b, 2); return (unsigned __int128)lo | ((unsigned __int128)hi << 64); }
static inline unsigned __int128 _mm_shuffle_epi32(unsigned __int128 a, unsigned int imm) { unsigned __int128 out = 0; for (unsigned int i = 0; i < 4; i++) out |= (unsigned __int128)__unlace_vec_u32(a, (imm >> (i * 2)) & 3u) << (i * 32); return out; }
static inline unsigned __int128 __unlace_psrldq(unsigned __int128 a, unsigned int imm) { return imm >= 16 ? 0 : a >> (imm * 8); }
static inline unsigned __int128 __unlace_psrlq(unsigned __int128 a, unsigned int imm) { unsigned __int128 out = 0; for (unsigned int i = 0; i < 2; i++) { unsigned long long lane = __unlace_vec_u64(a, i); lane = imm >= 64 ? 0 : lane >> imm; out |= (unsigned __int128)lane << (i * 64); } return out; }
static inline unsigned __int128 __unlace_punpckldq(unsigned __int128 a, unsigned __int128 b) { return (unsigned __int128)__unlace_vec_u32(a, 0) | ((unsigned __int128)__unlace_vec_u32(b, 0) << 32) | ((unsigned __int128)__unlace_vec_u32(a, 1) << 64) | ((unsigned __int128)__unlace_vec_u32(b, 1) << 96); }
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
_QWORD qword_3FE0;
_QWORD qword_3FF8;
_QWORD qword_4008;
__int64 sub_1040();
__int64 sub_10c0();
__int64 sub_1100(void) /* // dropped 1 param(s) (dead in body) */;
void sub_1090(void);
void sub_1140(void);

// DWARF composite types
typedef struct Point Point;
typedef struct Rect Rect;
struct Point {
    int x;
    int y;
};
struct Rect {
    Point origin;
    Point size;
};

// Recovered composite layouts (t147 stack frame, t213 array-of-structs)
struct __anon0 {
    __int64 field_0;
    __int64 field_8;
};

/* Function:   _start | Address: 0x1060 | Size: 0x20 (32 bytes) | Convention: System V AMD64 | Stack frame: 0x10 (16 bytes) | Xrefs from: unknown */
void _start(void) {
    __int64 v_8;
    __int64 v_0;
    _QWORD pfn; // temp
        v_8 = (uintptr_t)&v_0; pfn = qword_3FD8;
    ((__int64 (*)())pfn)(); __builtin_trap(); return;
}
// DWARF composite types
typedef struct Point Point;
typedef struct Rect Rect;
struct Point {
    int x;
    int y;
};
struct Rect {
    Point origin;
    Point size;
};

/* Function:   area | Address: 0x1149 | Size: 0xb (11 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
int area(__int64 a1) {
    __int64 result; // temp
    // /home/cole/RustProjects/active/unlace/fixtures/src/debug_structs.c:4
    _DWORD v4 = *(_DWORD *)(a1 + 8LL); // temp
    // /home/cole/RustProjects/active/unlace/fixtures/src/debug_structs.c:4
    result = v4;
    v4 = *(_DWORD *)(a1 + 0xcLL); return result * v4;
}
// DWARF composite types
typedef struct Point Point;
typedef struct Rect Rect;
struct Point {
    int x;
    int y;
};
struct Rect {
    Point origin;
    Point size;
};

/* Function:   offset | Address: 0x1155 | Size: 0x15 (21 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
Point offset(Point p, int dx, int dy) {
    __int64 result_1; // temp
    // /home/cole/RustProjects/active/unlace/fixtures/src/debug_structs.c:5
    dy = LODWORD(dy + (p >> 0x20));
    dy = dy << 0x20; result_1 = LODWORD(dx + p) | dy;
    return LODWORD(dx + p) | dy;
}
// DWARF composite types
typedef struct Point Point;
typedef struct Rect Rect;
struct Point {
    int x;
    int y;
};
struct Rect {
    Point origin;
    Point size;
};

/* Function:   main | Address: 0x116e | Size: 0x2c (44 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs to:   __printf_chk | Xrefs from: unknown */
int main(void) {
    // DWARF locals
    //   Rect r;
        printf(0x2004LL, 0xc8LL); return 0;
}
// DWARF composite types
typedef struct Point Point;
typedef struct Rect Rect;
struct Point {
    int x;
    int y;
};
struct Rect {
    Point origin;
    Point size;
};

/* Function:   sub_1100 | Address: 0x1100 | Size: 0x38 (56 bytes) | Convention: System V AMD64 | Stack frame: 0x8 (8 bytes) | Xrefs to:   sub_1040, sub_1090 | Xrefs from: unknown */
__int64 sub_1100(void) /* // dropped 1 param(s) (dead in body) */ {
    __int64 v_0;
    __int64 result; // rax
    if (byte_4010 != '\0') {
        return result;
    } else {
        if (qword_3FF8 != 0LL) {
            _QWORD v13 = qword_4008; // temp
            __int64 c3 = v13; // rdi
            result = sub_1040();
        }
        result = sub_1090(); byte_4010 = 1;
                        return result;
    }
}
// DWARF composite types
typedef struct Point Point;
typedef struct Rect Rect;
struct Point {
    int x;
    int y;
};
struct Rect {
    Point origin;
    Point size;
};

/* Function:   sub_1140 | Address: 0x1140 | Size: 0x4 (4 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1140(void) {
    sub_10c0();
}
// DWARF composite types
typedef struct Point Point;
typedef struct Rect Rect;
struct Point {
    int x;
    int y;
};
struct Rect {
    Point origin;
    Point size;
};

/* Function:   sub_1090 | Address: 0x1090 | Size: 0x6c (108 bytes) | Convention: System V AMD64 | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_1090(void) {
    int v7; // reg?
    if (v7) {
        return;
    } else {
        if (qword_3FE0 == 0LL) {
            return;
        }
    }
    return;
}
