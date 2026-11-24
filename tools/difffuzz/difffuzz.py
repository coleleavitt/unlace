#!/usr/bin/env python3
"""Differential fuzzing of unlace's SLEIGH lifter against Unicorn.

Random instruction encodings that Capstone decodes are packed into a small ELF, lifted with
`unlace raw-pcode --json`, and each lifted instruction is run from the same random register state
through tools/difffuzz/pcode_emu.py and through Unicorn. Registers, flags, the next pc and every
byte written to memory are compared; memory that was never written reads the same deterministic
filler in both. A mismatch, an instruction Capstone decodes but SLEIGH does not, and a length
disagreement are written to a JSON report and summarised by mnemonic.

    python3 tools/difffuzz/difffuzz.py --arch x86-64 --count 2000 --seed 1 --out report.json
"""
import argparse
import collections
import json
import os
import random
import resource
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import unicorn as uc  # noqa: E402

from arches import ARCHES  # noqa: E402
from pcode_emu import State, Unmodeled, step  # noqa: E402
from slaregs import mem_registers, register_map, space_names  # noqa: E402
import qemu_backend  # noqa: E402
import gdbsim_backend  # noqa: E402
import rvv_backend  # noqa: E402
import llvmgen  # noqa: E402

PAGE = 0x1000


def fill_byte(addr, seed):
    x = (addr * 0x9E3779B97F4A7C15 + seed * 0xC2B2AE3D27D4EB4F) & 0xFFFFFFFFFFFFFFFF
    x ^= x >> 29
    return (x * 0xBF58476D1CE4E5B9 >> 56) & 0xFF


def make_elf(code, arch):
    e = ">" if arch.big else "<"
    ident = b"\x7fELF" + bytes([2 if arch.elf64 else 1, 2 if arch.big else 1, 1, 0]) + b"\0" * 8
    off = PAGE
    if arch.elf64:
        hdr = ident + struct.pack(e + "HHIQQQIHHHHHH", 2, arch.elf_machine, 1, arch.base, 64, 0, 0, 64, 56, 1, 64, 0, 0)
        ph = struct.pack(e + "IIQQQQQQ", 1, 5, off, arch.base, arch.base, len(code), len(code), PAGE)
    else:
        hdr = ident + struct.pack(e + "HHIIIIIHHHHHH", 2, arch.elf_machine, 1, arch.base, 52, 0, 0, 52, 32, 1, 40, 0, 0)
        ph = struct.pack(e + "IIIIIIII", 1, off, arch.base, arch.base, len(code), len(code), 5, PAGE)
    img = hdr + ph
    return img + b"\0" * (off - len(img)) + code


def lift(unlace, arch, cands, tmp, sleighpath=None):
    """{address: raw-pcode row} for the candidates, plus per-candidate lift problems."""
    # an architecture with lift_align places every candidate on that boundary, padded with lift_pad
    align, pad = getattr(arch, "lift_align", 1), getattr(arch, "lift_pad", b"")
    code = b""
    addrs = []
    a = arch.base
    for c in cands:
        while align > 1 and a % align:
            code += pad
            a += len(pad)
        c["addr"] = a
        addrs.append(a)
        code += c["bytes"]
        a += len(c["bytes"])
    end = a
    elf = os.path.join(tmp, "batch.elf")
    Path(elf).write_bytes(make_elf(code, arch))
    rows, problems = {}, {}
    idx = {x: i for i, x in enumerate(addrs)}
    start = arch.base
    while start < end:
        cmd = [unlace, "raw-pcode", elf, f"{start:#x}-{end:#x}", "--json", "--target", arch.lang, *arch.lift_args]
        if sleighpath:
            cmd += ["--sleighpath", sleighpath]
        p = subprocess.run(cmd,
                           capture_output=True, text=True)
        try:
            doc = json.loads(p.stdout)
        except json.JSONDecodeError:
            problems[start] = ("unlace-error", p.stderr.strip()[:300])
            nxt = [x for x in addrs if x > start]
            start = nxt[0] if nxt else end
            continue
        resume = end
        for r in doc.get("instructions", []):
            at = r["address"]
            if at not in idx:
                resume = next((x for x in addrs if x > at), end)
                break
            c = cands[idx[at]]
            if r["size"] != len(c["bytes"]):
                problems[at] = ("length", f"sleigh {r['size']} bytes ({r['mnemonic']} {r['operands']}), capstone {len(c['bytes'])}")
                resume = next((x for x in addrs if x > at), end)
                break
            rows[at] = r
        else:
            err = doc.get("error")
            if err:
                at = err["address"]
                problems[at] = ("decode", err.get("message", ""))
                resume = next((x for x in addrs if x > at), end)
        start = resume
    return rows, problems


