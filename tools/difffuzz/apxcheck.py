#!/usr/bin/env python3
"""Check unlace's lift of Intel APX instructions against Unicorn running a legacy equivalent.

Unicorn has no APX, so each APX instruction is rewritten into legacy x86-64 code with the same
architected effect, which Unicorn runs, while the lifted p-code of the original runs in
tools/difffuzz/pcode_emu.py from the same register state:

- an extended GPR (R16-R31) becomes an R8-R15 register the instruction does not use, holding the
  same value;
- a new-data-destination form "op dst, src1, src2" becomes "mov T, src1; op T, src2; mov dst, T"
  through a free temporary (zero-extending an 8- or 16-bit result into the full register, as APX
  does);
- {nf} runs the legacy operation and checks that the lifted p-code leaves every flag unchanged;
- SETcc.zu / IMUL.zu add the zero-extension; PUSH2/POP2 become two PUSHes/POPs; PUSHP/POPP and the
  REX2-encoded legacy instructions are renamed only.

CCMPcc/CTESTcc become a branch around the compare or test, the false path loading OF SF ZF CF from
dfv (PF from dfv.CF, AF cleared) through PUSHFQ/POPFQ (the reference's stack slot is not compared);
CFCMOVcc becomes a branch around the move, zeroing the destination (or keeping src1 for the NDD
form) on the false path, so a false condition never touches memory. JMPABS, RIP-relative operands
and branches are skipped. Input: an object
or shared library (every APX instruction in .text, deduplicated by encoding).

    ~/.local/share/difffuzz-venv/bin/python tools/difffuzz/apxcheck.py lib.so --unlace <unlace> [--sleighpath specs]
"""
import argparse, collections, json, os, random, re, subprocess, sys, tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import unicorn as uc  # noqa: E402
from unicorn import x86_const as x86  # noqa: E402

from arches import ARCHES  # noqa: E402
from difffuzz import Mapper, fill_byte, lift  # noqa: E402
from pcode_emu import State, Unmodeled, step  # noqa: E402
from slaregs import register_map  # noqa: E402

MATTR = "+egpr,+ndd,+nf,+ccmp,+cf,+zu,+push2pop2,+ppx"
EGPR = re.compile(r"\br(1[6-9]|2\d|3[01])([dwb]?)\b")
LEGACY = re.compile(r"\b(r(?:[89]|1[0-5])[dwb]?|[re]?(?:ax|bx|cx|dx|si|di|bp|sp)|[abcd]l|[abcd]h|sil|dil|bpl|spl)\b")
SIZES = {"": 64, "d": 32, "w": 16, "b": 8}
ALU2 = {"add", "sub", "and", "or", "xor", "adc", "sbb", "imul", "adcx", "adox"}
UNARY = {"inc", "dec", "neg", "not"}
SHIFTS = {"shl", "sal", "shr", "sar", "rol", "ror", "rcl", "rcr"}
SKIP = re.compile(r"^(jmpabs|j|call|ret)|rip")
INV = {"o": "no", "no": "o", "b": "ae", "ae": "b", "e": "ne", "ne": "e", "be": "a", "a": "be", "s": "ns", "ns": "s",
       "p": "np", "np": "p", "l": "ge", "ge": "l", "le": "g", "g": "le"}
DFV = {"of": 0x800, "sf": 0x80, "zf": 0x40, "cf": 0x1}


def base_reg(name):
    """The 64-bit register a legacy or EGPR operand name lives in."""
    m = re.match(r"r(\d+)[dwb]?$", name)
    if m:
        return "r" + m.group(1)
    table = {"al": "rax", "ah": "rax", "ax": "rax", "eax": "rax", "bl": "rbx", "bh": "rbx", "bx": "rbx", "ebx": "rbx",
             "cl": "rcx", "ch": "rcx", "cx": "rcx", "ecx": "rcx", "dl": "rdx", "dh": "rdx", "dx": "rdx", "edx": "rdx",
             "sil": "rsi", "si": "rsi", "esi": "rsi", "dil": "rdi", "di": "rdi", "edi": "rdi",
             "bpl": "rbp", "bp": "rbp", "ebp": "rbp", "spl": "rsp", "sp": "rsp", "esp": "rsp"}
    return table.get(name, name)


def sized(base, bits):
    """The register of a given width in an R8-R15 base register."""
    return base + {64: "", 32: "d", 16: "w", 8: "b"}[bits]


def reg_bits(name):
    m = re.match(r"r\d+([dwb]?)$", name)
    if m:
        return SIZES[m.group(1)]
    if name in ("al", "bl", "cl", "dl", "sil", "dil", "bpl", "spl", "ah", "bh", "ch", "dh"):
        return 8
    if len(name) == 2:
        return 16
    return 32 if name.startswith("e") else 64


