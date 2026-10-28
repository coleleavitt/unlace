/* Many values live across calls: exercises callee-saved registers. */
#include "corpus.h"

__attribute__((noinline)) long mix(long a, long b) {
    return (a ^ (b << 3)) + (b >> 1) - a / 7;
}

long blend6(long a, long b, long c, long d, long e, long f) {
    long x = mix(a, b);
    long y = mix(c, d);
    long z = mix(e, f);
    long w = mix(x + a, y - b);
    long v = mix(z * 3, c + d);
    return a + b + c + d + e + f + x + y + z + w + v;
}

long rolling(const long *v, int n) {
    long h0 = 1, h1 = 2, h2 = 3, h3 = 5;
    for (int i = 0; i < n; i++) {
        long t = mix(h0, v[i]);
        h0 = h1;
        h1 = h2;
        h2 = h3;
        h3 = t + h0;
    }
    return h0 ^ h1 ^ h2 ^ h3;
}

int sum_pairs(const int *a, const int *b, int n, int bias) {
    int s0 = 0, s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++) {
        s0 += (int)mix(a[i], bias);
        s1 += (int)mix(b[i], s0);
        s2 ^= s0 + s1;
    }
    return s0 + 3 * s1 + 7 * s2;
}

int main(void) {
    long vals[8] = {3, 1, 4, 1, 5, 9, 2, 6};
    int xs[5] = {10, 20, 30, 40, 50};
    int ys[5] = {-1, -2, -3, -4, -5};
    long b = blend6(11, 22, 33, 44, 55, 66);
    long r = rolling(vals, 8);
    int p = sum_pairs(xs, ys, 5, 13);
    printf("blend=%ld rolling=%ld pairs=%d\n", b, r, p);
    return (int)((b ^ r ^ p) & 0x7f);
}
