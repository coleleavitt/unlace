/* Integer array statistics: extremes, mean, median via insertion sort. */
#include "corpus.h"

int array_min(const int *a, int n) {
    int m = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < m)
            m = a[i];
    return m;
}

int array_max(const int *a, int n) {
    int m = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > m)
            m = a[i];
    return m;
}

long array_sum(const int *a, int n) {
    long s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}

void insertion_sort(int *a, int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int median(int *a, int n) {
    insertion_sort(a, n);
    if (n % 2)
        return a[n / 2];
    return (a[n / 2 - 1] + a[n / 2]) / 2;
}

void prefix_sums(const int *a, long *out, int n) {
    long acc = 0;
    for (int i = 0; i < n; i++) {
        acc += a[i];
        out[i] = acc;
    }
}

int count_above(const int *a, int n, int threshold) {
    int c = 0;
    for (int i = 0; i < n; i++)
        c += a[i] > threshold;
    return c;
}

int main(void) {
    int data[12] = {17, -4, 33, 8, 8, 91, -27, 0, 45, 12, 3, 60};
    long sums[12];
    printf("min=%d max=%d sum=%ld\n", array_min(data, 12), array_max(data, 12), array_sum(data, 12));
    prefix_sums(data, sums, 12);
    printf("prefix=%ld %ld %ld\n", sums[0], sums[5], sums[11]);
    printf("above10=%d\n", count_above(data, 12, 10));
    printf("median=%d\n", median(data, 12));
    printf("sorted=%d %d %d\n", data[0], data[6], data[11]);
    return median(data, 11) & 0xff;
}
