#include <stdarg.h>
int sink_v(const char *fmt, va_list ap);
int va_sum(int n, ...) {
  va_list ap; va_start(ap, n);
  int s = 0;
  for (int i = 0; i < n; i++) s += va_arg(ap, int);
  va_end(ap);
  return s;
}
double va_dbl(int n, ...) {
  va_list ap; va_start(ap, n);
  double d = 0;
  for (int i = 0; i < n; i++) d += va_arg(ap, double);
  va_end(ap);
  return d;
}
int logf_(const char *fmt, ...) {
  va_list ap; va_start(ap, fmt);
  int r = sink_v(fmt, ap);
  va_end(ap);
  return r;
}
int caller(void) { return va_sum(3, 1, 2, 3) + logf_("x", 4, 5); }
double caller2(void) { return va_dbl(2, 1.5, 2.5); }
