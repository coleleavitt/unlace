#!/bin/bash
# Golden-diff classifier — audits each failing golden fixture and buckets the
# diff hunks so a human (or agent) can decide refresh-vs-investigate safely.
#
# For every golden under tests/golden/expected/<name>.c it:
#   1. regenerates actual output via `unlace decompile --emit c fixtures/<name>.elf`
#   2. strips the shared IDA prelude (everything before the first `/* Function:`)
#      from BOTH sides so prelude churn (the _OWORD typedef + SSE helper inlines
#      the WIP added) doesn't drown the signal
#   3. diffs the post-prelude bodies and classifies each changed line:
#        PRELUDE   — diff was entirely inside the stripped prelude (safe)
#        SIZE      — only a `Size: 0xNN (NN bytes)` header field changed
#        RENUM     — only a vN/v_N identifier index shifted (cosmetic)
#        STRUCT    — a real structural body change (NEEDS REVIEW)
#   4. prints a per-fixture verdict: REFRESH-SAFE vs NEEDS-REVIEW
#
# Usage: bash scripts/classify_golden_diffs.sh [fixture ...]
#        (no args = all 15 golden fixtures)
set -uo pipefail
cd "$(dirname "$0")/.."

BIN="target/debug/unlace"
[ -x "$BIN" ] || { echo "building unlace…" >&2; RUSTC_WRAPPER= cargo build -q -p unlace-cli || exit 1; }

fixtures=("$@")
if [ ${#fixtures[@]} -eq 0 ]; then
    mapfile -t fixtures < <(ls tests/golden/expected/*.c | xargs -n1 basename | sed 's/\.c$//')
fi

strip_prelude() { awk 'f{print} /^\/\* Function:/{if(!f){f=1; print}}' "$1"; }

total_safe=0
total_review=0
for name in "${fixtures[@]}"; do
    exp="tests/golden/expected/$name.c"
    [ -f "$exp" ] || { echo "[$name] NO GOLDEN — skip"; continue; }
    fix="fixtures/$name.elf"
    [ -f "$fix" ] || { echo "[$name] NO FIXTURE — skip"; continue; }

    act_tmp=$(mktemp); exp_tmp=$(mktemp); raw_tmp=$(mktemp)
    "$BIN" decompile --emit c "$fix" >"$raw_tmp" 2>/dev/null
    strip_prelude "$raw_tmp" >"$act_tmp"
    strip_prelude "$exp"     >"$exp_tmp"

    # Whole-file diff (for prelude detection) vs body-only diff.
    whole=$(diff "$raw_tmp" "$exp" | grep -cE '^[<>]')
    body=$(diff "$act_tmp" "$exp_tmp" | grep -cE '^[<>]')
    prelude_only=$((whole - body))

    # Classify each changed body line.
    size_only=0; renum=0; struct=0
    while IFS= read -r line; do
        case "$line" in
            '<'*|'>'*) ;;
            *) continue ;;
        esac
        text="${line:2}"
        if echo "$text" | grep -qE 'Size: 0x[0-9a-f]+ \([0-9]+ bytes\)'; then
            size_only=$((size_only+1))
        elif echo "$text" | grep -qE '\bv_?[0-9]+\b'; then
            # Heuristic: a line whose only tokens-of-difference are vN indices.
            renum=$((renum+1))
        else
            struct=$((struct+1))
        fi
    done < <(diff "$act_tmp" "$exp_tmp")

    verdict="NEEDS-REVIEW"
    if [ "$body" -eq 0 ]; then
        verdict="REFRESH-SAFE (prelude-only)"; total_safe=$((total_safe+1))
    elif [ "$struct" -eq 0 ] && [ "$size_only" -gt 0 ] && [ "$renum" -eq 0 ]; then
        verdict="SIZE-ONLY (lifter decode delta — review)"; total_review=$((total_review+1))
    else
        total_review=$((total_review+1))
    fi

    printf '[%-18s] body_diffs=%-4s prelude_diffs=%-4s | size=%-3s renum=%-3s struct=%-3s => %s\n' \
        "$name" "$body" "$prelude_only" "$size_only" "$renum" "$struct" "$verdict"
    rm -f "$act_tmp" "$exp_tmp" "$raw_tmp"
done

echo "----"
echo "refresh-safe: $total_safe   needs-review: $total_review"
