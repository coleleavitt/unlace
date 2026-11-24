/* Call shapes: varargs, static inline helpers, tail calls, recursion,
 * callbacks and a no-return wrapper. */
#include "common.h"

static inline int clamp(int v, int lo, int hi) { return v < lo ? lo : v > hi ? hi : v; }

NOINLINE int sum_varargs(int count, ...) {
    va_list ap;
    int s = 0;
    va_start(ap, count);
    for (int i = 0; i < count; i++)
        s += va_arg(ap, int);
    va_end(ap);
    return s;
}

NOINLINE int clamp_all(int *v, int n) {
    int changed = 0;
    for (int i = 0; i < n; i++) {
        int c = clamp(v[i], -10, 10);
        changed += c != v[i];
        v[i] = c;
    }
    return changed;
}

NOINLINE long fib(int n) { return n < 2 ? n : fib(n - 1) + fib(n - 2); }

NOINLINE int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

NOINLINE int helper_tail(int x) { return x * 3 + 1; }

NOINLINE int tail_caller(int x) {
    if (x & 1)
        return helper_tail(x);
    return helper_tail(x / 2);
}

typedef int (*visit_fn)(void *ctx, int value);

NOINLINE int for_each(const int *v, int n, visit_fn fn, void *ctx) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        int r = fn(ctx, v[i]);
        if (r < 0)
            return r;
        total += r;
    }
    return total;
}

static int count_positive(void *ctx, int value) {
    if (value > 0)
        ++*(int *)ctx;
    return value > 0;
}

__attribute__((noreturn)) NOINLINE void die(const char *why, int code) {
    printf("die: %s (%d)\n", why, code);
    exit(code);
}

NOINLINE int must_parse(const char *s) {
    int v = 0;
    if (!s || !*s)
        die("empty", 3);
    for (; *s; s++) {
        if (*s < '0' || *s > '9')
            die("not a digit", 4);
        v = v * 10 + (*s - '0');
    }
    return v;
}

int calls_main(int argc) {
    int v[5] = {argc, -20, 30, 4, -5};
    int positives = 0;
    synth_sink = sum_varargs(3, argc, 2, 3) + clamp_all(v, 5) + (int)fib(argc + 5) + gcd(argc * 12, 18)
        + tail_caller(argc) + for_each(v, 5, count_positive, &positives) + positives + must_parse("123");
    return synth_sink;
}
