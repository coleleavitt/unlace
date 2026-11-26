/* Two adjacent pointer stores that gcc -O2 -mavx merges into one 16-byte store
 * (SLP): vpunpcklqdq for {p,p}, vpinsrq for {p0,p1}. Build:
 * gcc -O2 -mavx -shared -fPIC -o strpair_x86_64.so strpair.c */
const char *f[2];
void set(int k) {
    if (k) f[0] = f[1] = "x";
    else { f[0] = "a"; f[1] = "b"; }
}
void set_same(void) { f[0] = f[1] = "same"; }
void set_pair(const char *a, const char *b) { f[0] = a; f[1] = b; }
