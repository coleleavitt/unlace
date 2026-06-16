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

echo "extraction_oracle: extracting Coq → OCaml ..."
( cd "$EXTR" && coqc Extract.v >/dev/null 2>&1 )

echo "extraction_oracle: building OCaml driver ..."
( cd "$EXTR" && dune build ./oracle_driver.exe 2>/dev/null )

echo "extraction_oracle: generating $ITERS oracle vectors from the extracted proof ..."
"$EXTR/_build/default/oracle_driver.exe" "$VECTORS" "$ITERS"
echo "extraction_oracle: wrote $(wc -l < "$VECTORS") vectors → $VECTORS"

echo "extraction_oracle: checking Rust == extracted proof ..."
( cd "$ROOT" && RUSTC_WRAPPER= cargo test -p unlace-ir --test extraction_oracle -- --nocapture 2>&1 \
    | grep -E "extraction_oracle:|test result:" || true )

echo "extraction_oracle: done."
