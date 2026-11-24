/* Control-flow shapes: loops, breaks, dense and sparse switches, gotos,
 * short-circuit conditions, early returns and no-return calls. */
#include "common.h"

volatile int synth_sink;

NOINLINE int nested_loops(const int *grid, int rows, int cols) {
    int best = 0;
    for (int r = 0; r < rows; r++) {
        int run = 0;
        for (int c = 0; c < cols; c++) {
            if (grid[r * cols + c] < 0)
                break;
            if (grid[r * cols + c] == 0)
                continue;
            run += grid[r * cols + c];
        }
        if (run > best)
            best = run;
    }
    return best;
}

NOINLINE int dense_switch(int op, int a, int b) {
    switch (op) {
    case 0: return a + b;
    case 1: return a - b;
    case 2: return a * b;
    case 3: return b ? a / b : 0;
    case 4: return a & b;
    case 5: return a | b;
    case 6: return a ^ b;
    case 7: return a << (b & 31);
    default: return -1;
    }
}

NOINLINE int sparse_switch(int code) {
    int r = 0;
    switch (code) {
    case 3: r = 10; break;
    case 100: r = 20; break;
    case 1000: r = 30; __attribute__((fallthrough));
    case 1001: r += 1; break;
    case -7: r = -1; break;
    }
    return r;
}

NOINLINE int goto_cleanup(int n) {
    char *a = malloc(n);
    char *b = NULL;
    int rc = -1;
    if (!a)
        goto out;
    b = malloc(n * 2);
    if (!b)
        goto free_a;
    memset(a, 1, n);
    memset(b, 2, n * 2);
    rc = a[0] + b[n];
    free(b);
free_a:
    free(a);
out:
    return rc;
}

NOINLINE int short_circuit(int x, int y, int z) {
    if ((x > 0 && y > 0) || z == 42)
        return 1;
    if (x < 0 || (y < 0 && z < 0))
        return 2;
    return 0;
}

NOINLINE unsigned do_while_digits(unsigned v) {
    unsigned n = 0;
    do {
        n++;
        v /= 10;
    } while (v);
    return n;
}

NOINLINE int early_returns(const char *s) {
    if (!s)
        return -1;
    if (!*s)
        return 0;
    size_t n = strlen(s);
    if (n > 64)
        return -2;
    int h = 7;
    for (size_t i = 0; i < n; i++)
        h = h * 31 + s[i];
    return h;
}

NOINLINE void fatal(const char *msg) {
    printf("fatal: %s\n", msg);
    exit(2);
}

NOINLINE int checked_div(int a, int b) {
    if (b == 0)
        fatal("division by zero");
    return a / b;
}

NOINLINE int infinite_until(volatile int *flag) {
    int spins = 0;
    for (;;) {
        if (*flag)
            break;
        spins++;
    }
    return spins;
}

NOINLINE int state_machine(const char *s) {
    int state = 0, count = 0;
    while (*s) {
        switch (state) {
        case 0:
            if (*s == '"') state = 1;
            break;
        case 1:
            if (*s == '\\') state = 2;
            else if (*s == '"') { state = 0; count++; }
            break;
        case 2:
            state = 1;
            break;
        }
        s++;
    }
    return state == 0 ? count : -1;
}

int control_main(int argc) {
    int grid[6] = {1, 2, 0, -1, 3, 4};
    volatile int flag = 1;
    synth_sink = nested_loops(grid, 2, 3) + dense_switch(argc, 7, 3) + sparse_switch(argc * 100)
        + goto_cleanup(argc + 4) + short_circuit(argc, -argc, 42) + (int)do_while_digits(argc * 12345)
        + early_returns("hello") + checked_div(10, argc) + infinite_until(&flag)
        + state_machine("\"a\" \"b\\\"c\"");
    return synth_sink;
}
