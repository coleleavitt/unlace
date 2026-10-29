# FLIRT matching: findings and fixes (2026-10-29)

## Question

`fixtures/medium.elf` gets 0 libc FLIRT matches. Why, and what should change?

## Findings

1. **`medium.elf` has no libc code to match.** It is a 15 KB dynamically
   linked PIE (GCC 15.2, glibc 2.43). Its libc calls go through the PLT and
   are already named from the dynamic symbols (`printf`, `__stack_chk_fail`,
   ...). FLIRT can only name code that is linked into the binary. The only
   library code in every fixture is the C runtime startup code: `_start`
   (glibc `Scrt1.o`) and the GCC `crtstuff.c` helpers `deregister_tm_clones`,
   `register_tm_clones`, `__do_global_dtors_aux` and `frame_dummy`
   (`crtbeginS.o`). In `medium.elf` the helpers have no symbols (Gentoo's
   `crtbeginS.o` has no local symbols), so they were printed as `sub_14b0`,
   `sub_1520` and `sub_1560`. "0 libc matches" is correct; "0 startup-code
   matches" was the real gap.

2. **The bundled signature table was not derived from any library.**
   `crates/unlace-loader/src/flirt/signatures.rs` (the only table the
   pipeline uses without `--sig`) held 63 hand-written patterns of 5-14
   bytes: `memcpy`, `malloc`, `pthread_create`, `std::cout`, ... Several were
   identical (`strncmp` = `memcmp`, `calloc` = `realloc`,
   `std::ostream::operator<<` = `std::istream::operator>>`), and some were
   the ordinary `-O0` prologue (`endbr64; push rbp; mov rbp, rsp`). Measured
   effect:
   - stripped `-O0 -fcf-protection` test program: 4 of 4 user functions
     renamed (3x `std::cout`, 1x `fopen`) and their bodies deleted from the
     output;
   - stripped static `-O2` test program: 153 of 1074 functions named, **0**
     of them confirmed by the real glibc 2.43 / libgcc `.sig` files;
   - `fixtures/debug_templates.elf`: a fragment of `__do_global_dtors_aux`
     named `__memcpy_chk`.
   It never matched real glibc code: glibc's string functions are IFUNC
   variants (`__memmove_avx_unaligned_erms`, ...) that look nothing like
   these patterns.

3. **Reference checks never worked.** `resolve_rel32_call` computed the
   branch target relative to the start of the function slice, then looked it
   up in a map of absolute addresses, so a signature reference only resolved
   for a function at address 0. Unresolved references then fell back to a
   0.5-confidence match, which the default threshold (50) accepted. The
   pipeline test `flirt_match_resolves_reference_name_lists` passed only
   because the wanted signature came first in the table.

4. **Matching was cut short by discovered function bounds.** Bounds are not
   reliable (`deregister_tm_clones` in `medium.elf` is discovered as 0x6c
   bytes because `register_tm_clones` is never discovered; in
   `debug_templates.elf` `__do_global_dtors_aux` is split in two).

5. **FLIRT matches deleted the function body.** A match replaced the whole
   function with `void name(void) { /* name */ }`. The IDA reference
   profiles in `tests/golden/reference_metrics.toml` count the bodies of the
   startup helpers (for example `debug_hello` expects 4 `if`s, which only
   these helpers provide), so naming them with the elision dropped the
   stylistic score from 84.0% to 75.2%. IDA's FLIRT names a function and
   flags it as library code; Hex-Rays still decompiles it.

6. **Other FLIRT data in the tree.**
   - `crates/unlace-flirt/sig/linux-x86_64/*.sig` are real IDASGN files made
     with `unlace siggen` from static libraries. They work with `--sig-dir`:
     on the static test program they name 936 of 1074 functions. They are not
     loaded by default. `libgcc-15-x86_64.sig` was made from `crtbeginT.o`
     and has no `crtstuff.c` helpers, because the helpers are local symbols.
   - `crates/unlace-flirt/signatures/*.sig` and
     `crates/unlace-flirt/patterns/*.toml` are used only by
     `crates/unlace-flirt/src/library.rs`, which `lib.rs` does not declare
     (also `bundled_sigs.rs`, `fuzzy_*.rs`, `generator.rs`). They hold the
     same invented patterns as finding 2 and are dead code.

## Changes

