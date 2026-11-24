/* Scalar types: every integer width and signedness, floats, bools, bit fields,
 * shifts and division by constants (the multiply-high idioms). */
#include "common.h"

struct flags { unsigned ready : 1; unsigned mode : 3; signed level : 4; };

NOINLINE int8_t sat_add_i8(int8_t a, int8_t b) {
    int s = a + b;
    return s > 127 ? 127 : s < -128 ? -128 : (int8_t)s;
}

NOINLINE uint16_t bswap16(uint16_t v) { return (uint16_t)((v << 8) | (v >> 8)); }

NOINLINE uint32_t rotl32(uint32_t v, unsigned n) { return (v << (n & 31)) | (v >> ((32 - n) & 31)); }

NOINLINE int64_t mul_wide(int32_t a, int32_t b) { return (int64_t)a * b; }

NOINLINE uint64_t div_by_constants(uint64_t v) { return v / 3 + v / 10 + v % 7; }

NOINLINE int32_t signed_div(int32_t v) { return v / 16 + v / -5; }

NOINLINE double poly(double x) { return ((3.0 * x + 2.0) * x - 1.0) * x + 0.5; }

NOINLINE float lerp(float a, float b, float t) { return a + (b - a) * t; }

NOINLINE _Bool in_range(long v, long lo, long hi) { return v >= lo && v <= hi; }

NOINLINE int unpack_flags(struct flags f) { return f.ready ? f.mode * f.level : -f.level; }

NOINLINE unsigned popcount_loop(unsigned long long v) {
    unsigned n = 0;
    while (v) {
        v &= v - 1;
        n++;
    }
    return n;
}

NOINLINE long double ld_scale(long double v, int e) {
    while (e-- > 0)
        v *= 2.0L;
    return v;
}

NOINLINE size_t count_char(const char *s, char c) {
    size_t n = 0;
    for (; *s; s++)
        n += (unsigned char)*s == (unsigned char)c;
    return n;
}

int types_main(int argc) {
    struct flags f = {1, 5, -3};
    synth_sink = sat_add_i8((int8_t)argc, 100) + bswap16((uint16_t)argc) + (int)rotl32(argc, 7)
        + (int)mul_wide(argc, 1 << 20) + (int)div_by_constants(argc * 1000ull) + signed_div(argc)
        + (int)poly(argc) + (int)lerp(0, argc, 0.5f) + in_range(argc, 0, 9) + unpack_flags(f)
        + (int)popcount_loop(argc * 0x0101010101ull) + (int)ld_scale(argc, 3)
        + (int)count_char("banana", 'a');
    return synth_sink;
}
