/* Freestanding declarations shared by the synthetic programs: no libc header is
 * included, so every program also compiles for a cross target with no sysroot. */
#ifndef QUALITY_SYNTH_COMMON_H
#define QUALITY_SYNTH_COMMON_H
typedef __SIZE_TYPE__ size_t;
typedef __PTRDIFF_TYPE__ ssize_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef __builtin_va_list va_list;
#define va_start(ap, last) __builtin_va_start(ap, last)
#define va_arg(ap, type) __builtin_va_arg(ap, type)
#define va_end(ap) __builtin_va_end(ap)
#define NOINLINE __attribute__((noinline))
#define NULL ((void *)0)
extern void abort(void) __attribute__((noreturn));
extern void exit(int) __attribute__((noreturn));
extern void *malloc(size_t);
extern void free(void *);
extern void *memcpy(void *, const void *, size_t);
extern void *memset(void *, int, size_t);
extern size_t strlen(const char *);
extern int strcmp(const char *, const char *);
extern int printf(const char *, ...);
extern volatile int synth_sink;
#endif
