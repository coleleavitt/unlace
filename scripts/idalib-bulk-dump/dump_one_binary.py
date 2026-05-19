#!/usr/bin/env python3
"""
Bulk-dump every function's pseudocode from a single binary via idalib.

Usage:
    python3 dump_one_binary.py <binary_path> <output_dir>

Loads the binary into a fresh idalib session, decompiles every function,
and writes one .c file per function into output_dir/. Resumes by skipping
existing non-empty files.
"""

import argparse
import hashlib
import os
import sys
import time
from pathlib import Path


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


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("binary", help="Path to binary or .i64")
    parser.add_argument("outdir", help="Output directory (creates ./all/)")
    parser.add_argument("--limit", type=int, default=0, help="Limit functions (0 = all)")
    parser.add_argument("--timeout", type=int, default=900, help="Max wall clock seconds")
    args = parser.parse_args()

    binary = Path(args.binary).resolve()
    outdir = Path(args.outdir).resolve() / "all"
    outdir.mkdir(parents=True, exist_ok=True)

    print(f"[idalib] loading {binary}", flush=True)
    import idapro
    rc = idapro.open_database(str(binary), run_auto_analysis=True)
    if rc != 0:
        print(f"  open_database returned {rc}", flush=True)
        sys.exit(2)

    # Import IDA modules after open_database
    import ida_funcs
    import ida_hexrays

    if not ida_hexrays.init_hexrays_plugin():
        print("[idalib] hexrays decompiler unavailable for this binary; skipping", flush=True)
        idapro.close_database(False)
        sys.exit(3)

    total = ida_funcs.get_func_qty()
    print(f"[idalib] {total} functions discovered", flush=True)

    start = time.time()
    ok = 0
    skipped = 0
    failed = 0

    for i in range(total):
        if args.limit and (ok + failed + skipped) >= args.limit:
            break
        if time.time() - start > args.timeout:
            print(f"[idalib] timeout after {args.timeout}s", flush=True)
            break

        pfn = ida_funcs.getn_func(i)
        if not pfn:
            continue
        name = ida_funcs.get_func_name(pfn.start_ea) or f"sub_{pfn.start_ea:X}"
        outfile = outdir / f"{safe_filename(name)}.c"
        if outfile.exists() and outfile.stat().st_size > 0:
            skipped += 1
            continue

        try:
            cfunc = ida_hexrays.decompile(pfn.start_ea)
            if cfunc is None:
                failed += 1
                continue
            text = str(cfunc) + "\n"
            outfile.write_text(text, encoding="utf-8", errors="replace")
            ok += 1
            if ok % 50 == 0:
                elapsed = time.time() - start
                rate = (ok + failed) / elapsed if elapsed > 0 else 0
                print(f"  progress: ok={ok} fail={failed} skip={skipped} "
                      f"({rate:.1f}/s) [{i+1}/{total}]", flush=True)
        except Exception as e:
            failed += 1

    elapsed = time.time() - start
    print(f"[idalib] DONE in {elapsed:.1f}s: ok={ok} fail={failed} skip={skipped}", flush=True)

    idapro.close_database(False)


if __name__ == "__main__":
    main()
