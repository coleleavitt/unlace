/* Arrays of structs with mixed field widths, passed by pointer and value. */
#include "corpus.h"

struct employee {
    char name[12];
    uint8_t level;
    int16_t dept;
    int32_t salary;
    uint32_t flags;
    double rating;
};

struct summary {
    int32_t total;
    int16_t max_level;
    int16_t count;
};

#define F_MANAGER 0x1u
#define F_REMOTE 0x2u

int32_t bonus(const struct employee *e) {
    int32_t b = e->salary / 20;
    if (e->flags & F_MANAGER)
        b += 1000 * e->level;
    if (e->rating > 4.5)
        b += b / 2;
    else if (e->rating < 2.0)
        b = 0;
    return b;
}

struct summary summarize(const struct employee *staff, int n, int16_t dept) {
    struct summary s = {0, 0, 0};
    for (int i = 0; i < n; i++) {
        const struct employee *e = &staff[i];
        if (dept >= 0 && e->dept != dept)
            continue;
        s.total += e->salary + bonus(e);
        if (e->level > s.max_level)
            s.max_level = e->level;
        s.count++;
    }
    return s;
}

void promote(struct employee *e, int steps) {
    e->level = (uint8_t)(e->level + steps);
    e->salary += 2500 * steps;
    if (e->level >= 5)
        e->flags |= F_MANAGER;
}

int count_flag(const struct employee *staff, int n, uint32_t flag) {
    int c = 0;
    for (int i = 0; i < n; i++)
        c += (staff[i].flags & flag) != 0;
    return c;
}

int main(void) {
    struct employee staff[5] = {
        {"ada", 4, 1, 90000, F_REMOTE, 4.8},
        {"brian", 2, 2, 52000, 0, 3.1},
        {"chen", 6, 1, 120000, F_MANAGER, 4.0},
        {"dora", 1, 3, 41000, F_REMOTE, 1.5},
        {"eve", 3, 2, 67000, F_REMOTE, 4.6},
    };
    struct summary all = summarize(staff, 5, -1);
    struct summary d1 = summarize(staff, 5, 1);
    printf("all=%d/%d/%d d1=%d/%d/%d\n", all.total, all.max_level, all.count, d1.total, d1.max_level, d1.count);
    promote(&staff[0], 2);
    printf("ada=%d %d %u managers=%d remote=%d\n", staff[0].level, staff[0].salary, staff[0].flags,
           count_flag(staff, 5, F_MANAGER), count_flag(staff, 5, F_REMOTE));
    return all.count + d1.count;
}