def split_ops(s):
    out, depth, cur = [], 0, ""
    for ch in s:
        depth += ch == "["
        depth -= ch == "]"
        if ch == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def translate(text):
    """(legacy assembly lines, {egpr base: legacy base}, temporaries, nf flag) or None."""
    text = re.sub(r"\s*#.*", "", text).strip()
    nf = text.startswith("{nf}")
    text = re.sub(r"^\{nf\}\s*", "", text)
    if SKIP.search(text):
        return None
    mn, _, ops = text.partition(" ")
    dm = re.match(r"(\{dfv=[^}]*\})\s*(.*)$", ops)
    ops = ([dm.group(1)] + split_ops(dm.group(2))) if dm else split_ops(ops)
    used = {base_reg(x) for x in LEGACY.findall(text)}
    pool = [f"r{i}" for i in range(8, 16) if f"r{i}" not in used]
    ren = {}
    for m in EGPR.finditer(text):
        b = "r" + m.group(1)
        if b not in ren:
            if not pool:
                return None
            ren[b] = pool.pop(0)
    def rn(s):
        return EGPR.sub(lambda m: ren["r" + m.group(1)] + m.group(2), s)
    ops = [rn(o) for o in ops]
    temps = []
    def temp(bits):
        if not pool:
            raise ValueError
        t = pool.pop(0)
        temps.append(t)
        return sized(t, bits)
    isreg = lambda o: bool(re.fullmatch(r"[a-z0-9]+", o)) and not re.fullmatch(r"-?(0x)?[0-9a-f]+", o)
    try:
        m = re.match(r"(ccmp|ctest)(\w+)$", mn)
        if m and ops and ops[0].startswith("{dfv="):
            kind, cc = m.groups()
            dfv = [x for x in ops[0][5:-1].split(",") if x]
            bits = sum(DFV[x] for x in dfv) | (0x4 if "cf" in dfv else 0)
            ops = ops[1:]
            op = "cmp" if kind == "ccmp" else "test"
            skip = [] if cc == "t" else (["jmp 1f"] if cc == "f" else ["j%s 1f" % INV[cc]])
            lines = skip + ["%s %s" % (op, ", ".join(ops)), "jmp 2f",
                            "1:", "pushfq", "and qword ptr [rsp], -0x8d6", "or qword ptr [rsp], %#x" % bits, "popfq", "2:"]
            return lines, ren, temps, "stack"
        m = re.match(r"cfcmov(\w+)$", mn)
        if m:
            inv = "j%s 1f" % INV[m.group(1)]
            if len(ops) == 3:
                d, a, b = ops
                bits = reg_bits(d)
                tt = temp(bits)
                fin = "mov %s, %s" % (d, tt) if bits >= 32 else "movzx %s, %s" % (reg32(d), tt)
                return ["mov %s, %s" % (tt, a), inv, "mov %s, %s" % (tt, b), "1:", fin], ren, temps, nf
            d, s = ops
            if not isreg(d):
                return [inv, "mov %s, %s" % (d, s), "1:"], ren, temps, nf
            bits = reg_bits(d)
            if bits >= 32:
                return [inv, "mov %s, %s" % (d, s), "jmp 2f", "1:", "mov %s, 0" % reg32(d), "2:"], ren, temps, nf
            return [inv, "movzx %s, %s" % (reg32(d), s), "jmp 2f", "1:", "mov %s, 0" % reg32(d), "2:"], ren, temps, nf
        if mn in ("push2", "push2p"):
            return ["push " + ops[0], "push " + ops[1]], ren, temps, nf
        if mn in ("pop2", "pop2p"):
            return ["pop " + ops[0], "pop " + ops[1]], ren, temps, nf
        if mn in ("pushp", "popp"):
            return [mn[:-1] + " " + ops[0]], ren, temps, nf
        if mn.startswith("setzu"):
            d = ops[0]
            if not isreg(d):
                return ["set" + mn[5:] + " " + d], ren, temps, nf
            return ["set" + mn[5:] + " " + d, "movzx %s, %s" % (sized(base_reg(d), 32) if base_reg(d).startswith("r") and base_reg(d)[1:].isdigit() else "e" + base_reg(d)[1:], d)], ren, temps, nf
        if mn == "imulzu":
            d = ops[0]
            return ["imul " + ", ".join(ops), "movzx %s, %s" % (reg32(d), d)], ren, temps, nf
        nd = False
        if mn in ALU2 and len(ops) == 3 and not (mn == "imul" and not isreg(ops[2]) and "ptr" not in ops[2]):
            nd = True
        elif mn in UNARY and len(ops) == 2:
            nd = True
        elif mn in SHIFTS and (len(ops) == 3 or (len(ops) == 2 and isreg(ops[1]) and ops[1] != "cl")):
            nd = True
        elif mn in ("shld", "shrd") and len(ops) == 4:
            nd = True
        elif mn.startswith("cmov") and len(ops) == 3:
            nd = True
        if not nd:
            return [mn + " " + ", ".join(ops)], ren, temps, nf
        d = ops[0]
        bits = reg_bits(d)
        t = temp(bits)
        rest = ops[2:]
        if mn in SHIFTS and len(ops) == 2:
            rest = ["1"]
        lines = ["mov %s, %s" % (t, ops[1]), mn + " " + ", ".join([t] + rest)]
        if bits >= 32:
            lines.append("mov %s, %s" % (d, t))
        else:
            lines.append("movzx %s, %s" % (reg32(d), t))
        return lines, ren, temps, nf
    except (ValueError, IndexError):
        return None


