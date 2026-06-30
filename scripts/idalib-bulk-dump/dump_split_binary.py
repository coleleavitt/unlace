#!/usr/bin/env python3
"""
Fast Hex-Rays batch dump for one IDA database — one .c file per function.

Strategy:
  1. Use decompile_many() (the fast bulk path) to produce a single combined .c
  2. Split the combined output into one file per function under outdir/all/
  3. Already-present non-empty files are skipped (resume-safe).

This is faster than calling decompile() in a loop for large binaries because
Hex-Rays batches IR and type propagation passes internally.

Usage:
    python3 dump_split_binary.py <database.i64> <output_dir> [--force] [--include-lib-functions]
"""

import argparse
import hashlib
import re
import sys
import time
from pathlib import Path


# ── filename helpers ───────────────────────────────────────────────────────────

def safe_filename(name: str, max_len: int = 92) -> str:
    safe = []
    for c in name:
        if c.isalnum() or c in "._-":
            safe.append(c)
        else:
            safe.append("_")
    s = "".join(safe)
    if not s:
        s = "unnamed"
    if len(s) > max_len:
        h = hashlib.sha1(name.encode()).hexdigest()[:12]
        s = s[:80] + "_" + h
    return s


# ── split logic ────────────────────────────────────────────────────────────────

# Match the top-level function signature line that decompile_many emits.
# Examples:
#   __int64 __fastcall sub_1800(...)
#   void __cdecl SomeFunc(int a, ...)
#   BOOL __stdcall DllMain(...)
#   static inline int helper(...)
#
# We anchor on lines that look like a C function definition opening brace
# preceded by a return-type + calling-convention + name pattern.
_FUNC_START = re.compile(
    r'^(?:(?:__|\w+\s+)*)?'           # optional leading modifiers
    r'(?:__int\d+|unsigned\s+\w+|\w+)'  # return type
    r'(?:\s+\*+)?'                    # optional pointer(s)
    r'\s+'
    r'(?:__fastcall|__cdecl|__stdcall|__thiscall|__pascal|)'
    r'\s*'
    r'(\w+)'                          # function name (capture group 1)
    r'\s*\('
)


def split_combined(combined: str, outdir: Path, force: bool) -> tuple[int, int, int]:
    """Split a combined decompile_many output into per-function .c files.

    Returns (written, skipped, failed).
    """
    written = skipped = failed = 0
    lines = combined.splitlines(keepends=True)
    chunks: list[tuple[str, list[str]]] = []   # (name, lines)

    current_name: str | None = None
    current_lines: list[str] = []
    brace_depth = 0
    in_body = False

    for line in lines:
        stripped = line.rstrip()

        # Try to detect a new top-level function start.
        # We look for a signature followed (possibly later) by an opening '{'.
        if not in_body and current_name is None:
            m = _FUNC_START.match(stripped)
            if m:
                current_name = m.group(1)
                current_lines = [line]
                brace_depth = 0
                in_body = False
                continue

        if current_name is not None:
            current_lines.append(line)
            brace_depth += stripped.count("{") - stripped.count("}")
            if brace_depth > 0:
                in_body = True
            if in_body and brace_depth <= 0:
                # Function body closed.
                chunks.append((current_name, current_lines))
                current_name = None
                current_lines = []
                brace_depth = 0
                in_body = False

    # Flush any trailing fragment.
    if current_name and current_lines:
        chunks.append((current_name, current_lines))

    if not chunks:
        # Fallback: split on blank-line-separated top-level blocks.
        # This handles edge cases where the regex didn't fire.
        block: list[str] = []
        idx = 0
        for line in lines:
            block.append(line)
            if line.strip() == "" and block:
                name = f"block_{idx:05d}"
                # Try to extract a name from the block.
                for bl in block:
                    m2 = _FUNC_START.match(bl.strip())
                    if m2:
                        name = m2.group(1)
                        break
                chunks.append((name, block))
                block = []
                idx += 1
        if block:
            chunks.append((f"block_{idx:05d}", block))

    for name, chunk_lines in chunks:
        fname = safe_filename(name)
        outfile = outdir / f"{fname}.c"
        if outfile.exists() and outfile.stat().st_size > 0 and not force:
            skipped += 1
            continue
        try:
            outfile.write_text("".join(chunk_lines), encoding="utf-8", errors="replace")
            written += 1
        except Exception:
            failed += 1

    return written, skipped, failed


