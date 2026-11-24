#include "case.h"
T int fcmp(double a, float b) { return a < b ? -1 : (a > b ? 1 : (a == b ? 0 : 2)); }
T double poly(double x) { return ((2.5 * x - 1.25) * x + 0.5) * x - 3.0; }
T float fmix(float a, int b, double c) { return a * b + (float)c; }
T int f2i(double d) { return (int)d; }
T unsigned f2u(float f) { return (unsigned)f; }
T double i2d(long l, unsigned u) { return (double)l + u; }
T int is_between(float x, float lo, float hi) { return x >= lo && x <= hi; }
int main(void) {
  double nan = 0.0 / 0.0;
  P("%d %d %d %d", fcmp(1.5, 2.0f), fcmp(3.0, 2.0f), fcmp(2.0, 2.0f), fcmp(nan, 1.0f));
  P("%.17g", poly(1.7)); P("%.9g", fmix(1.5f, -3, 0.25)); P("%d %d", f2i(-7.9), f2i(1e9));
  P("%u", f2u(3e9f)); P("%.17g", i2d(-(1L << 53) - 1, 4000000000u));
  P("%d %d %d", is_between(0.5f, 0, 1), is_between(-0.1f, 0, 1), is_between(nan, 0, 1));
  return 0;
}
