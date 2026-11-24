#!/usr/bin/env python3
"""Keep the nextest `nightly` profile's test list equal to the `ci` profile's exclusions.

The `ci` profile (every push and pull request) leaves out the parity corpora and seven slow
tests; the `nightly` profile runs exactly those seven. nextest has no named filterset to share
between profiles, so each list is written out, and this check fails when they drift.
"""
from pathlib import Path
import re
import sys

import tomllib

TERM = re.compile(r"binary_id\(([^()\s]+)\)\s*&\s*test\(=([^()\s]+)\)")
PARITY = "binary_id(unlace-harness::parity)"


def check(root: Path) -> list[str]:
    profiles = tomllib.loads((root / ".config/nextest.toml").read_text()).get("profile", {})
    ci = profiles.get("ci", {}).get("default-filter", "")
    nightly = profiles.get("nightly", {}).get("default-filter", "")
    if not ci or not nightly:
        return [".config/nextest.toml: the ci and nightly profiles need a default-filter"]
    errors = []
    if PARITY not in ci:
        errors.append(".config/nextest.toml: the ci profile must exclude " + PARITY)
    if PARITY in nightly:
        errors.append(".config/nextest.toml: the nightly profile must not select " + PARITY)
    if re.search(r"\bnot\b", nightly):
        errors.append(".config/nextest.toml: the nightly filter lists tests; it must not negate")
    excluded = TERM.findall(ci)
    selected = TERM.findall(nightly)
    if ci.count("binary_id(") != len(excluded) + 1:
        errors.append(".config/nextest.toml: every ci exclusion must be a binary_id & test pair (plus parity)")
    if nightly.count("binary_id(") != len(selected):
        errors.append(".config/nextest.toml: every nightly term must be a binary_id & test pair")
    if sorted(excluded) != sorted(selected):
        for binary, name in sorted(set(excluded) - set(selected)):
            errors.append("nightly profile misses %s::%s (excluded by ci)" % (binary, name))
        for binary, name in sorted(set(selected) - set(excluded)):
            errors.append("nightly profile selects %s::%s, which ci does not exclude" % (binary, name))
        if len(excluded) != len(set(excluded)) or len(selected) != len(set(selected)):
            errors.append(".config/nextest.toml: a test is listed twice in the ci or nightly filter")
    return errors


if __name__ == "__main__":
    errors = check(Path(__file__).resolve().parents[1])
    if errors:
        print("\n".join(errors), file=sys.stderr)
        raise SystemExit(1)
    print("nextest tiers: the nightly profile runs exactly the tests ci excludes")
