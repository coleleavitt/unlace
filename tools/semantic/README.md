# Semantic-correctness suite (tier T4)

The datatests and stage tests compare unlace's output text with a pinned text. Nothing there
checks that the C computes what the binary computes. This suite does: every function under test
is decompiled, its emitted C is compiled and linked in place of the original function, and the
program is run with the original and with the decompiled function on the same fixed inputs.

## Layout

| Path | What it is |
|---|---|
| `cases/*.c` | One small program per construct: loops, calls and arguments, globals and aliasing, structs, arrays, switches, signed/unsigned and width conversions, floats, tail calls, noreturn, varargs. Each `main` calls the functions under test on fixed inputs and prints every result and side effect. |
| `cases/case.h` | `T` marks a function under test (`weak, noinline`), `P` prints one value. |
| `vector.h` | The Intel vector types the emitted C names (`__m128i`, `__m256d`, ...) and the `ZEXT1632`, `ZEXT1664`, `ZEXT3264` widths. Included before `orig.h`, because the header uses some of them. |
| `shim.h` | The p-code helper spellings unlace prints (`CONCATxy`, `SUBxy`, `ZEXTxy`, `SEXTxy`, `CARRYn`, `SCARRYn`, `SBORROWn`, `NAN`, `POPCOUNT`, `builtin_memcpy`, ...). Everything else comes from unlace's own export header. |
| `run.py` | The driver (Python 3, stdlib only). |
| `baseline.toml` | Outcome of every row on the host named in `notes/semantic-results.md`. |

## How a function is checked

For each configuration (compiler + target), optimisation level and case:

1. The case compiles to one object (`-ffunction-sections -fdata-sections`), which links into the
   reference executable. Its weak `T` symbols are the functions under test. Local data symbols
   are made global in a copy of the object so emitted C can name them. DWARF is stripped from
   the reference (zig's static compiler_rt brings its own; `--keep-debug` keeps it).
2. `unlace decompile-project <ref> --functions <T list>,main` writes `orig.c` and `orig.h`.
   `main` is decompiled but not checked: it is the caller of every function under test, and
   a decompile-all run settles some return types by what the callers read.
3. For each function the driver builds a translation unit: `#include "vector.h"`,
   `#include "orig.h"`, `#include "shim.h"` and that function's body from `orig.c`, compiled `-std=c11 -O0 -fwrapv
   -fno-strict-aliasing` (`--emit-opt` changes the level). Because the original is weak, linking
   that object beside the case object makes every call reach the decompiled body.
4. A name the emitted object needs by address (`dat_402070`, `sub_401200`) is resolved against
   the reference image, because the relinked program has a different layout. It becomes an alias
   of the symbol covering that address, or, for read-only data with no symbol, a label into a copy
   of the original section's bytes. Nothing else is added: a name the header does not declare is a
   compile failure.
5. Both executables run (`qemu-aarch64` for AArch64). stdout and exit status must match.

Outcomes: **pass**; **wrong** (different output, exit status, crash or timeout; the detail
names the first differing line); **nocompile** (the emitted C or its link fails; the detail is
the compiler's first errors); **decomp** (unlace failed or did not export the function);
**setup** (the case itself did not build: a harness problem, exit status 2).

## Running it

Needs gcc, clang, `zig` (aarch64-linux-musl, static) and `qemu-aarch64` for the default
configurations, plus `llvm-nm` and `llvm-objcopy`. Point it at a built unlace and a compiled
SLEIGH tree:

```sh
python3 tools/semantic/run.py --unlace /path/to/unlace --sleighpath specs \
    --config x86_64-gcc,x86_64-clang,aarch64-zig --details
python3 tools/semantic/run.py --unlace ... --cases switches,floats --opt O2   # a subset
python3 tools/semantic/run.py --unlace ... --option boolreturn off            # an A/B of one option
python3 tools/semantic/run.py --unlace ... --baseline tools/semantic/baseline.toml
```

`--details` prints the reason for every row that did not pass, `--json` writes every row,
`--markdown` writes the table, `--wrap unlace-slot` runs unlace through a slot wrapper. Work files
(each case's object, reference output, export and the per-function `.c`, `.o`, `.out.txt`) stay
under `--work` (default `tools/semantic/work/`, git-ignored) for inspection. With `--baseline`
the exit status is 1 only when a row that passes in the baseline no longer passes; newly passing
rows are listed so they can be blessed with `--save-baseline`. Without it, any row that does not
pass gives exit status 1.

A full run (58 functions, 3 configurations, 2 levels: 348 rows) takes about 45 s on 6 jobs; the
x86_64-gcc configuration alone about 4 s.

## Adding a case

Write `cases/<construct>.c`: `#include "case.h"`, mark each function under test `T`, keep data
non-static and every output deterministic (no uninitialised reads, no evaluation-order
dependence between a call and its arguments), and print each result with `P`. Run it, check the
new rows, and re-save the baseline in the same change.

## Running it in CI

`notes/test-tiers.md` already names T4, semantic compile-and-run, as the only tier that checks
meaning; today its only members are crate tests that each compile one fixture. This suite is T4
as a corpus:

- **Where:** the `semantic` job in `nightly.yml` (all three configurations, O0 and O2), and the
  `semantic-gcc` job in `tests.yml` on every PR (the x86_64-gcc rows, same baseline). The nightly
  needs gcc, clang, zig and qemu-user-static, and one built `unlace` plus the compiled specs.
- **What fails it:** `run.py --baseline tools/semantic/baseline.toml`: a row that passed and stops
  passing fails the job; a newly passing row is reported and blessed by a commit that re-saves
  the baseline (the same rule as the datatest baseline: never re-save to hide a regression).
- **Pinned compilers:** outcomes depend on the compiler's code generation, so the job pins its
  compiler versions (zig ships its own clang; gcc and clang come from a pinned image) and records
  them in `notes/semantic-results.md` with the baseline. A compiler bump re-saves the baseline in
  its own commit.
- **Per PR:** the x86_64-gcc subset (about 4 s) runs as `semantic-gcc` in `tests.yml`, with the same
  baseline rule, so a PR that breaks the meaning of emitted C fails where it is made.
- **Option A/B:** `--option NAME VALUE` against the same baseline answers "does this default flip
  change what any emitted function computes", which a text diff cannot.
