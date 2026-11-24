#include "case.h"
T int sum_weighted(const int *a, int n) { int s = 0; for (int i = 0; i < n; i++) s += a[i] * (i + 1); return s; }
T unsigned collatz_steps(unsigned x) { unsigned n = 0; while (x != 1) { x = (x & 1) ? 3 * x + 1 : x / 2; n++; } return n; }
T int find_first(const char *s, char c) { int i = 0; do { if (s[i] == c) return i; } while (s[i++]); return -1; }
T long nested(int n) { long t = 0; for (int i = 0; i < n; i++) for (int j = i; j < n; j++) { if ((i ^ j) & 4) continue; if (j > 13) break; t += i * j; } return t; }
int main(void) {
  int a[7] = {3, -1, 4, 1, -5, 9, 2};
  P("%d", sum_weighted(a, 7)); P("%d", sum_weighted(a, 0));
  P("%u", collatz_steps(27)); P("%u", collatz_steps(1));
  P("%d", find_first("hello world", 'w')); P("%d", find_first("abc", 'z')); P("%d", find_first("abc", 0));
  P("%ld", nested(20)); P("%ld", nested(3));
  return 0;
}