class Mapper:
    def __init__(self, emu, seed):
        self.emu, self.seed, self.pages = emu, seed, set()
        try:
            self.size = max(PAGE, emu.ctl_get_page_size())
        except (AttributeError, uc.UcError):
            self.size = PAGE

    def mapped(self, addr):
        return (addr & ~(self.size - 1)) in self.pages

    def ensure(self, addr, size):
        ps = self.size
        for pg in range(addr & ~(ps - 1), (addr + max(size, 1) + ps - 1) & ~(ps - 1), ps):
            pg &= 0xFFFFFFFFFFFFFFFF
            if pg in self.pages:
                continue
            self.emu.mem_map(pg, ps)
            self.emu.mem_write(pg, bytes(fill_byte(pg + i, self.seed) for i in range(ps)))
            self.pages.add(pg)


def run_case(arch, regs, row, cand, rng, seed):
    addr, size = cand["addr"], len(cand["bytes"])
    bits = 64 if arch.elf64 else 32
    init = {n: arch.rand_reg(rng, bits) for n, _ in arch.gprs}
    arch.fix_inputs(init, rng)
    init_vec = {n: rng.getrandbits(8 * 16) for n, _ in arch.vecs}
    flags = rng.getrandbits(32)
    big = arch.big

    emu = arch.unicorn()
    arch.setup(emu)
    mp = Mapper(emu, seed)
    mp.ensure(addr, size)
    emu.mem_write(addr, cand["bytes"])
    words = []
    for k, fields, fixed in arch.flag_words():
        word = emu.reg_read(k)
        for n, (sh, wd) in fields.items():
            word = (word & ~(((1 << wd) - 1) << sh)) | (((flags >> sh) & ((1 << wd) - 1)) << sh)
        word = fixed(word)
        arch.write_flags(emu, k, word)
        words.append((fields, word))
    for n, k in arch.gprs:
        emu.reg_write(k, init[n])
    for n, k in arch.vecs:
        emu.reg_write(k, init_vec[n] & ((1 << (8 * regs[n][1])) - 1) if n in regs and regs[n][1] < 16 else init_vec[n])
    uwrites = {}

    def on_unmapped(u, access, a, sz, val, data):
        try:
            mp.ensure(a, sz)
            return True
        except uc.UcError:
            return False

    def on_write(u, access, a, sz, val, data):
        uwrites[a] = sz
    emu.hook_add(uc.UC_HOOK_MEM_READ_UNMAPPED | uc.UC_HOOK_MEM_WRITE_UNMAPPED | uc.UC_HOOK_MEM_FETCH_UNMAPPED, on_unmapped)
    emu.hook_add(uc.UC_HOOK_MEM_WRITE, on_write)
    pc_k = arch.pc_const
    emu.reg_write(pc_k, addr)
    try:
        emu.emu_start(arch.start_addr(addr), arch.until, count=1)
    except uc.UcError as e:
        return {"status": "ref-exception", "why": str(e)}

    st = State(big, lambda a: fill_byte(a, seed), regs)
    if hasattr(arch, "callother_fn"):
        st.callother = lambda op: arch.callother_fn(op, st)
    for i, b in enumerate(cand["bytes"]):
        st.mem[addr + i] = b
    for n, _ in arch.gprs:
        st.set(n, init[n])
    for n, _ in arch.vecs:
        if n in regs:
            st.set(n, init_vec[n] & ((1 << (8 * regs[n][1])) - 1))
    for fields, word in words:
        for n, (sh, wd) in fields.items():
            reg, off = arch.sleigh_field(n, sh, wd)
            cur = st.get(reg) & ~(((1 << wd) - 1) << off)
            st.set(reg, cur | (((word >> sh) & ((1 << wd) - 1)) << off))
    if arch.pc in regs:
        st.set(arch.pc, addr)
    try:
        nxt = step(st, row["ops"], addr, size)
    except Unmodeled as e:
        return {"status": "unmodeled", "why": str(e)}
    if not all(arch.addr_ok(a) and arch.addr_ok(a + s - 1) for a, s in st.accesses):
        return {"status": "bad-address"}

    ignore = arch.ignored(cand["mnemonic"], cand["op_str"], st)
    if "*" in ignore:
        return {"status": "undefined"}
    diffs = {}
    for n, k in arch.gprs + arch.vecs:
        if n in ignore or n not in regs:
            continue
        w = (1 << (8 * regs[n][1])) - 1
        a, b = arch.normalize(n, st.get(n) & w, emu.reg_read(k) & w)
        if a != b:
            diffs[n] = (a, b)
    for k, fields, _ in arch.flag_words():
        fv = arch.read_flags(emu, k)
        for n, (sh, wd) in fields.items():
            if n in ignore:
                continue
            reg, off = arch.sleigh_field(n, sh, wd)
            a, r = (st.get(reg) >> off) & ((1 << wd) - 1), (fv >> sh) & ((1 << wd) - 1)
            if a != r:
                diffs[n] = (a, r)
    upc = arch.read_pc(emu) if hasattr(arch, "read_pc") else emu.reg_read(pc_k)
    if nxt & ((1 << bits) - 1) != upc:
        diffs["pc"] = (nxt, upc)
    touched = set(st.writes)
    for a, sz in uwrites.items():
        touched.update(range(a, a + sz))
    for a in sorted(touched):
        pv = st.mem.get(a, fill_byte(a, seed))
        rv = emu.mem_read(a, 1)[0] if mp.mapped(a) else fill_byte(a, seed)
        if pv != rv:
            diffs[f"mem[{a:#x}]"] = (pv, rv)
    if not diffs:
        return {"status": "match"}
    if st.skipped_callother and all(k.startswith("mem[") for k in diffs):
        return {"status": "unmodeled", "why": "CALLOTHER side effect"}
    return {"status": "mismatch", "diffs": {k: [hex(x), hex(y)] for k, (x, y) in diffs.items()},
            "input": {k: hex(v) for k, v in init.items()}, "flags_in": hex(flags),
            "vec_in": {k: hex(v) for k, v in init_vec.items()}}


