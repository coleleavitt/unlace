#!/usr/bin/env bash
# Merged line coverage for unlace: the cargo workspace suite plus the datatest,
# stages and tests/cli corpora, all through instrumented binaries, rolled up
# into observatory/data/coverage.json + an lcov/HTML report. Heavy; run via
# `bash scripts/coverage.sh`. See docs/observatory.md for the knobs and caveats.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
OUT="${1:-$ROOT/observatory}"
cd "$ROOT"

command -v cargo-llvm-cov >/dev/null 2>&1 || {
  echo "coverage: cargo-llvm-cov not found; install with:" >&2
  echo "  rustup component add llvm-tools-preview && cargo install cargo-llvm-cov" >&2
  exit 1
}
rustup component list --installed 2>/dev/null | grep -q llvm-tools || {
  echo "coverage: llvm-tools missing; run: rustup component add llvm-tools-preview" >&2
  exit 1
}

# Pre-set the target dir BEFORE show-env: in show-env mode cargo-llvm-cov
# otherwise instruments into the normal target, and its clean
# step would wipe the release binaries (observed, not hypothetical).
export CARGO_TARGET_DIR="$ROOT/target/llvm-cov"
eval "$(cargo llvm-cov show-env --sh)"
export CARGO_INCREMENTAL=0 CARGO_PROFILE_TEST_DEBUG=0 CARGO_PROFILE_RELEASE_DEBUG=0
cargo llvm-cov clean --workspace
TARGET="$CARGO_LLVM_COV_TARGET_DIR"
# Pool-merged profile files: the suites spawn unlace/decomp_dbg thousands of
# times and per-pid patterns would explode the file count. They must sit
# directly in $TARGET -- `cargo llvm-cov report` does not scan subdirs.
export LLVM_PROFILE_FILE="$TARGET/unlace-%16m.profraw"

fail=0
echo "== coverage 1/2: cargo workspace suite (with the datatest and stage parity target) =="
cargo test --workspace --no-fail-fast || fail=1

echo "== coverage 2/2: tests/cli probes =="
cargo build --release -p unlace-cli
UNLACE="$TARGET/release/unlace"
(cd "$ROOT" && REPIPE_UNLACE="$UNLACE" PYTHONPATH="$ROOT" python3 -m scripts.repipe.clitests) || fail=1

echo "== coverage: reports =="
mkdir -p "$OUT/coverage"
cargo llvm-cov report --json --summary-only > "$TARGET/coverage-summary.json"
cargo llvm-cov report --lcov --output-path "$OUT/coverage/lcov.info"
cargo llvm-cov report --html --output-dir "$OUT/coverage"
PYTHONPATH="$ROOT" python3 -m scripts.observatory.coverage \
  --summary "$TARGET/coverage-summary.json" --runs-failed "$fail" --out "$OUT"
if [ "$fail" != 0 ]; then
  echo "coverage: some suite runs failed; the report covers what ran" >&2
fi
