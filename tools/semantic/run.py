#!/usr/bin/env python3
"""Semantic-correctness suite: decompile each function under test, link the
emitted C in place of the original, run both, compare what they print.

For every case in cases/*.c, every configuration (compiler + target) and every
optimisation level, the driver
  1. compiles the case to one object and links the reference executable;
  2. runs "unlace decompile-project" over the case's functions under test (the
     weak T functions of the object);
  3. for each such function, compiles its emitted body with the project's own
     header (<name>.h) and shim.h, links that object beside the case object
     (the decompiled strong definition replaces the weak original), runs the
     result and compares its stdout and exit status with the reference.

Outcome per function: pass, wrong (different output, crash or timeout),
nocompile (the emitted C or its link fails), decomp (unlace reported an error
or emitted nothing for it). See README.md.
"""
import argparse
import concurrent.futures
import json
import os
import re
import resource
import shutil
import struct
import subprocess
import sys
import tomllib
from pathlib import Path

HERE = Path(__file__).resolve().parent
REPO = HERE.parent.parent

CONFIGS = {
    "x86_64-gcc": {
        "cc": ["gcc"],
        "flags": ["-fno-pie", "-fcf-protection=none", "-fno-stack-protector"],
        "link": ["-no-pie"],
        "run": [],
    },
    "x86_64-clang": {
        "cc": ["clang"],
        "flags": ["-fno-pie", "-fcf-protection=none", "-fno-stack-protector"],
        "link": ["-no-pie"],
        "run": [],
    },
    "aarch64-zig": {
        "cc": ["zig", "cc", "-target", "aarch64-linux-musl"],
        "flags": ["-fno-pie", "-fno-stack-protector", "-fno-sanitize=all"],
        "link": ["-static"],
        "run": ["qemu-aarch64"],
    },
}

IDENT = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")
HEADER = re.compile(r"^// Function: (\S+) @ (0x[0-9a-fA-F]+)(.*)$")
BY_ADDRESS = re.compile(r"^(?:dat|DAT|sub|FUN|PTR|ptr|LAB|lab)_([0-9a-fA-F]+)$")
SHF_WRITE, SHF_ALLOC, SHT_NOBITS, SHT_SYMTAB = 1, 2, 8, 2


