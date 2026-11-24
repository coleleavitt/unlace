#!/usr/bin/env python3
"""Regression sweep: run every difffuzz configuration with fixed seeds and small counts.

Each configuration (an --arch with the Unicorn or the QEMU oracle) runs difffuzz.py in its own
process. A configuration whose oracle is not installed (Unicorn missing, no QEMU user binary on
PATH or in DIFFFUZZ_QEMU_DIR, no vector-capable llvm-objdump) is reported as unavailable, not
failed. The summary JSON has one row per configuration with its outcome counts; the exit status
is 1 when any configuration has a mismatch (or a length disagreement or missing input/output
finding) that tools/difffuzz/sweep_known.json does not list as known, 2 when a configuration
errored, and 0 otherwise.

    python3 tools/difffuzz/sweep.py --unlace target/debug/unlace --out sweep.json [--jobs 4]
"""
import argparse
import concurrent.futures
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))

# (arch, oracle). Unicorn covers the targets it emulates well enough, QEMU the rest, and x86-64 also
# runs natively on this CPU.
CONFIGS = [
    ("x86-64", "unicorn"), ("aarch64", "unicorn"), ("riscv64", "unicorn"), ("arm", "unicorn"),
    ("thumb", "unicorn"), ("mips", "unicorn"), ("ppc", "unicorn"), ("tricore", "unicorn"),
    ("aarch64", "qemu"), ("riscv64", "qemu"), ("riscv64v", "qemu"),
    ("mips", "qemu"), ("mips64", "qemu"), ("mipsr6", "qemu"), ("mips64r6", "qemu"),
    ("ppc", "qemu"), ("ppc64", "qemu"), ("ppc64le", "qemu"), ("ppc64-isa", "qemu"), ("ppc64le-isa", "qemu"),
    ("s390x", "qemu"), ("nios2", "qemu"), ("sh4", "qemu"), ("m68k", "qemu"),
    ("x86-64-native", "native"), ("x86-64-x87", "native"),
]
FAILING = ("mismatch", "length", "missing-output", "missing-input")
KNOWN = HERE / "sweep_known.json"


def is_known(finding, known):
    """Whether every difference of a failing finding is a documented, accepted class: known maps a
    difference key (a register, `missing-output`, `missing-input`, ...) to fnmatch patterns over
    its named values ("*" accepts any)."""
    import fnmatch
    diffs = finding.get("diffs")
    if not isinstance(diffs, dict) or not diffs:
        return False
    for key, val in diffs.items():
        pats = known.get(key)
        if pats is None:
            return False
        names = [v for v in (val if isinstance(val, list) else [val]) if isinstance(v, str) and not v.startswith("0x")]
        if not all(any(fnmatch.fnmatch(n, p) for p in pats) for n in names or ["*"]):
            return False
    return True


def available(arch, oracle, objdump):
    """None when the configuration can run, else why not."""
    if arch == "riscv64v":
        if not shutil.which(objdump):
            return f"no {objdump}"
        arch = "riscv64"
    import arches
    if arch not in arches.ARCHES:
        return "unknown arch"
    if oracle in ("qemu", "native"):
        import qemu_backend
        return None if qemu_backend.available(arches.ARCHES[arch]) else "no QEMU user binary"
    return None


