#include "case.h"
__attribute__((noreturn)) T void fatal(int code) { printf("fatal %d\n", code); fflush(stdout); exit(code); }
T int checked_div(int a, int b) { if (b == 0) fatal(3); return a / b; }
T int parse_digit(char c) { if (c < '0' || c > '9') { puts("bad digit"); abort(); } return c - '0'; }
T int clamp_or_die(int v) { if (v < 0) fatal(4); if (v > 99) return 99; return v; }
int main(void) {
  P("%d", checked_div(100, 7)); P("%d", parse_digit('7')); P("%d %d", clamp_or_die(5), clamp_or_die(500));
  P("%d", checked_div(1, 0));
  return 0;
}