- `crates/unlace-loader/src/flirt/signatures.rs`: replaced the invented
  table with 21 signatures for the startup code, each taken from a real
  object and checked against it:
  - `_start`: glibc 2.31 (Debian 11), 2.36 (Debian 12), 2.43 (Gentoo, CET)
    and zig's glibc `crt1.o`/`Scrt1.o`. GOT loads that the linker relaxes
    (`mov` -> `lea` / `mov $imm32`, `call *GOT` -> `addr32 call`) are
    wildcards.
  - `deregister_tm_clones`, `register_tm_clones`, `__do_global_dtors_aux`,
    `frame_dummy`: GCC 10, 12 and 15 `crtbeginS.o`, `crtbegin.o` and
    `crtbeginT.o`. Patterns run to the last instruction.
    `__do_global_dtors_aux` and `frame_dummy` carry a reference to the helper
    they branch to; `frame_dummy` is a bare `jmp` on some builds, so the
    reference is what makes it safe.
- `crates/unlace-loader/src/flirt/mod.rs`:
  - matching takes a `FunctionCode` (entry address inside its executable
    section) and reads to the end of the section, not to the discovered end;
  - references resolve at absolute addresses, accept `call rel32`,
    `jmp rel32` and `jmp rel8`, and resolve either through a known name or
    through a reference-free signature of that name matching at the target
    (needed because `register_tm_clones` is never a discovered function);
  - a signature whose references do not resolve no longer matches. Scores
    are now 0.9 (no references) or 1.0 (references resolved);
  - removed the unused `min_len`/`max_len` fields.
- `crates/unlace-cli/src/pipeline.rs`: a FLIRT match now renames the
  function (definition and call sites) and its body is still decompiled;
  `render_flirt_stub` is gone.
- 9 goldens refreshed (`cpp_exceptions`, `cpp_rtti`, `cpp_vtable`,
  `debug_calls`, `debug_hello`, `debug_structs`, `medium`, `switch_table`,
  `x87_math`). The only change in each is the three helper names, for
  example `void sub_14b0(void)` -> `void deregister_tm_clones(void)` and the
  call `sub_14b0()` -> `deregister_tm_clones()`.
- `docs/tutorial/04-stripped-binaries.md`: updated the FLIRT paragraph.

## Measurements

FLIRT scan (`unlace --log unlace::flirt=debug decompile <bin>`), bundled
table only:

| binary | before | after |
|---|---|---|
| `medium.elf` | 0 of 3 eligible | 3 of 3, all correct |
| `stripped.elf` | 0 of 7 | 4 (`_start` + 3 helpers), all correct |
| other 22 x86-64 fixtures | 1 (wrong: `__memcpy_chk` in `debug_templates`) | 3 each, all correct |
| `go_hello.elf` | 0 (no eligible functions) | 0 |
| stripped `-O0` test program | 4, all wrong | 4 (startup code), all correct |
| stripped `-O1`/`-O2` test program | 0 | 4, all correct |
| stripped `-O2 -no-pie` test program | 1, wrong | 4, all correct |
| stripped `-O2 -static` test program | 153, 0 confirmed | 4, all correct |
| static program with `--sig-dir sig/linux-x86_64` | 940 (incl. 7 bundled false positives) | 936 |

`cargo xtask gate`, before and after: identical on every axis.
Stylistic Fixture Parity 84.0%, fidelity counters total 1865, quality
counters unchanged, semantic-report 36/36, type-recovery recall 95.1% /
precision 94.2%, Rocq proofs OK. Golden triage fails on `mips64_features`
before and after (unrelated).

Tests: `unlace-loader` and `unlace-flirt` all pass; `unlace-cli` has 3
failures that also fail on an untouched checkout of the same commit
(`printf_wiring_cpp_exceptions_reports_two_sites`,
`batch17_stack_provenance_negative_output_gates`,
`quality_runs_on_every_fixture_without_panic`). The golden test passes except
for `mips64_features` and `riscv64_features`, which fail before and after.

## Remaining gaps

- `register_tm_clones` is reached only by a tail jump from `frame_dummy`, so
  function discovery never creates it and it prints as `sub_14e0` at the
  call site. That is a discovery gap, not a FLIRT gap.
- `debug_templates.elf` (non-PIE): discovery splits `__do_global_dtors_aux`
  at 0x40110d, so the fragment prints as its own `sub_40110d`.
- The real IDASGN files are opt-in (`--sig-dir`). Loading them by default
  would name most of a static binary built with the same toolchain, but each
  file matches only the library build it was made from, so picking files
  needs toolchain detection (`.comment`, Go build info, rustc version).
- The `crtstuff.c` helpers could also go into the generated libgcc `.sig` if
  `siggen` named unnamed `.text` ranges of `crtbegin*.o`; today the
  hand-checked table covers them.
- `crates/unlace-flirt/src/{library,bundled_sigs,fuzzy_annotation,fuzzy_lookup,generator}.rs`,
  `crates/unlace-flirt/signatures/` and `crates/unlace-flirt/patterns/`
  are dead and hold the invented patterns; they should be deleted.
- No startup signatures exist for musl `crt1.o`, MSVC CRT (`mainCRTStartup`)
  or Mach-O (`start` in `dyld`-linked binaries).