class Elf:
    """The sections and symbols of a little-endian ELF64 image."""

    def __init__(self, path):
        self.data = data = Path(path).read_bytes()
        if data[:4] != b"\x7fELF" or data[4] != 2 or data[5] != 1:
            raise ValueError("%s: not a little-endian ELF64 image" % path)
        shoff, = struct.unpack_from("<Q", data, 0x28)
        shentsize, shnum, shstrndx = struct.unpack_from("<HHH", data, 0x3A)
        raw = [struct.unpack_from("<IIQQQQIIQQ", data, shoff + i * shentsize) for i in range(shnum)]
        names = raw[shstrndx]

        def string(table, off):
            start = table[4] + off
            return data[start:data.index(b"\0", start)].decode(errors="replace")

        self.sections = [{"name": string(names, s[0]), "type": s[1], "flags": s[2], "addr": s[3],
                          "offset": s[4], "size": s[5], "align": s[8]} for s in raw]
        self.symbols = []
        for s in raw:
            if s[1] != SHT_SYMTAB:
                continue
            strtab = raw[s[6]]
            for i in range(s[5] // 24):
                name, info, other, shndx, value, size = struct.unpack_from("<IBBHQQ", data, s[4] + i * 24)
                if name and shndx and info & 0xF in (1, 2):
                    self.symbols.append((value, size, string(strtab, name)))

    def section_at(self, addr):
        for s in self.sections:
            if s["flags"] & SHF_ALLOC and s["addr"] <= addr < s["addr"] + s["size"]:
                return s
        return None

    def symbol_at(self, addr):
        best = None
        for value, size, name in self.symbols:
            if value <= addr < value + max(size, 1) and IDENT.match(name):
                if best is None or value > best[0]:
                    best = (value, name)
        return best

    def contents(self, s):
        if s["type"] == SHT_NOBITS:
            return bytes(s["size"])
        return self.data[s["offset"]:s["offset"] + s["size"]]


def resolve_by_address(image, names, linkable):
    """Assembly that defines each by-address name (dat_402070, sub_401200) the
    emitted object needs: as an alias of the symbol that covers the address in
    the original image when that symbol is linkable, else, for read-only data,
    as a label into a copy of the original section bytes."""
    lines, copies, unresolved = [], {}, []
    for name in sorted(names):
        m = BY_ADDRESS.match(name)
        if not m:
            continue
        addr = int(m.group(1), 16)
        sym = image.symbol_at(addr)
        if sym and sym[1] in linkable:
            lines.append(".globl %s\n.set %s, %s + %d" % (name, name, sym[1], addr - sym[0]))
            continue
        sec = image.section_at(addr)
        if sec is None or sec["flags"] & SHF_WRITE:
            unresolved.append(name)
            continue
        label = copies.setdefault(sec["name"], "sem_copy_%d" % len(copies))
        lines.append(".globl %s\n.set %s, %s + %d" % (name, name, label, addr - sec["addr"]))
    out = []
    for sname, label in copies.items():
        sec = next(s for s in image.sections if s["name"] == sname)
        body = image.contents(sec)
        out.append('.section .rodata.%s,"a"\n.balign %d\n%s:' % (label, max(sec["align"], 16), label))
        for i in range(0, len(body), 32):
            out.append(".byte " + ",".join(str(b) for b in body[i:i + 32]))
    return "\n".join(out + lines) + "\n", unresolved


def no_core_dumps():
    resource.setrlimit(resource.RLIMIT_CORE, (0, 0))


def sh(cmd, cwd=None, timeout=120):
    try:
        p = subprocess.run(cmd, cwd=cwd, capture_output=True, text=True, errors="replace", timeout=timeout,
                           preexec_fn=no_core_dumps)
        return p.returncode, p.stdout, p.stderr
    except subprocess.TimeoutExpired as e:
        out = e.stdout.decode(errors="replace") if isinstance(e.stdout, bytes) else (e.stdout or "")
        return None, out, "timeout after %ss" % timeout
    except FileNotFoundError as e:
        return 127, "", str(e)


def tool(name):
    for cand in (name, name.replace("llvm-", "")):
        if shutil.which(cand):
            return cand
    raise SystemExit("missing tool: " + name)


def first_error(text, limit=3):
    lines = [l for l in text.splitlines() if "error" in l.lower()]
    lines = lines or text.strip().splitlines()
    return " | ".join(l.strip() for l in lines[:limit])[:400]


def split_project(c_text):
    """Map function name -> (code chunk, rest of its header line) from <name>.c."""
    chunks, name, rest, buf = {}, None, "", []
    for line in c_text.splitlines():
        m = HEADER.match(line)
        if m:
            if name:
                chunks[name] = ("\n".join(buf).strip(), rest)
            name, rest, buf = m.group(1), m.group(3), []
            continue
        if name:
            buf.append(line)
    if name:
        chunks[name] = ("\n".join(buf).strip(), rest)
    return chunks


def symbols(nm, obj):
    rc, out, err = sh([nm, "--defined-only", str(obj)])
    rows = []
    for line in out.splitlines():
        parts = line.split()
        if len(parts) == 3:
            rows.append((parts[1], parts[2]))
    return rows


def run_exe(cfg, exe, timeout):
    rc, out, err = sh(cfg["run"] + [str(exe)], cwd=exe.parent, timeout=timeout)
    return rc, out


def describe_diff(ref, got):
    status = ""
    if got[0] != ref[0]:
        status = "timeout" if got[0] is None else "exit %s, want %s" % (got[0], ref[0])
    rl, gl = ref[1].splitlines(), got[1].splitlines()
    for i in range(max(len(rl), len(gl))):
        a = rl[i] if i < len(rl) else "<missing>"
        b = gl[i] if i < len(gl) else "<missing>"
        if a != b:
            return ("%s; " % status if status else "") + "want %r got %r" % (a, b)
    return status


def run_case(args, cfg_name, opt, case):
    cfg = CONFIGS[cfg_name]
    work = Path(args.work) / cfg_name / opt / case.stem
    shutil.rmtree(work, ignore_errors=True)
    work.mkdir(parents=True)
    nm, objcopy = tool("llvm-nm"), tool("llvm-objcopy")
    cc = cfg["cc"]
    obj, ref_obj, orig = work / "case.o", work / "case.glob.o", work / "orig"
    rows = []

    def row(fn, outcome, detail=""):
        rows.append({"config": cfg_name, "opt": opt, "case": case.stem, "function": fn, "outcome": outcome, "detail": detail})

    rc, out, err = sh(cc + ["-c", "-" + opt, "-ffunction-sections", "-fdata-sections", "-I", str(case.parent)]
                      + cfg["flags"] + [str(case), "-o", str(obj)])
    if rc != 0:
        row("*", "setup", "case compile: " + first_error(err))
        return rows
    syms = symbols(nm, obj)
    funcs = sorted(n for t, n in syms if t == "W")
    globs = sorted(n for t, n in syms if t in ("b", "d", "r", "s") and IDENT.match(n))
    rc, out, err = sh([objcopy] + ["--globalize-symbol=" + g for g in globs] + [str(obj), str(ref_obj)])
    if rc != 0:
        row("*", "setup", "objcopy: " + first_error(err))
        return rows
    rc, out, err = sh(cc + [str(obj), "-o", str(orig)] + cfg["link"] + ["-lm"])
    if rc != 0:
        row("*", "setup", "case link: " + first_error(err))
        return rows
    if not args.keep_debug:
        sh([objcopy, "--strip-debug", str(orig)])
    image = Elf(orig)
    linkable = set(funcs) | {n for t, n in syms if t in ("T", "D", "B", "R", "W", "V")} | set(globs)
    ref = run_exe(cfg, orig, args.timeout)
    (work / "reference.txt").write_text("exit %s\n%s" % ref)

    proj = work / "proj"
    cmd = args.wrap + [args.unlace, "decompile-project", str(orig), "-o", str(proj),
                       "--functions", ",".join(funcs + ["main"]), "--sleighpath", args.sleighpath]
    for name, value in args.option:
        cmd += ["--option", name, value]
    rc, out, err = sh(cmd, timeout=args.decomp_timeout)
    (work / "decompile.log").write_text(out + err)
    c_file = proj / "orig.c"
    if rc != 0 or not c_file.exists():
        for fn in funcs:
            row(fn, "decomp", "decompile-project: " + first_error(out + err))
        return rows
    chunks = split_project(c_file.read_text())

    for fn in funcs:
        code, rest = chunks.get(fn, ("", "not in the export"))
        alias = [n for n in chunks if n.startswith(fn + ".")]
        if not code and alias:
            row(fn, "nocompile", "exported under the name %s" % alias[0])
            continue
        if not code or "error" in rest:
            row(fn, "decomp", rest.strip())
            continue
        src = work / (fn + ".c")
        src.write_text('#include "orig.h"\n#include "shim.h"\n\n' + code + "\n")
        fobj, exe = work / (fn + ".o"), work / (fn + ".exe")
        rc, out, err = sh(cc + ["-c", "-std=c11", "-" + args.emit_opt, "-fwrapv", "-fno-strict-aliasing", "-w",
                                "-I", str(proj), "-I", str(HERE)] + cfg["flags"] + [str(src), "-o", str(fobj)])
        if rc != 0:
            row(fn, "nocompile", first_error(err.replace(str(work) + "/", "")))
            continue
        extra = []
        rc, out, err = sh([nm, "--undefined-only", str(fobj)])
        wanted = {l.split()[-1] for l in out.splitlines() if l.strip()}
        if any(BY_ADDRESS.match(n) for n in wanted):
            asm, unresolved = resolve_by_address(image, wanted, linkable)
            (work / (fn + ".data.s")).write_text(asm)
            extra = [str(work / (fn + ".data.s"))]
        rc, out, err = sh(cc + [str(ref_obj), str(fobj)] + extra + ["-o", str(exe)] + cfg["link"] + ["-lm"])
        if rc != 0:
            row(fn, "nocompile", "link: " + first_error(err))
            continue
        got = run_exe(cfg, exe, args.timeout)
        (work / (fn + ".out.txt")).write_text("exit %s\n%s" % got)
        row(fn, "pass") if got == ref else row(fn, "wrong", describe_diff(ref, got))
    return rows


OUTCOMES = ("pass", "wrong", "nocompile", "decomp", "setup")


def markdown(rows):
    configs = sorted({(r["config"], r["opt"]) for r in rows})
    index = {(r["case"], r["function"], r["config"], r["opt"]): r["outcome"] for r in rows}
    out = ["| case | function | " + " | ".join("%s %s" % c for c in configs) + " |",
           "|---|---|" + "---|" * len(configs)]
    for case, fn in sorted({(r["case"], r["function"]) for r in rows}):
        out.append("| %s | %s | %s |" % (case, fn, " | ".join(index.get((case, fn, c, o), "") for c, o in configs)))
    out += ["", "| config | " + " | ".join(OUTCOMES) + " |", "|---|" + "---|" * len(OUTCOMES)]
    for c in configs:
        n = [sum(1 for r in rows if (r["config"], r["opt"]) == c and r["outcome"] == k) for k in OUTCOMES]
        out.append("| %s %s | %s |" % (c[0], c[1], " | ".join(map(str, n))))
    return "\n".join(out) + "\n"


BASELINE_HEADER = (
    "# Outcome of every semantic row (\"<config> <opt> <case>.<function>\") on the host named in\n"
    "# notes/semantic-results.md. Written by --save-baseline, read by --baseline.\n"
)


def write_outcomes(path, outcomes):
    """Save {row: outcome} as TOML: one quoted key per row, sorted, so a re-save diffs per row."""
    lines = [BASELINE_HEADER + "[outcomes]"]
    lines += ["%s = %s" % (json.dumps(k), json.dumps(outcomes[k])) for k in sorted(outcomes)]
    Path(path).write_text("\n".join(lines) + "\n")


def read_outcomes(path):
    """The {row: outcome} map a --save-baseline run wrote."""
    with open(path, "rb") as f:
        return tomllib.load(f)["outcomes"]


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--unlace", default=os.environ.get("UNLACE", "unlace"), help="unlace binary (default $UNLACE, else PATH)")
    ap.add_argument("--sleighpath", default=os.environ.get("UNLACE_SPECS", str(REPO / "specs")))
    ap.add_argument("--config", default="x86_64-gcc,aarch64-zig", help="comma list of " + ",".join(CONFIGS))
    ap.add_argument("--opt", default="O0,O2")
    ap.add_argument("--cases", default="", help="comma list of case names (default: all of cases/*.c)")
    ap.add_argument("--option", nargs=2, action="append", default=[], metavar=("NAME", "VALUE"), help="passed to unlace")
    ap.add_argument("--emit-opt", default="O0", help="optimisation level for the emitted C (default O0)")
    ap.add_argument("--work", default=str(HERE / "work"))
    ap.add_argument("--jobs", type=int, default=4)
    ap.add_argument("--timeout", type=int, default=10, help="seconds per executable run")
    ap.add_argument("--decomp-timeout", type=int, default=300)
    ap.add_argument("--wrap", default="", help="command prefix for unlace, e.g. unlace-slot")
    ap.add_argument("--keep-debug", action="store_true", help="keep the reference image's DWARF (zig's compiler_rt carries its own)")
    ap.add_argument("--json", help="write every row as JSON here")
    ap.add_argument("--markdown", help="write the results table here")
    ap.add_argument("--baseline", help="compare with this saved run: exit 1 only when a row it passes no longer passes")
    ap.add_argument("--save-baseline", help="write {row: outcome} for this run here")
    ap.add_argument("--details", action="store_true", help="print the detail of every row that did not pass")
    args = ap.parse_args()
    args.wrap = args.wrap.split()
    cases = sorted((HERE / "cases").glob("*.c"))
    if args.cases:
        want = set(args.cases.split(","))
        cases = [c for c in cases if c.stem in want]
    jobs = [(cfg, opt, case) for cfg in args.config.split(",") for opt in args.opt.split(",") for case in cases]
    for cfg, _, _ in jobs:
        if cfg not in CONFIGS:
            raise SystemExit("unknown config " + cfg)
        if CONFIGS[cfg]["run"] and not shutil.which(CONFIGS[cfg]["run"][0]):
            raise SystemExit("%s needs %s on PATH" % (cfg, CONFIGS[cfg]["run"][0]))
    rows = []
    with concurrent.futures.ThreadPoolExecutor(args.jobs) as pool:
        for result in pool.map(lambda j: run_case(args, *j), jobs):
            rows.extend(result)
    rows.sort(key=lambda r: (r["case"], r["function"], r["config"], r["opt"]))
    table = markdown(rows)
    print(table)
    if args.details:
        for r in rows:
            if r["outcome"] != "pass":
                print("%(config)s %(opt)s %(case)s.%(function)s: %(outcome)s: %(detail)s" % r)
    if args.json:
        Path(args.json).write_text(json.dumps(rows, indent=1) + "\n")
    if args.markdown:
        Path(args.markdown).write_text(table)
    outcomes = {"%(config)s %(opt)s %(case)s.%(function)s" % r: r["outcome"] for r in rows}
    if args.save_baseline:
        write_outcomes(args.save_baseline, outcomes)
    if any(r["outcome"] == "setup" for r in rows):
        return 2
    if args.baseline:
        base = read_outcomes(args.baseline)
        lost = sorted(k for k, v in base.items() if v == "pass" and outcomes.get(k, "pass") != "pass")
        gained = sorted(k for k, v in outcomes.items() if v == "pass" and base.get(k, "pass") != "pass")
        for k in lost:
            print("REGRESSED %s: %s" % (k, outcomes[k]))
        for k in gained:
            print("NEWLY PASSING %s (bless with --save-baseline)" % k)
        return 1 if lost else 0
    return 0 if all(r["outcome"] == "pass" for r in rows) else 1


if __name__ == "__main__":
    sys.exit(main())
