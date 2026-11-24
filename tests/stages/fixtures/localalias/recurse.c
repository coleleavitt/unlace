__attribute__((weak,noinline)) int recurse(int n) { return n <= 1 ? n : recurse(n - 1) + recurse(n - 2); }
void _start(void) { recurse(5); for (;;) ; }