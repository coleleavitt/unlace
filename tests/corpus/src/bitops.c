/* Bit manipulation and a bitwise CRC-32. */
#include "corpus.h"

int popcount32(uint32_t x) {
    int c = 0;
    while (x) {
        x &= x - 1;
        c++;
    }
    return c;
}

uint32_t reverse_bits(uint32_t x) {
    uint32_t r = 0;
    for (int i = 0; i < 32; i++) {
        r = (r << 1) | (x & 1);
        x >>= 1;
    }
    return r;
}

uint32_t rotl32(uint32_t x, unsigned k) {
    k &= 31;
    return k ? (x << k) | (x >> (32 - k)) : x;
}

int parity64(uint64_t x) {
    x ^= x >> 32;
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return (int)(x & 1);
}

uint32_t crc32_bitwise(const uint8_t *data, size_t len) {
    uint32_t crc = 0xffffffffu;
    for (size_t i = 0; i < len; i++) {
        crc ^= data[i];
        for (int b = 0; b < 8; b++)
            crc = (crc >> 1) ^ (0xedb88320u & (0u - (crc & 1)));
    }
    return ~crc;
}

int highest_bit(uint64_t x) {
    int pos = -1;
    while (x) {
        x >>= 1;
        pos++;
    }
    return pos;
}

uint16_t bswap16(uint16_t v) {
    return (uint16_t)((v << 8) | (v >> 8));
}

int main(void) {
    const uint8_t msg[] = "123456789";
    printf("pop=%d rev=%x rot=%x\n", popcount32(0xf0f0f00fu), reverse_bits(0x12345678u), rotl32(0x80000001u, 4));
    printf("parity=%d %d\n", parity64(0x7ULL), parity64(0xffffffffffffffffULL));
    printf("crc=%x\n", crc32_bitwise(msg, 9));
    printf("hb=%d %d swap=%x\n", highest_bit(1ULL << 40), highest_bit(0), bswap16(0xabcd));
    return popcount32(crc32_bitwise(msg, 9));
}
