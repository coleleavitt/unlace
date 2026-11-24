"""QEMU user-mode reference for the RISC-V vector extension (RVV 1.0 and the vector crypto and
bit-manipulation extensions), with vl and vtype set up before each instruction.

The vector spec lifts every instruction to a user operation, so a run cannot compare element
values. What it can check is the data flow the decompiler relies on:

- every register or CSR byte QEMU changes is one the p-code writes (missing-output otherwise);
- a byte the p-code writes from known values, not through a user operation, has QEMU's value
  (mismatch); which bytes depend on a user operation is found by running the p-code twice with
  different user-operation results;
- a byte the p-code writes through a user operation does not change in QEMU when every register
  the p-code does not read is given other random contents (missing-input otherwise). vl, vtype,
  vxrm, frm and vstart stay fixed: the spec leaves them implicit.
- memory QEMU writes is written by the p-code or by an outputless user operation (a store).

Each case runs a static ELF like qemu_backend's: a prologue loads v0..v31 with whole-register
loads, sets vl and vtype with vsetvl from the case's random AVL and a random legal vtype, sets
vxrm and fcsr, loads f0..f31 and x1..x31 and jumps to the instruction; the epilogue stores them
all back with the CSRs and write(2)s the table and the data pages. QEMU runs with
rvv_ta_all_1s/rvv_ma_all_1s, so an agnostic tail or masked-off element is all ones and only an
undisturbed policy (vta=0/vma=0, chosen at random) can read the old destination.
"""
import json
import os
import random
import re
import struct
import subprocess

import sys
from pathlib import Path

import qemu_backend as qb

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from pcode_emu import State, Unmodeled, step

PAGE = qb.PAGE
PROLOGUE, TABLES, OUT = qb.PROLOGUE, qb.TABLES, qb.OUT
DATA = 0x500000
DATA_PAGES = 16
VTAB = 1024
CSRS = [("vl", 0xC20), ("vtype", 0xC21), ("vxsat", 0x009), ("vxrm", 0x00A), ("fcsr", 0x003), ("vstart", 0x008)]
CSR_OUT = 544
MARKER = 592
TABLE_SIZE = VTAB + 32 * 32
IMPLICIT_CSRS = {0xC20, 0xC21, 0x00A, 0x002, 0x008}


def rv_csrr(rd, csr):
    return (csr << 20) | (2 << 12) | (rd << 7) | 0x73


def rv_csrw(csr, rs):
    return (csr << 20) | (rs << 15) | (1 << 12) | 0x73


def vsetvl(rd, rs1, rs2):
    return 0x80000000 | (rs2 << 20) | (rs1 << 15) | (7 << 12) | (rd << 7) | 0x57


def vl1re8(vd, rs1):
    return 0x02800007 | (rs1 << 15) | (vd << 7)


def vs1r(vs3, rs1):
    return 0x02800027 | (rs1 << 15) | (vs3 << 7)


def random_vtype(rng):
    """A legal vtype (ELEN 64): SEW 8..64, LMUL mf8..m8 with SEW <= LMUL * ELEN, random policy."""
    while True:
        sew = rng.randrange(4)
        lmul = rng.choice([0, 1, 2, 3, 5, 6, 7])
        if lmul >= 5 and 8 << sew > 64 >> (8 - lmul):
            continue
        return (rng.getrandbits(1) << 7) | (rng.getrandbits(1) << 6) | (sew << 3) | lmul


