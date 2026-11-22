#!/usr/bin/env python3
"""Ratchet kuna-decomp's module layering: no new upward `crate::` edges between bands.

Each top-level module of kuna-decomp (`src/<folder>/<module>.rs` plus its child files) belongs to a
band. The bands, lowest first, are a planned split of the crate:
middle (the IR, types, options, symbols), lift (P1-P2), structure (P7-P8), bandb (P3-P6), emit (P9) and
driver (scheduling, option dispatch, the decompile loop). A `crate::<module>` path in non-test code is
an edge; an edge to a higher band is an upward edge. Upward edges that exist today are listed in
scripts/layers-allowlist.txt. The check fails on an upward edge missing from that list, and on a listed
edge that no longer exists, so the list only shrinks.
"""
from collections import defaultdict
from pathlib import Path
import re
import sys

BANDS = ["middle", "lift", "structure", "bandb", "emit", "driver"]
FOLDER_BAND = {
    "substrate": "middle", "p0_knowledge": "middle",
    "p1_partition": "lift", "p2_lift": "lift",
    "p7_regions": "structure", "p8_structure": "structure",
    "p3_dataflow": "bandb", "p4_calls": "bandb", "p5_types": "bandb", "p6_variables": "bandb",
    "p9_emit": "emit", "infra": "driver",
}
MODULE_BAND = {
    "kuna_option_dispatch": "driver", "kuna_phases": "driver",
    "action": "middle", "architecture": "middle", "kuna_fasthash": "middle",
    "typeop": "middle", "fspec": "middle", "variable": "middle", "cover": "middle", "varmap": "middle",
    "dynamic": "middle", "heritage": "middle", "merge": "middle", "jumptable": "middle",
}
SRC = "decompiler/crates/kuna-decomp/src"
ALLOWLIST = "scripts/layers-allowlist.txt"
CRATE_PATH = re.compile(r"\bcrate::(?:(\w+)(?:::(\w+))?|\{)")
TEST_MOD = re.compile(r"^(\s*)(?:pub(?:\([\w:]+\))?\s+)?mod\s+\w+\s*\{")


def is_test_file(path: Path) -> bool:
    return path.name == "tests.rs" or path.name.endswith("_tests.rs") or "tests" in path.parts[:-1]


def code_lines(text: str) -> str:
    """Drop comment lines (rustdoc links included) and inline `#[cfg(test)] mod` bodies."""
    kept, closer, cfg_test = [], None, False
    for line in text.splitlines():
        stripped = line.strip()
        if closer is not None:
            closer = None if line.rstrip() == closer else closer
            continue
        match = TEST_MOD.match(line)
        if cfg_test and match:
            closer = match.group(1) + "}"
        elif not stripped.startswith("//"):
            kept.append(line)
        if stripped:
            cfg_test = stripped == "#[cfg(test)]"
    return "\n".join(kept)


def group_heads(text: str, start: int) -> list[tuple[str, str | None]]:
    """The leading path segments of each item in the `{...}` group opening before `start`."""
    depth, item, heads = 1, "", []
    for ch in text[start:]:
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                break
        elif depth == 1:
            item += ch
    for part in item.split(","):
        names = [n for n in part.strip().split("::") if n]
        if names:
            heads.append((names[0].strip(), names[1].strip() if len(names) > 1 else None))
    return heads


def upward_edges(root: Path) -> set[tuple[str, str]]:
    mods, rank = defaultdict(list), {}
    for path in sorted((root / SRC).glob("*/**/*.rs")):
        folder, top = path.relative_to(root / SRC).parts[:2]
        name = top.removesuffix(".rs")
        if name != "mod" and not is_test_file(path.relative_to(root / SRC)):
            mods[name].append(path)
            rank[name] = BANDS.index(MODULE_BAND.get(name, FOLDER_BAND[folder]))
    edges = set()
    for name, paths in mods.items():
        for path in paths:
            text = code_lines(path.read_text())
            for m in CRATE_PATH.finditer(text):
                heads = group_heads(text, m.end()) if m.group(1) is None else [(m.group(1), m.group(2))]
                for first, second in heads:
                    target = second if first in FOLDER_BAND else first
                    if target in rank and target != name and rank[target] > rank[name]:
                        edges.add((name, target))
    return edges


def check(root: Path) -> list[str]:
    allowed = set()
    for line in (root / ALLOWLIST).read_text().splitlines():
        if line.strip() and not line.startswith("#"):
            src, dst = line.split("->")
            allowed.add((src.strip(), dst.strip()))
    found = upward_edges(root)
    errors = [f"new upward edge {s} -> {d}: invert it (see scripts/check_layers.py)"
              for s, d in sorted(found - allowed)]
    errors += [f"{ALLOWLIST}: {s} -> {d} is gone; delete the line" for s, d in sorted(allowed - found)]
    return errors


if __name__ == "__main__":
    errors = check(Path(__file__).resolve().parents[1])
    if errors:
        print("\n".join(errors), file=sys.stderr)
        raise SystemExit(1)
    print("Module layering: no new upward edges")
