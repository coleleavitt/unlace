#!/usr/bin/env python3
"""Split Hex-Rays decompile_many output into one C file per function.

CodeGraph's IDA/Hex-Rays extractor is intentionally optimized for one-function
files.  IDA's decompile_many() output is much faster to produce, but it writes a
single large C file.  This helper keeps the fast dump path and creates the
per-function files needed for structural indexing.

Usage:
    python3 split_decompile_many.py <path/to/__decompile_many.c>
    python3 split_decompile_many.py <dump-dir> --recursive
"""

from __future__ import annotations

import argparse
import re
import sys
from pathlib import Path


BOUNDARY_RE = re.compile(r"(?m)^//----- \(([0-9A-Fa-f]+)\) -+\n")
NAME_RE = re.compile(r"([A-Za-z_.$~][A-Za-z0-9_.$:~]*)\s*\(")
TYPE_WORDS = {
    "__int8",
    "__int16",
    "__int32",
    "__int64",
    "__int128",
    "__fastcall",
    "__cdecl",
    "__stdcall",
    "__thiscall",
    "__usercall",
    "__noreturn",
    "bool",
    "char",
    "double",
    "float",
    "int",
    "long",
    "short",
    "signed",
    "unsigned",
    "void",
}


def safe_name(name: str) -> str:
    return re.sub(r"[^A-Za-z0-9_.$~:-]+", "_", name).strip("_") or "function"


def function_name(block: str, address: str) -> str:
    before_body = block.split("{", 1)[0]
    candidates = [m.group(1) for m in NAME_RE.finditer(before_body)]
    for candidate in reversed(candidates):
        if candidate not in TYPE_WORDS:
            return safe_name(candidate)
    return f"sub_{address.lstrip('0') or '0'}"


def split_file(path: Path, force: bool) -> tuple[int, int]:
    text = path.read_text(encoding="utf-8", errors="replace")
    matches = list(BOUNDARY_RE.finditer(text))
    if not matches:
        return (0, 0)

    written = 0
    skipped = 0
    used_names: dict[str, int] = {}
    for index, match in enumerate(matches):
        start = match.start()
        end = matches[index + 1].start() if index + 1 < len(matches) else len(text)
        block = text[start:end].rstrip() + "\n"
        address = match.group(1)
        name = function_name(block, address)
        stem = name
        if stem in used_names:
            used_names[stem] += 1
            stem = f"{stem}__{address.lower()}"
        else:
            used_names[stem] = 1
        out_path = path.parent / f"{stem}.c"
        if out_path == path:
            out_path = path.parent / f"{stem}__{address.lower()}.c"
        if out_path.exists() and out_path.stat().st_size > 0 and not force:
            skipped += 1
            continue
        out_path.write_text(
            "/* Split from IDA decompile_many output for CodeGraph indexing. */\n"
            f"// Name: {name}\n"
            f"// Address: 0x{address}\n\n"
            f"{block}",
            encoding="utf-8",
        )
        written += 1
    return (written, skipped)


def iter_inputs(root: Path, recursive: bool) -> list[Path]:
    if root.is_file():
        return [root]
    pattern = "**/__decompile_many.c" if recursive else "__decompile_many.c"
    return sorted(root.glob(pattern))


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("path", help="__decompile_many.c or a directory containing dumps")
    parser.add_argument("--recursive", action="store_true", help="Find dumps recursively")
    parser.add_argument("--force", action="store_true", help="Overwrite existing split files")
    args = parser.parse_args()

    root = Path(args.path)
    inputs = iter_inputs(root, args.recursive)
    if not inputs:
        print(f"[split-many] no __decompile_many.c inputs under {root}", file=sys.stderr)
        return 1

    total_written = 0
    total_skipped = 0
    for input_path in inputs:
        written, skipped = split_file(input_path, args.force)
        total_written += written
        total_skipped += skipped
        print(f"[split-many] {input_path}: wrote={written} skipped={skipped}", flush=True)
    print(f"[split-many] DONE files={len(inputs)} wrote={total_written} skipped={total_skipped}", flush=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
