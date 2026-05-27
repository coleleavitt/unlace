#!/usr/bin/env bash
# Honest decompiler-quality axis report.
#
# Axis 1 is the existing fixture-style score. Axis 2 runs the source-known
# executable-equivalence report with PASS/XFAIL/unsupported rows. Axis 3 runs
# the first DWARF/source-ground-truth type and variable recovery scorer.

set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"

echo "== Stylistic similarity axis =="
bash scripts/score_parity.sh

echo
echo "== Semantic correctness axis =="
cargo run -p xtask -- semantic-report
echo "Semantic Correctness: report PASS (unexpected failures only; known gaps are XFAIL rows above)"

echo
echo "== Type/variable recovery axis =="
cargo run -p xtask -- type-recovery-report
