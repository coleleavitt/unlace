#!/bin/sh
# build_dfsim.sh GDB_BUILD_DIR OUT_DIR ARCH...
#
# Links tools/difffuzz/dfsim.c against each GDB_BUILD_DIR/sim/ARCH/libsim.a, the way
# sim/common/nrun.c is linked into sim/ARCH/run, and writes OUT_DIR/dfsim-ARCH. The simulators
# with their own main.c (rx, m32c, rl78: libsim.a is their gdb-if.c) get dfsim_plain.c, which uses
# only the sim/sim.h interface, compiled the way their main.c is. The gdb tree is gdb 16
# configured with --enable-targets=all --enable-sim (CFLAGS=-std=gnu17 for GCC 15) and built with
# "make all-sim all-gdb"; copy its gdb/gdb next to the drivers as well (gdbsim_backend.py asks it
# for each architecture's register numbering).
B="$1/sim"; OUT="$2"; shift 2
HERE=$(cd "$(dirname "$0")" && pwd)
cd "$B" || exit 1
for a in "$@"; do
  if [ -f "$a/main.o" ] && [ ! -f "$a/nrun.o" ]; then
    obj=main.o; src="$HERE/dfsim_plain.c"
    mv "$a/main.o" "$a/main.o.keep"
    cmd=$(make V=1 "$a/main.o" 2>&1 | grep -E "^gcc .* -c -o $a/main.o" | head -1)
    mv "$a/main.o.keep" "$a/main.o"
  else
    obj=nrun.o; src="$HERE/dfsim.c"
    rm -f "$a/nrun.o" "$a/run"
    cmd=$(make V=1 "$a/run" 2>&1 | grep -E "^gcc .* -c -o $a/nrun.o" | head -1)
  fi
  [ -n "$cmd" ] || { echo "no compile line: $a"; continue; }
  cc=$(echo "$cmd" | sed -e "s# -MT $a/$obj -MD -MP -MF [^ ]*##" -e "s# -c -o $a/$obj .*# -c -o $a/dfsim.o $src#")
  eval "$cc" || { echo "compile failed: $a"; continue; }
  gcc -o "$OUT/dfsim-$a" "$a/dfsim.o" "$a/libsim.a" ../bfd/.libs/libbfd.a -L../zlib -lz -lzstd \
      ../libsframe/.libs/libsframe.a ../opcodes/.libs/libopcodes.a ../libiberty/libiberty.a \
      ../gnulib/import/libgnu.a -ltinfo -lm && echo "built $OUT/dfsim-$a"
done
