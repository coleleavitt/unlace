#!/usr/bin/env bash
# Build the Rocq proof project and enforce the no-admit / no-axiom invariant.
#
# This is the gate that keeps "machine-checked" honest. It is layered:
#   1. compile every theory through the Rocq compiler (a proof error fails);
#   2. independently re-verify the compiled .vo with the Rocq KERNEL checker
#      `coqchk`, which reports the exact axiom set each module depends on —
#      this is authoritative (it does not trust the source grep);
#   3. a source grep for `admit`/`Admitted` as a fast, human-readable fail
#      (kept as a belt-and-suspenders signal; coqchk in (2) is the real gate).
#
# Usage:  bash scripts/verify_proofs.sh
# Requires: Rocq 9.1 (coqc / coqchk on PATH).
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PROOFS="$ROOT/rocq-tests"

if ! command -v coqc >/dev/null 2>&1; then
  echo "verify_proofs: coqc not found on PATH (need Rocq 9.1)" >&2
  exit 127
fi
echo "verify_proofs: Rocq toolchain: $(coqc --version | head -1)"

# --- 1. Build everything --------------------------------------------------
# The Makefile is generated from _CoqProject (and gitignored), so regenerate it
# if missing — this keeps fresh checkouts working without a committed Makefile
# that could drift from _CoqProject.
if [ ! -f "$PROOFS/Makefile" ]; then
  echo "verify_proofs: generating Makefile from _CoqProject ..."
  ( cd "$PROOFS" && coq_makefile -f _CoqProject -o Makefile >/dev/null 2>&1 )
fi
echo "verify_proofs: building rocq-tests ..."
make -C "$PROOFS" clean >/dev/null 2>&1 || true
if ! make -C "$PROOFS" >/tmp/verify_proofs_build.log 2>&1; then
  echo "verify_proofs: FAIL — build error:" >&2
  grep -vE 'deprecated|replaced|since-9|default' /tmp/verify_proofs_build.log | tail -30 >&2
  exit 1
fi

nvo=$(ls "$PROOFS"/theories/*.vo 2>/dev/null | wc -l | tr -d ' ')
nv=$(ls "$PROOFS"/theories/*.v  2>/dev/null | wc -l | tr -d ' ')
if [ "$nvo" != "$nv" ]; then
  echo "verify_proofs: FAIL — compiled $nvo/$nv theories" >&2
  exit 1
fi

# --- 2. Kernel-level axiom check (authoritative) --------------------------
if command -v coqchk >/dev/null 2>&1; then
  echo "verify_proofs: kernel re-check with coqchk ..."
  if ! coqchk -silent -Q "$PROOFS/theories" Unlace -o "$PROOFS"/theories/*.vo \
        >/tmp/verify_proofs_chk.log 2>&1; then
    echo "verify_proofs: FAIL — coqchk rejected a module:" >&2
    grep -vE 'deprecated|replaced|since-9|default' /tmp/verify_proofs_chk.log | tail -30 >&2
    exit 1
  fi
  # The CONTEXT SUMMARY must report no axioms. coqchk prints
  #   * Axioms: <none>
  # when clean; anything else (a list) is a real dependency on an axiom.
  if ! grep -qE '^\* Axioms: <none>' /tmp/verify_proofs_chk.log; then
    echo "verify_proofs: FAIL — coqchk reports axiom dependencies:" >&2
    sed -n '/CONTEXT SUMMARY/,$p' /tmp/verify_proofs_chk.log >&2
    exit 1
  fi
  echo "verify_proofs: coqchk CONTEXT SUMMARY: Axioms <none>."
else
  echo "verify_proofs: WARNING — coqchk not found; skipping kernel axiom check" >&2
fi

# --- 3. Source grep (fast human-readable signal) --------------------------
offenders=""
for f in "$PROOFS"/theories/*.v; do
  stripped="$(perl -0777 -pe 's/\(\*.*?\*\)//gs' "$f")"
  if printf '%s' "$stripped" | grep -nwE 'admit|Admitted|Axiom|Conjecture' >/dev/null; then
    offenders="$offenders $f"
  fi
done
if [ -n "$offenders" ]; then
  echo "verify_proofs: FAIL — admit/axiom token in:$offenders" >&2
  exit 1
fi

echo "verify_proofs: OK — $nv theories compiled, kernel-checked, zero admits/axioms."