def reg32(name):
    b = base_reg(name)
    if re.fullmatch(r"r\d+", b):
        return b + "d"
    return "e" + b[1:]


UC = {n: getattr(x86, "UC_X86_REG_" + n) for n in "RAX RCX RDX RBX RSP RBP RSI RDI R8 R9 R10 R11 R12 R13 R14 R15".split()}


def assemble(lines, tmp):
    src = os.path.join(tmp, "ref.S")
    Path(src).write_text(".intel_syntax noprefix\n" + "\n".join(lines) + "\n")
    obj = os.path.join(tmp, "ref.o")
    p = subprocess.run(["llvm-mc", "-triple=x86_64", "-filetype=obj", "-o", obj, src], capture_output=True, text=True)
    if p.returncode:
        return None
    raw = subprocess.run(["llvm-objcopy", "-O", "binary", "--only-section=.text", obj, os.path.join(tmp, "ref.bin")], capture_output=True)
    return Path(tmp, "ref.bin").read_bytes() if raw.returncode == 0 else None


def run(arch, regs, row, cand, ref, ren, temps, nf, rng, seed):
    addr, size = cand["addr"], len(cand["bytes"])
    init = {n: arch.rand_reg(rng, 64) for n in UC}
    arch.fix_inputs(init, rng)
    flags = rng.getrandbits(32)
    word = (flags & 0x8D5) | 2
    emu = uc.Uc(uc.UC_ARCH_X86, uc.UC_MODE_64)
    mp = Mapper(emu, seed)
    mp.ensure(addr, len(ref))
    emu.mem_write(addr, ref)
    for n, k in UC.items():
        emu.reg_write(k, init[n])
    emu.reg_write(x86.UC_X86_REG_EFLAGS, word)
    writes = {}
    emu.hook_add(uc.UC_HOOK_MEM_READ_UNMAPPED | uc.UC_HOOK_MEM_WRITE_UNMAPPED, lambda u, a, ad, sz, v, d: (mp.ensure(ad, sz), True)[1])
    emu.hook_add(uc.UC_HOOK_MEM_WRITE, lambda u, a, ad, sz, v, d: writes.__setitem__(ad, sz))
    try:
        emu.emu_start(addr, addr + len(ref))
    except uc.UcError as e:
        return "ref-exception", str(e)
    st = State(False, lambda a: fill_byte(a, seed), regs)
    for i, b in enumerate(cand["bytes"]):
        st.mem[addr + i] = b
    for n in UC:
        st.set(n, init[n])
    for eg, lg in ren.items():
        st.set(eg.upper(), init[lg.upper()])
    for n, bit in arch.flag_bits.items():
        st.set(n, (word >> bit) & 1)
    st.set("RIP", addr)
    try:
        step(st, row["ops"], addr, size)
    except Unmodeled as e:
        return "unmodeled", str(e)
    if not all(arch.addr_ok(x) and arch.addr_ok(x + s - 1) for x, s in st.accesses):
        return "bad-address", ""
    mn = re.sub(r"^\{nf\}\s*", "", cand["text"]).split()[0]
    base = {"push2": "push", "push2p": "push", "pop2": "pop", "pop2p": "pop", "pushp": "push", "popp": "pop"}.get(mn, mn)
    base = re.sub(r"^setzu", "set", base).replace("imulzu", "imul")
    base = re.sub(r"^ccmp\w*", "cmp", re.sub(r"^ctest\w*", "test", base))
    base = re.sub(r"^cfcmov\w*", "mov", base)
    ignore = arch.ignored(base, cand["text"], st)
    if "*" in ignore:
        return "undefined", ""
    diffs = {}
    back = {v: k for k, v in ren.items()}
    for n, k in UC.items():
        if n.lower() in temps:
            continue
        ref_v = emu.reg_read(k)
        ours = st.get(back[n.lower()].upper()) if n.lower() in back else st.get(n)
        if n.lower() in back and st.get(n) != init[n]:
            diffs[n + "(untouched)"] = (st.get(n), init[n])
        if ours != ref_v:
            diffs[back.get(n.lower(), n.lower()).upper()] = (ours, ref_v)
    fv = emu.reg_read(x86.UC_X86_REG_EFLAGS)
    for n, bit in arch.flag_bits.items():
        if n in ignore and nf is not True:
            continue
        ours = st.get(n) & 1
        want = (word >> bit) & 1 if nf is True else (fv >> bit) & 1
        if ours != want:
            diffs[n] = (ours, want)
    touched = set(st.writes)
    for a, sz in writes.items():
        touched.update(range(a, a + sz))
    if nf == "stack":
        touched -= set(range(init["RSP"] - 8, init["RSP"]))
    for a in sorted(touched):
        pv = st.mem.get(a, fill_byte(a, seed))
        rv = emu.mem_read(a, 1)[0] if mp.mapped(a) else fill_byte(a, seed)
        if pv != rv:
            diffs["mem[%#x]" % a] = (pv, rv)
    if diffs:
        return "mismatch", {k: [hex(x), hex(y)] for k, (x, y) in diffs.items()}
    return "match", ""


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("binary")
    ap.add_argument("--unlace", required=True)
    ap.add_argument("--sleighpath")
    ap.add_argument("--trials", type=int, default=8)
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--out")
    a = ap.parse_args()
    arch = ARCHES["x86-64"]
    regs, _ = register_map(arch.lang)
    lst = subprocess.run(["llvm-objdump", "-d", "-M", "intel", "--mattr=" + MATTR, "-j", ".text", a.binary],
                         capture_output=True, text=True).stdout
    seen, cands = set(), []
    pend = None
    for l in lst.splitlines():
        m = re.match(r"\s*[0-9a-f]+:\s+([0-9a-f]{2}(?: [0-9a-f]{2})*)\s*(?:\t(.*))?$", l)
        if not m:
            continue
        bs, txt = bytes.fromhex(m.group(1).replace(" ", "")), (m.group(2) or "").strip()
        if not txt and pend:
            pend["bytes"] += bs
            continue
        pend = None
        if not (EGPR.search(txt) or txt.startswith("{nf}") or re.match(r"(push2|pop2|pushp|popp|setzu|imulzu|ccmp|ctest|cfcmov)", txt)
                or (txt.split() and txt.split()[0] in ALU2 | UNARY | SHIFTS and len(split_ops(txt.partition(" ")[2])) == 3)):
            continue
        txt = re.sub(r"\s+", " ", re.sub(r"\s*<[^>]*>", "", txt)).strip()
        if bs in seen:
            continue
        seen.add(bs)
        c = {"bytes": bs, "text": txt}
        cands.append(c)
        pend = c
    counts, findings, excs, verified = collections.Counter(), [], collections.Counter(), 0
    with tempfile.TemporaryDirectory() as tmp:
        rows, problems = lift(a.unlace, arch, cands, tmp, a.sleighpath)
        for c in cands:
            if c["addr"] in problems:
                counts["lift-problem"] += 1
                findings.append({"kind": problems[c["addr"]][0], "bytes": c["bytes"].hex(), "text": c["text"]})
                continue
            tr = translate(c["text"])
            if tr is None:
                counts["skipped"] += 1
                continue
            lines, ren, temps, nf = tr
            ref = assemble(lines, tmp)
            if ref is None:
                counts["no-reference"] += 1
                findings.append({"kind": "no-reference", "text": c["text"], "ref": lines})
                continue
            ok = False
            for t in range(a.trials):
                st, why = run(arch, regs, rows[c["addr"]], c, ref, ren, temps, nf, random.Random("%d:%s:%d" % (a.seed, c["bytes"].hex(), t)), a.seed + t)
                counts[st] += 1
                if st == "mismatch":
                    findings.append({"kind": "mismatch", "bytes": c["bytes"].hex(), "text": c["text"], "ref": lines, "diffs": why})
                    break
                if st == "ref-exception":
                    excs[why] += 1
                    if excs[why] <= 3:
                        print("EXC", c["text"], lines, ref.hex(), file=sys.stderr)
                ok |= st == "match"
                if st in ("unmodeled", "undefined"):
                    break
            verified += ok
    by = collections.Counter(f["text"].split()[0] + ("" if not f["text"].startswith("{") else " " + f["text"].split()[1]) for f in findings)
    print(json.dumps({"instructions": len(cands), "verified": verified, "outcomes": counts,
                      "findings_by_mnemonic": dict(by.most_common()), "reference_exceptions": dict(excs.most_common(5))}, indent=1))
    if a.out:
        Path(a.out).write_text(json.dumps(findings, indent=1))


if __name__ == "__main__":
    main()
