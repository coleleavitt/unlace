/* Run-length and base64 encoders over byte buffers. */
#include "corpus.h"

size_t rle_encode(const uint8_t *in, size_t n, uint8_t *out, size_t cap) {
    size_t o = 0;
    for (size_t i = 0; i < n;) {
        uint8_t b = in[i];
        size_t run = 1;
        while (i + run < n && in[i + run] == b && run < 255)
            run++;
        if (o + 2 > cap)
            return 0;
        out[o++] = (uint8_t)run;
        out[o++] = b;
        i += run;
    }
    return o;
}

size_t rle_decode(const uint8_t *in, size_t n, uint8_t *out, size_t cap) {
    size_t o = 0;
    for (size_t i = 0; i + 1 < n; i += 2) {
        uint8_t run = in[i];
        if (o + run > cap)
            return 0;
        for (uint8_t k = 0; k < run; k++)
            out[o++] = in[i + 1];
    }
    return o;
}

size_t base64_encode(const uint8_t *in, size_t n, char *out) {
    static const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    size_t o = 0;
    size_t i = 0;
    for (; i + 2 < n; i += 3) {
        uint32_t v = (uint32_t)in[i] << 16 | (uint32_t)in[i + 1] << 8 | in[i + 2];
        out[o++] = alphabet[v >> 18];
        out[o++] = alphabet[(v >> 12) & 63];
        out[o++] = alphabet[(v >> 6) & 63];
        out[o++] = alphabet[v & 63];
    }
    if (i < n) {
        uint32_t v = (uint32_t)in[i] << 16;
        if (i + 1 < n)
            v |= (uint32_t)in[i + 1] << 8;
        out[o++] = alphabet[v >> 18];
        out[o++] = alphabet[(v >> 12) & 63];
        out[o++] = i + 1 < n ? alphabet[(v >> 6) & 63] : '=';
        out[o++] = '=';
    }
    out[o] = '\0';
    return o;
}

int hex_digit(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    return -1;
}

int hex_decode(const char *hex, uint8_t *out) {
    int n = 0;
    while (hex[0] && hex[1]) {
        int hi = hex_digit(hex[0]);
        int lo = hex_digit(hex[1]);
        if (hi < 0 || lo < 0)
            return -1;
        out[n++] = (uint8_t)(hi << 4 | lo);
        hex += 2;
    }
    return n;
}

int main(void) {
    const uint8_t raw[] = "aaaabbbcccccccccccd\x01\x01\x01xyz";
    uint8_t enc[64], dec[64];
    size_t raw_len = sizeof raw - 1;
    size_t e = rle_encode(raw, raw_len, enc, sizeof enc);
    size_t d = rle_decode(enc, e, dec, sizeof dec);
    int same = d == raw_len;
    for (size_t i = 0; same && i < d; i++)
        same = dec[i] == raw[i];
    printf("rle=%d %d same=%d\n", (int)e, (int)d, same);
    char b64[64];
    base64_encode((const uint8_t *)"unlace!", 7, b64);
    printf("b64=%s\n", b64);
    base64_encode((const uint8_t *)"ab", 2, b64);
    printf("b64=%s\n", b64);
    uint8_t bytes[8];
    int nb = hex_decode("DEADbeef00", bytes);
    printf("hex=%d %x %x bad=%d\n", nb, bytes[0], bytes[3], hex_decode("zz", bytes));
    return (int)e;
}
