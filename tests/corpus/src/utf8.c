/* UTF-8 decoding, encoding and validation. */
#include "corpus.h"

int utf8_decode(const uint8_t *s, uint32_t *cp) {
    uint8_t c = s[0];
    if (c < 0x80) {
        *cp = c;
        return 1;
    }
    if ((c & 0xe0) == 0xc0) {
        if ((s[1] & 0xc0) != 0x80)
            return -1;
        *cp = ((uint32_t)(c & 0x1f) << 6) | (s[1] & 0x3f);
        return *cp < 0x80 ? -1 : 2;
    }
    if ((c & 0xf0) == 0xe0) {
        if ((s[1] & 0xc0) != 0x80 || (s[2] & 0xc0) != 0x80)
            return -1;
        *cp = ((uint32_t)(c & 0x0f) << 12) | ((uint32_t)(s[1] & 0x3f) << 6) | (s[2] & 0x3f);
        return *cp < 0x800 ? -1 : 3;
    }
    if ((c & 0xf8) == 0xf0) {
        if ((s[1] & 0xc0) != 0x80 || (s[2] & 0xc0) != 0x80 || (s[3] & 0xc0) != 0x80)
            return -1;
        *cp = ((uint32_t)(c & 0x07) << 18) | ((uint32_t)(s[1] & 0x3f) << 12) | ((uint32_t)(s[2] & 0x3f) << 6) |
              (s[3] & 0x3f);
        return *cp < 0x10000 || *cp > 0x10ffff ? -1 : 4;
    }
    return -1;
}

int utf8_encode(uint32_t cp, uint8_t *out) {
    if (cp < 0x80) {
        out[0] = (uint8_t)cp;
        return 1;
    }
    if (cp < 0x800) {
        out[0] = (uint8_t)(0xc0 | (cp >> 6));
        out[1] = (uint8_t)(0x80 | (cp & 0x3f));
        return 2;
    }
    if (cp < 0x10000) {
        out[0] = (uint8_t)(0xe0 | (cp >> 12));
        out[1] = (uint8_t)(0x80 | ((cp >> 6) & 0x3f));
        out[2] = (uint8_t)(0x80 | (cp & 0x3f));
        return 3;
    }
    out[0] = (uint8_t)(0xf0 | (cp >> 18));
    out[1] = (uint8_t)(0x80 | ((cp >> 12) & 0x3f));
    out[2] = (uint8_t)(0x80 | ((cp >> 6) & 0x3f));
    out[3] = (uint8_t)(0x80 | (cp & 0x3f));
    return 4;
}

int utf8_count(const uint8_t *s, int *invalid) {
    int count = 0;
    *invalid = 0;
    while (*s) {
        uint32_t cp;
        int n = utf8_decode(s, &cp);
        if (n < 0) {
            (*invalid)++;
            n = 1;
        }
        s += n;
        count++;
    }
    return count;
}

uint32_t utf8_checksum(const uint8_t *s) {
    uint32_t sum = 0;
    while (*s) {
        uint32_t cp = 0xfffd;
        int n = utf8_decode(s, &cp);
        s += n > 0 ? n : 1;
        sum = sum * 33 + cp;
    }
    return sum;
}

int main(void) {
    const uint8_t text[] = "h\xc3\xa9llo \xe2\x82\xac \xf0\x9f\x98\x80 \xff!";
    int bad;
    int n = utf8_count(text, &bad);
    printf("count=%d invalid=%d sum=%u\n", n, bad, utf8_checksum(text));
    uint8_t buf[8];
    int total = 0;
    const uint32_t cps[] = {0x41, 0xe9, 0x20ac, 0x1f600};
    for (int i = 0; i < 4; i++) {
        int len = utf8_encode(cps[i], buf);
        uint32_t back;
        buf[len] = 0;
        printf("enc=%d roundtrip=%d\n", len, utf8_decode(buf, &back) == len && back == cps[i]);
        total += len;
    }
    return total;
}
