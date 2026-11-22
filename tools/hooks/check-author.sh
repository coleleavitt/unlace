#!/usr/bin/env bash
# pre-commit: refuse a commit whose author or committer email is not one of the
# account's verified addresses (verified-emails.txt; add yours there). GitHub marks such commits
# "Unverified" even when they are signed. 2026-11-21: a repo-local override
# t <t@example.invalid> made PR commits unverified.
set -uo pipefail
dir="$(cd "$(dirname "$(readlink -f "$0")")" && pwd)"
bad=0
for var in GIT_AUTHOR_IDENT GIT_COMMITTER_IDENT; do
  ident="$(git var $var 2>/dev/null)" || continue
  email="$(sed -n 's/.*<\(.*\)>.*/\1/p' <<<"$ident")"
  if ! grep -qxF "$email" "$dir/verified-emails.txt"; then
    echo "check-author: $var is <$email>, not a verified address; set it to a verified one (git config user.email), or see verified-emails.txt" >&2
    bad=1
  fi
done
exit $bad
