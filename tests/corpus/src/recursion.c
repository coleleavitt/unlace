/* Classic recursive functions. */
#include "corpus.h"

long fib(int n) {
    if (n < 2)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int ackermann(int m, int n) {
    if (m == 0)
        return n + 1;
    if (n == 0)
        return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1));
}

long hanoi_moves(int disks, int from, int to, int via) {
    if (disks == 0)
        return 0;
    long moves = hanoi_moves(disks - 1, from, via, to);
    moves += 1;
    moves += hanoi_moves(disks - 1, via, to, from);
    return moves;
}

unsigned gcd(unsigned a, unsigned b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long power(long base, unsigned exp) {
    if (exp == 0)
        return 1;
    long half = power(base, exp / 2);
    if (exp & 1)
        return half * half * base;
    return half * half;
}

int binomial(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}

int main(void) {
    printf("fib=%ld\n", fib(20));
    printf("ack=%d\n", ackermann(2, 3));
    printf("hanoi=%ld\n", hanoi_moves(10, 1, 3, 2));
    printf("gcd=%u\n", gcd(1071, 462));
    printf("pow=%ld\n", power(3, 13));
    printf("binom=%d\n", binomial(12, 5));
    return (int)(fib(12) % 251);
}
