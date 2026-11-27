#!/bin/sh
# Rebuilds the netstruct fixtures (gcc 15.3.0, glibc 2.43, x86-64): the
# stripped static -O2 image the feedback was about, a dynamic -O2 image whose
# libc callees keep their import names, and the stripped static -O2 image against
# musl (zig 0.15.2's bundled musl; musl's netinet/tcp.h names the tcphdr fields
# the source uses only under _GNU_SOURCE).
set -e
cd "$(dirname "$0")"
gcc -O2 -static -s -o netstruct-gcc-O2 netstruct.c
gcc -O2 -s -o netstruct-gcc-O2-dyn netstruct.c
gcc -O2 -static -s -o netraw-gcc-O2 netraw.c
gcc -O2 -s -o netraw-gcc-O2-dyn netraw.c
zig cc -target x86_64-linux-musl -D_GNU_SOURCE -O2 -static -s -o netstruct-musl-O2 netstruct.c
