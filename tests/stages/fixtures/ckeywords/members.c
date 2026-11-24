/* C99 reserves none of these; C23 reserves all three. */
struct rec { int alignof; short bool; long typeof; };
__attribute__((noinline)) long score(struct rec *r) { return r->alignof * 3 + r->bool - r->typeof; }
struct rec g = { 1, 2, 3 };
void _start(void) { score(&g); for (;;) ; }