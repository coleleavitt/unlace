#include "case.h"
T int dense(int k) { switch (k) { case 0: return 11; case 1: return 23; case 2: return 37; case 3: return 41; case 5: return 59; default: return 7; } }
T int jump(int k, int x) { switch (k) { case 10: x += 1; break; case 11: x *= 3; break; case 12: x -= 9; /* fallthrough */ case 13: x ^= 0x55; break; case 14: x <<= 2; break; case 15: x = -x; break; case 16: x /= 3; break; default: x = 0; } return x; }
T const char *sparse(unsigned k) { switch (k) { case 1: return "one"; case 100: return "hundred"; case 1000: return "thousand"; case 77777: return "many"; default: return "?"; } }
T int chars(char c) { switch (c) { case 'a': case 'e': case 'i': case 'o': case 'u': return 1; case ' ': return 2; case '0' ... '9': return 3; default: return 0; } }
int main(void) {
  for (int k = -1; k < 7; k++) P("%d %d", k, dense(k));
  for (int k = 9; k < 18; k++) P("%d %d", k, jump(k, 25));
  unsigned ks[] = {0, 1, 100, 1000, 77777, 5}; for (int i = 0; i < 6; i++) P("%s", sparse(ks[i]));
  const char *s = "hi 7 you"; for (int i = 0; s[i]; i++) P("%d", chars(s[i]));
  return 0;
}