# ── main ───────────────────────────────────────────────────────────────────────

def main() -> int:
    parser = argparse.ArgumentParser(
        description="Dump one IDA database to per-function .c files via decompile_many."
    )
    parser.add_argument("database", help="Path to .i64 or .idb IDA database")
    parser.add_argument("outdir", help="Output directory; per-function files go into ./all/")
    parser.add_argument("--force", action="store_true", help="Overwrite existing files")
    parser.add_argument(
        "--run-auto-analysis", action="store_true",
        help="Run/wait for IDA auto-analysis when opening the database",
    )
    parser.add_argument(
        "--include-lib-functions", action="store_true",
        help="Include library/runtime functions (off by default)",
    )
    args = parser.parse_args()

    database = Path(args.database).resolve()
    outdir = Path(args.outdir).resolve() / "all"
    outdir.mkdir(parents=True, exist_ok=True)

    # Intermediate combined file (kept for debugging, can be deleted after split).
    combined_file = outdir.parent / "__decompile_many_raw.c"

    t0 = time.time()

    # ── 1. Open database ──────────────────────────────────────────────────────
    print(f"[idalib] loading {database}", flush=True)
    import idapro
    rc = idapro.open_database(str(database), args.run_auto_analysis)
    if rc != 0:
        print(f"[idalib] open_database returned {rc}", flush=True)
        return 2

    import ida_funcs
    import ida_hexrays

    if not ida_hexrays.init_hexrays_plugin():
        print("[idalib] Hex-Rays decompiler unavailable for this database", flush=True)
        idapro.close_database(False)
        return 3

    # ── 2. Collect function addresses ─────────────────────────────────────────
    total = ida_funcs.get_func_qty()
    print(f"[idalib] {total} functions discovered", flush=True)

    funcaddrs: list[int] | None = None
    if args.include_lib_functions:
        funcaddrs = []
        for i in range(total):
            pfn = ida_funcs.getn_func(i)
            if pfn:
                funcaddrs.append(int(pfn.start_ea))
        print(f"[idalib] including all {len(funcaddrs)} functions", flush=True)
    else:
        print("[idalib] using non-library function set (default)", flush=True)

    # ── 3. Bulk decompile ─────────────────────────────────────────────────────
    flags = (
        ida_hexrays.VDRUN_NEWFILE
        | ida_hexrays.VDRUN_SILENT
        | ida_hexrays.VDRUN_CMDLINE
    )

    need_decompile = args.force or not (
        combined_file.exists() and combined_file.stat().st_size > 1024
    )
    if need_decompile:
        print(f"[idalib] running decompile_many → {combined_file}", flush=True)
        ok = ida_hexrays.decompile_many(str(combined_file), funcaddrs, flags)
        size = combined_file.stat().st_size if combined_file.exists() else 0
        print(f"[idalib] decompile_many done ok={ok} bytes={size}", flush=True)
        if not ok or size == 0:
            idapro.close_database(False)
            return 4
    else:
        size = combined_file.stat().st_size
        print(f"[idalib] reusing existing combined file ({size} bytes)", flush=True)

    idapro.close_database(False)

    # ── 4. Split into per-function files ──────────────────────────────────────
    print(f"[split] splitting {combined_file.name} → {outdir}/", flush=True)
    combined = combined_file.read_text(encoding="utf-8", errors="replace")
    written, skipped, failed = split_combined(combined, outdir, args.force)

    elapsed = time.time() - t0
    print(
        f"[split] DONE in {elapsed:.1f}s — "
        f"written={written} skipped={skipped} failed={failed} "
        f"outdir={outdir}",
        flush=True,
    )
    return 0


if __name__ == "__main__":
    sys.exit(main())
