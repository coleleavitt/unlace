#include "case.h"
T long sx8(signed char c) { return c; }
T unsigned long zx8(unsigned char c) { return c; }
T int sx16_mul(short a, short b) { return a * b; }
T unsigned u32_wrap(unsigned a, unsigned b) { return a * b + 0x80000000u; }
T long sdiv(long a, int b) { return a / b + a % b; }
T unsigned long udiv(unsigned long a, unsigned b) { return a / b + a % b; }
T int shr_signed(int a, int s) { return a >> s; }
T unsigned shr_unsigned(unsigned a, int s) { return a >> s; }
T int lt_mixed(int a, unsigned b) { return a < b; }
T long trunc_store(long v, short *out) { *out = (short)v; return (unsigned char)(v >> 3); }
T long long mul_hi(long long a, long long b) { return (long long)(((__int128)a * b) >> 64); }
int main(void) {
  P("%ld %lu", sx8(-3), zx8(253)); P("%d", sx16_mul(-300, 200)); P("%u", u32_wrap(70000, 70000));
  P("%ld", sdiv(-1000001, 7)); P("%ld", sdiv(1L << 40, -3)); P("%lu", udiv(-1UL, 10));
  P("%d %u", shr_signed(-100, 3), shr_unsigned(0xffffff00u, 3));
  P("%d %d", lt_mixed(-1, 1), lt_mixed(1, 2));
  short s; long r = trunc_store(0x12345678ABCDL, &s); P("%ld %d", r, s);
  P("%lld", mul_hi(0x123456789abcdefLL, -0x7edcba9876543LL));
  return 0;
}
