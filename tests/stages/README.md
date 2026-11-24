# Stage-model issue testcases

## Writing a stage test: TOML

A stage test is a `.toml` file here (they all are; the runner still reads Ghidra-style `<decompilertest>` XML too; the
vendored `tests/datatests` corpus stays XML). Both run through the same datatest runner
(`cargo test -p unlace-harness --test parity stage_tests`, or `decomp_test_dbg`). The runner puts the
`UNLACE_*`/`UNLACE_*` environment back to its starting state before each file, so a load-time `option`
one file's script sets (exported to the environment for `load file`) does not reach the next file;
a test that needs such an option sets it itself:

```toml
# What the test checks and why (comments are free).

[image]
arch = 'x86:LE:64:default:gcc'
symbols = [
    { space = 'ram', offset = '0x100000', name = 'gh558' },
]

[[image.bytes]]                 # one per <bytechunk>; hex is whole bytes, whitespace ignored
space = 'ram'
offset = '0x100000'
readonly = true                 # optional
hex = '83ff087f06b801000000c331c0c3'

[script]
commands = [
    'parse line extern int4 gh558(int4 x);',
    'lo fu gh558',
    { com = 'option nosuch on', expect_error = true },   # a command expected to fail
    'decompile',
    'print C',
    'quit',
]

[[match]]
name = 'GH558 #1: the guard compares against 8'   # the assertion's name, as in the summary
count = 1                       # or: min = 1 / max = 3
literal = 'if (8 < x)'          # a substring of one output line
# regex = 'if \(8 < x\)'        # or a <stringmatch>-dialect regex
# literal = ['first line', 'next line']   # a list matches consecutive lines
```

- Exactly one of `literal` and `regex`; `count`, or both `min` and `max`. Unknown keys are
  errors, so a misspelt key fails the file instead of being ignored.
- A count may be computed from the compiled option catalog, so registry totals never need
  hand-bumping: `count = { settables = { change_kind = "opt-in-tool" }, plus = 1 }` is the number
  of `phases.toml` settables whose fields equal every given value (`option`, `values`,
  `default`, `subphase`, `issue`, `source_decompiler`, `inspiration`, `change_kind`,
  `tier`, `destructive`), plus `plus`; `settables = {}` counts every row.
  `catalog.toml` uses it for its bucket totals.
- **A TOML test is its own baseline.** Every assertion in it must pass; its names are not in
  `docs/baseline-stages.json`, which keeps only the XML files' passing assertions. Adding a TOML
  stage test therefore touches no baseline (the corpus count in `unlace-base/src/xml.rs` still
  counts it). An edit to an existing `[[match]]` needs an `Assertion-change:` trailer
  (`scripts/prepr/difflint.py`).
- Code that reads a stage test as XML (a golden corpus, a CLI test that takes bytes from a stage
  image) calls `unlace_stagefile::read_as_xml(path)` or `xml_of_toml(include_str!(..))`, which give
  the equivalent `<decompilertest>` text.
- `python3 scripts/stage_toml.py` converts XML stage tests losslessly (comments included), drops
  their keys from the baseline and rewrites Markdown references; `--list` shows which files stay
  XML and why (a test, a golden vector or a script names them). After converting, check each
  TOML file loads exactly like its XML at `HEAD`:
  `cargo test -p unlace-harness --test parity -- --ignored converted`.

## Running one file

```sh
UNLACE_PARITY_FILES=wideslice cargo test -p unlace-harness --test parity stage_tests
UNLACE_PARITY_FILES='tests/stages/unlace-swift*,gh558-*' cargo test -p unlace-harness --test parity stage_tests
target/debug/decomp_test_dbg -sleighpath specs -path tests/stages datatests wideslice.toml
```

`UNLACE_PARITY_FILES` takes comma-separated paths, names, stems or globs (`docs/dev-setup.md`,
"Gates"); the selected files must pass every assertion, and the baseline keys of the files left out
are not checked. `decomp_test_dbg` prints the raw datatest stream (`Success --`/`FAIL --` per
assertion) for the named files. Run from the repository root: scripts load fixtures by relative
path. `target/parity-times.toml` holds each file's wall time from the last parity run.

## Conventions

- A test file opens with a comment, and its first paragraph is the test's description: what it
  checks and the behaviour or option it pins (`wideslice.toml`, `gh558-compareform.toml`).
  Then, as they apply: the upstream issue (`GH-<n>`) or source it derives from, the phase that owns
  the decision, the option the script flips, the source and compiler of the bytes, and which
  assertions show the bug under the old behaviour and which show the fix.
- A behaviour that is a judgement call ships behind an option, and its test checks both settings.
- Fixtures a test loads live under `fixtures/`, each with the recipe that rebuilds it.
- A test that can only pass by patching behaviour rather than exposing a decision is a negative
  result for the stage model and belongs in the writeup, not here.

## Inventory

The inventory is generated from the files themselves (description, architecture, assertion count,
options set), so it cannot drift or carry a duplicated row:

```sh
python3 scripts/stage_index.py                 # file: description
python3 scripts/stage_index.py --markdown      # a table
python3 scripts/stage_index.py --json swift    # every field, files whose name contains "swift"
python3 scripts/stage_index.py --missing       # files with no leading comment yet
```

The hand-kept catalog this README used to hold is in git history
(`git log -p -- tests/stages/README.md`); the descriptions of the files that had no comment of
their own moved into those files.
