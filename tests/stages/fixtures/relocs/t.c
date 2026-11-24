/* Source of riscv64.o, mips.o and ppc32.o (tests/stages/unlace-reloc-families.xml):
 *   zig cc -target riscv64-freestanding-none -fno-pic -mcmodel=medlow -mno-relax -O1 -g0 -c t.c -o riscv64.o
 *   zig cc -target mips-freestanding-none -fno-pic -O1 -g0 -c t.c -o mips.o
 *   zig cc -target mips-linux-gnu -fpic -O1 -g0 -c t.c -o mipspic.o
 *   zig cc -target powerpc-freestanding-none -fno-pic -O1 -g0 -c t.c -o ppc32.o
 */

extern int ext_fn(int);
extern int ext_tab[8];
int counter;
static int local_tab[4] = {1,2,3,4};
int pick(int x) {
    if (x < 0) return ext_fn(-x);
    counter += x;
    return local_tab[x & 3] + ext_tab[x & 7];
}
int wide(void) { return (int)(long)&ext_tab; }
