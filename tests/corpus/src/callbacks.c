/* Function-pointer dispatch tables and callback-driven algorithms. */
#include "corpus.h"

typedef int (*binop_fn)(int, int);
typedef int (*cmp_fn)(const void *, const void *);

int op_add(int a, int b) { return a + b; }
int op_sub(int a, int b) { return a - b; }
int op_mul(int a, int b) { return a * b; }
int op_max(int a, int b) { return a > b ? a : b; }

int fold(const int *v, int n, int init, binop_fn f) {
    int acc = init;
    for (int i = 0; i < n; i++)
        acc = f(acc, v[i]);
    return acc;
}

int cmp_int_desc(const void *a, const void *b) {
    int x = *(const int *)a, y = *(const int *)b;
    return (x < y) - (x > y);
}

void generic_sort(void *base, int n, int size, cmp_fn cmp) {
    char *b = base;
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && cmp(b + (j - 1) * size, b + j * size) > 0; j--) {
            for (int k = 0; k < size; k++) {
                char t = b[(j - 1) * size + k];
                b[(j - 1) * size + k] = b[j * size + k];
                b[j * size + k] = t;
            }
        }
    }
}

struct command {
    const char *name;
    binop_fn fn;
};

int dispatch(const struct command *table, int count, char first, int a, int b) {
    for (int i = 0; i < count; i++)
        if (table[i].name[0] == first)
            return table[i].fn(a, b);
    return -1;
}

int main(void) {
    const struct command table[] = {{"add", op_add}, {"sub", op_sub}, {"mul", op_mul}, {"max", op_max}};
    int v[7] = {4, -2, 9, 1, 7, 3, 3};
    printf("fold=%d %d %d\n", fold(v, 7, 0, op_add), fold(v, 7, 1, op_mul), fold(v, 7, -100, op_max));
    printf("dispatch=%d %d %d\n", dispatch(table, 4, 's', 10, 4), dispatch(table, 4, 'm', 6, 7), dispatch(table, 4, 'q', 1, 1));
    generic_sort(v, 7, (int)sizeof v[0], cmp_int_desc);
    printf("sorted=%d %d %d\n", v[0], v[3], v[6]);
    return fold(v, 7, 0, op_sub) & 0xff;
}
