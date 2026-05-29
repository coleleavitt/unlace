#!/usr/bin/env bash
set -euo pipefail

# Byte-identity guard for the default-off DREAM structurer path.
#
# Usage:
#   scripts/dream_byte_identity.sh capture /tmp/pre
#   scripts/dream_byte_identity.sh compare /tmp/pre /tmp/post
#   scripts/dream_byte_identity.sh run /tmp/pre /tmp/post
#
# Each fixture is decompiled with UNLACE_DREAM_STRUCT=0. A per-fixture timeout
# keeps known slow fixtures from blocking the whole safety check; timed-out
# fixtures leave an .err file and are reported in the manifest.

MODE="${1:-run}"
BASE_DIR="${2:-/tmp/dream_baseline}"
AFTER_DIR="${3:-/tmp/dream_after}"
TIMEOUT_SECS="${DREAM_IDENTITY_TIMEOUT_SECS:-120}"
UNLACE_BIN="${UNLACE_BIN:-target/debug/unlace}"

fixtures() {
  find fixtures -maxdepth 1 \( -name '*.elf' -o -name '*.macho' \) -type f | sort
}

capture_dir() {
  local out_dir="$1"
  rm -rf "$out_dir"
  mkdir -p "$out_dir"
  : > "$out_dir/manifest.tsv"
  local fixture name status
  for fixture in $(fixtures); do
    name="$(basename "$fixture")"
    if timeout "$TIMEOUT_SECS" env UNLACE_DREAM_STRUCT=0 "$UNLACE_BIN" decompile --emit c "$fixture" \
      > "$out_dir/$name.c" 2> "$out_dir/$name.err"; then
      status="ok"
    else
      status="failed"
    fi
    printf '%s\t%s\n' "$name" "$status" >> "$out_dir/manifest.tsv"
  done
}

compare_dirs() {
  local left="$1"
  local right="$2"
  diff -u "$left/manifest.tsv" "$right/manifest.tsv"
  local fixture name
  for fixture in $(fixtures); do
    name="$(basename "$fixture")"
    if [[ -f "$left/$name.c" && -f "$right/$name.c" ]]; then
      diff -u "$left/$name.c" "$right/$name.c"
    fi
  done
}

cargo build -q -p unlace-cli

case "$MODE" in
  capture)
    capture_dir "$BASE_DIR"
    ;;
  compare)
    compare_dirs "$BASE_DIR" "$AFTER_DIR"
    ;;
  run)
    capture_dir "$BASE_DIR"
    capture_dir "$AFTER_DIR"
    compare_dirs "$BASE_DIR" "$AFTER_DIR"
    ;;
  *)
    echo "usage: $0 [capture|compare|run] [base_dir] [after_dir]" >&2
    exit 2
    ;;
esac
