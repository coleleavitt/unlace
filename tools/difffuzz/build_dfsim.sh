#!/bin/sh
# build_dfsim.sh GDB_BUILD_DIR OUT_DIR ARCH...
#
# Links tools/difffuzz/dfsim.c against each GDB_BUILD_DIR/sim/ARCH/libsim.a, the way
# sim/common/nrun.c is linked into sim/ARCH/run, and writes OUT_DIR/dfsim-ARCH. The gdb tree
# is gdb 16 configured with --enable-targets=all --enable-sim (CFLAGS=-std=gnu17 for GCC 15)
# and built with "make all-sim all-gdb"; copy its gdb/gdb next to the drivers as well
# (gdbsim_backend.py asks it for each architecture's register numbering).
B="$1/sim"; OUT="$2"; shift 2
SRC=$(cd "$(dirname "$0")" && pwd)/dfsim.c
cd "$B" || exit 1
for a in "$@"; do
  rm -f "$a/nrun.o" "$a/run"
  cmd=$(make V=1 "$a/run" 2>&1 | grep -E "^gcc .* -c -o $a/nrun.o" | head -1)
  cc=$(echo "$cmd" | sed -e "s# -MT $a/nrun.o -MD -MP -MF [^ ]*##" -e "s# -c -o $a/nrun.o .*# -c -o $a/dfsim.o $SRC#")
  eval "$cc" || { echo "compile failed: $a"; continue; }
  gcc -o "$OUT/dfsim-$a" "$a/dfsim.o" "$a/libsim.a" ../bfd/.libs/libbfd.a -L../zlib -lz -lzstd \
      ../libsframe/.libs/libsframe.a ../opcodes/.libs/libopcodes.a ../libiberty/libiberty.a \
      ../gnulib/import/libgnu.a -ltinfo -lm && echo "built $OUT/dfsim-$a"
done
