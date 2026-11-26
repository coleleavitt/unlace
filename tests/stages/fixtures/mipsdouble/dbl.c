/* MIPS o32 double / variadic probes (b5b). */
extern int logf_(const char *fmt, ...);
extern int sink_v(int a, ...);

double dret(int x) { return (double)x * 1.5; }
double dcall(int x) { return dret(x) + 1.0; }

int dargs(double d, int k) { return (int)(d * 2.0) + k; }
int dpass(int x) { return dargs((double)x * 0.5, 7); }

int vlog(int a, int b) { return logf_("%d %d\n", a, b); }
