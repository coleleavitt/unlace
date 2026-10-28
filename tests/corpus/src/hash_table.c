/* Open-addressing hash map with FNV-1a string hashing. */
#include "corpus.h"

#define CAP 64

struct entry {
    const char *key;
    int value;
    int used;
};

struct map {
    struct entry slots[CAP];
    int size;
};

uint32_t fnv1a(const char *s) {
    uint32_t h = 2166136261u;
    for (; *s; s++) {
        h ^= (uint8_t)*s;
        h *= 16777619u;
    }
    return h;
}

int keys_equal(const char *a, const char *b) {
    while (*a && *a == *b) {
        a++;
        b++;
    }
    return *a == *b;
}

void map_init(struct map *m) {
    for (int i = 0; i < CAP; i++)
        m->slots[i].used = 0;
    m->size = 0;
}

int map_put(struct map *m, const char *key, int value) {
    uint32_t idx = fnv1a(key) & (CAP - 1);
    for (int probe = 0; probe < CAP; probe++) {
        struct entry *e = &m->slots[(idx + probe) & (CAP - 1)];
        if (!e->used) {
            e->used = 1;
            e->key = key;
            e->value = value;
            m->size++;
            return 1;
        }
        if (keys_equal(e->key, key)) {
            e->value = value;
            return 0;
        }
    }
    return -1;
}

int map_get(const struct map *m, const char *key, int fallback) {
    uint32_t idx = fnv1a(key) & (CAP - 1);
    for (int probe = 0; probe < CAP; probe++) {
        const struct entry *e = &m->slots[(idx + probe) & (CAP - 1)];
        if (!e->used)
            return fallback;
        if (keys_equal(e->key, key))
            return e->value;
    }
    return fallback;
}

int main(void) {
    static const char *words[] = {"alpha", "beta", "gamma", "delta", "epsilon", "zeta", "eta", "theta",
                                  "iota", "kappa", "lambda", "mu", "beta", "gamma", "alpha", "omega"};
    struct map m;
    map_init(&m);
    int fresh = 0;
    for (int i = 0; i < 16; i++)
        fresh += map_put(&m, words[i], map_get(&m, words[i], 0) + i + 1);
    printf("size=%d fresh=%d\n", m.size, fresh);
    printf("alpha=%d gamma=%d omega=%d missing=%d\n", map_get(&m, "alpha", -1), map_get(&m, "gamma", -1),
           map_get(&m, "omega", -1), map_get(&m, "rho", -1));
    printf("hash=%x\n", fnv1a("unlace"));
    return m.size;
}
