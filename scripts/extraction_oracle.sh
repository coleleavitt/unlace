#!/usr/bin/env bash
# Build the extraction-based differential oracle and run the Rust test against it.
#
# Pipeline:
#   1. coqc Extract.v          → knownbits_oracle.ml/.mli   (Coq Extraction)
#   2. dune build oracle_driver.exe                          (OCaml + zarith)
#   3. oracle_driver vectors.txt N                           (run the EXTRACTED proof)
#   4. cargo test extraction_oracle                          (Rust == extracted proof)
#
# This is a DEEPER conformance check than the property fuzzer: the reference is
# the OCaml that Rocq extracted from the *proved* definitions, so the shipped
# Rust is diffed against the proof itself, not a hand-restated law.
#
# Requires: Rocq 9.1 (coqc), OCaml + dune + zarith. Skips gracefully if absent.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
EXTR="$ROOT/rocq-tests/extraction"
VECTORS="$EXTR/oracle_vectors.txt"
ITERS="${1:-200000}"

if ! command -v coqc >/dev/null 2>&1; then
  echo "extraction_oracle: SKIP — coqc not found (need Rocq 9.1)"; exit 0
fi
if ! command -v dune >/dev/null 2>&1; then
  echo "extraction_oracle: SKIP — dune not found (need OCaml + dune + zarith)"; exit 0
fi

# The extraction imports the proved modules, so their .vo must exist first.
echo "extraction_oracle: building proved theories (Bitvector, KnownBits) ..."
( cd "$ROOT/rocq-tests" && coqc -Q theories Unlace theories/Bitvector.v >/dev/null 2>&1 \
    && coqc -Q theories Unlace theories/KnownBits.v >/dev/null 2>&1 )

echo "extraction_oracle: extracting Coq → OCaml (from the proved KnownBits.v) ..."
# -Q ../theories Unlace makes the real proved definitions importable, so the
# extracted oracle cores are derived from KnownBits.v (not a transcription).
if ! ( cd "$EXTR" && coqc -Q ../theories Unlace Extract.v >/tmp/extr_coqc.log 2>&1 ); then
  echo "extraction_oracle: FAIL — Extract.v did not compile (KnownBits.v drift?):" >&2
  grep -vE 'deprecated|replaced|since-9|default' /tmp/extr_coqc.log | tail -20 >&2
  exit 1
fi

echo "extraction_oracle: building OCaml driver ..."
( cd "$EXTR" && dune build ./oracle_driver.exe 2>/dev/null )

echo "extraction_oracle: generating $ITERS oracle vectors from the extracted proof ..."
"$EXTR/_build/default/oracle_driver.exe" "$VECTORS" "$ITERS"
echo "extraction_oracle: wrote $(wc -l < "$VECTORS") vectors → $VECTORS"

echo "extraction_oracle: checking Rust == extracted proof ..."
# FAIL-CLOSED: capture cargo's true exit status. The output is teed to a log so
# the human-readable summary still prints, but a non-zero cargo exit (a real
# Rust↔proof divergence) propagates and fails the script. (A previous version
# piped through `grep ... || true`, which masked the failure — fail-OPEN. Do not
# reintroduce that pattern.)
log="$(mktemp)"
test_status=0
( cd "$ROOT" && RUSTC_WRAPPER= cargo test -p unlace-ir --test extraction_oracle -- --nocapture ) \
  >"$log" 2>&1 || test_status=$?
grep -E "extraction_oracle:|test result:" "$log" || true
rm -f "$log"

if [ "$test_status" -ne 0 ]; then
  echo "extraction_oracle: FAIL — shipped Rust diverges from the extracted Coq proof (exit $test_status)" >&2
  exit "$test_status"
fi

echo "extraction_oracle: done."