def run(arch, oracle, args, tmp):
    why = available(arch, oracle, args.objdump)
    row = {"arch": arch, "oracle": oracle}
    if why:
        return {**row, "status": "unavailable", "why": why}
    out = os.path.join(tmp, f"{arch}-{oracle}.json")
    cmd = [sys.executable, str(HERE / "difffuzz.py"), "--arch", arch, "--oracle", oracle,
           "--count", str(args.count), "--trials", str(args.trials), "--seed", str(args.seed),
           "--unlace", args.unlace, "--out", out]
    if args.sleighpath:
        cmd += ["--sleighpath", args.sleighpath]
    if arch == "riscv64v":
        cmd += ["--objdump", args.objdump]
    try:
        p = subprocess.run(cmd, capture_output=True, text=True, timeout=args.timeout)
    except subprocess.TimeoutExpired:
        return {**row, "status": "error", "why": f"timeout after {args.timeout} s"}
    if p.returncode != 0 or not os.path.exists(out):
        tail = (p.stderr or p.stdout).strip().splitlines()[-1:] or [f"exit {p.returncode}"]
        return {**row, "status": "error", "why": tail[0][:200]}
    doc = json.loads(Path(out).read_text())
    outcomes = doc["summary"]["outcomes"]
    known = args.known.get(f"{arch}/{oracle}", {})
    findings = [f for f in doc["findings"] if f["kind"] in FAILING]
    new = [f for f in findings if not is_known(f, known)]
    return {**row, "status": "fail" if new else "ok", "outcomes": outcomes,
            "known": len(findings) - len(new),
            "failing": [{"bytes": f["bytes"], "insn": f.get("capstone", ""), "kind": f["kind"],
                         "diffs": f.get("diffs") or f.get("why")} for f in new[:args.keep]]}


def line(r):
    if r["status"] in ("unavailable", "error"):
        return f"{r['arch']:<12} {r['oracle']:<8} {r['status']}: {r['why']}"
    o = r["outcomes"]
    return (f"{r['arch']:<12} {r['oracle']:<8} {r['status']:<5} match {o.get('match', 0):>6}  "
            f"mismatch {sum(o.get(k, 0) for k in FAILING) - r['known']:>4} (+{r['known']} known)  "
            f"decode {sum(v for k, v in o.items() if k.startswith('decode')):>4}  "
            f"ref-exc {o.get('ref-exception', 0):>4}  unmodeled {o.get('unmodeled', 0):>4}")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--unlace", default=os.environ.get("UNLACE", "unlace"))
    ap.add_argument("--sleighpath")
    ap.add_argument("--count", type=int, default=200, help="instructions per configuration")
    ap.add_argument("--trials", type=int, default=2)
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--jobs", type=int, default=4)
    ap.add_argument("--timeout", type=int, default=1800, help="seconds per configuration")
    ap.add_argument("--only", help="regex over 'arch/oracle' selecting configurations")
    ap.add_argument("--objdump", default=os.environ.get("DIFFFUZZ_OBJDUMP", "llvm-objdump"),
                    help="llvm-objdump with RISC-V vector support, for riscv64v")
    ap.add_argument("--keep", type=int, default=10, help="failing cases kept per configuration")
    ap.add_argument("--out", help="summary JSON path")
    ap.add_argument("--known", default=str(KNOWN), help="accepted finding classes per configuration")
    args = ap.parse_args()
    args.known = json.loads(Path(args.known).read_text()) if args.known and Path(args.known).exists() else {}
    try:
        import arches  # noqa: F401  (needs capstone and unicorn: run with the difffuzz venv's python)
    except ImportError as e:
        print(f"sweep: cannot import tools/difffuzz/arches.py ({e}); run it with the difffuzz venv's python", file=sys.stderr)
        sys.exit(2)
    configs = [c for c in CONFIGS if not args.only or re.search(args.only, f"{c[0]}/{c[1]}")]
    with tempfile.TemporaryDirectory() as tmp, concurrent.futures.ThreadPoolExecutor(args.jobs) as ex:
        rows = list(ex.map(lambda c: run(c[0], c[1], args, tmp), configs))
    for r in rows:
        print(line(r))
    if args.out:
        Path(args.out).write_text(json.dumps({"unlace": args.unlace, "seed": args.seed, "count": args.count,
                                              "configs": rows}, indent=1))
    if any(r["status"] == "fail" for r in rows):
        sys.exit(1)
    if any(r["status"] == "error" for r in rows):
        sys.exit(2)


if __name__ == "__main__":
    main()
