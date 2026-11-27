/* A line-protocol command parser for the strcmpfold stage tests: every
   function compares a buffer with a short constant string, and gcc and clang
   at -O2 inline the compares as loads and compares of the buffer's bytes, so
   no call to strncmp, strcmp or memcmp is left. Each function tests one
   expansion shape; the last few are compares that are not string compares.
   rt.c holds the freestanding runtime (fill, main, the library fallbacks). */

typedef unsigned long size_t;

int strcmp(const char *, const char *);
int strncmp(const char *, const char *, size_t);
int memcmp(const void *, const void *, size_t);

/* read(0, buf, n) by system call; rt.c. */
long rd(char *buf, size_t n);
int handle(const char *arg);

/* Every reader NUL-terminates what it read, as a line reader does; the
   indexed store keeps the buffer one char array (option indexstride). */
#define READ_LINE(buf)                          \
    long got = rd(buf, sizeof buf - 1);         \
    if (got <= 0)                               \
        return -1;                              \
    buf[got] = 0

/* strncmp, equality, a 3-byte constant: gcc 2 + 1 bytes, clang 2 + 1. */
int cmd_sh(void)
{
    char buf[64];
    READ_LINE(buf);
    if (strncmp(buf, "SH ", 3) == 0)
        return handle(buf + 3);
    return 0;
}

/* strncmp as a value: one 4-byte compare. */
int cmd_ping(void)
{
    char buf[64];
    READ_LINE(buf);
    return strncmp(buf, "PING", 4) == 0;
}

/* memcmp of 7 bytes: 4 + 2 + 1 pieces, or two overlapping 4-byte loads. */
int cmd_privmsg(void)
{
    char buf[64];
    READ_LINE(buf);
    if (memcmp(buf, "PRIVMSG", 7) == 0)
        return handle(buf + 8);
    return 0;
}

/* memcmp of 12 bytes: 8 + 4, or two overlapping 8-byte loads. */
int cmd_header(void)
{
    char buf[64];
    READ_LINE(buf);
    if (memcmp(buf, "Content-Type", 12) == 0)
        return handle(buf + 12);
    return 0;
}

/* strcmp against "OK": 3 bytes, the last the NUL. */
int cmd_ok(void)
{
    char buf[64];
    READ_LINE(buf);
    return strcmp(buf, "OK") == 0;
}

/* strncmp whose bound passes the constant's NUL: "AB\0", 3 bytes. */
int cmd_ab(void)
{
    char buf[64];
    READ_LINE(buf);
    return strncmp(buf, "AB", 5) == 0;
}

/* Inequality: leaves unless the line starts "QUIT". */
int cmd_quit(void)
{
    char buf[64];
    READ_LINE(buf);
    if (strncmp(buf, "QUIT", 4) != 0)
        return 0;
    return handle(buf + 4);
}

/* A compare that starts inside the buffer. */
int cmd_mid(void)
{
    char buf[64];
    READ_LINE(buf);
    return memcmp(buf + 4, "abc", 3) == 0;
}

/* memcmp through a pointer parameter (strncmp would stay a call: the
   pointee's size is unknown). */
int is_http(const char *p)
{
    return memcmp(p, "HTTP/", 5) == 0;
}

/* Through a pointer that steps over bytes first, so it is a char pointer. */
int cmd_part(const char *p)
{
    while (*p == ' ')
        p++;
    return memcmp(p, "PART", 4) == 0;
}

/* Through a pointer parameter whose first read is a word: it is typed int *. */
int line_quit(const char *p, long n)
{
    if (n < 5 || p[n - 1] != '\n')
        return 0;
    return memcmp(p, "QUIT", 4) == 0;
}

/* An if-else chain of commands. */
int cmd_method(void)
{
    char buf[64];
    READ_LINE(buf);
    if (strncmp(buf, "GET ", 4) == 0)
        return 1;
    if (strncmp(buf, "PUT ", 4) == 0)
        return 2;
    if (strncmp(buf, "POST ", 5) == 0)
        return 3;
    return 0;
}

/* An ordered result: gcc subtracts byte by byte; not an equality test. */
int cmd_order(void)
{
    char buf[64];
    READ_LINE(buf);
    return strncmp(buf, "AB", 2) < 0;
}

/* Not string compares. Two bytes with a gap between them. */
int not_gap(void)
{
    char buf[64];
    READ_LINE(buf);
    return buf[0] == 'S' && buf[2] == ' ';
}

/* An int that happens to equal "PING" read as bytes. */
int not_int(int x)
{
    return x == 0x474e4950;
}

/* The bytes of two different buffers. */
int not_two(void)
{
    char a[64], b[64];
    long got = rd(a, sizeof a - 1);
    if (got <= 0 || rd(b, sizeof b - 1) <= 0)
        return -1;
    a[got] = 0;
    b[got] = 0;
    return memcmp(a, "SH", 2) == 0 && b[2] == ' ';
}

/* A single byte. */
int not_byte(void)
{
    char buf[64];
    READ_LINE(buf);
    return buf[0] == '#';
}

/* The buffer is never indexed, so the frame layout splits it into one
   variable per compare: a string compare across variables, not folded. */
int cmd_split(void)
{
    char buf[64];
    if (rd(buf, sizeof buf - 1) <= 0)
        return -1;
    return strncmp(buf, "SH ", 3) == 0;
}
