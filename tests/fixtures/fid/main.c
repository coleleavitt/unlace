/* Caller for the FID fixture library — references each unlace_* function so the
 * linker retains them in the (stripped) `prog` binary PR4 builds. Not used by
 * PR3 (which fingerprints lib.o directly), but lives here so the fixture is a
 * complete, regenerable set. See docs/fid-design.md §7.2.
 */

unsigned unlace_crc32(const unsigned char *p, unsigned n);
unsigned long unlace_strlen(const char *s);
void *unlace_memset(void *d, int v, unsigned long n);

int main(void) {
    char buf[32];
    unlace_memset(buf, 'A', sizeof buf);
    buf[sizeof buf - 1] = 0;
    unsigned long len = unlace_strlen(buf);
    unsigned crc = unlace_crc32((const unsigned char *)buf, (unsigned)len);
    return (int)(crc ^ len);
}
