# -O2 measurement corpus

Small, self-contained C programs with known behaviour, built the way real
software ships (`-O2`, stripped and unstripped) so that decompiler changes can
be measured on optimized code. The 15 golden fixtures cannot show `-O2`
problems; this corpus can. See `docs/architecture/pipeline-redesign-2026-10.md`
("Measurement").

```bash
cargo xtask corpus                    # build, decompile, measure; writes <target>/corpus/
cargo xtask corpus --program bst      # one program (no baseline check)
cargo xtask corpus --skip-recompile   # metrics only
cargo xtask corpus --check            # gate: fail if worse than baseline.json
cargo xtask corpus --update-baseline  # rewrite baseline.json and BASELINE.md
```

`<target>` is `$CARGO_TARGET_DIR` or `target/`. Outputs:

- `corpus/corpus.json`, `corpus/corpus.md`: per-function and total metrics.
- `corpus/c/<toolchain>/<program>[.stripped].c`: the decompiled C of every
  build, for before/after diffs.
- `corpus/bin/`: the binaries (never committed).

## Build matrix

| toolchain | flags |
|---|---|
| `gcc-x86_64` | `-O2 -g -fPIE -pie -fstack-protector-strong -D_FORTIFY_SOURCE=2 -fcf-protection=full` |
| `clang-x86_64` | same |
| `clang-aarch64-freestanding` | `--target=aarch64-linux-gnu -O2 -g -ffreestanding`, static `ld.lld` link with `rt/freestanding.c` (no AArch64 libc on the host; runs under `qemu-aarch64`) |

Each toolchain produces an unstripped binary (DWARF kept) and an
`llvm-objcopy --strip-all` copy, so function addresses match across the pair.
Paths are mapped with `-ffile-prefix-map` so outputs do not depend on the
checkout location. A toolchain whose compiler is missing is reported as
unavailable and skipped.

## Metrics

Measured per source function (the functions whose DWARF declaration lies in
the program's sources, located by address in both builds). Lower is better
except recompile passes.

- flag vars: variables carrying a condition flag (declared `// ZF` etc.,
  assigned from `__OFSUB__`-style idioms, or packed into an NZCV word).
- gotos, empty blocks (`{}` bodies).
- dead stores: assignments to a local or parameter that is never read.
- leaked temps (`// temp` declarations), register carriers (`// rax`,
  `// reg?` declarations).
- raw stack: `*(T *)(...)` dereferences off `rsp`/`rbp`/`sp`/`x29` or a
  variable standing for one.
- arity mismatch: printed parameter count differs from the DWARF prototype
  (compiler clones such as `f.part.0` are excluded).
- lines/src: printed non-comment lines per source line.
- missing: source functions with no printed function at their address.
- recompile: the decompiled function, compiled from unlace's listing, replaces
  the function in an `-O0` build of the program's own sources (its symbol is
  weakened there); the relinked program must reproduce the original exit
  status and stdout. AArch64 programs run under `qemu-aarch64`. Functions that
  are, or call, compiler clones are untestable this way.

The metrics read the printed C only, so they stay valid while the pipeline
behind the printer changes.

## External corpus

`cargo xtask corpus` also decompiles the binaries listed in
`/home/cole/SiteResearch/ida-rs-corpus/manifest.json` when that directory
exists (`--external DIR` to point elsewhere, `--no-external` to skip). Those
have no sources, so only output metrics are reported, and they are not part of
the baseline. Binaries over 4 MiB, and binaries shipped with IDA Pro, are
skipped.

## Adding a program

1. Add `src/<name>.c` (or vendor sources under `vendor/` with their license
   and upstream commit). Programs must be deterministic, read no input, print
   their results with `printf`, and avoid libc in the measured functions other
   than what `include/freestanding/` provides, so the AArch64 build links.
2. Add a `[[program]]` entry to `corpus.toml`.
3. Run `cargo xtask corpus --update-baseline` and commit `baseline.json` and
   `BASELINE.md` with the program.
