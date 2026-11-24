/* Self and mutual tail recursion that -O2 turns into loops or jumps. */
#include "corpus.h"

int is_even(unsigned n);

int is_odd(unsigned n) {
    if (n == 0)
        return 0;
    return is_even(n - 1);
}

int is_even(unsigned n) {
    if (n == 0)
        return 1;
    return is_odd(n - 1);
}

long sum_to(long n, long acc) {
    if (n <= 0)
        return acc;
    return sum_to(n - 1, acc + n);
}

unsigned collatz_steps(unsigned long n, unsigned steps) {
    if (n <= 1)
        return steps;
    if (n & 1)
        return collatz_steps(3 * n + 1, steps + 1);
    return collatz_steps(n / 2, steps + 1);
}

__attribute__((noinline)) int scale(int x, int k) {
    return x * k + 1;
}

int forward_scale(int x) {
    return scale(x + 2, 3);
}

int digit_sum(unsigned long n, int acc) {
    return n ? digit_sum(n / 10, acc + (int)(n % 10)) : acc;
}

int main(void) {
    printf("even=%d odd=%d\n", is_even(1000), is_odd(777));
    printf("sum=%ld\n", sum_to(10000, 0));
    printf("collatz=%u %u\n", collatz_steps(27, 0), collatz_steps(97, 0));
    printf("fwd=%d digits=%d\n", forward_scale(5), digit_sum(9876543210UL, 0));
    return (int)collatz_steps(27, 0) & 0xff;
}
