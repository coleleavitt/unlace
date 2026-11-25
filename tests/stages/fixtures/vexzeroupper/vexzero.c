/* Vector-register fixtures for the vexzeroupper ZEXT1632 noise (g2b).
 * Build: gcc -O2 -mavx2 -shared -fPIC -o vexzero_x86_64.so vexzero.c
 * Patterns from coreutils ls main: an xmm value built with VEX inserts and
 * read back through its low 16 bytes, a 16-byte struct zeroed and copied
 * (obstack/struct init), and two 8-byte stores that gcc joins with vpunpcklqdq. */
#include <immintrin.h>

typedef struct { unsigned long a, b; } pair16;

__m128i ins_chain(__m128i v, short x, short y, short z) {
    v = _mm_insert_epi16(v, x, 0);
    v = _mm_insert_epi16(v, y, 1);
    v = _mm_insert_epi16(v, z, 2);
    return v;
}

int ins_then_test(__m128i v, short x, short y) {
    __m128i w = _mm_insert_epi16(v, x, 3);
    w = _mm_insert_epi16(w, y, 5);
    return _mm_extract_epi16(w, 3) + _mm_extract_epi16(w, 5);
}

void zero16(pair16 *d) {
    d->a = 0;
    d->b = 0;
}

void copy16(pair16 *d, const pair16 *s) {
    *d = *s;
}

void unpack_store(unsigned long *p, unsigned long a, unsigned long b) {
    __m128i v = _mm_set_epi64x(b, a);
    _mm_storeu_si128((__m128i *)p, v);
}

void unpack_store2(__m128i *p, unsigned long a, unsigned long b) {
    __m128i v = _mm_set_epi64x(b, a);
    *p = v;
}

__m128i low_of_ymm(__m128i a, __m128i b) {
    __m256i t = _mm256_inserti128_si256(_mm256_castsi128_si256(a), b, 1);
    t = _mm256_add_epi16(t, t);
    return _mm256_castsi256_si128(t);
}
