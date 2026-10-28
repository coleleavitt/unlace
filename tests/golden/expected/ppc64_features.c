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
void sub_10000104(void);
void sub_10000120(void);

/* Function:   _start | Address: 0x10000100 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void _start(void) {
    /* CALLOTHER tag=1024 */ 0; return;
}
/* Function:   sub_10000104 | Address: 0x10000104 | Size: 0x4 (4 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_10000104(void) {
    /* CALLOTHER tag=1024 */ 0; return;
}
/* Function:   ppc_branch | Address: 0x1000011c | Size: 0x18 (24 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void ppc_branch(void) {
    __int64 c0 = 5LL; // rbx
    if (LODWORD(5LL) != LODWORD(3LL)) {
    }
    return;
}
/* Function:   sub_10000120 | Address: 0x10000120 | Size: 0x14 (20 bytes) | Convention: unknown | Stack frame: 0x0 (0 bytes) | Xrefs from: unknown */
void sub_10000120(void) {
    __int64 c0; // rbx
        if (LODWORD(c0) != LODWORD(3LL)) {
    }
    return;
}
