#!/usr/bin/env bash
# unlace CI gates, run locally on dev binaries. Mirrors .github/workflows/tests.yml
# (the "parity gates" job; LEVEL=full adds the "cargo workspace suite").
#   tools/hooks/unlace-ci-gates.sh [fast|parity|full]        (default: parity)
# Env: CARGO_TARGET_DIR (default: where target points when it is a symlink, else
#      ../unlace-target/<checkout name minus unlace-wt->),
#      UNLACE_GATES_SKIP="lint ghidra ..." to skip named steps,
#      UNLACE_GATES_WEB=1 to also run the opt-in browser front-end tests (integrations/web).
# Differences from CI, on purpose: dev profile (opt-level 1) instead of --release,
# rustc-rdr-main instead of stable (so clippy's unfulfilled-lint-expectations,
# which fire on this toolchain only, are allowed), and the wasm worker build
# (needs the wasm32-wasip1 std) is skipped when the target is not installed.
set -uo pipefail
# Core dumps from the gate's tests (81 files, 3.6 GB on 2026-11-21): none are written from this run.
ulimit -c 0 2>/dev/null || true
LEVEL="${1:-parity}"
ROOT="$(git rev-parse --show-toplevel)"
cd "$ROOT"
# Only an unlace checkout has these gates.
if [ ! -f "$ROOT/Cargo.toml" ] || [ ! -d "$ROOT/crates/unlace-cli" ]; then
  echo "ci-gates: $ROOT is not an unlace checkout; no gates to run"; exit 0
fi
# Under a git hook GIT_DIR/GIT_INDEX_FILE etc. are exported; tests that make temp repos would write into this one.
unset $(git rev-parse --local-env-vars)
NAME="$(basename "$ROOT")"; TAG="${NAME#unlace-wt-}"; [ "$NAME" = unlace ] && TAG=main
if [ -z "${CARGO_TARGET_DIR:-}" ] && [ -L target ]; then CARGO_TARGET_DIR="$(readlink -f target)"; fi
export CARGO_TARGET_DIR="${CARGO_TARGET_DIR:-$(dirname "$ROOT")/unlace-target/$TAG}"
export RUSTUP_TOOLCHAIN="${RUSTUP_TOOLCHAIN:-rustc-rdr-main}" CARGO_UNSTABLE_PUBLIC_API_HASH=true
export CARGO_PROFILE_DEV_OPT_LEVEL=1 CARGO_PROFILE_DEV_DEBUG=line-tables-only CARGO_PROFILE_TEST_DEBUG=line-tables-only
export CARGO_TARGET_X86_64_UNKNOWN_LINUX_GNU_RUSTFLAGS="${CARGO_TARGET_X86_64_UNKNOWN_LINUX_GNU_RUSTFLAGS:--Zthreads=4}"
unset RUSTFLAGS
# Join the machine-wide jobserver (unlace-jobserver) so concurrent agents share one pool of build slots.
JS_FIFO="${UNLACE_JOBSERVER_FIFO:-/run/user/$(id -u)/unlace-jobserver.fifo}"
# A machine that still runs the unlace fork's jobserver shares that pool instead.
[ -p "$JS_FIFO" ] || JS_FIFO="/run/user/$(id -u)/kuna-jobserver.fifo"
# CARGO_BUILD_JOBS (or -j) makes cargo create its own jobserver and ignore the shared one, so drop it.
[ -p "$JS_FIFO" ] && { export MAKEFLAGS="-j --jobserver-auth=fifo:$JS_FIFO"; unset CARGO_BUILD_JOBS; }
# Heavy test runs take one of UNLACE_SLOTS machine-wide slots (unlace-slot).
SLOT=("$ROOT/tools/hooks/unlace-slot")
BIN="$CARGO_TARGET_DIR/debug"
export UNLACE_SPECS="$ROOT/specs" SLEIGHHOME="$ROOT/specs" REPIPE_UNLACE="$BIN/unlace"
FAILED=(); PASSED=()
skip() { [[ " ${UNLACE_GATES_SKIP:-} " == *" $1 "* ]]; }
step() { local name="$1"; shift
  if skip "$name"; then echo "== $name: skipped (UNLACE_GATES_SKIP)"; return; fi
  echo "== $name"; local t0=$SECONDS
  if "$@"; then PASSED+=("$name"); echo "-- $name ok ($((SECONDS-t0)) s)"
  else FAILED+=("$name"); echo "-- $name FAILED ($((SECONDS-t0)) s)"; fi; }

