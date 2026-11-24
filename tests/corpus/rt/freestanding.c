/* Minimal AArch64 Linux runtime for freestanding corpus builds: _start,
 * exit/write syscalls, a small printf, and the mem* functions the compiler
 * may call. Not part of the measured function set.
 */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

int main(void);

static long sys_call3(long nr, long a, long b, long c) {
    register long x8 __asm__("x8") = nr;
    register long x0 __asm__("x0") = a;
    register long x1 __asm__("x1") = b;
    register long x2 __asm__("x2") = c;
    __asm__ volatile("svc 0" : "+r"(x0) : "r"(x8), "r"(x1), "r"(x2) : "memory");
    return x0;
}

static char out_buf[4096];
static size_t out_len;

static void flush_out(void) {
    if (out_len)
        sys_call3(64, 1, (long)out_buf, (long)out_len);
    out_len = 0;
}

static void put_char(char c) {
    if (out_len == sizeof out_buf)
        flush_out();
    out_buf[out_len++] = c;
}

static void put_unsigned(unsigned long v, unsigned base, int width, char pad) {
    char tmp[24];
    int n = 0;
    do {
        unsigned d = (unsigned)(v % base);
        tmp[n++] = (char)(d < 10 ? '0' + d : 'a' + d - 10);
        v /= base;
    } while (v);
    while (n < width--)
        put_char(pad);
    while (n)
        put_char(tmp[--n]);
}

int printf(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    for (; *fmt; fmt++) {
        if (*fmt != '%') {
            put_char(*fmt);
            continue;
        }
        fmt++;
        char pad = ' ';
        int width = 0;
        int is_long = 0;
        if (*fmt == '0') {
            pad = '0';
            fmt++;
        }
        while (*fmt >= '0' && *fmt <= '9')
            width = width * 10 + (*fmt++ - '0');
        while (*fmt == 'l') {
            is_long = 1;
            fmt++;
        }
        switch (*fmt) {
        case 'd': {
            long v = is_long ? va_arg(ap, long) : va_arg(ap, int);
            if (v < 0) {
                put_char('-');
                v = -v;
            }
            put_unsigned((unsigned long)v, 10, width, pad);
            break;
        }
        case 'u':
            put_unsigned(is_long ? va_arg(ap, unsigned long) : va_arg(ap, unsigned), 10, width, pad);
            break;
        case 'x':
            put_unsigned(is_long ? va_arg(ap, unsigned long) : va_arg(ap, unsigned), 16, width, pad);
            break;
        case 'c':
            put_char((char)va_arg(ap, int));
            break;
        case 's':
            for (const char *s = va_arg(ap, const char *); *s; s++)
                put_char(*s);
            break;
        default:
            put_char(*fmt);
            break;
        }
    }
    va_end(ap);
    return 0;
}

void *memcpy(void *dst, const void *src, size_t n) {
    unsigned char *d = dst;
    const unsigned char *s = src;
    while (n--)
        *d++ = *s++;
    return dst;
}

void *memmove(void *dst, const void *src, size_t n) {
    unsigned char *d = dst;
    const unsigned char *s = src;
    if (d < s) {
        while (n--)
            *d++ = *s++;
    } else {
        while (n--)
            d[n] = s[n];
    }
    return dst;
}

void *memset(void *dst, int c, size_t n) {
    unsigned char *d = dst;
    while (n--)
        *d++ = (unsigned char)c;
    return dst;
}

int memcmp(const void *a, const void *b, size_t n) {
    const unsigned char *x = a, *y = b;
    for (; n; n--, x++, y++)
        if (*x != *y)
            return *x - *y;
    return 0;
}

size_t strlen(const char *s) {
    size_t n = 0;
    while (s[n])
        n++;
    return n;
}

void _start_c(void) {
    int code = main();
    flush_out();
    sys_call3(93, code, 0, 0);
    for (;;) {
    }
}

__asm__(".globl _start\n"
        "_start:\n"
        "  mov x29, #0\n"
        "  mov x30, #0\n"
        "  bl _start_c\n");
