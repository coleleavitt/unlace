#!/usr/bin/env bash
# Fixture-based golden test runner.
#
# Builds unlace, decompiles each fixture, and diffs against the stored golden
# in tests/golden/expected/. Mirrors the Rust integration test in
# crates/unlace-test-harness/tests/golden_fixtures.rs for shell-based CI.
#
# Usage:
#   scripts/golden_test.sh           # diff against goldens
#   scripts/golden_test.sh --update  # refresh goldens from current output

set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
FIXTURES=(medium debug_structs debug_calls debug_hello)
GOLDEN_DIR="${ROOT}/tests/golden/expected"
UPDATE=0

for arg in "$@"; do
  case "$arg" in
    -u|--update) UPDATE=1 ;;
    -h|--help)
      sed -n '2,12p' "$0"
      exit 0
      ;;
    *) echo "unknown arg: $arg" >&2; exit 2 ;;
  esac
done

echo "==> building unlace"
(cd "$ROOT" && cargo build -q -p unlace-cli)

UNLACE="${ROOT}/target/debug/unlace"
mkdir -p "$GOLDEN_DIR"

fail=0
for name in "${FIXTURES[@]}"; do
  elf="${ROOT}/fixtures/${name}.elf"
  golden="${GOLDEN_DIR}/${name}.c"
  actual="$(mktemp)"
  trap 'rm -f "$actual"' EXIT

  if [[ ! -f "$elf" ]]; then
    echo "  [skip] ${name}: fixture missing at $elf"
    continue
  fi

  "$UNLACE" decompile --emit c "$elf" > "$actual" 2>/dev/null

  lines=$(wc -l < "$actual" | tr -d ' ')
  ifs=$(grep -cE '(^|[^A-Za-z_])if[[:space:]]*\(' "$actual" || true)
  rets=$(grep -cE '(^|[^A-Za-z_])return([[:space:]]|;)' "$actual" || true)
  vars=$(grep -cE '^\s*(_BYTE|_WORD|_DWORD|_QWORD|_BOOL|__int8|__int16|__int32|__int64) ' "$actual" || true)
  printf '[metrics] %s: lines=%s if=%s return=%s vars=%s\n' "$name" "$lines" "$ifs" "$rets" "$vars"

  if [[ $UPDATE -eq 1 ]]; then
    cp "$actual" "$golden"
    echo "  [update] wrote $golden"
  elif [[ ! -f "$golden" ]]; then
    cp "$actual" "$golden"
    echo "  [bootstrap] created $golden"
  elif diff -q "$golden" "$actual" >/dev/null; then
    echo "  [ok] $name matches golden"
  else
    echo "  [FAIL] $name differs from golden:"
    diff -u "$golden" "$actual" | head -30 | sed 's/^/    /'
    fail=1
  fi

  rm -f "$actual"
  trap - EXIT
done

if [[ $fail -ne 0 ]]; then
  echo
  echo "Some goldens differ. Re-run with --update if changes are intentional."
  exit 1
fi

echo "All goldens match."
