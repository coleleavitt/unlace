#!/usr/bin/env bash
# rename_audit.sh — grep battery for the stage->phase / seam->context rename.
#
# Informational by default (prints counts per check). With --strict, exits 1
# if any "must be zero when the rename is complete" check is nonzero or any
# scope-guard (must NOT have been renamed) check is zero.
#
# Run from the repo root:  tools/rename_audit.sh [--strict]

set -u
cd "$(git rev-parse --show-toplevel)" || exit 2

STRICT=0
[ "${1:-}" = "--strict" ] && STRICT=1
FAIL=0

count() { # count <label> <expect:zero|nonzero> <grep args...>
    local label="$1" expect="$2"
    shift 2
    local n
    n=$(grep -rn "$@" 2>/dev/null | grep -v '/target/' | wc -l)
    if [ "$expect" = zero ]; then
        if [ "$n" -eq 0 ]; then echo "OK    (0)        $label"; else
            echo "RESID ($n)       $label"
            [ "$STRICT" = 1 ] && FAIL=1
        fi
    else
        if [ "$n" -gt 0 ]; then echo "OK    ($n)       $label [guard]"; else
            echo "GUARD-VIOLATION  $label — expected survivors, found none"
            FAIL=1
        fi
    fi
}

CRATES=crates

echo "== rename completeness (expect 0 when the rename milestones are done) =="
count "UnlaceStage/UnlaceSubStage identifiers"      zero -E '\bUnlaceStage\b|\bUnlaceSubStage\b' --include='*.rs' "$CRATES"
n_ks=$(grep -rnE '\bkuna_stages\b' --include='*.rs' "$CRATES" 2>/dev/null | grep -v '/target/' | grep -vE 'unlace_stages\.(cc|hh)' | wc -l)
if [ "$n_ks" -eq 0 ]; then echo "OK    (0)        unlace_stages module refs (protected .cc anchors excluded)"; else
    echo "RESID ($n_ks)       unlace_stages module refs (protected .cc anchors excluded)"; [ "$STRICT" = 1 ] && FAIL=1; fi
count "SUBSTAGE_TABLE / substage API"           zero -E 'SUBSTAGE_TABLE|lookup_substage|unlace_num_substages|unlace_substage_by_index' --include='*.rs' "$CRATES"
count "SEAM markers in source"                  zero -E 'SEAM' --include='*.rs' "$CRATES"
count "ArchSeam / seams:: refs"                 zero -E 'ArchSeam|\bseams::' --include='*.rs' "$CRATES"
count "stages.toml references (code+scripts)"   zero -E 'stages\.toml' --include='*.rs' --include='*.py' --include='*.toml' "$CRATES" scripts tools
count "emitted JSON keys \"stage\"/\"substage\"" zero -E '"(sub)?stage": ' --include='*.rs' "$CRATES"

echo
echo "== scope guards (upstream vocabulary that must NOT be renamed) =="
count "jumptable multistage recovery fns"       nonzero -E 'recover_multistage|check_for_multistage' --include='*.rs' "$CRATES/unlace-decomp/src"
count "option names intact (compareform)"       nonzero -F '"compareform"' "$CRATES/unlace-decomp"
count "Action/Rule engine type names intact"    nonzero -E '\bActionDatabase\b' --include='*.rs' "$CRATES/unlace-decomp/src"

echo
echo "== residual triage (informational; allowlist = upstream C++ vocabulary) =="
grep -rniE '\bstage\b' --include='*.rs' "$CRATES" 2>/dev/null | grep -v '/target/' \
    | grep -vE 'recover_multistage|check_for_multistage|multistage|Second-stage|two-stage' \
    | head -40
echo "(showing first 40; full count: $(grep -rniE '\bstage\b' --include='*.rs' "$CRATES" 2>/dev/null | grep -v '/target/' | grep -vE 'recover_multistage|check_for_multistage|multistage|Second-stage|two-stage' | wc -l))"

exit $FAIL
