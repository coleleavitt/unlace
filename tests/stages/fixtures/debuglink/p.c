/* Source of link, link.debug and mini (tests/stages/unlace-debuglink.xml), built
 * with gcc -O1 -g -fno-inline -Wl,--build-id p.c. link: objcopy --only-keep-debug
 * into link.debug, strip --strip-all, objcopy --add-gnu-debuglink=link.debug.
 * mini: the gdb MiniDebugInfo recipe (function symbols only, xz, added as
 * .gnu_debugdata), then strip --strip-all.
 */

#include <stdio.h>
int helper_alpha(int x) { return x * 7 + 1; }
int helper_beta(int x) { return helper_alpha(x) - 3; }
int main(int argc, char **argv) { printf("%d\n", helper_beta(argc)); return 0; }