class RvvHarness:
    def __init__(self, vlen):
        self.vlenb = vlen // 8
        self.qemu = ("qemu-riscv64", ["-cpu", f"max,v=true,vlen={vlen},elen=64,rvv_ta_all_1s=true,rvv_ma_all_1s=true"])
        self.scratch = 31

    def temps(self):
        return [r for r in (5, 6, 7) if r != self.scratch]

    def prologue(self, target):
        s = self.scratch
        t, u = self.temps()[:2]
        c = qb.rv_li32(s, TABLES)
        c += [qb.rv_i(0x13, t, 0, 0, 8), 0x0C007057 | (t << 15)]           # li t,8; vsetvli x0,t,e8,m1
        for i in range(32):
            c += [qb.rv_i(0x13, t, 0, s, VTAB + 32 * i), vl1re8(i, t)]
        c += [qb.rv_i(0x03, t, 3, s, 512), qb.rv_i(0x03, u, 3, s, 520), vsetvl(0, u, t)]
        c += [qb.rv_i(0x03, t, 3, s, 528), rv_csrw(0x00A, t), qb.rv_i(0x03, t, 3, s, 536), rv_csrw(0x003, t)]
        for i in range(32):
            c.append(qb.rv_i(0x07, i, 3, s, 256 + 8 * i))
        for i in range(1, 32):
            if i != s:
                c.append(qb.rv_i(0x03, i, 3, s, 8 * i))
        c.append(qb.rv_i(0x03, s, 3, s, 8 * s))
        c.append(qb.rv_j(target, PROLOGUE + 4 * len(c)))
        return qb.words(c)

    def epilogue(self, dumps, marker):
        s = self.scratch
        t = self.temps()[0]
        c = qb.rv_li32(s, OUT)
        for i in range(1, 32):
            if i != s:
                c.append(qb.rv_s(0x23, 3, s, i, 8 * i))
        for i in range(32):
            c.append(qb.rv_s(0x27, 3, s, i, 256 + 8 * i))
        for k, (_, csr) in enumerate(CSRS):
            c += [rv_csrr(t, csr), qb.rv_s(0x23, 3, s, t, CSR_OUT + 8 * k)]
        for i in range(32):
            c += [qb.rv_i(0x13, t, 0, s, VTAB + 32 * i), vs1r(i, t)]
        c += qb.rv_li32(t, marker) + [qb.rv_s(0x23, 3, s, t, MARKER)]
        for base, size in [(OUT, TABLE_SIZE)] + [(p, PAGE) for p in dumps]:
            c += [qb.rv_i(0x13, 10, 0, 0, 1)] + qb.rv_li32(11, base) + qb.rv_li32(12, size) + [qb.rv_i(0x13, 17, 0, 0, 64), 0x73]
        c += [qb.rv_i(0x13, 10, 0, 0, 0), qb.rv_i(0x13, 17, 0, 0, 93), 0x73]
        return qb.words(c)


def table(arch, st):
    t = bytearray(TABLE_SIZE)
    for i, (n, _) in enumerate(arch.gprs, start=1):
        struct.pack_into("<Q", t, 8 * i, st["x"][n])
    for i, (n, _) in enumerate(arch.vecs):
        struct.pack_into("<Q", t, 256 + 8 * i, st["f"][n])
    struct.pack_into("<QQQQ", t, 512, st["vtype"], st["avl"], st["vxrm"], st["fcsr"])
    for i in range(32):
        t[VTAB + 32 * i:VTAB + 32 * i + 32] = st["v"][i].to_bytes(32, "little")
    return bytes(t)


def parse(arch, out, vlenb):
    r = {}
    for i, (n, _) in enumerate(arch.gprs, start=1):
        r[n] = struct.unpack_from("<Q", out, 8 * i)[0]
    for i, (n, _) in enumerate(arch.vecs):
        r[n] = struct.unpack_from("<Q", out, 256 + 8 * i)[0]
    for k, (n, _) in enumerate(CSRS):
        r["csr:" + n] = struct.unpack_from("<Q", out, CSR_OUT + 8 * k)[0]
    for i in range(32):
        r[f"v{i}"] = int.from_bytes(out[VTAB + 32 * i:VTAB + 32 * i + vlenb], "little")
    return r


def random_state(arch, rng, vlenb):
    def gpr():
        k = rng.random()
        if k < 0.5:
            return DATA + rng.randrange(0x2000, 0xC000, 64)
        if k < 0.75:
            return rng.choice([0, 1, 2, 3, 4, 8, 16, 0xFF, 2 ** 64 - 1])
        return rng.getrandbits(64)
    return {"x": {n: gpr() for n, _ in arch.gprs},
            "f": {n: rng.getrandbits(64) for n, _ in arch.vecs},
            "v": [rng.getrandbits(8 * vlenb) for _ in range(32)],
            "vtype": random_vtype(rng), "avl": rng.choice([0, 1, 2, 3, 5, 8, 17, 64, 1000, rng.getrandbits(8)]),
            "vxrm": rng.getrandbits(2), "fcsr": rng.getrandbits(3) << 5}


def vlmax(vtype, vlenb):
    sew = 8 << ((vtype >> 3) & 7)
    lm = vtype & 7
    bits = 8 * vlenb
    return (bits << lm) // sew if lm < 4 else (bits >> (8 - lm)) // sew


