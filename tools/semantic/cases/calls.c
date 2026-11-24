#include "case.h"
T long mix6(long a, int b, short c, signed char d, unsigned char e, long f) { return a * 3 - b + c * 5 - d + e * 7 + f; }
T long mix9(long a, long b, long c, long d, long e, long f, long g, int h, short i) { return a - b + c - d + e - f + g * 2 - h * 3 + i; }
T int callee_twice(int x) { return mix6(x, x + 1, (short)(x * 3), (signed char)x, (unsigned char)(x + 200), 9) + (int)mix9(1, 2, 3, 4, 5, 6, x, x, -2); }
T void out_params(int x, int *q, int *r) { *q = x / 7; *r = x % 7; }
T int recurse(int n) { return n <= 1 ? n : recurse(n - 1) + recurse(n - 2); }
int main(void) {
  P("%ld", mix6(-5, 1000, -300, -7, 250, 1L << 40));
  P("%ld", mix9(10, 20, 30, 40, 50, 60, 70, 80, -90));
  P("%d", callee_twice(17)); P("%d", callee_twice(-3));
  int q, r; out_params(-50, &q, &r); P("%d %d", q, r); out_params(99, &q, &r); P("%d %d", q, r);
  P("%d", recurse(15));
  return 0;
}
