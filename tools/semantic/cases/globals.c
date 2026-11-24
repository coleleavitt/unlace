#include "case.h"
int g_counter = 5;
long g_table[6] = {1, 2, 3, 4, 5, 6};
int *g_ptr = &g_counter;
short g_small = -2;
T int bump(int by) { g_counter += by; return g_counter * 2; }
T long alias_store(int *p, long *q) { *p = 10; *q = 20; return *p + *q; }
T void rotate_table(void) { long t = g_table[0]; for (int i = 0; i < 5; i++) g_table[i] = g_table[i + 1]; g_table[5] = t; }
T int via_ptr(int v) { int old = *g_ptr; *g_ptr = v + g_small; return old; }
int main(void) {
  P("%d", bump(3)); P("%d", bump(-10)); P("%d", g_counter);
  int x = 0; long y = 0; long r = alias_store(&x, &y); P("%ld %d %ld", r, x, y);
  long *lp = &g_table[1]; r = alias_store((int *)lp, lp); P("%ld %ld", r, *lp);
  rotate_table(); rotate_table(); for (int i = 0; i < 6; i++) P("%ld", g_table[i]);
  P("%d", via_ptr(40)); P("%d", g_counter);
  return 0;
}
