#!/usr/bin/env python3
"""Ratchet unlace-decomp's module layering: no new upward edges between bands.

Each top-level module of unlace-decomp (`src/<folder>/<module>.rs` plus its child files) belongs to a
band, and each phase folder's `mod.rs` belongs to its folder's band. The bands, lowest first, are a
planned split of the crate: middle (the IR, types, options, symbols), lift (P1-P2), structure (P7-P8),
bandb (P3-P6), emit (P9) and driver (scheduling, option dispatch, the decompile loop).

Every `crate::`, `super::` and `self::` path in non-test code is resolved to the module it names; a path
that stops at a folder (`crate::p9_emit::*`, an item the folder's `mod.rs` re-exports) names the folder.
A path to a higher band is an upward edge. Upward edges that exist today are listed in
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
SRC = "decompiler/crates/unlace-decomp/src"
ALLOWLIST = "scripts/layers-allowlist.txt"
TOKEN = re.compile(r"\w+|::|\S")
CFG_TEST = re.compile(r"#\s*\[\s*cfg\s*\(\s*test\s*\)\s*\]")
INNER_CFG_TEST = re.compile(r"#\s*!\s*\[\s*cfg\s*\(\s*test\s*\)\s*\]")


def is_test_file(path: Path) -> bool:
    return path.name == "tests.rs" or path.name.endswith("_tests.rs") or "tests" in path.parts[:-1]


def strip_literals(text: str) -> str:
    """Blank out comments (nested block comments too), strings, raw strings and char literals."""
    out, i, n = [], 0, len(text)
    while i < n:
        c = text[i]
        if text.startswith("//", i):
            i = text.find("\n", i)
            i = n if i < 0 else i
        elif text.startswith("/*", i):
            depth, i = 1, i + 2
            while i < n and depth:
                if text.startswith("/*", i):
                    depth, i = depth + 1, i + 2
                elif text.startswith("*/", i):
                    depth, i = depth - 1, i + 2
                else:
                    i += 1
            out.append(" ")
        elif raw := re.match(r"b?r(#*)\"", text[i:i + 260]):
            close = '"' + raw.group(1)
            end = text.find(close, i + raw.end())
            i = n if end < 0 else end + len(close)
            out.append('""')
        elif c == '"' or text.startswith('b"', i):
            i += 2 if c == "b" else 1
            while i < n and text[i] != '"':
                i += 2 if text[i] == "\\" else 1
            i += 1
            out.append('""')
        elif c == "'" and (char := re.match(r"'(?:\\(?:u\{[0-9a-fA-F]+\}|x..|.)|[^\\'])'", text[i:i + 12])):
            i += char.end()
            out.append("' '")
        else:
            if c.isalnum() or c == "_":
                word = re.match(r"\w+", text[i:]).group()
                out.append(word)
                i += len(word)
                continue
            out.append(c)
            i += 1
    return "".join(out)


def item_end(text: str, start: int) -> int:
    """End of the item starting at `start`: its `;`, or the `}` closing its first top-level brace."""
    depth, i = 0, start
    while i < len(text):
        c = text[i]
        if c in "([":
            depth += 1
        elif c in ")]":
            depth -= 1
        elif c == ";" and depth == 0:
            return i + 1
        elif c == "{" and depth == 0:
            braces = 0
            for j in range(i, len(text)):
                braces += {"{": 1, "}": -1}.get(text[j], 0)
                if braces == 0:
                    return j + 1
            return len(text)
        i += 1
    return len(text)


def drop_cfg_test(text: str) -> str:
    """Remove every `#[cfg(test)]` item: the attribute, any attributes after it, and the item."""
    while m := CFG_TEST.search(text):
        i = m.end()
        while nxt := re.match(r"\s*#\s*\[", text[i:]):
            i = _bracket_end(text, i + nxt.end() - 1)
        text = text[:m.start()] + " " + text[item_end(text, i):]
    return text


def _bracket_end(text: str, open_at: int) -> int:
    depth = 0
    for j in range(open_at, len(text)):
        depth += {"[": 1, "]": -1}.get(text[j], 0)
        if depth == 0:
            return j + 1
    return len(text)


def use_paths(tokens: list[str], i: int) -> list[list[str]]:
    """Every full path the path or use tree starting at tokens[i] names (aliases dropped)."""
    def tree(i: int) -> tuple[list[list[str]], int]:
        segs = []
        while i < len(tokens):
            tok = tokens[i]
            if tok == "{":
                paths, i = [], i + 1
                while i < len(tokens) and tokens[i] != "}":
                    sub, i = tree(i)
                    paths += [segs + [s for s in p if s != "self"] for p in sub]
                    if i < len(tokens) and tokens[i] == ",":
                        i += 1
                return paths, i + 1
            if tok == "*" or re.fullmatch(r"\w+", tok):
                segs.append(tok)
                i += 1
                if i + 1 < len(tokens) and tokens[i] == "as":
                    i += 2
                if i < len(tokens) and tokens[i] == "::" and i + 1 < len(tokens) and tokens[i + 1] != "<":
                    i += 1
                    continue
            return [segs], i
        return [segs], i
    return tree(i)[0]


def module_path(rel: Path) -> list[str]:
    parts = list(rel.with_suffix("").parts)
    return parts[:-1] if parts[-1] == "mod" else parts


def resolve(path: list[str], here: list[str], modules: dict[str, str]) -> str | None:
    """The module (or folder) an absolute-or-relative path names, or None outside src/<folder>/."""
    head, rest = path[0], path[1:]
    if head == "crate":
        absolute = rest
    else:
        base = list(here)
        while head == "super" and base:
            base.pop()
            head, rest = (rest[0], rest[1:]) if rest else ("", [])
        absolute = base + ([head] if head not in ("self", "super", "") else []) + rest
    if not absolute:
        return None
    if absolute[0] in FOLDER_BAND:
        if len(absolute) > 1 and absolute[1] in modules:
            return absolute[1]
        return absolute[0]
    return absolute[0] if absolute[0] in modules else None


def band(node: str, modules: dict[str, str]) -> int:
    return BANDS.index(MODULE_BAND.get(node) or FOLDER_BAND[modules.get(node, node)])


def upward_edges(root: Path) -> set[tuple[str, str]]:
    src = root / SRC
    files = [p for p in sorted(src.glob("*/**/*.rs")) if not is_test_file(p.relative_to(src))]
    modules = {}
    for p in files:
        folder, top = p.relative_to(src).parts[:2]
        if top != "mod.rs":
            modules[top.removesuffix(".rs")] = folder
    edges = set()
    for p in files:
        rel = p.relative_to(src)
        node = rel.parts[0] if rel.parts[1] == "mod.rs" else rel.parts[1].removesuffix(".rs")
        text = strip_literals(p.read_text())
        if INNER_CFG_TEST.search(text):
            continue
        tokens = TOKEN.findall(drop_cfg_test(text))
        here = module_path(rel)
        for i, tok in enumerate(tokens):
            if tok in ("crate", "super", "self") and i + 1 < len(tokens) and tokens[i + 1] == "::" \
                    and (i == 0 or tokens[i - 1] != "::"):
                for path in use_paths(tokens, i):
                    target = resolve(path, here, modules)
                    if target and target != node and band(target, modules) > band(node, modules):
                        edges.add((node, target))
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
