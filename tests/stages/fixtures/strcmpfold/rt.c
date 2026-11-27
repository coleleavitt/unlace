/* The freestanding runtime of strcmpfold.c (x86-64 and AArch64 Linux): the
   entry point, read and exit by system call, and the library fallbacks a
   compare that is not inlined would call. Built with -fno-builtin so none of
   these is itself folded. */

typedef unsigned long size_t;

int cmd_sh(void), cmd_ping(void), cmd_privmsg(void), cmd_header(void);
int cmd_ok(void), cmd_ab(void), cmd_quit(void), cmd_mid(void);
int cmd_method(void), cmd_order(void), not_gap(void), not_two(void);
int not_byte(void), cmd_split(void), is_http(const char *), not_int(int);
int cmd_part(const char *), line_quit(const char *, long);

static long sys3(long n, long a, long b, long c)
{
#if defined(__x86_64__)
    long r;
    __asm__ volatile("syscall"
                     : "=a"(r)
                     : "a"(n), "D"(a), "S"(b), "d"(c)
                     : "rcx", "r11", "memory");
    return r;
#elif defined(__aarch64__)
    register long x8 __asm__("x8") = n;
    register long x0 __asm__("x0") = a;
    register long x1 __asm__("x1") = b;
    register long x2 __asm__("x2") = c;
    __asm__ volatile("svc #0" : "+r"(x0) : "r"(x8), "r"(x1), "r"(x2) : "memory");
    return x0;
#endif
}

#if defined(__x86_64__)
#define SYS_READ 0
#define SYS_EXIT 60
#else
#define SYS_READ 63
#define SYS_EXIT 93
#endif

long rd(char *buf, size_t n)
{
    return sys3(SYS_READ, 0, (long)buf, (long)n);
}

int handle(const char *arg)
{
    return arg[0];
}

int strcmp(const char *a, const char *b)
{
    while (*a && *a == *b)
        a++, b++;
    return (unsigned char)*a - (unsigned char)*b;
}

int strncmp(const char *a, const char *b, size_t n)
{
    for (; n; n--, a++, b++)
        if (*a != *b || !*a)
            return (unsigned char)*a - (unsigned char)*b;
    return 0;
}

int memcmp(const void *x, const void *y, size_t n)
{
    const unsigned char *a = x, *b = y;
    for (; n; n--, a++, b++)
        if (*a != *b)
            return *a - *b;
    return 0;
}

int main(void)
{
    char line[16] = {0};
    int r = cmd_sh() + cmd_ping() + cmd_privmsg() + cmd_header() + cmd_ok() + cmd_ab() +
            cmd_quit() + cmd_mid() + cmd_method() + cmd_order() + not_gap() + not_two() +
            not_byte() + cmd_split();
    long got = rd(line, sizeof line - 1);
    return r + is_http(line) + not_int(r) + cmd_part(line) + line_quit(line, got);
}

void _start(void)
{
    sys3(SYS_EXIT, main(), 0, 0);
}
