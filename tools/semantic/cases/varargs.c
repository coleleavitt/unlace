#include "case.h"
#include <stdarg.h>
T int vsum(int n, ...) { va_list ap; va_start(ap, n); int s = 0; for (int i = 0; i < n; i++) s += va_arg(ap, int); va_end(ap); return s; }
T double vmix(int n, ...) { va_list ap; va_start(ap, n); double s = 0; for (int i = 0; i < n; i++) { if (i & 1) s += va_arg(ap, double); else s -= va_arg(ap, long); } va_end(ap); return s; }
T int fmt_into(char *buf, int a, const char *s) { return snprintf(buf, 64, "<%d:%s:%x>", a, s, a * 3); }
int main(void) {
  P("%d", vsum(0)); P("%d", vsum(3, 1, 2, 3)); P("%d", vsum(9, 1, 2, 3, 4, 5, 6, 7, 8, 9));
  P("%.17g", vmix(4, 10L, 0.5, -3L, 2.25)); P("%.17g", vmix(8, 1L, 1.0, 2L, 2.0, 3L, 3.0, 4L, 4.5));
  char b[64]; int n = fmt_into(b, 77, "xy"); P("%d %s", n, b);
  return 0;
}
