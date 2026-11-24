#include "case.h"
int g_grid[4][5];
T void fill_grid(int k) { for (int i = 0; i < 4; i++) for (int j = 0; j < 5; j++) g_grid[i][j] = i * k + j; }
T int trace_grid(void) { int s = 0; for (int i = 0; i < 4; i++) s += g_grid[i][i] - g_grid[i][4 - i]; return s; }
T void reverse_bytes(unsigned char *b, int n) { for (int i = 0, j = n - 1; i < j; i++, j--) { unsigned char t = b[i]; b[i] = b[j]; b[j] = t; } }
T int local_array(int x) { int a[8]; for (int i = 0; i < 8; i++) a[i] = x * i; a[x & 7] += 100; int s = 0; for (int i = 0; i < 8; i += 2) s += a[i]; return s; }
T unsigned short checksum16(const unsigned short *w, unsigned n) { unsigned s = 0; while (n--) s += *w++; while (s >> 16) s = (s & 0xffff) + (s >> 16); return (unsigned short)~s; }
int main(void) {
  fill_grid(7); P("%d", trace_grid()); P("%d", g_grid[3][2]);
  unsigned char b[9] = "abcdefgh"; reverse_bytes(b, 8); P("%s", (char *)b);
  P("%d", local_array(3)); P("%d", local_array(12));
  unsigned short w[5] = {0xffff, 0x1234, 0xabcd, 0x0001, 0x8000}; P("%u", checksum16(w, 5));
  return 0;
}
