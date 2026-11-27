#!/bin/sh
# Rebuilds the strcmpfold fixtures: strcmpfold.c at -O2 with gcc 15.3.0 and
# clang 22.1.8 for x86-64, and clang for AArch64 (no AArch64 gcc on the build
# host). Static, no libc (rt.c is the runtime), symbols kept so the stage
# tests load functions by name. strcmpfold-dyn.c is gcc -O2 linked against
# glibc 2.43, so libc's prototypes type its pointers.
set -e
cd "$(dirname "$0")"
tmp=$(mktemp -d)
trap 'rm -rf "$tmp"' EXIT
common="-O2 -fno-stack-protector -fno-asynchronous-unwind-tables -fcf-protection=none -fno-pie"
rtflags="-O2 -fno-builtin -fno-stack-protector -fno-asynchronous-unwind-tables -fcf-protection=none -fno-pie"

gcc $common -c strcmpfold.c -o "$tmp/g.o"
gcc $rtflags -c rt.c -o "$tmp/grt.o"
gcc -static -nostdlib -no-pie -o strcmpfold-gcc-O2 "$tmp/g.o" "$tmp/grt.o"

clang $common -c strcmpfold.c -o "$tmp/c.o"
clang $rtflags -c rt.c -o "$tmp/crt.o"
clang -static -nostdlib -fuse-ld=lld -o strcmpfold-clang-O2 "$tmp/c.o" "$tmp/crt.o"

gcc $common -no-pie -o strcmpfold-gcc-O2-dyn strcmpfold-dyn.c

a64="--target=aarch64-linux-gnu"
clang $a64 -O2 -fno-stack-protector -fno-asynchronous-unwind-tables -fno-pie -c strcmpfold.c -o "$tmp/a.o"
clang $a64 -O2 -fno-builtin -fno-stack-protector -fno-asynchronous-unwind-tables -fno-pie -c rt.c -o "$tmp/art.o"
clang $a64 -static -nostdlib -fuse-ld=lld -o strcmpfold-clang-O2-aarch64 "$tmp/a.o" "$tmp/art.o"
