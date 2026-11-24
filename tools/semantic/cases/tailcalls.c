#include "case.h"
T int leaf(int a, int b) { return a * 10 + b; }
T int tail_plain(int x) { return leaf(x + 1, x - 1); }
T int tail_cond(int x) { if (x > 5) return leaf(x, 1); return leaf(2, x); }
T long tail_ptr(long (*f)(long), long v) { return f(v * 2); }
T long twice(long v) { return v + v + 1; }
T int even(unsigned n);
T int odd(unsigned n) { return n == 0 ? 0 : even(n - 1); }
T int even(unsigned n) { return n == 0 ? 1 : odd(n - 1); }
int main(void) {
  P("%d", tail_plain(4)); P("%d %d", tail_cond(9), tail_cond(-2)); P("%ld", tail_ptr(twice, 21));
  P("%d %d", even(10), odd(7)); P("%d", even(100001));
  return 0;
}
