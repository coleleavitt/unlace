/* Loops with break, continue and early returns. */
#include "corpus.h"

int find_first(const int *a, int n, int target) {
    for (int i = 0; i < n; i++)
        if (a[i] == target)
            return i;
    return -1;
}

int first_negative_after(const int *a, int n, int start) {
    int i;
    for (i = start; i < n; i++) {
        if (a[i] >= 0)
            continue;
        break;
    }
    return i < n ? i : -1;
}

int validate_record(const char *rec) {
    int digits = 0;
    if (!rec || !*rec)
        return -1;
    if (rec[0] != '#')
        return -2;
    for (const char *p = rec + 1; *p; p++) {
        if (*p == ';')
            break;
        if (*p < '0' || *p > '9')
            return -3;
        if (++digits > 6)
            return -4;
    }
    return digits;
}

int sum_until_sentinel(const int *a, int n, int sentinel, int limit) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == sentinel)
            break;
        if (a[i] < 0)
            continue;
        total += a[i];
        if (total > limit)
            return limit;
    }
    return total;
}

int nested_search(const int grid[5][5], int target, int *row, int *col) {
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            if (grid[r][c] == target) {
                *row = r;
                *col = c;
                goto found;
            }
        }
    }
    return 0;
found:
    return 1;
}

int main(void) {
    int data[10] = {5, 3, 8, -1, 7, 0, -9, 4, 2, 6};
    printf("find=%d %d\n", find_first(data, 10, 7), find_first(data, 10, 99));
    printf("neg=%d %d\n", first_negative_after(data, 10, 4), first_negative_after(data, 10, 7));
    printf("valid=%d %d %d %d %d\n", validate_record("#1234;x"), validate_record("1234"), validate_record("#12a"),
           validate_record("#12345678"), validate_record(""));
    printf("sum=%d %d\n", sum_until_sentinel(data, 10, 0, 100), sum_until_sentinel(data, 10, 99, 20));
    int grid[5][5];
    for (int i = 0; i < 25; i++)
        grid[i / 5][i % 5] = i * 7 % 25;
    int r = -1, c = -1;
    int ok = nested_search(grid, 13, &r, &c);
    printf("grid=%d %d %d miss=%d\n", ok, r, c, nested_search(grid, 30, &r, &c));
    return find_first(data, 10, 2) + 1;
}
