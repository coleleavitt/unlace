/* Quicksort, heapsort and binary search on int arrays. */
#include "corpus.h"

void swap_int(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int *a, int lo, int hi) {
    int pivot = a[hi];
    int i = lo;
    for (int j = lo; j < hi; j++)
        if (a[j] < pivot)
            swap_int(&a[i++], &a[j]);
    swap_int(&a[i], &a[hi]);
    return i;
}

void quicksort(int *a, int lo, int hi) {
    while (lo < hi) {
        int p = partition(a, lo, hi);
        if (p - lo < hi - p) {
            quicksort(a, lo, p - 1);
            lo = p + 1;
        } else {
            quicksort(a, p + 1, hi);
            hi = p - 1;
        }
    }
}

void sift_down(int *a, int start, int end) {
    int root = start;
    while (2 * root + 1 <= end) {
        int child = 2 * root + 1;
        int sw = root;
        if (a[sw] < a[child])
            sw = child;
        if (child + 1 <= end && a[sw] < a[child + 1])
            sw = child + 1;
        if (sw == root)
            return;
        swap_int(&a[root], &a[sw]);
        root = sw;
    }
}

void heapsort(int *a, int n) {
    for (int start = (n - 2) / 2; start >= 0; start--)
        sift_down(a, start, n - 1);
    for (int end = n - 1; end > 0; end--) {
        swap_int(&a[end], &a[0]);
        sift_down(a, 0, end - 1);
    }
}

int binary_search(const int *a, int n, int key) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == key)
            return mid;
        if (a[mid] < key)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -(lo + 1);
}

int is_sorted(const int *a, int n) {
    for (int i = 1; i < n; i++)
        if (a[i - 1] > a[i])
            return 0;
    return 1;
}

int main(void) {
    int a[32], b[32];
    unsigned s = 7;
    for (int i = 0; i < 32; i++) {
        s = s * 1664525u + 1013904223u;
        a[i] = b[i] = (int)(s >> 22) - 512;
    }
    quicksort(a, 0, 31);
    heapsort(b, 32);
    int same = 1;
    for (int i = 0; i < 32; i++)
        same &= a[i] == b[i];
    printf("sorted=%d %d same=%d\n", is_sorted(a, 32), is_sorted(b, 32), same);
    printf("min=%d max=%d\n", a[0], a[31]);
    printf("search=%d %d\n", binary_search(a, 32, a[17]), binary_search(a, 32, 10000));
    return binary_search(a, 32, a[9]);
}
