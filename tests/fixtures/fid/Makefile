# FID fixture regeneration (see README.md).
#
# Hermetic: the vendored lib.o + lib.fid are committed; this only rebuilds them.
# Requires gcc and the built `unlace` binary + x86-64 .sla
# (`make binaries specs` from the repo root).

UNLACE    ?= ../../../target/release/unlace
SPECS   ?= ../../../specs
ANALYSIS_FIXTURES ?= ../../../crates/unlace-analysis/tests/fixtures

CFLAGS  := -O2 -ffreestanding -fno-stack-protector
LANG    := x86:LE:64:default
CSPEC   := gcc

.PHONY: all clean mirror

all: lib.fid mirror

# 1. the library object (x86-64, the gcc default — see README "Architecture note").
lib.o: lib.c
	gcc $(CFLAGS) -c $< -o $@

# 2. fingerprint it with unlace's own generator → the vendored .fid.
lib.fid: lib.o
	SLEIGHHOME="$(SPECS)" $(UNLACE) fid build $< -o $@ --lang $(LANG) --cspec $(CSPEC)

# 3. mirror into the cargo-test fixtures dir (verify_fid_build.rs reads these).
mirror: lib.o lib.c lib.fid
	cp lib.o   $(ANALYSIS_FIXTURES)/fid_lib_x86_64.o
	cp lib.c   $(ANALYSIS_FIXTURES)/fid_lib_x86_64.c
	cp lib.fid $(ANALYSIS_FIXTURES)/fid_lib_x86_64.fid

clean:
	rm -f lib.o lib.fid
