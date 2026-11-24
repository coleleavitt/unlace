/* Variadic accumulation and a tiny formatter. */
#include <stdarg.h>
#include "corpus.h"

long sum_ints(int count, ...) {
    va_list ap;
    long total = 0;
    va_start(ap, count);
    for (int i = 0; i < count; i++)
        total += va_arg(ap, int);
    va_end(ap);
    return total;
}

int max_of(int first, ...) {
    va_list ap;
    int best = first;
    va_start(ap, first);
    for (int v = va_arg(ap, int); v != -1; v = va_arg(ap, int))
        if (v > best)
            best = v;
    va_end(ap);
    return best;
}

int format_into(char *out, int cap, const char *fmt, ...) {
    va_list ap;
    int n = 0;
    va_start(ap, fmt);
    for (; *fmt && n + 1 < cap; fmt++) {
        if (*fmt != '%') {
            out[n++] = *fmt;
            continue;
        }
        fmt++;
        if (*fmt == 'd') {
            int v = va_arg(ap, int);
            char tmp[12];
            int k = 0;
            unsigned u = v < 0 ? 0u - (unsigned)v : (unsigned)v;
            do {
                tmp[k++] = (char)('0' + u % 10);
                u /= 10;
            } while (u);
            if (v < 0 && n + 1 < cap)
                out[n++] = '-';
            while (k && n + 1 < cap)
                out[n++] = tmp[--k];
        } else if (*fmt == 's') {
            for (const char *s = va_arg(ap, const char *); *s && n + 1 < cap; s++)
                out[n++] = *s;
        } else if (*fmt) {
            out[n++] = *fmt;
        } else {
            break;
        }
    }
    va_end(ap);
    out[n] = '\0';
    return n;
}

int main(void) {
    char buf[64];
    printf("sum=%ld %ld\n", sum_ints(5, 1, 2, 3, 4, 5), sum_ints(0));
    printf("max=%d\n", max_of(3, 9, -4, 27, 8, -1));
    int n = format_into(buf, sizeof buf, "x=%d y=%d name=%s %%", -42, 7, "unlace");
    printf("fmt=%s (%d)\n", buf, n);
    return n;
}
