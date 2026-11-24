#include <stdarg.h>
__attribute__((weak, noinline)) int vsum(int n, ...) { va_list ap; va_start(ap, n); int s = 0; for (int i = 0; i < n; i++) s += va_arg(ap, int); va_end(ap); return s; }
void _start(void) { vsum(3, 1, 2, 3); for (;;) ; }