def generate(arch, rng, n):
    dis = arch.capstone()
    out, seen = [], set()
    tries = 0
    while len(out) < n and tries < n * 200:
        tries += 1
        raw = arch.gen(rng)
        ins = next(dis.disasm(raw, arch.base), None)
        if ins is None:
            continue
        b = bytes(ins.bytes)
        if b in seen or arch.deny.match(ins.mnemonic):
            continue
        seen.add(b)
        cand = {"bytes": b, "mnemonic": ins.mnemonic, "op_str": ins.op_str}
        if arch.canonical(cand):
            out.append(cand)
    return out


def main():
    resource.setrlimit(resource.RLIMIT_CORE, (0, 0))
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--arch", required=True, choices=sorted(ARCHES) + ["riscv64v"],
                    help="riscv64v: RISC-V vector instructions against QEMU (tools/difffuzz/rvv_backend.py)")
    ap.add_argument("--vlen", type=int, default=128, help="riscv64v: QEMU's VLEN in bits (128..256)")
    ap.add_argument("--objdump", default="llvm-objdump", help="riscv64v: an llvm-objdump with the RISC-V vector extensions")
    ap.add_argument("--only", help="riscv64v, --llvm-mattr: a regex the mnemonic must match")
    ap.add_argument("--lang", help="lift with this SLEIGH language id instead of the architecture's (RISCV:LE:64:Zcmp)")
    ap.add_argument("--qemu-cpu", help="--oracle qemu: the -cpu value (riscv64 Zcmp: rv64,zcd=false,zcmp=true,zcmt=true)")
    ap.add_argument("--llvm-mattr", help="riscv64: generate the words llvm-objdump (--objdump) decodes with this -mattr "
                    "instead of the ones Capstone decodes (for extensions Capstone does not know)")
    ap.add_argument("--count", type=int, default=1000, help="instructions to generate")
    ap.add_argument("--trials", type=int, default=3, help="random input states per instruction")
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--batch", type=int, default=400)
    ap.add_argument("--unlace", default=os.environ.get("UNLACE", "unlace"))
    ap.add_argument("--sleighpath", help="SLEIGH tree holding freshly compiled .sla files (unlace --sleighpath)")
    ap.add_argument("--out", help="JSON report path")
    ap.add_argument("--bytes", help="hex encodings to test instead of random ones, comma separated")
    ap.add_argument("--oracle", choices=("unicorn", "qemu", "native", "gdbsim"), default="unicorn",
                    help="reference: Unicorn (default), QEMU user mode (tools/difffuzz/qemu_backend.py), or "
                         "this CPU (native, --arch x86-64-native), or gdb's simulator (gdbsim, tools/difffuzz/gdbsim_backend.py)")
    args = ap.parse_args()
    if args.oracle == "native":
        if args.arch not in ("x86-64-native", "x86-64-x87", "x86-32-native"):
            sys.exit("--oracle native needs --arch x86-64-native, x86-64-x87 or x86-32-native")
        args.oracle = "qemu"
    vector = args.arch == "riscv64v"
    arch = ARCHES["riscv64" if vector else args.arch]
    if vector and args.oracle != "qemu":
        sys.exit("--arch riscv64v needs --oracle qemu")
    if args.oracle == "qemu" and not qemu_backend.available(arch):
        sys.exit(f"--oracle qemu: no QEMU user harness or binary for {arch.name}")
    if args.oracle == "gdbsim" and not gdbsim_backend.available(arch):
        sys.exit(f"--oracle gdbsim: no simulator wiring for {arch.name} or no gdb ($DIFFFUZZ_GDB)")
    if args.lang:
        arch.lang = args.lang
    if args.qemu_cpu:
        qemu_backend.CPU_OVERRIDE = args.qemu_cpu
    regs, big = register_map(arch.lang)
    arch.big = big
    State.space_ids = space_names(arch.lang)
    if getattr(arch, "mem_registers", False):
        mregs = {n: v for n, v in mem_registers(arch.lang).items() if n not in regs}
        regs.update(mregs)
        State.mem_names = frozenset(mregs)
    rng = random.Random(args.seed)
    if args.bytes:
        dis = arch.capstone()
        cands = []
        for h in args.bytes.split(","):
            b = bytes.fromhex(h)
            ins = next(dis.disasm(b, arch.base), None)
            cands.append({"bytes": b, "mnemonic": ins.mnemonic if ins else "?", "op_str": ins.op_str if ins else ""})
    elif vector:
        cands = rvv_backend.generate(rng, args.count, args.objdump, args.only)
    elif args.llvm_mattr:
        cands = llvmgen.generate(rng, args.count, args.objdump, args.llvm_mattr, args.only, 64 if arch.elf64 else 32)
    else:
        cands = generate(arch, rng, args.count)
    if hasattr(arch, "order"):
        cands = arch.order(cands)
    dis = arch.capstone()
    counts = collections.Counter()
    findings = []
    unmodeled = collections.Counter()
    refexc = collections.Counter()
    with tempfile.TemporaryDirectory() as tmp:
        for i in range(0, len(cands), args.batch):
            batch = cands[i:i + args.batch]
            rows, problems = lift(args.unlace, arch, batch, tmp, args.sleighpath)
            if vector:
                rvv_backend.lift_variants(args.unlace, arch, batch, tmp, args.seed, args.sleighpath)
            for c in batch:
                if c["addr"] in problems:
                    kind, why = problems[c["addr"]]
                    kind = arch.classify_decode(c["bytes"], kind)
                    counts[kind] += 1
                    findings.append({"kind": kind, "bytes": c["bytes"].hex(), "capstone": f"{c['mnemonic']} {c['op_str']}", "why": why})
                    continue
                row = rows.get(c["addr"])
                if arch.skip(c):
                    counts["skipped"] += 1
                    continue
                if row is None:
                    counts["not-lifted"] += 1
                    continue
                at = None if vector or args.llvm_mattr else next(dis.disasm(c["bytes"], c["addr"]), None)
                cap_ops = at.op_str if at else c["op_str"]
                why = None if vector or args.llvm_mattr else arch.operand_mismatch(cap_ops, row["operands"]) if c["mnemonic"] == row["mnemonic"].lower() else None
                if why:
                    counts["operand"] += 1
                    findings.append({"kind": "operand", "bytes": c["bytes"].hex(), "capstone": f"{c['mnemonic']} {c['op_str']}",
                                     "sleigh": f"{row['mnemonic']} {row['operands']}", "why": why})
                for t in range(args.trials):
                    case_rng = random.Random(f"{args.seed}:{c['bytes'].hex()}:{t}")
                    if vector:
                        res = rvv_backend.run_case_rvv(arch, regs, row, c, case_rng, args.seed + t, tmp, args.vlen)
                    elif args.oracle == "qemu":
                        res = qemu_backend.run_case_qemu(arch, regs, row, c, case_rng, args.seed + t, tmp)
                    elif args.oracle == "gdbsim":
                        res = gdbsim_backend.run_case_gdbsim(arch, regs, row, c, case_rng, args.seed + t, tmp)
                    else:
                        res = run_case(arch, regs, row, c, case_rng, args.seed + t)
                    counts[res["status"]] += 1
                    if vector and res["status"] == "bad-address":
                        refexc[c["mnemonic"] + ": bad-address"] += 1
                    if res["status"] == "ref-exception":
                        refexc[c["mnemonic"] + ": " + res["why"]] += 1
                        break
                    if res["status"] == "unmodeled":
                        unmodeled[c["mnemonic"] + ": " + res["why"]] += 1
                        break
                    if res["status"] == "mismatch":
                        findings.append({"kind": "mismatch", "bytes": c["bytes"].hex(), "capstone": f"{c['mnemonic']} {c['op_str']}",
                                         "sleigh": f"{row['mnemonic']} {row['operands']}", "addr": hex(c["addr"]), **res})
                        break
    by_mn = collections.Counter(f["capstone"].split()[0] + " [" + f["kind"] + "]" for f in findings)
    summary = {"arch": arch.name, "lang": arch.lang, "instructions": len(cands), "outcomes": dict(counts),
               "findings_by_mnemonic": dict(by_mn.most_common()), "unmodeled": dict(unmodeled.most_common(40)),
               "reference_exceptions": dict(refexc.most_common(20))}
    print(json.dumps(summary, indent=1))
    if args.out:
        Path(args.out).write_text(json.dumps({"summary": summary, "findings": findings}, indent=1))


if __name__ == "__main__":
    main()
