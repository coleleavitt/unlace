#!/usr/bin/env bash
# Honest decompiler-quality axis report.
#
# Axis 1 is the existing fixture-style score plus exact-line golden triage.
# Axis 2 runs the source-known executable-equivalence report with
# PASS/XFAIL/unsupported rows. Axis 3 runs the DWARF/source-ground-truth type
# and variable recovery scorer. Axis 4 is formal: it builds the Rocq proof
# project and kernel-checks that the verified decompiler cores have zero
# admits/axioms (skipped with a notice if Rocq is not installed).

set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"

echo "== Stylistic similarity axis =="
bash scripts/score_parity.sh

echo
echo "== Exact-line golden triage =="
cargo run -p xtask -- golden-triage

echo
echo "== Semantic correctness axis =="
cargo run -p xtask -- semantic-report
echo "Semantic Correctness: report PASS (unexpected failures only; known gaps are XFAIL rows above)"

echo
echo "== Type/variable recovery axis =="
cargo run -p xtask -- type-recovery-report

echo
echo "== Formal verification axis (Rocq machine-checked cores) =="
if command -v coqc >/dev/null 2>&1; then
  bash scripts/verify_proofs.sh
else
  echo "Formal Verification: SKIPPED (Rocq/coqc not installed; see rocq-tests/README.md)"
fi
