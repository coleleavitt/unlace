#!/bin/sh
# Rebuilds the netstruct fixtures (gcc 15.3.0, glibc 2.43, x86-64): the
# stripped static -O2 image the feedback was about, and a dynamic -O2 image whose
# libc callees keep their import names.
set -e
cd "$(dirname "$0")"
gcc -O2 -static -s -o netstruct-gcc-O2 netstruct.c
gcc -O2 -s -o netstruct-gcc-O2-dyn netstruct.c
