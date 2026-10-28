# Hex-Rays behavioral oracle

Scripts that record what Hex-Rays (IDA 9.5, the user's licensed install) produces
for **our own test binaries**, so unlace can be compared against it function by
function. They call only IDA's public, documented IDAPython/IDAlib API
(`ida_hexrays.decompile`, `ida_hexrays.gen_microcode`, `mba_t` printing,
`ctree_visitor_t`, `lvar_t`, `func_type_data_t`). Never point them at IDA's own
binaries, and never commit their output: it lives under `target/` (git-ignored).

## Files

- `dump_functions.py` runs inside an IDAlib Python. It opens one database and
  writes, per function (keyed by start address, sorted, resumable):
  - `functions/<ea>.json`: pseudocode lines, prototype (calling convention,
    args with types and locations, return type and location), lvars (name, type,
    width, register/stack location, arg/result/... flags), ctree statistics
    (op counts, gotos, labels, loops, ifs, switches, calls with arities, casts,
    helper names), decompiler warnings, and a `status`
    (`ok`, `decompile_failed`, `skipped`, `exception`, `timeout`, `crashed`).
  - `microcode/<ea>.json`: for each maturity `MMAT_GENERATED` ..
    `MMAT_LVARS`, the printed microcode (`mba_t._print`) plus block/instruction
    counts, top-level opcode counts, flag-register operand counts, and call
    argument counts.
- `run_oracle.py` is the plain-Python driver. It copies each binary into the
  output tree, builds the `.i64` once, then runs the dumper on a fresh copy of
  the database with a per-function watchdog (`--function-timeout`, default
  120 s): a function that runs too long is recorded as `timeout` and a new
  dumper resumes after it.

## Usage

```bash
# Requires the `idalib` wrapper (~/.local/bin/idalib: IDA 9.5 IDAlib venv python).
python3 scripts/hexrays-oracle/run_oracle.py --fixtures
python3 scripts/hexrays-oracle/run_oracle.py --corpus            # ~/SiteResearch/ida-rs-corpus
python3 scripts/hexrays-oracle/run_oracle.py --corpus /path/to/corpus --only ls
python3 scripts/hexrays-oracle/run_oracle.py path/to/a.out       # set "extra"
cargo xtask oracle-diff                                          # compare against unlace
```

Output: `target/hexrays-oracle/<set>/<name>/{inventory,status}.json`,
`functions/`, `microcode/`, `work/` (databases), and `index.json`.
`--max-size-mb` (default 16) skips very large binaries; `--no-microcode` skips
the maturity dumps.

## Determinism

Functions are processed in address order, JSON keys are sorted, and no
timestamps are written. Each run starts from a fresh copy of the analysed
database and does not save it, so earlier decompilations do not leak into later
runs. Spot check (2026-10-28): 10 functions from `debug_medium` and corpus `cat`
dumped alone (`dump_functions.py --functions ...`) were byte-identical, facts
and microcode, to the full run. `status.json` records `restarts` after
timeouts or crashes.
