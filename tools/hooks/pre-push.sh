#!/usr/bin/env bash
# pre-push: run the parity gates unless this tree already passed them.
# Skip with UNLACE_PUSH_GATES=0. Never runs for the main branch.
set -uo pipefail
# Identity check, always (UNLACE_PUSH_GATES=0 does not skip it), over the commits this push adds:
# - no placeholder identity anywhere (test fixtures once leaked `t <t@example.invalid>`);
# - a commit Cole authored must also be committed with a verified address.
# Other people's commits (e.g. a maintainer's, kept with his name through a rebase) pass.
here="$(dirname "$(readlink -f "$0")")"
placeholder='(\.invalid$|@example\.(com|org|net)$|@localhost$|^test@|^build@|^(t|test|build)$)'
bad=""
while read -r _lref lsha _rref _rsha; do
  [ -z "${lsha:-}" ] || [ "$lsha" = 0000000000000000000000000000000000000000 ] && continue
  while read -r h ae ce; do
    [ -z "$h" ] && continue
    if grep -qE "$placeholder" <<<"$ae"$'\n'"$ce"; then bad+="$h placeholder <$ae>/<$ce>"$'\n'; continue; fi
    if grep -qxF "$ae" "$here/verified-emails.txt" && ! grep -qxF "$ce" "$here/verified-emails.txt"; then bad+="$h committer <$ce> not verified"$'\n'; fi
  done < <(git log --format='%h %ae %ce' "$lsha" --not --remotes)
done
if [ -n "$bad" ]; then echo "pre-push: commits with a foreign author/committer identity (rewrite them with your verified identity):"; echo "$bad"; exit 1; fi
[ "${UNLACE_PUSH_GATES:-1}" = 0 ] && exit 0
br="$(git rev-parse --abbrev-ref HEAD)"
case "$br" in main|HEAD) exit 0;; esac
ROOT="$(git rev-parse --show-toplevel)"; NAME="$(basename "$ROOT")"; TAG="${NAME#unlace-wt-}"
TD="${CARGO_TARGET_DIR:-$(dirname "$ROOT")/unlace-target/$TAG}"
[ -L "$ROOT/decompiler/target" ] && TD="$(readlink -f "$ROOT/decompiler/target")"   # a worktree made before the workspace moved to the root
[ -L "$ROOT/target" ] && TD="$(readlink -f "$ROOT/target")"
tree="$(git rev-parse HEAD^{tree})"
if [ -f "$TD/.ci-gates-pass" ] && grep -qx "$tree" "$TD/.ci-gates-pass"; then echo "ci gates already passed for this tree"; exit 0; fi
exec "$here/unlace-ci-gates.sh" parity
