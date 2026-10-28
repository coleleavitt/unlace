/* Fixed-width multi-limb unsigned arithmetic. */
#include "corpus.h"

#define LIMBS 8

void big_set(uint32_t *a, uint32_t v) {
    a[0] = v;
    for (int i = 1; i < LIMBS; i++)
        a[i] = 0;
}

uint32_t big_add(uint32_t *dst, const uint32_t *a, const uint32_t *b) {
    uint64_t carry = 0;
    for (int i = 0; i < LIMBS; i++) {
        uint64_t s = (uint64_t)a[i] + b[i] + carry;
        dst[i] = (uint32_t)s;
        carry = s >> 32;
    }
    return (uint32_t)carry;
}

uint32_t big_mul_small(uint32_t *a, uint32_t m) {
    uint64_t carry = 0;
    for (int i = 0; i < LIMBS; i++) {
        uint64_t p = (uint64_t)a[i] * m + carry;
        a[i] = (uint32_t)p;
        carry = p >> 32;
    }
    return (uint32_t)carry;
}

uint32_t big_divmod_small(uint32_t *a, uint32_t d) {
    uint64_t rem = 0;
    for (int i = LIMBS - 1; i >= 0; i--) {
        uint64_t cur = rem << 32 | a[i];
        a[i] = (uint32_t)(cur / d);
        rem = cur % d;
    }
    return (uint32_t)rem;
}

int big_is_zero(const uint32_t *a) {
    for (int i = 0; i < LIMBS; i++)
        if (a[i])
            return 0;
    return 1;
}

int big_to_decimal(const uint32_t *a, char *out) {
    uint32_t tmp[LIMBS];
    char rev[80];
    int n = 0;
    for (int i = 0; i < LIMBS; i++)
        tmp[i] = a[i];
    do {
        rev[n++] = (char)('0' + big_divmod_small(tmp, 10));
    } while (!big_is_zero(tmp));
    for (int i = 0; i < n; i++)
        out[i] = rev[n - 1 - i];
    out[n] = '\0';
    return n;
}

int main(void) {
    uint32_t f[LIMBS], g[LIMBS], h[LIMBS];
    big_set(f, 1);
    for (uint32_t k = 2; k <= 30; k++)
        big_mul_small(f, k);
    char dec[80];
    int digits = big_to_decimal(f, dec);
    printf("30!=%s (%d digits)\n", dec, digits);
    big_set(g, 0xffffffffu);
    big_set(h, 1);
    uint32_t carry = big_add(h, g, h);
    printf("sum=%x %x carry=%u\n", h[1], h[0], carry);
    return digits;
}
