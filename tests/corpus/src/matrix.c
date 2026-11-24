/* Small dense integer matrix kernels. */
#include "corpus.h"

#define N 4

void mat_mul(const int a[N][N], const int b[N][N], int out[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            int acc = 0;
            for (int k = 0; k < N; k++)
                acc += a[i][k] * b[k][j];
            out[i][j] = acc;
        }
}

void mat_transpose(int m[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++) {
            int t = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = t;
        }
}

long det3(const int m[3][3]) {
    return (long)m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]) -
           (long)m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) +
           (long)m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);
}

long mat_trace(const int m[N][N]) {
    long t = 0;
    for (int i = 0; i < N; i++)
        t += m[i][i];
    return t;
}

int mat_is_symmetric(const int m[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < i; j++)
            if (m[i][j] != m[j][i])
                return 0;
    return 1;
}

int main(void) {
    int a[N][N], b[N][N], c[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            a[i][j] = i * N + j - 5;
            b[i][j] = (i + 1) * (j + 2) % 7;
        }
    mat_mul(a, b, c);
    printf("trace=%ld c03=%d c30=%d\n", mat_trace(c), c[0][3], c[3][0]);
    mat_transpose(c);
    printf("t03=%d sym=%d\n", c[0][3], mat_is_symmetric(c));
    int s[N][N];
    mat_mul(a, a, s);
    mat_transpose(a);
    int d[N][N];
    mat_mul(a, b, d);
    const int m3[3][3] = {{2, -3, 1}, {2, 0, -1}, {1, 4, 5}};
    printf("det=%ld sym2=%d d11=%d\n", det3(m3), mat_is_symmetric(s), d[1][1]);
    return (int)(mat_trace(d) & 0xff);
}