ignored_fixtures() {
  local hits; hits="$(git ls-files --others --ignored --exclude-standard -- \
     'tests/stages' 'tests/fixtures' 'crates/*/tests/fixtures' 'integrations/web/test/fixtures' 2>/dev/null \
     | grep -vE '(^|/)core(\.[0-9]+)?$|\.sla$')"
  local f bad=""
  for f in $hits; do git grep -qF "$(basename "$f")" -- '*.rs' '*.xml' '*.toml' '*.md' '*.mjs' && bad+="$f"$'\n'; done
  [ -z "$bad" ] || { echo "ignored by the global gitignore but read by a tracked test (git add -f them):"; printf '%s' "$bad"; return 1; }
}
fmt() { (cargo fmt --all --check >/dev/null) || { echo "run: cargo fmt --all"; return 1; }; }
build() { (cargo build -p unlace-console -p unlace-harness -p unlace-slacomp -p unlace-cli); }
lint() { (cargo clippy -p unlace-cli -p unlace-base -p unlace-num --no-deps -- -D warnings -A unfulfilled-lint-expectations); }
options_md() { "$BIN/unlace" catalog --markdown | diff -u docs/options.md - ; }
counters() { PYTHONPATH="$ROOT" python3 -m scripts.repipe.counters --check --unlace "$BIN/unlace"; }
ghidra() { (cargo test -p unlace-ghidra -- --nocapture); }
web() {
  local t ok=0
  for t in cdp-client-startup decompile-render decompile-wrap decompile-session decompile-bytes decompile-learn \
           decompile-groups decompile-strings decompile-data decompile-base64 decompile-collab decompile-collab-cases \
           decompile-collab-sync decompile-collab-fuzz; do
    [ -f "integrations/web/test/$t.mjs" ] && { node "integrations/web/test/$t.mjs" >/dev/null || { echo "web $t FAILED"; ok=1; }; }
  done
  # decompile-replay drives the native CLI at target/release/unlace and silently skips without it.
  local rel="target/release/unlace" made=""
  if [ ! -e "$rel" ]; then mkdir -p "$(dirname "$rel")" 2>/dev/null && ln -s "$BIN/unlace" "$rel" && made=1; fi
  node integrations/web/test/decompile-replay.mjs || ok=1
  [ -n "$made" ] && rm -f "$rel"
  if rustup target list --installed 2>/dev/null | grep -qx wasm32-wasip1; then
    bash integrations/web/build.sh >/dev/null && for t in worker worker-errors dev-viz decompile-worker; do node "integrations/web/test/$t.mjs" || ok=1; done
  else echo "web worker build skipped: wasm32-wasip1 not installed for $RUSTUP_TOOLCHAIN"; fi
  return $ok
}
rusttest() {
  # The workspace suite compiles the .sla images it needs into the .sla cache on first use.
  local web=(--exclude unlace-wasm); [ "${UNLACE_GATES_WEB:-0}" = 1 ] && web=()
  cargo nextest run --workspace "${web[@]}" --profile ci
}

step ignored-fixtures ignored_fixtures
step test-layout python3 scripts/check_test_layout.py
step determinism-lint python3 scripts/check_determinism.py
step fmt fmt
if [ "$LEVEL" != fast ]; then
  # CI has no global gitignore; the repo tooling tests create a.exe / x.obj and expect git to see them.
  step test-tools env GIT_CONFIG_COUNT=1 GIT_CONFIG_KEY_0=core.excludesFile GIT_CONFIG_VALUE_0=/dev/null PYTHONPATH="$ROOT" python3 -m unittest discover -s scripts/tests -p 'test_*.py'
  step build build
  step lint lint
  # tests/datatests and tests/stages vs their baselines (PARITY OK), run in-process.
  step parity "${SLOT[@]}" cargo test -p unlace-harness --test parity
  step check-spec python3 tools/check_spec.py
  step test-cli "${SLOT[@]}" env PYTHONPATH="$ROOT" python3 -m scripts.repipe.clitests
  step catalog-check "$BIN/unlace" catalog --check
  step determinism "${SLOT[@]}" python3 scripts/check_determinism.py --run "$BIN/unlace"
  step counters counters
  step options-md options_md
  step ghidra ghidra
  [ "${UNLACE_GATES_WEB:-0}" = 1 ] && step web web
fi
[ "$LEVEL" = full ] && step rust-test rusttest

echo; echo "passed: ${PASSED[*]:-none}"
if [ ${#FAILED[@]} -gt 0 ]; then echo "FAILED: ${FAILED[*]}"; exit 1; fi
if [ "$LEVEL" != fast ] && [ -z "${UNLACE_GATES_SKIP:-}" ]; then
  mkdir -p "$CARGO_TARGET_DIR"; git rev-parse HEAD^{tree} >> "$CARGO_TARGET_DIR/.ci-gates-pass"
fi
echo "all gates passed ($LEVEL)"
