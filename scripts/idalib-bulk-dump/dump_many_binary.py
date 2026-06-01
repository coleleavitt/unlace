#!/usr/bin/env python3
"""
Fast Hex-Rays batch dump for one IDA database.

This uses ida_hexrays.decompile_many(), the same bulk path behind IDA's
"decompile all" workflow. With the default empty function list, Hex-Rays
decompiles non-library functions only, avoiding PLT/runtime/library noise that
made dump_one_binary.py painfully slow on large support libraries.

Usage:
    python3 dump_many_binary.py <database.i64> <output_dir>
"""

import argparse
import sys
from pathlib import Path


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("database", help="Path to an IDA database (.i64/.idb)")
    parser.add_argument("outdir", help="Output directory; writes ./all/__decompile_many.c")
    parser.add_argument(
        "--force",
        action="store_true",
        help="Overwrite existing __decompile_many.c",
    )
    parser.add_argument(
        "--run-auto-analysis",
        action="store_true",
        help="Run/wait for IDA auto-analysis when opening the database",
    )
    parser.add_argument(
        "--include-lib-functions",
        action="store_true",
        help="Pass every function start to decompile_many instead of the default non-library set",
    )
    args = parser.parse_args()

    database = Path(args.database).resolve()
    outdir = Path(args.outdir).resolve() / "all"
    outdir.mkdir(parents=True, exist_ok=True)
    outfile = outdir / "__decompile_many.c"
    if outfile.exists() and outfile.stat().st_size > 0 and not args.force:
        print(f"[idalib-many] skip existing {outfile}", flush=True)
        return 0

    print(f"[idalib-many] loading {database}", flush=True)
    import idapro

    rc = idapro.open_database(str(database), args.run_auto_analysis)
    if rc != 0:
        print(f"[idalib-many] open_database returned {rc}", flush=True)
        return 2

    import ida_funcs
    import ida_hexrays

    if not ida_hexrays.init_hexrays_plugin():
        print("[idalib-many] hexrays decompiler unavailable", flush=True)
        idapro.close_database(False)
        return 3

    funcaddrs = None
    if args.include_lib_functions:
        funcaddrs = []
        for i in range(ida_funcs.get_func_qty()):
            pfn = ida_funcs.getn_func(i)
            if pfn:
                funcaddrs.append(int(pfn.start_ea))
        print(f"[idalib-many] requested all {len(funcaddrs)} functions", flush=True)
    else:
        print("[idalib-many] requested non-library functions", flush=True)

    flags = (
        ida_hexrays.VDRUN_NEWFILE
        | ida_hexrays.VDRUN_SILENT
        | ida_hexrays.VDRUN_CMDLINE
    )
    ok = ida_hexrays.decompile_many(str(outfile), funcaddrs, flags)
    size = outfile.stat().st_size if outfile.exists() else 0
    print(f"[idalib-many] DONE ok={ok} bytes={size} output={outfile}", flush=True)

    idapro.close_database(False)
    return 0 if ok and size > 0 else 4


if __name__ == "__main__":
    sys.exit(main())
