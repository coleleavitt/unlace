/* Recursive-descent arithmetic expression evaluator. */
#include "corpus.h"

struct parser {
    const char *p;
    int error;
};

long parse_expr(struct parser *ps);

void skip_spaces(struct parser *ps) {
    while (*ps->p == ' ')
        ps->p++;
}

long parse_number(struct parser *ps) {
    long v = 0;
    if (*ps->p < '0' || *ps->p > '9') {
        ps->error = 1;
        return 0;
    }
    while (*ps->p >= '0' && *ps->p <= '9')
        v = v * 10 + (*ps->p++ - '0');
    return v;
}

long parse_primary(struct parser *ps) {
    skip_spaces(ps);
    if (*ps->p == '(') {
        ps->p++;
        long v = parse_expr(ps);
        skip_spaces(ps);
        if (*ps->p != ')')
            ps->error = 1;
        else
            ps->p++;
        return v;
    }
    if (*ps->p == '-') {
        ps->p++;
        return -parse_primary(ps);
    }
    return parse_number(ps);
}

long parse_term(struct parser *ps) {
    long v = parse_primary(ps);
    for (;;) {
        skip_spaces(ps);
        char op = *ps->p;
        if (op != '*' && op != '/' && op != '%')
            return v;
        ps->p++;
        long rhs = parse_primary(ps);
        if ((op == '/' || op == '%') && rhs == 0) {
            ps->error = 2;
            return 0;
        }
        v = op == '*' ? v * rhs : op == '/' ? v / rhs : v % rhs;
    }
}

long parse_expr(struct parser *ps) {
    long v = parse_term(ps);
    for (;;) {
        skip_spaces(ps);
        char op = *ps->p;
        if (op != '+' && op != '-')
            return v;
        ps->p++;
        long rhs = parse_term(ps);
        v = op == '+' ? v + rhs : v - rhs;
    }
}

long evaluate(const char *text, int *error) {
    struct parser ps = {text, 0};
    long v = parse_expr(&ps);
    skip_spaces(&ps);
    if (*ps.p)
        ps.error = ps.error ? ps.error : 3;
    *error = ps.error;
    return v;
}

int main(void) {
    static const char *cases[] = {"1 + 2 * 3", "(4 + 5) * (2 - 7)", "-(3 * -4) % 5", "100 / (5 - 5)", "2 * (3 + 4",
                                  "17 % 5 + 8 / 3 x"};
    long acc = 0;
    for (int i = 0; i < 6; i++) {
        int err;
        long v = evaluate(cases[i], &err);
        printf("%s => %ld err=%d\n", cases[i], v, err);
        acc += v * (i + 1) + err;
    }
    return (int)(acc & 0xff);
}
