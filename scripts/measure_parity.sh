#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

cd "$ROOT"

if [ ! -f target/release/unlace ]; then
    echo "Building unlace (release)..."
    cargo build --release 2>&1 | tail -1
fi

exec python3 scripts/measure_parity.py \
    --binary "${PARITY_BINARY:-hexrays/ida-9.1/hexx64.so}" \
    --refs "${PARITY_REFS:-references/hexrays/ida_dump/hexx64/all}" \
    --unlace target/release/unlace \
    "$@"
