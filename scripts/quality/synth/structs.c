/* Aggregate shapes: struct pointers, nesting, linked lists, arrays of structs,
 * unions, by-value structs, struct globals and a function-pointer table. */
#include "common.h"

struct point { int x, y; };
struct rect { struct point lo, hi; unsigned flags; };
struct node { struct node *next; long key; char tag[8]; };
struct buffer { unsigned char *data; size_t len, cap; };
union value { long i; double d; void *p; };
struct tagged { int kind; union value v; };
struct ops { int (*apply)(int, int); const char *name; };

struct rect synth_bounds = {{0, 0}, {640, 480}, 3};
static struct node pool[4];

NOINLINE int rect_area(const struct rect *r) {
    return (r->hi.x - r->lo.x) * (r->hi.y - r->lo.y);
}

NOINLINE int rect_contains(const struct rect *r, struct point p) {
    return p.x >= r->lo.x && p.x < r->hi.x && p.y >= r->lo.y && p.y < r->hi.y;
}

NOINLINE struct node *list_find(struct node *head, long key) {
    for (struct node *n = head; n; n = n->next)
        if (n->key == key)
            return n;
    return NULL;
}

NOINLINE int list_length(const struct node *head) {
    int n = 0;
    while (head) {
        n++;
        head = head->next;
    }
    return n;
}

NOINLINE int buffer_push(struct buffer *b, unsigned char c) {
    if (b->len == b->cap) {
        size_t cap = b->cap ? b->cap * 2 : 16;
        unsigned char *data = malloc(cap);
        if (!data)
            return -1;
        if (b->data) {
            memcpy(data, b->data, b->len);
            free(b->data);
        }
        b->data = data;
        b->cap = cap;
    }
    b->data[b->len++] = c;
    return 0;
}

NOINLINE double tagged_value(const struct tagged *t) {
    switch (t->kind) {
    case 0: return (double)t->v.i;
    case 1: return t->v.d;
    default: return t->v.p ? 1.0 : 0.0;
    }
}

NOINLINE struct point point_add(struct point a, struct point b) {
    struct point r = {a.x + b.x, a.y + b.y};
    return r;
}

NOINLINE long sum_keys(const struct node *nodes, int count) {
    long s = 0;
    for (int i = 0; i < count; i++)
        s += nodes[i].key * (nodes[i].tag[0] ? 2 : 1);
    return s;
}

static int op_add(int a, int b) { return a + b; }
static int op_mul(int a, int b) { return a * b; }
static const struct ops op_table[] = {{op_add, "add"}, {op_mul, "mul"}};

NOINLINE int dispatch(const char *name, int a, int b) {
    for (unsigned i = 0; i < sizeof op_table / sizeof op_table[0]; i++)
        if (!strcmp(op_table[i].name, name))
            return op_table[i].apply(a, b);
    return 0;
}

int structs_main(int argc) {
    struct buffer b = {0};
    struct tagged t = {1, {.d = 2.5}};
    struct point p = {argc, argc};
    for (int i = 0; i < 4; i++) {
        pool[i].key = i * argc;
        pool[i].next = i < 3 ? &pool[i + 1] : NULL;
        pool[i].tag[0] = (char)i;
    }
    buffer_push(&b, (unsigned char)argc);
    synth_sink = rect_area(&synth_bounds) + rect_contains(&synth_bounds, point_add(p, p))
        + (list_find(pool, argc) != NULL) + list_length(pool) + (int)tagged_value(&t)
        + (int)sum_keys(pool, 4) + dispatch("mul", argc, 3) + (int)b.len;
    free(b.data);
    return synth_sink;
}