def run_qemu(arch, h, cand, st, exits_mem, data_pages, tmp, seed):
    tables = bytearray(PAGE)
    tables[:TABLE_SIZE] = table(arch, st)
    segs = [(PROLOGUE, h.prologue(cand["addr"]), 5), (TABLES, bytes(tables), 6)]
    segs += exits_mem
    segs += [(p, bytes(qb.fill_byte(p + i, seed) for i in range(PAGE)), 6) for p in data_pages]
    segs.sort()
    path = os.path.join(tmp, "rvv-case.elf")
    with open(path, "wb") as f:
        f.write(qb.elf(segs, PROLOGUE, 243))
    os.chmod(path, 0o755)
    try:
        p = subprocess.run([h.qemu[0], *h.qemu[1], path], capture_output=True, timeout=10)
    except subprocess.TimeoutExpired:
        return None, "qemu timeout"
    if p.returncode != 0 or len(p.stdout) != TABLE_SIZE + PAGE * len(data_pages):
        why = p.stderr.decode(errors="replace").strip().splitlines()
        return None, "qemu " + (why[0][:60] if why else "exit %s" % p.returncode)
    return p.stdout, None


def reg_bytes(ops, space):
    """(read, written) byte offsets of a space, over every op's inputs and output."""
    rd, wr = set(), set()
    for o in ops:
        for v in o["inputs"][1 if o["opcode"] == "CALLOTHER" else 0:]:
            if v["space"] == space:
                rd.update(range(v["offset"], v["offset"] + v["size"]))
        out = o.get("output")
        if out and out["space"] == space:
            wr.update(range(out["offset"], out["offset"] + out["size"]))
    return rd, wr


def variant_vtypes(cand, seed):
    """The vtypes a candidate is lifted and run at: a random legal one, then LMUL 1 at each SEW,
    as QEMU raises SIGILL for a register group, SEW or EEW the instruction does not allow."""
    rng = random.Random("%s:vtype:%s" % (seed, cand["bytes"].hex()))
    return [random_vtype(rng)] + [(s << 3) | (rng.getrandbits(2) << 6) for s in range(4)]


def vsetvli_x0(vtype):
    return ((vtype & 0x7FF) << 20) | (7 << 12) | 0x57


def lift_variants(unlace, arch, cands, tmp, seed, sleighpath=None):
    """Each candidate after a vsetvli x0, x0 of each of its vtypes, so the decoder sees the vtype
    as context: cand["variants"] = [(vtype, address, row or None)]."""
    from difffuzz import make_elf
    code, plan = b"", []
    a = arch.base
    for c in cands:
        c["variants"] = []
        for vt in variant_vtypes(c, seed):
            code += struct.pack("<I", vsetvli_x0(vt)) + c["bytes"]
            plan.append((c, vt, a + 4))
            a += 4 + len(c["bytes"])
    elf = os.path.join(tmp, "rvv-batch.elf")
    Path(elf).write_bytes(make_elf(code, arch))
    cmd = [unlace, "raw-pcode", elf, "%#x-%#x" % (arch.base, a), "--json", "--target", arch.lang]
    if sleighpath:
        cmd += ["--sleighpath", sleighpath]
    rows = {}
    start = arch.base
    while start < a:
        cmd[3] = "%#x-%#x" % (start, a)
        p = subprocess.run(cmd, capture_output=True, text=True)
        try:
            doc = json.loads(p.stdout)
        except json.JSONDecodeError:
            break
        for r in doc.get("instructions", []):
            rows[r["address"]] = r
        err = doc.get("error")
        if not err:
            break
        # resume at the next pair after a decode failure
        nxt = [x - 4 for _, _, x in plan if x - 4 > err["address"]]
        if not nxt:
            break
        start = nxt[0]
    for c, vt, at in plan:
        r = rows.get(at)
        c["variants"].append((vt, at, r if r and r["size"] == len(c["bytes"]) else None))


def run_case_rvv(arch, regs, row, cand, rng, seed, tmp, vlen):
    """The first variant QEMU does not reject with SIGILL."""
    res = {"status": "not-lifted"}
    for vt, at, r in cand["variants"]:
        if r is None:
            continue
        c = dict(cand, addr=at)
        res = run_case_vtype(arch, regs, r, c, rng, seed, tmp, vlen, vt)
        if res["status"] != "ref-exception" or "-4" not in res["why"]:
            return res
    return res


