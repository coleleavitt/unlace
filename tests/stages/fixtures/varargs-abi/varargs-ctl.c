__attribute__((noinline)) int sink_w(const char *fmt, void *ap) { return fmt[0] + *(int *)ap; }
__attribute__((noinline)) int logf_nv(const char *fmt, int a1, int a2, int a3) {
  int save[3] = {a1, a2, a3};
  return sink_w(fmt, save);
}
__attribute__((noinline)) double dv(int n, double a, double b) { return (a + b) * n; }
double caller_dv(void) { return dv(2, 1.5, 2.5); }