def run_case_vtype(arch, regs, row, cand, rng, seed, tmp, vlen, vtype):
    vlenb = vlen // 8
    ops = row["ops"]
    addr, size = cand["addr"], len(cand["bytes"])
    h = RvvHarness(vlen)
    rregs, wregs = reg_bytes(ops, "register")
    _, wcsr = reg_bytes(ops, "csreg")
    for r in range(31, 1, -1):
        n = arch.gprs[r - 1][0]
        o, s = regs[n]
        if not set(range(o, o + s)) & (wregs | rregs) and r not in (5, 6, 7):
            h.scratch = r
            break
    st0 = random_state(arch, rng, vlenb)
    if vtype is not None:
        st0["vtype"] = vtype
    st0["x"][arch.gprs[h.scratch - 1][0]] = 0

    def pcode(st, salt):
        s = State(False, lambda a: qb.fill_byte(a, seed), regs)
        for i, b in enumerate(cand["bytes"]):
            s.mem[addr + i] = b
        for n, _ in arch.gprs:
            s.set(n, st["x"][n])
        for n, _ in arch.vecs:
            s.set(n, st["f"][n])
        for i in range(32):
            s.set(f"v{i}", st["v"][i])
        vl = min(st["avl"], vlmax(st["vtype"], vlenb))
        for name, csr in CSRS:
            v = {"vl": vl, "vtype": st["vtype"], "vxrm": st["vxrm"], "fcsr": st["fcsr"]}.get(name, 0)
            s.write("csreg", 8 * csr, 8, v)
        s.write("csreg", 8 * 0x002, 8, st["fcsr"] >> 5)
        s.write("csreg", 8 * 0xC22, 8, vlenb)
        crng = random.Random(seed)
        flip = (lambda n: (1 << n) - 1) if salt == 2 else (lambda n: 0)
        s.callother = lambda op: crng.getrandbits(8 * op["output"]["size"]) ^ flip(8 * op["output"]["size"])
        if arch.pc in regs:
            s.set(arch.pc, addr)
        nxt = step(s, ops, addr, size)
        return s, nxt
    try:
        a, nxt = pcode(st0, 1)
        b, _ = pcode(st0, 2)
    except Unmodeled as e:
        return {"status": "unmodeled", "why": str(e)}
    epi_at = addr + size
    target = nxt & (2 ** 64 - 1)
    if target != epi_at:
        return {"status": "unmodeled", "why": "branch"}
    code_pages = sorted({p for p in range(addr & ~(PAGE - 1), (epi_at + 0x800 + PAGE - 1) & ~(PAGE - 1), PAGE)})
    data_pages = [DATA + PAGE * i for i in range(DATA_PAGES)]
    if not all(DATA <= x and x + n <= DATA + PAGE * DATA_PAGES or addr <= x < epi_at for x, n in a.accesses):
        return {"status": "bad-address", "why": "p-code access outside the data region"}
    mem = {}
    for p in code_pages:
        for i in range(PAGE):
            mem[p + i] = qb.fill_byte(p + i, seed)
    for i, x in enumerate(cand["bytes"]):
        mem[addr + i] = x
    for i, x in enumerate(h.epilogue(data_pages, 0x5EA1)):
        mem[epi_at + i] = x
    lo, hi = code_pages[0], code_pages[-1] + PAGE
    exits_mem = [(lo, bytes(mem[x] for x in range(lo, hi)), 7)]
    out1, why = run_qemu(arch, h, cand, st0, exits_mem, data_pages, tmp, seed)
    if out1 is None:
        return {"status": "ref-exception", "why": why}
    ref = parse(arch, out1[:TABLE_SIZE], vlenb)
    ref[arch.gprs[h.scratch - 1][0]] = 0

    findings = {}
    opaque_names = set()
    names = [(n, regs[n]) for n, _ in arch.gprs + arch.vecs] + [(f"v{i}", (regs[f"v{i}"][0], vlenb)) for i in range(32)]
    for n, (off, sz) in names:
        got = ref[n]
        wa = a.read("register", off, sz)
        wb = b.read("register", off, sz)
        written = set(range(off, off + sz)) & wregs
        for k in range(sz):
            mk = 0xFF << (8 * k)
            if off + k not in written:
                if (got ^ init_value(st0, n, arch)) & mk:
                    findings.setdefault("missing-output", set()).add(n)
            elif (wa ^ wb) & mk:
                opaque_names.add(n)
            elif (wa ^ got) & mk:
                findings.setdefault("mismatch", set()).add(n)
    vl = min(st0["avl"], vlmax(st0["vtype"], vlenb))
    init_csr = {"vl": vl, "vtype": st0["vtype"], "vxrm": st0["vxrm"], "fcsr": st0["fcsr"], "vxsat": 0, "vstart": 0}
    for name, csr in CSRS:
        got = ref["csr:" + name]
        if 8 * csr in wcsr or (name == "fcsr" and 8 in wcsr):
            if a.read("csreg", 8 * csr, 8) == b.read("csreg", 8 * csr, 8) and a.read("csreg", 8 * csr, 8) != got:
                findings.setdefault("mismatch", set()).add(name)
        elif got != init_csr[name]:
            findings.setdefault("missing-output", set()).add(name)
    pos = TABLE_SIZE
    for pg in data_pages:
        blob = out1[pos:pos + PAGE]
        pos += PAGE
        for i in range(PAGE):
            x = pg + i
            if blob[i] != qb.fill_byte(x, seed) and x not in a.writes and not a.skipped_callother:
                findings.setdefault("missing-output", set()).add("mem")
                break
    if opaque_names:
        st1 = random_state(arch, random.Random(f"{seed}:perturb:{cand['bytes'].hex()}"), vlenb)
        for key in ("vtype", "avl", "vxrm", "fcsr"):
            st1[key] = st0[key]
        st1["x"][arch.gprs[h.scratch - 1][0]] = 0
        for n, _ in arch.gprs:
            o, s = regs[n]
            if set(range(o, o + s)) & rregs:
                st1["x"][n] = st0["x"][n]
        for n, _ in arch.vecs:
            o, s = regs[n]
            if set(range(o, o + s)) & rregs:
                st1["f"][n] = st0["f"][n]
        for i in range(32):
            o, _ = regs[f"v{i}"]
            if set(range(o, o + vlenb)) & rregs:
                st1["v"][i] = st0["v"][i]
        out2, why = run_qemu(arch, h, cand, st1, exits_mem, data_pages, tmp, seed)
        if out2 is not None:
            ref2 = parse(arch, out2[:TABLE_SIZE], vlenb)
            if any(ref2[n] != ref[n] for n in opaque_names):
                pol = "tu" if not st0["vtype"] >> 6 & 1 else "ta"
                pol += "/mu" if not st0["vtype"] >> 7 & 1 else "/ma"
                findings.setdefault("missing-input", set()).add(pol)
    if not findings:
        return {"status": "match"}
    lm = st0["vtype"] & 7
    return {"status": "mismatch", "diffs": {k: sorted(v) for k, v in findings.items()},
            "vtype": hex(st0["vtype"]), "lmul": ["m1", "m2", "m4", "m8", "?", "mf8", "mf4", "mf2"][lm],
            "vl": vl, "input": {k: hex(v) for k, v in st0["x"].items()}}


def init_value(st, n, arch):
    if n in st["x"]:
        return st["x"][n]
    if n in st["f"]:
        return st["f"][n]
    return st["v"][int(n[1:])]


def llvm_decode(objdump, words, mattr):
    """{word: (mnemonic, operands)} for the words llvm-objdump decodes."""
    import tempfile
    from sail_sleigh_compare import BASE, elf as section_elf
    with tempfile.NamedTemporaryFile(suffix=".elf") as f:
        f.write(section_elf(b"".join(struct.pack("<I", w) for w in words), 64))
        f.flush()
        out = subprocess.run([objdump, "-d", f"--mattr={mattr}", "-M", "no-aliases", f.name],
                             capture_output=True, text=True).stdout
    res = {}
    for line in out.splitlines():
        m = re.match(r"\s*([0-9a-f]+):\s+[0-9a-f]{8}\s+(\S+)\s*(.*)$", line)
        if not m or m.group(2).startswith("<unknown>") or m.group(2) == "unimp":
            continue
        i = (int(m.group(1), 16) - BASE) // 4
        if i < len(words):
            res[words[i]] = (m.group(2), m.group(3).strip())
    return res


VECTOR_MAJOR = (0x57, 0x07, 0x27, 0x77)
MATTR = "+v,+zvbb,+zvbc,+zvkg,+zvkned,+zvknhb,+zvksed,+zvksh,+zvfh,+zvfbfmin,+zvfbfwma"


def generate(rng, n, objdump, only=None):
    out, seen = [], set()
    pat = re.compile(only) if only else None
    for _ in range(200):
        ws = []
        for _ in range(4096):
            op = rng.choice(VECTOR_MAJOR)
            w = (rng.getrandbits(25) << 7) | op
            if op in (0x07, 0x27) and (w >> 12) & 7 not in (0, 5, 6, 7):
                continue
            ws.append(w)
        dec = llvm_decode(objdump, ws, MATTR)
        for w in ws:
            if w in dec and w not in seen and (pat is None or pat.match(dec[w][0])):
                seen.add(w)
                out.append({"bytes": struct.pack("<I", w), "mnemonic": dec[w][0], "op_str": dec[w][1]})
                if len(out) >= n:
                    return out
    return out
