#!/usr/bin/env python3
"""Generate specs/Ghidra/Processors/MIPS/data/languages/mips_msa.sinc (MIPS SIMD Architecture).

Encodings come from LLVM's MipsMSAInstrFormats.td / MipsMSAInstrInfo.td (Apache-2.0 WITH
LLVM-exception): every *_ENC record gives its format and the fixed field values, and its *_DESC
record the assembly operands and whether the destination is also read. Loads and stores, moves,
element copies, the control-register moves and the branches get real p-code; every other
instruction is a user operation named after its mnemonic (msa_addv_b) whose output is the
destination vector and whose inputs are the read operands.

    python3 tools/gen_mips_msa.py <llvm-project>/llvm/lib/Target/Mips
"""
import re
import sys
from pathlib import Path

SRC = Path(sys.argv[1])
OUT = Path(__file__).resolve().parents[1] / "specs/Ghidra/Processors/MIPS/data/languages"
fmt_td = (SRC / "MipsMSAInstrFormats.td").read_text()
info_td = (SRC / "MipsMSAInstrInfo.td").read_text()

# --- formats: template params and Inst bit assignments
formats = {}
for m in re.finditer(r"class (MSA_\w+_FMT|SPECIAL_\w+_FMT)<(.*?)>\s*:\s*(\w+)\s*\{(.*?)\n\}", fmt_td, re.S):
    name, params, parent, body = m.groups()
    pnames = [p.split()[-1] for p in params.split(",")]
    lets = []
    for b in re.finditer(r"let Inst\{(\d+)(?:-(\d+))?\} = ([^;]+);", body):
        hi = int(b.group(1)); lo = int(b.group(2)) if b.group(2) else hi
        lets.append((hi, lo, b.group(3).strip()))
    top = 0b011110 if parent == "MSAInst" else 0b010001 if parent == "MSACBranch" else 0
    formats[name] = (pnames, lets, top)

def lit(v):
    return int(v[2:], 2) if v.startswith("0b") else int(v, 0)

# --- DESC lookup: asm operand string, whether $wd is also an input, signed immediates
descs = {}
for m in re.finditer(r"class (\w+_DESC)\s*:\s*(\w+)\s*<([^;]*?)>\s*;", info_td, re.S):
    descs[m.group(1)] = (m.group(2), m.group(3))
bases = {}
for m in re.finditer(r"class (\w+)\s*<([^{]*?)>\s*(?::[^{]*)?\{(.*?)\n\}", info_td, re.S):
    bases[m.group(1)] = (m.group(2), m.group(3))

def desc_info(name):
    d = descs.get(name + "_DESC")
    if not d:
        return None, False, ""
    base, args = d
    asm, wd_in = None, False
    b = bases.get(base)
    if b:
        body = b[1]
        am = re.search(r'AsmString\s*=\s*!strconcat\(instr_asm,\s*"([^"]*)"\)', body)
        if am:
            asm = am.group(1).replace("\\t", "").strip()
        wd_in = "$wd_in" in body
    return asm, wd_in, args

encs = re.findall(r"class (\w+)_ENC\s*:\s*(\w+)<([^>]*)>;", info_td)

def mnemonic(name):
    parts = name.split("_")
    if len(parts) > 1 and parts[-1] in ("B", "H", "W", "D", "V"):
        return "_".join(parts[:-1]).lower() + "." + parts[-1].lower()
    return name.lower()

ACC = {"dpadd_s", "dpadd_u", "dpsub_s", "dpsub_u", "maddv", "msubv", "binsl", "binsr", "binsli", "binsri",
       "bmnz", "bmz", "bsel", "bmnzi", "bmzi", "bseli", "vshf", "sld", "sldi", "madd_q", "msub_q", "maddr_q",
       "msubr_q", "fmadd", "fmsub", "insert", "insve"}
SIZE = {"b": 1, "h": 2, "w": 4, "d": 8}
fields = {}
def field(hi, lo, signed=False):
    n = "msa_%d_%d%s" % (hi, lo, "s" if signed else "")
    fields[n] = (lo, hi, signed)
    return n

# ---- real p-code for the element-wise groups (element i of a register is its subpiece at byte i*size)
def _elems(reg, s, n, tag):
    return ["local %s%d:%d = %s(%d);" % (tag, i, s, reg, i * s) for i in range(n)]

def _pack(res, s):
    return "msa_wd = " + " | ".join("(zext(%s) << %d)" % (r, 8 * s * i) if i else "zext(%s)" % r for i, r in enumerate(res)) + ";"

def _smax(s):
    return "0x%x" % ((1 << (8 * s - 1)) - 1)

def _smin(s):
    return "-0x%x" % (1 << (8 * s - 1))

def _umax(s):
    return "0x%x" % ((1 << (8 * s)) - 1)

def semantics(mn, suf, imm):
    base = mn.split(".")[0]
    if suf == "v":
        two = {"and": "msa_ws & msa_wt", "or": "msa_ws | msa_wt", "xor": "msa_ws ^ msa_wt", "nor": "~(msa_ws | msa_wt)",
               "bmnz": "(msa_ws & msa_wt) | (msa_wd & ~msa_wt)", "bmz": "(msa_ws & ~msa_wt) | (msa_wd & msa_wt)",
               "bsel": "(msa_ws & ~msa_wd) | (msa_wt & msa_wd)"}
        if base in two:
            return ["msa_wd = %s;" % two[base]]
        return None
    if suf not in SIZE:
        return None
    s = SIZE[suf]; n = 16 // s; bits = 8 * s
    L = []
    def a(i): return "ma%d" % i
    def b(i): return "mb%d" % i
    binop = {"addv": "%s + %s", "subv": "%s - %s", "mulv": "%s * %s"}
    shf = {"sll": "<<", "srl": ">>", "sra": "s>>"}
    cmpop = {"ceq": "==", "clt_s": "s<", "clt_u": "<", "cle_s": "s<=", "cle_u": "<="}
    sel = {"max_s": "s>=", "max_u": ">=", "min_s": "s<=", "min_u": "<="}
    imm_ops = {"addvi": "addv", "subvi": "subv", "slli": "sll", "srli": "srl", "srai": "sra", "ceqi": "ceq",
               "clti_s": "clt_s", "clti_u": "clt_u", "clei_s": "cle_s", "clei_u": "cle_u", "maxi_s": "max_s",
               "maxi_u": "max_u", "mini_s": "min_s", "mini_u": "min_u", "andi": "and", "ori": "or", "xori": "xor", "nori": "nor"}
    op = base
    usesimm = op in imm_ops
    if usesimm:
        op = imm_ops[op]
        L.append("local mk:%d = %s;" % (s, imm))
    rhs = (lambda i: "mk") if usesimm else b
    known = set(binop) | set(shf) | set(cmpop) | set(sel) | {"and", "or", "xor", "nor", "adds_s", "adds_u", "subs_s",
             "subs_u", "div_s", "div_u", "mod_s", "mod_u", "pcnt", "nlzc", "nloc", "fill", "ldi", "splat", "splati",
             "ilvev", "ilvod", "ilvl", "ilvr", "pckev", "pckod"}
    if op not in known:
        return None
    if op in ("fill", "ldi", "splat", "splati"):
        if op == "fill":
            L.append("local me:%d = msa_rs:%d;" % (s, s))
        elif op == "ldi":
            L.append("local me:%d = %s;" % (s, imm))
        elif op == "splat":
            L.append("local mix:4 = (msa_rt:4 & %d) * %d;" % (n - 1, bits))
            L.append("local msh:16 = msa_ws >> mix;")
            L.append("local me:%d = msh:%d;" % (s, s))
        else:
            L.append("local msh:16 = msa_ws >> (%s * %d);" % (imm, bits))
            L.append("local me:%d = msh:%d;" % (s, s))
        L.append(_pack(["me"] * n, s))
        return L
    L += _elems("msa_ws", s, n, "ma")
    if not usesimm and op not in ("pcnt", "nlzc", "nloc"):
        L += _elems("msa_wt", s, n, "mb")
    res = []
    if op in ("ilvev", "ilvod", "ilvl", "ilvr", "pckev", "pckod"):
        h = n // 2
        for i in range(n):
            j, odd = i // 2, i % 2
            if op == "ilvr":
                src = (a if odd else b)(j)
            elif op == "ilvl":
                src = (a if odd else b)(j + h)
            elif op == "ilvev":
                src = (a if odd else b)(2 * j)
            elif op == "ilvod":
                src = (a if odd else b)(2 * j + 1)
            elif op == "pckev":
                src = b(2 * i) if i < h else a(2 * (i - h))
            else:
                src = b(2 * i + 1) if i < h else a(2 * (i - h) + 1)
            res.append(src)
        L.append(_pack(res, s))
        return L
    for i in range(n):
        x, y, r = a(i), rhs(i), "mr%d" % i
        if op in binop:
            L.append("local %s:%d = %s;" % (r, s, binop[op] % (x, y)))
        elif op in shf:
            L.append("local %s:%d = %s %s (%s & %d);" % (r, s, x, shf[op], y, bits - 1))
        elif op in cmpop:
            L.append("local %s:%d = 0 - zext(%s %s %s);" % (r, s, x, cmpop[op], y))
        elif op in sel:
            L.append("local %s:%d = (%s * zext(%s %s %s)) | (%s * zext(!(%s %s %s)));" % (r, s, x, x, sel[op], y, y, x, sel[op], y))
        elif op in ("and", "or", "xor"):
            L.append("local %s:%d = %s %s %s;" % (r, s, x, {"and": "&", "or": "|", "xor": "^"}[op], y))
        elif op == "nor":
            L.append("local %s:%d = ~(%s | %s);" % (r, s, x, y))
        elif op in ("adds_s", "subs_s"):
            o = "+" if op == "adds_s" else "-"
            L.append("local mw%d:%d = sext(%s) %s sext(%s);" % (i, 2 * s, x, o, y))
            L.append("local mh%d:1 = mw%d s> %s;" % (i, i, _smax(s)))
            L.append("local ml%d:1 = mw%d s< %s;" % (i, i, _smin(s)))
            L.append("local %s:%d = (mw%d:%d * zext(!(mh%d || ml%d))) | (%s * zext(mh%d)) | (%s * zext(ml%d));" % (r, s, i, s, i, i, _smax(s), i, _smin(s), i))
        elif op == "adds_u":
            L.append("local mw%d:%d = zext(%s) + zext(%s);" % (i, 2 * s, x, y))
            L.append("local %s:%d = mw%d:%d | (0 - zext(mw%d > %s));" % (r, s, i, s, i, _umax(s)))
        elif op == "subs_u":
            L.append("local %s:%d = (%s - %s) * zext(%s >= %s);" % (r, s, x, y, x, y))
        elif op in ("div_s", "div_u", "mod_s", "mod_u"):
            # a zero divisor gives what QEMU's helpers give (the architecture leaves it UNPREDICTABLE)
            L.append("local mz%d:1 = %s == 0;" % (i, y))
            L.append("local md%d:%d = %s + zext(mz%d);" % (i, s, y, i))
            if op == "div_u":
                L.append("local %s:%d = ((%s / md%d) * zext(!mz%d)) | (0 - zext(mz%d));" % (r, s, x, i, i, i))
            elif op == "div_s":
                L.append("local %s:%d = ((%s s/ md%d) * zext(!mz%d)) + (((zext(%s s< 0) * 2) - 1) * zext(mz%d));" % (r, s, x, i, i, x, i))
            elif op == "mod_u":
                L.append("local %s:%d = ((%s %% md%d) * zext(!mz%d)) + (%s * zext(mz%d));" % (r, s, x, i, i, x, i))
            else:
                L.append("local %s:%d = ((%s s%% md%d) * zext(!mz%d)) + (%s * zext(mz%d));" % (r, s, x, i, i, x, i))
        elif op == "pcnt":
            L.append("local %s:%d = popcount(%s);" % (r, s, x))
        elif op == "nlzc":
            L.append("local %s:%d = lzcount(%s);" % (r, s, x))
        elif op == "nloc":
            L.append("local %s:%d = lzcount(~%s);" % (r, s, x))
        res.append(r)
    L.append(_pack(res, s))
    return L

def semantics2(mn, suf, imm):
    """The remaining integer groups (their element formulas follow the MSA specification; where it
    leaves a result open, QEMU's helpers)."""
    base = mn.split(".")[0]
    if suf not in SIZE:
        return None
    s = SIZE[suf]; n = 16 // s; B = 8 * s
    L = []
    a = lambda i: "ma%d" % i
    b = lambda i: "mb%d" % i
    usesimm = base in ("bclri", "bseti", "bnegi", "binsli", "binsri", "srari", "srlri", "sat_s", "sat_u")
    op = {"bclri": "bclr", "bseti": "bset", "bnegi": "bneg", "binsli": "binsl", "binsri": "binsr",
          "srari": "srar", "srlri": "srlr"}.get(base, base)
    elementwise = {"bclr", "bset", "bneg", "binsl", "binsr", "srar", "srlr", "ave_s", "ave_u", "aver_s", "aver_u",
                   "sat_s", "sat_u", "max_a", "min_a", "asub_s", "asub_u", "subsus_u", "subsuu_s"}
    if op in ("hadd_s", "hadd_u", "hsub_s", "hsub_u"):
        hs = s // 2
        ext = "sext" if op.endswith("_s") else "zext"
        o = "+" if op.startswith("hadd") else "-"
        res = []
        for i in range(n):
            L.append("local mx%d:%d = msa_ws(%d);" % (i, hs, (2 * i + 1) * hs))
            L.append("local my%d:%d = msa_wt(%d);" % (i, hs, (2 * i) * hs))
            L.append("local mr%d:%d = %s(mx%d) %s %s(my%d);" % (i, s, ext, i, o, ext, i))
            res.append("mr%d" % i)
        L.append(_pack(res, s))
        return L
    if op == "shf":
        res = []
        for i in range(n):
            g4, k = i // 4, i % 4
            L.append("local mix%d:4 = ((%s >> %d) & 3) + %d;" % (i, imm, 2 * k, 4 * g4))
            L.append("local msh%d:16 = msa_ws >> (mix%d * %d);" % (i, i, B))
            L.append("local mr%d:%d = msh%d:%d;" % (i, s, i, s))
            res.append("mr%d" % i)
        L.append(_pack(res, s))
        return L
    if op == "vshf":
        L += _elems("msa_wd", s, n, "mc")
        res = []
        for i in range(n):
            L.append("local mk%d:4 = zext(mc%d:1 & 0x3f) %% %d;" % (i, i, 2 * n))
            L.append("local mlo%d:16 = msa_wt >> (mk%d * %d);" % (i, i, B))
            L.append("local mhi%d:16 = msa_ws >> ((mk%d - %d) * %d);" % (i, i, n, B))
            L.append("local mpick%d:%d = (mlo%d:%d * zext(mk%d < %d)) | (mhi%d:%d * zext(mk%d >= %d));" % (i, s, i, s, i, n, i, s, i, n))
            L.append("local mr%d:%d = mpick%d * zext((mc%d:1 & 0xc0) == 0);" % (i, s, i, i))
            res.append("mr%d" % i)
        L.append(_pack(res, s))
        return L
    if op in ("sld", "sldi"):
        # windows of n bytes (n = the element count), each the low bytes of ws:wd slid down by k bytes
        E = n
        if op == "sld":
            L.append("local mk:4 = msa_rt:4 %% %d;" % E)
        else:
            L.append("local mk:4 = %s;" % imm)
        res = []
        for w in range(16 // E):
            L.append("local mws%d:%d = msa_ws(%d);" % (w, E, w * E))
            L.append("local mwd%d:%d = msa_wd(%d);" % (w, E, w * E))
            L.append("local mr%d:%d = (mws%d >> (mk * 8)) | (mwd%d << ((%d - mk) * 8));" % (w, E, w, w, E))
            res.append("mr%d" % w)
        L.append(_pack(res, E))
        return L
    if op not in elementwise:
        return None
    L += _elems("msa_ws", s, n, "ma")
    if op in ("binsl", "binsr"):
        L += _elems("msa_wd", s, n, "mc")
    if not usesimm and op not in ("sat_s", "sat_u"):
        L += _elems("msa_wt", s, n, "mb")
    if usesimm:
        L.append("local mm:%d = %s;" % (s, imm))
    res = []
    for i in range(n):
        x, r = a(i), "mr%d" % i
        y = "mm" if usesimm else b(i)
        if op in ("bclr", "bset", "bneg"):
            L.append("local mbit%d:%d = 1 << (%s & %d);" % (i, s, y, B - 1))
            L.append("local %s:%d = %s;" % (r, s, {"bclr": "%s & ~mbit%d", "bset": "%s | mbit%d", "bneg": "%s ^ mbit%d"}[op] % (x, i)))
        elif op in ("binsl", "binsr"):
            L.append("local mn%d:%d = %s & %d;" % (i, s, y, B - 1))
            ones = "0x%x" % ((1 << B) - 1)
            if op == "binsl":
                L.append("local mmask%d:%d = ~((%s:%d >> mn%d) >> 1);" % (i, s, ones, s, i))
            else:
                L.append("local mmask%d:%d = ~((%s:%d << mn%d) << 1);" % (i, s, ones, s, i))
            L.append("local %s:%d = (%s & mmask%d) | (mc%d & ~mmask%d);" % (r, s, x, i, i, i))
        elif op in ("srar", "srlr"):
            sh = ">>" if op == "srlr" else "s>>"
            L.append("local msh%d:%d = %s & %d;" % (i, s, y, B - 1))
            L.append("local mrb%d:%d = ((%s >> (msh%d - 1)) & 1) * zext(msh%d != 0);" % (i, s, x, i, i))
            L.append("local %s:%d = (%s %s msh%d) + mrb%d;" % (r, s, x, sh, i, i))
        elif op in ("ave_s", "ave_u", "aver_s", "aver_u"):
            sh = "s>>" if op.endswith("_s") else ">>"
            rnd = "|" if op.startswith("aver") else "&"
            L.append("local %s:%d = (%s %s 1) + (%s %s 1) + ((%s %s %s) & 1);" % (r, s, x, sh, y, sh, x, rnd, y))
        elif op == "sat_s":
            L.append("local mhi%d:%d = (1 << mm) - 1;" % (i, s))
            L.append("local mlo%d:%d = 0 - (1 << mm);" % (i, s))
            L.append("local %s:%d = (%s * zext((%s s<= mhi%d) && (%s s>= mlo%d))) | (mhi%d * zext(%s s> mhi%d)) | (mlo%d * zext(%s s< mlo%d));" % (r, s, x, x, i, x, i, i, x, i, i, x, i))
        elif op == "sat_u":
            L.append("local mhi%d:%d = (2 << mm) - 1;" % (i, s))
            L.append("local %s:%d = (%s * zext(%s <= mhi%d)) | (mhi%d * zext(%s > mhi%d));" % (r, s, x, x, i, i, x, i))
        elif op in ("max_a", "min_a"):
            L.append("local mxa%d:%d = (%s * zext(%s s>= 0)) | ((0 - %s) * zext(%s s< 0));" % (i, s, x, x, x, x))
            L.append("local mya%d:%d = (%s * zext(%s s>= 0)) | ((0 - %s) * zext(%s s< 0));" % (i, s, y, y, y, y))
            c = "mxa%d > mya%d" % (i, i) if op == "max_a" else "mxa%d < mya%d" % (i, i)
            L.append("local %s:%d = (%s * zext(%s)) | (%s * zext(!(%s)));" % (r, s, x, c, y, c))
        elif op in ("asub_s", "asub_u"):
            cmp = "s>" if op == "asub_s" else ">"
            L.append("local %s:%d = ((%s - %s) * zext(%s %s %s)) | ((%s - %s) * zext(!(%s %s %s)));" % (r, s, x, y, x, cmp, y, y, x, x, cmp, y))
        elif op == "subsus_u":
            L.append("local mw%d:%d = zext(%s) - sext(%s);" % (i, 2 * s, x, y))
            L.append("local %s:%d = (mw%d:%d * zext((mw%d s>= 0) && (mw%d s<= %s))) | (%s * zext(mw%d s> %s));" % (r, s, i, s, i, i, _umax(s), _umax(s), i, _umax(s)))
        elif op == "subsuu_s":
            L.append("local mw%d:%d = zext(%s) - zext(%s);" % (i, 2 * s, x, y))
            L.append("local %s:%d = (mw%d:%d * zext((mw%d s<= %s) && (mw%d s>= %s))) | (%s * zext(mw%d s> %s)) | (%s * zext(mw%d s< %s));" % (r, s, i, s, i, _smax(s), i, _smin(s), _smax(s), i, _smax(s), _smin(s), i, _smin(s)))
        res.append(r)
    L.append(_pack(res, s))
    return L

def semantics3(mn, suf, imm):
    """The last integer groups: absolute adds, bit-move immediates, multiply-accumulate, element
    inserts and the dot products."""
    base = mn.split(".")[0]
    if suf not in SIZE:
        return None
    s = SIZE[suf]; n = 16 // s; B = 8 * s
    L = []
    if base in ("insert", "insve"):
        src = "msa_rs:%d" % s if base == "insert" else "msa_ws:%d" % s
        L.append("local me:%d = %s;" % (s, src))
        L.append("local msh:4 = %s * %d;" % (imm, B))
        L.append("local mmask:16 = ~(zext(0x%x:%d) << msh);" % ((1 << B) - 1, s))
        L.append("msa_wd = (msa_wd & mmask) | (zext(me) << msh);")
        return L
    if base in ("dotp_s", "dotp_u", "dpadd_s", "dpadd_u", "dpsub_s", "dpsub_u"):
        hs = s // 2
        ext = "sext" if base.endswith("_s") else "zext"
        res = []
        if base.startswith("dp"):
            L += _elems("msa_wd", s, n, "mc")
        for i in range(n):
            for k in (0, 1):
                L.append("local mx%d_%d:%d = msa_ws(%d);" % (i, k, hs, (2 * i + k) * hs))
                L.append("local my%d_%d:%d = msa_wt(%d);" % (i, k, hs, (2 * i + k) * hs))
            dot = "(%s(mx%d_0) * %s(my%d_0)) + (%s(mx%d_1) * %s(my%d_1))" % (ext, i, ext, i, ext, i, ext, i)
            if base.startswith("dotp"):
                L.append("local mr%d:%d = %s;" % (i, s, dot))
            else:
                L.append("local mr%d:%d = mc%d %s (%s);" % (i, s, i, "+" if base.startswith("dpadd") else "-", dot))
            res.append("mr%d" % i)
        L.append(_pack(res, s))
        return L
    known = ("add_a", "adds_a", "bmnzi", "bmzi", "bseli", "maddv", "msubv")
    if base not in known:
        return None
    L += _elems("msa_ws", s, n, "ma")
    if base in ("bmnzi", "bmzi", "bseli", "maddv", "msubv"):
        L += _elems("msa_wd", s, n, "mc")
    if base in ("add_a", "adds_a", "maddv", "msubv"):
        L += _elems("msa_wt", s, n, "mb")
    if base in ("bmnzi", "bmzi", "bseli"):
        L.append("local mk:1 = %s;" % imm)
    res = []
    for i in range(n):
        x, r = "ma%d" % i, "mr%d" % i
        if base in ("add_a", "adds_a"):
            y = "mb%d" % i
            L.append("local mxa%d:%d = (%s * zext(%s s>= 0)) | ((0 - %s) * zext(%s s< 0));" % (i, s, x, x, x, x))
            L.append("local mya%d:%d = (%s * zext(%s s>= 0)) | ((0 - %s) * zext(%s s< 0));" % (i, s, y, y, y, y))
            if base == "add_a":
                L.append("local %s:%d = mxa%d + mya%d;" % (r, s, i, i))
            else:
                mx = _smax(s)
                L.append("local msum%d:%d = zext(mxa%d) + zext(mya%d);" % (i, 2 * s, i, i))
                L.append("local %s:%d = (msum%d:%d * zext(msum%d <= %s)) | (%s * zext(msum%d > %s));" % (r, s, i, s, i, mx, mx, i, mx))
        elif base == "bmnzi":
            L.append("local %s:1 = (%s & mk) | (mc%d & ~mk);" % (r, x, i))
        elif base == "bmzi":
            L.append("local %s:1 = (%s & ~mk) | (mc%d & mk);" % (r, x, i))
        elif base == "bseli":
            L.append("local %s:1 = (%s & ~mc%d) | (mk & mc%d);" % (r, x, i, i))
        elif base == "maddv":
            L.append("local %s:%d = mc%d + (%s * mb%d);" % (r, s, i, x, i))
        elif base == "msubv":
            L.append("local %s:%d = mc%d - (%s * mb%d);" % (r, s, i, x, i))
        res.append(r)
    L.append(_pack(res, s))
    return L

FBITS = {4: dict(sign=0x80000000, half=0x3f000000, two31=0x4f000000, two32=0x4f800000, mant=0x4b000000, exp=0x7f800000, man=0x7fffff, quiet=0x400000),
         8: dict(sign=0x8000000000000000, half=0x3fe0000000000000, two31=0x43e0000000000000, two32=0x43f0000000000000,
                 mant=0x4330000000000000, exp=0x7ff0000000000000, man=0xfffffffffffff, quiet=0x8000000000000)}
# two31 / two32 are 2^(B-1) and 2^B for the element width B (2^31/2^32 for .w, 2^63/2^64 for .d); mant is 2^23 / 2^52


def _rne(L, i, x, s, isz):
    """Round-to-nearest-even of float x (which must be finite and in range) to an integer of isz bytes."""
    F = FBITS[s]
    L.append("local mt%d:%d = trunc(%s);" % (i, isz, x))
    L.append("local mft%d:%d = int2float(mt%d);" % (i, s, i))
    L.append("local mfr%d:%d = %s f- mft%d;" % (i, s, x, i))
    L.append("local mhf%d:%d = 0x%x;" % (i, s, F["half"]))
    L.append("local mnh%d:%d = 0x%x;" % (i, s, F["half"] | F["sign"]))
    L.append("local modd%d:1 = (mt%d & 1) == 1;" % (i, i))
    L.append("local mup%d:1 = (mfr%d f> mhf%d) || ((mfr%d f== mhf%d) && modd%d);" % (i, i, i, i, i, i))
    L.append("local mdn%d:1 = (mfr%d f< mnh%d) || ((mfr%d f== mnh%d) && modd%d);" % (i, i, i, i, i, i))
    return "(mt%d + zext(mup%d) - zext(mdn%d))" % (i, i, i)


def semantics4(mn, suf, imm):
    """MSA floating point, IEEE-exact where the operation is (round to nearest, as MSACSR's reset
    mode). Signalling compares give the same result as the quiet ones; no FP flag in MSACSR is
    modelled."""
    base = mn.split(".")[0]
    if suf not in ("w", "d", "h"):
        return None
    s = SIZE[suf]; n = 16 // s; B = 8 * s
    L = []
    arith = {"fadd": "f+", "fsub": "f-", "fmul": "f*", "fdiv": "f/"}
    cmps = {"caf", "cun", "ceq", "cueq", "clt", "cult", "cle", "cule", "cor", "cune", "cne",
            "saf", "sun", "seq", "sueq", "slt", "sult", "sle", "sule", "sor", "sune", "sne"}
    is_cmp = base.startswith("f") and base[1:] in cmps
    known = set(arith) | {"fmadd", "fmsub", "fsqrt", "fmax", "fmin", "fmax_a", "fmin_a", "fclass", "ffint_s",
                          "ffint_u", "ftrunc_s", "ftrunc_u", "ftint_s", "ftint_u", "frint", "frcp", "frsqrt",
                          "fexupl", "fexupr", "fexdo"}
    if not (is_cmp or base in known):
        return None
    if base in ("fexupl", "fexupr"):
        hs = s // 2
        off = n if base == "fexupl" else 0
        res = []
        for i in range(n):
            L.append("local mh%d:%d = msa_ws(%d);" % (i, hs, (off + i) * hs))
            L.append("local mr%d:%d = float2float(mh%d);" % (i, s, i))
            res.append("mr%d" % i)
        L.append(_pack(res, s))
        return L
    if base == "fexdo":
        # wd's right half from wt, its left half from ws, each element narrowed to half the width
        hs = s // 2 if suf == "w" else None
        if suf == "h":
            ws_, ns = 4, 4  # fexdo.h: float32 -> float16
        else:
            ws_, ns = 8, 2  # fexdo.w: float64 -> float32
        hs = ws_ // 2
        res = []
        for i in range(2 * ns):
            src = "msa_wt" if i < ns else "msa_ws"
            k = i if i < ns else i - ns
            L.append("local mx%d:%d = %s(%d);" % (i, ws_, src, k * ws_))
            L.append("local mr%d:%d = float2float(mx%d);" % (i, hs, i))
            res.append("mr%d" % i)
        L.append(_pack(res, hs))
        return L
    if suf == "h":
        return None
    F = FBITS[s]
    L += _elems("msa_ws", s, n, "ma")
    two = base in arith or base in ("fmadd", "fmsub", "fmax", "fmin", "fmax_a", "fmin_a") or is_cmp
    if two:
        L += _elems("msa_wt", s, n, "mb")
    if base in ("fmadd", "fmsub"):
        L += _elems("msa_wd", s, n, "mc")
    res = []
    for i in range(n):
        x, r = "ma%d" % i, "mr%d" % i
        y = "mb%d" % i
        if base in arith:
            L.append("local %s:%d = %s %s %s;" % (r, s, x, arith[base], y))
        elif base in ("fmadd", "fmsub"):
            o = "f+" if base == "fmadd" else "f-"
            if s == 4:
                # fused: the product of two float32 is exact in float64, so only the sum rounds twice
                L.append("local mxd%d:8 = float2float(%s);" % (i, x))
                L.append("local myd%d:8 = float2float(%s);" % (i, y))
                L.append("local mcd%d:8 = float2float(mc%d);" % (i, i))
                L.append("local msum%d:8 = mcd%d %s (mxd%d f* myd%d);" % (i, i, o, i, i))
                L.append("local %s:4 = float2float(msum%d);" % (r, i))
            else:
                L.append("local %s:%d = mc%d %s (%s f* %s);" % (r, s, i, o, x, y))
        elif base == "fsqrt":
            L.append("local %s:%d = sqrt(%s);" % (r, s, x))
        elif base in ("frcp", "frsqrt"):
            L.append("local mone%d:%d = int2float(1:4);" % (i, s))
            L.append("local %s:%d = mone%d f/ %s;" % (r, s, i, "sqrt(%s)" % x if base == "frsqrt" else x))
        elif base in ("fmax", "fmin", "fmax_a", "fmin_a"):
            if base.endswith("_a"):
                L.append("local mxa%d:%d = abs(%s);" % (i, s, x))
                L.append("local mya%d:%d = abs(%s);" % (i, s, y))
                cx, cy = "mxa%d" % i, "mya%d" % i
            else:
                cx, cy = x, y
            gt = "f>" if base.startswith("fmax") else "f<"
            tie = "&" if base.startswith("fmax") else "|"
            L.append("local mnx%d:1 = nan(%s);" % (i, x))
            L.append("local mny%d:1 = nan(%s);" % (i, y))
            L.append("local mpx%d:1 = !mnx%d && !mny%d && (%s %s %s);" % (i, i, i, cx, gt, cy))
            L.append("local mpy%d:1 = !mnx%d && !mny%d && (%s %s %s);" % (i, i, i, cy, gt, cx))
            L.append("local meq%d:1 = !mnx%d && !mny%d && !mpx%d && !mpy%d;" % (i, i, i, i, i))
            # IEEE 754-2008 maxNum/minNum: a signalling NaN gives that NaN quieted, a quiet NaN the other operand
            L.append("local msx%d:1 = mnx%d && ((%s & 0x%x) == 0);" % (i, i, x, F["quiet"]))
            L.append("local msy%d:1 = mny%d && ((%s & 0x%x) == 0);" % (i, i, y, F["quiet"]))
            L.append("local msn%d:1 = msx%d || msy%d;" % (i, i, i))
            L.append("local mqn%d:%d = ((%s | 0x%x) * zext(msx%d)) | ((%s | 0x%x) * zext(!msx%d && msy%d));" % (i, s, x, F["quiet"], i, y, F["quiet"], i, i))
            L.append("local mnum%d:%d = (%s * zext(mpx%d || (mny%d && !mnx%d))) | (%s * zext(mpy%d || (mnx%d && !mny%d))) | ((%s %s %s) * zext(meq%d)) | (%s * zext(mnx%d && mny%d));" % (i, s, x, i, i, i, y, i, i, i, x, tie, y, i, x, i, i))
            L.append("local %s:%d = (mqn%d * zext(msn%d)) | (mnum%d * zext(!msn%d));" % (r, s, i, i, i, i))
        elif is_cmp:
            c = base[2:]
            un = "(nan(%s) || nan(%s))" % (x, y)
            expr = {"af": "0", "un": un, "eq": "(%s f== %s)" % (x, y), "ueq": "(%s || (%s f== %s))" % (un, x, y),
                    "lt": "(%s f< %s)" % (x, y), "ult": "(%s || (%s f< %s))" % (un, x, y),
                    "le": "(%s f<= %s)" % (x, y), "ule": "(%s || (%s f<= %s))" % (un, x, y),
                    "or": "!%s" % un, "une": "(%s || (%s f!= %s))" % (un, x, y), "ne": "(!%s && (%s f!= %s))" % (un, x, y)}[c]
            if c == "af":
                L.append("local %s:%d = 0;" % (r, s))
            else:
                L.append("local %s:%d = 0 - zext(%s);" % (r, s, expr))
        elif base == "fclass":
            mant = "(%s & 0x%x)" % (x, F["man"])
            ex = "(%s & 0x%x)" % (x, F["exp"])
            neg = "((%s & 0x%x) != 0)" % (x, F["sign"])
            L.append("local mex%d:1 = %s == 0x%x;" % (i, ex, F["exp"]))
            L.append("local mez%d:1 = %s == 0;" % (i, ex))
            L.append("local mmz%d:1 = %s == 0;" % (i, mant))
            L.append("local mng%d:1 = %s;" % (i, neg))
            L.append("local mqt%d:1 = (%s & 0x%x) != 0;" % (i, x, F["quiet"]))
            parts = [("mex%d && !mmz%d && !mqt%d" % (i, i, i), 0x1), ("mex%d && !mmz%d && mqt%d" % (i, i, i), 0x2),
                     ("mex%d && mmz%d && mng%d" % (i, i, i), 0x4), ("!mex%d && !mez%d && mng%d" % (i, i, i), 0x8),
                     ("mez%d && !mmz%d && mng%d" % (i, i, i), 0x10), ("mez%d && mmz%d && mng%d" % (i, i, i), 0x20),
                     ("mex%d && mmz%d && !mng%d" % (i, i, i), 0x40), ("!mex%d && !mez%d && !mng%d" % (i, i, i), 0x80),
                     ("mez%d && !mmz%d && !mng%d" % (i, i, i), 0x100), ("mez%d && mmz%d && !mng%d" % (i, i, i), 0x200)]
            L.append("local %s:%d = %s;" % (r, s, " | ".join("(0x%x * zext(%s))" % (v, c) for c, v in parts)))
        elif base in ("ffint_s", "ffint_u"):
            src = x if base == "ffint_s" else "mzx%d" % i
            if base == "ffint_u":
                L.append("local mzx%d:%d = zext(%s);" % (i, 2 * s, x))
            L.append("local %s:%d = int2float(%s);" % (r, s, src))
        elif base in ("ftrunc_s", "ftrunc_u", "ftint_s", "ftint_u", "frint"):
            if base == "frint":
                L.append("local mbig%d:1 = nan(%s) || (abs(%s) f>= 0x%x:%d);" % (i, x, x, F["mant"], s))
                L.append("local mxs%d:%d = %s * zext(!mbig%d);" % (i, s, x, i))
                rv = _rne(L, i, "mxs%d" % i, s, s)
                L.append("local mrv%d:%d = int2float%s | (%s & 0x%x);" % (i, s, rv, x, F["sign"]))
                L.append("local %s:%d = (%s * zext(mbig%d)) | (mrv%d * zext(!mbig%d));" % (r, s, x, i, i, i))
            else:
                signed = base.endswith("_s")
                isz = s if signed else 2 * s
                lim = F["two31"] if signed else F["two32"]
                L.append("local mnan%d:1 = nan(%s);" % (i, x))
                L.append("local mhi%d:1 = !mnan%d && (%s f>= 0x%x:%d);" % (i, i, x, lim, s))
                if signed:
                    L.append("local mlo%d:1 = !mnan%d && (%s f< 0x%x:%d);" % (i, i, x, F["two31"] | F["sign"], s))
                else:
                    L.append("local mlo%d:1 = !mnan%d && (%s f< 0:%d);" % (i, i, x, s))
                L.append("local mok%d:1 = !(mnan%d || mhi%d || mlo%d);" % (i, i, i, i))
                L.append("local mxs%d:%d = %s * zext(mok%d);" % (i, s, x, i))
                if base.startswith("ftrunc"):
                    L.append("local mti%d:%d = trunc(mxs%d);" % (i, isz, i))
                    ival = "mti%d" % i
                else:
                    ival = _rne(L, i, "mxs%d" % i, s, isz)
                hi = _smax(s) if signed else _umax(s)
                lo = _smin(s) if signed else "0"
                L.append("local mi%d:%d = %s;" % (i, isz, ival))
                L.append("local %s:%d = (mi%d:%d * zext(mok%d)) | (%s * zext(mhi%d)) | (%s * zext(mlo%d));" % (r, s, i, s, i, hi, i, lo, i))
        res.append(r)
    L.append(_pack(res, s))
    return L

def semantics5(mn, suf, imm):
    """The fixed-point Q formats: Q15 (.h) and Q31 (.w) multiplies and the Q/float conversions,
    with the saturation of QEMU's helpers."""
    base = mn.split(".")[0]
    if suf not in SIZE:
        return None
    s = SIZE[suf]; n = 16 // s; B = 8 * s
    L = []
    if base in ("mul_q", "mulr_q", "madd_q", "maddr_q", "msub_q", "msubr_q"):
        if suf not in ("h", "w"):
            return None
        L += _elems("msa_ws", s, n, "ma")
        L += _elems("msa_wt", s, n, "mb")
        if base.startswith("madd") or base.startswith("msub"):
            L += _elems("msa_wd", s, n, "mc")
        W4 = 4 * s
        rnd = (1 << (B - 2)) if "r_" in base else 0
        res = []
        for i in range(n):
            x, y, r = "ma%d" % i, "mb%d" % i, "mr%d" % i
            L.append("local mp%d:%d = sext(%s) * sext(%s);" % (i, W4, x, y))
            if base.startswith("mul"):
                L.append("local msat%d:1 = (%s == %s) && (%s == %s);" % (i, x, _smin(s), y, _smin(s)))
                L.append("local mq%d:%d = (mp%d + %d) s>> %d;" % (i, W4, i, rnd, B - 1))
                L.append("local %s:%d = (mq%d:%d * zext(!msat%d)) | (%s * zext(msat%d));" % (r, s, i, s, i, _smax(s), i))
            else:
                o = "+" if base.startswith("madd") else "-"
                L.append("local mq%d:%d = ((sext(mc%d) << %d) %s mp%d + %d) s>> %d;" % (i, W4, i, B - 1, o, i, rnd, B - 1))
                L.append("local mh%d:1 = mq%d s> %s;" % (i, i, _smax(s)))
                L.append("local ml%d:1 = mq%d s< %s;" % (i, i, _smin(s)))
                L.append("local %s:%d = (mq%d:%d * zext(!(mh%d || ml%d))) | (%s * zext(mh%d)) | (%s * zext(ml%d));" % (r, s, i, s, i, i, _smax(s), i, _smin(s), i))
            res.append(r)
        L.append(_pack(res, s))
        return L
    if base in ("ffql", "ffqr"):
        if suf not in ("w", "d"):
            return None
        hs = s // 2
        off = n if base == "ffql" else 0
        scale = {4: 0x38000000, 8: 0x3e00000000000000}[s]   # 2^-15, 2^-31
        res = []
        for i in range(n):
            L.append("local mh%d:%d = msa_ws(%d);" % (i, hs, (off + i) * hs))
            L.append("local mf%d:%d = int2float(mh%d);" % (i, s, i))
            L.append("local mr%d:%d = mf%d f* 0x%x:%d;" % (i, s, i, scale, s))
            res.append("mr%d" % i)
        L.append(_pack(res, s))
        return L
    if base == "ftq":
        if suf == "h":
            fs_, ns = 4, 4
        elif suf == "w":
            fs_, ns = 8, 2
        else:
            return None
        hs = fs_ // 2
        F = FBITS[fs_]
        scale = {4: 0x47000000, 8: 0x41e0000000000000}[fs_]   # 2^15, 2^31
        lim = {4: 0x47000000, 8: 0x41e0000000000000}[fs_]
        res = []
        for i in range(2 * ns):
            src = "msa_wt" if i < ns else "msa_ws"
            k = i if i < ns else i - ns
            L.append("local mx%d:%d = %s(%d);" % (i, fs_, src, k * fs_))
            L.append("local my%d:%d = mx%d f* 0x%x:%d;" % (i, fs_, i, scale, fs_))
            L.append("local mnan%d:1 = nan(mx%d);" % (i, i))
            L.append("local mhi%d:1 = !mnan%d && (my%d f>= 0x%x:%d);" % (i, i, i, lim, fs_))
            L.append("local mlo%d:1 = !mnan%d && (my%d f< 0x%x:%d);" % (i, i, i, lim | F["sign"], fs_))
            L.append("local mok%d:1 = !(mnan%d || mhi%d || mlo%d);" % (i, i, i, i))
            L.append("local mys%d:%d = my%d * zext(mok%d);" % (i, fs_, i, i))
            iv = _rne(L, i, "mys%d" % i, fs_, fs_)
            L.append("local miv%d:%d = %s;" % (i, fs_, iv))
            # rounding up to 2^15 (2^31) still saturates
            L.append("local mov%d:1 = miv%d s> %s;" % (i, i, _smax(hs)))
            L.append("local mr%d:%d = (miv%d:%d * zext(mok%d && !mov%d)) | (%s * zext(mhi%d || (mok%d && mov%d))) | (%s * zext(mlo%d));" % (i, hs, i, hs, i, i, _smax(hs), i, i, i, _smin(hs), i))
            res.append("mr%d" % i)
        L.append(_pack(res, hs))
        return L
    return None

out = []
skipped = []
for name, fmt, args in encs:
    if fmt not in formats or fmt.startswith("SPECIAL_"):
        skipped.append(name)  # LSA/DLSA are in the base spec already
        continue
    pnames, lets, top = formats[fmt]
    vals = dict(zip(pnames, [lit(a.strip()) for a in args.split(",")]))
    mn = mnemonic(name)
    suf = mn.split(".")[-1] if "." in mn else ""
    asm, wd_in, dargs = desc_info(name)
    signed_imm = "simm" in dargs
    cons = ["prime=0x%x" % top]
    ops = {}
    for hi, lo, v in lets:
        if hi == 31:
            continue
        if re.fullmatch(r"0b[01]+", v) or re.fullmatch(r"\d+", v):
            cons.append("%s=0x%x" % (field(hi, lo), lit(v)))
        elif v in vals:
            cons.append("%s=0x%x" % (field(hi, lo), vals[v]))
        else:
            mm = re.fullmatch(r"(\w+)(?:\{(\d+)(?:-(\d+))?\})?", v)
            ops.setdefault(mm.group(1), []).append((hi, lo))
    out.append((name, mn, suf, cons, ops, asm, wd_in, signed_imm, fmt))

# --- emit
W = lambda f: "W%s" % f
lines = ["# MIPS SIMD Architecture (MSA), generated by tools/gen_mips_msa.py from LLVM's",
         "# MipsMSAInstrFormats.td and MipsMSAInstrInfo.td. Do not edit by hand.", ""]
pcodeops = set()
cons_lines = []
for name, mn, suf, cons, ops, asm, wd_in, signed_imm, fmt in out:
    pat = ["$(AMODE)"] + cons
    disp = None; body = []
    uop = "msa_" + mn.replace(".", "_")
    def reg(op):
        hi, lo = ops[op][0]
        return {"wd": "msa_wd", "ws": "msa_ws", "wt": "msa_wt", "rd": "msa_rd", "rs": "msa_rs", "rt": "msa_rt",
                "cs": "msa_cs", "cd": "msa_cd"}[op]
    for op in ("wd", "ws", "wt", "rd", "rs", "rt", "cs", "cd"):
        if op in ops:
            pat.append(reg(op))
    imm = None
    for op in ("m", "n", "imm", "u8", "s10"):
        if op in ops:
            (hi, lo), = ops[op]
            sg = op == "s10" or (op == "imm" and signed_imm)
            imm = field(hi, lo, sg)
            pat.append(imm)
    elsz = SIZE.get(suf, 0)
    if fmt == "MSA_MI10_FMT":
        disp = "msa_wd, MSAOFF"
        pat = [p for p in pat if p != "msa_rs"]
        pat.append("MSAOFF%d" % elsz)
        disp = "msa_wd, MSAOFF%d" % elsz
        # element i is at address + i*size, in the element's byte order, and is bits
        # [8*i*size, 8*(i+1)*size) of the register (element 0 least significant)
        n = 16 // elsz
        if mn.startswith("ld."):
            body = ["local a:$(ADDRSIZE) = MSAOFF%d;" % elsz]
            for i in range(n):
                body.append("local e%d:%d = *[ram]:%d (a + %d);" % (i, elsz, elsz, i * elsz))
            body.append("msa_wd = " + " | ".join("(zext(e%d) << %d)" % (i, 8 * i * elsz) for i in range(n)) + ";")
        else:
            body = ["local a:$(ADDRSIZE) = MSAOFF%d;" % elsz]
            for i in range(n):
                body.append("*[ram]:%d (a + %d) = msa_wd(%d);" % (elsz, i * elsz, i * elsz))
    elif fmt.startswith("MSA_CBRANCH"):
        disp = "msa_wt, Rel16"; pat.append("Rel16")
        if suf == "v":
            cond = "msa_wt == 0" if mn.startswith("bz") else "msa_wt != 0"
            body = ["tmp:1 = %s;" % cond]
        else:
            # bz.df: some element is zero; bnz.df: every element is nonzero
            s = SIZE[suf]
            body = ["local mz%d:%d = msa_wt(%d);" % (i, s, i * s) for i in range(16 // s)]
            any_zero = " || ".join("(mz%d == 0)" % i for i in range(16 // s))
            body.append("tmp:1 = %s;" % (any_zero if mn.startswith("bz") else "!(%s)" % any_zero))
        body += ["delayslot(1);", "if (tmp != 0) goto Rel16;"]
    elif mn == "move.v":
        disp = "msa_wd, msa_ws"; body = ["msa_wd = msa_ws;"]
    elif mn == "cfcmsa":
        disp = "msa_rd, msa_cs"; body = ["msa_rd = zext(msa_cs);"]
    elif mn == "ctcmsa":
        disp = "msa_cd, msa_rs"; body = ["msa_cd = msa_rs:4;"]
    elif mn.startswith("copy_"):
        # one constructor per element index, so the element is a constant subpiece
        sx = "sext" if mn.startswith("copy_s") else "zext"
        (hi, lo), = ops["n"]
        nf = field(hi, lo)
        pat = [p for p in pat if p != nf]
        for k in range(16 // elsz):
            p2 = pat + ["%s=%d" % (nf, k)]
            e = "msa_ws(%d)" % (k * elsz)
            if elsz == 8:
                b2 = ["local e:8 = msa_ws(%d);" % (k * 8), "msa_rd = e:$(REGSIZE);"]
            else:
                b2 = ["local e:%d = msa_ws(%d);" % (elsz, k * elsz), "msa_rd = %s(e);" % sx]
            cons_lines.append(":%s msa_rd, msa_ws^\"[%d]\" is %s {\n\t%s\n}" % (mn, k, " & ".join(p2), "\n\t".join(b2)))
        continue
    else:
        # operand display by format, as LLVM prints it
        base = mn.split(".")[0]
        if fmt == "MSA_3R_INDEX_FMT":
            disp = 'msa_wd, msa_ws^"["^msa_rt^"]"'
        elif fmt in ("MSA_2R_FMT", "MSA_2RF_FMT", "MSA_ELM_FMT"):
            disp = "msa_wd, msa_ws"
        elif fmt.startswith("MSA_2R_FILL"):
            disp = "msa_wd, msa_rs"
        elif fmt.startswith("MSA_ELM_INSERT"):
            disp = 'msa_wd^"["^%s^"]", msa_rs' % imm
        elif fmt.startswith("MSA_ELM_") and base == "insve":
            disp = 'msa_wd^"["^%s^"]", msa_ws^"[0]"' % imm
        elif fmt.startswith("MSA_ELM_"):
            disp = 'msa_wd, msa_ws^"["^%s^"]"' % imm
        elif fmt == "MSA_I10_FMT":
            disp = "msa_wd, %s" % imm
        elif imm:
            disp = "msa_wd, msa_ws, %s" % imm
        else:
            disp = "msa_wd, msa_ws, msa_wt"
        ins = []
        if base in ACC:
            ins.append("msa_wd")
        for op in ("ws", "wt", "rs", "rt"):
            if op in ops:
                ins.append("msa_" + op)
        if imm:
            ins.append(imm + ":4")
        sem = semantics(mn, suf, imm) or semantics2(mn, suf, imm) or semantics3(mn, suf, imm) or semantics4(mn, suf, imm) or semantics5(mn, suf, imm)
        if sem:
            body = sem
        else:
            pcodeops.add(uop)
            body = ["msa_wd = %s(%s);" % (uop, ", ".join(ins))]
    cons_lines.append(":%s %s is %s {\n\t%s\n}" % (mn, disp, " & ".join(pat), "\n\t".join(body)))

GPR = "zero at v0 v1 a0 a1 a2 a3 t0 t1 t2 t3 t4 t5 t6 t7 s0 s1 s2 s3 s4 s5 s6 s7 t8 t9 k0 k1 gp sp s8 ra"
lines += ["# The 128-bit vector registers. FR=1 aliasing with the FPRs is not modelled: f0-f31 are",
          "# separate registers.",
          "define register offset=0x5000 size=16 [ %s ];" % " ".join("w%d" % i for i in range(32)),
          "define register offset=0x5200 size=4 [ MSAIR MSACSR MSAAccess MSASave MSAModify MSARequest MSAMap MSAUnmap ];",
          "attach variables [ msa_wd msa_ws msa_wt ] [ %s ];" % " ".join("w%d" % i for i in range(32)),
          "attach variables [ msa_rd msa_rs msa_rt ] [ %s ];" % GPR,
          "attach variables [ msa_cs msa_cd ] [ MSAIR MSACSR MSAAccess MSASave MSAModify MSARequest MSAMap MSAUnmap %s ];" % " ".join(["_"] * 24),
          ""]
lines += ["define pcodeop %s;" % p for p in sorted(pcodeops)]
lines.append("")
for sz in (1, 2, 4, 8):
    lines.append("MSAOFF%d: off(msa_rs) is msa_rs & msa_mi10 [ off = msa_mi10 * %d; ] {" % (sz, sz))
    lines.append("\ttmp:$(REGSIZE) = msa_rs + off;")
    lines.append("\ttmpa:$(ADDRSIZE) = 0;")
    lines.append("\tValCast(tmpa, tmp);")
    lines.append("\texport tmpa;")
    lines.append("}")
lines.append("")
MSA64 = ("copy_s.d", "fill.d", "insert.d")
for c in cons_lines:
    if c.split()[0][1:] in MSA64:
        lines += ["@ifdef MIPS64", c, "@endif"]
    else:
        lines.append(c)
(OUT / "mips_msa.sinc").write_text("\n".join(lines) + "\n")
fl = ["# MSA token fields, generated by tools/gen_mips_msa.py."]
for n, (lo, hi, sg) in sorted(fields.items()):
    fl.append("    %-14s = (%d,%d)%s" % (n, lo, hi, " signed" if sg else ""))
for n, lohi in (("msa_wd", (6, 10)), ("msa_ws", (11, 15)), ("msa_wt", (16, 20)), ("msa_rd", (6, 10)),
                ("msa_rs", (11, 15)), ("msa_rt", (16, 20)), ("msa_cs", (11, 15)), ("msa_cd", (6, 10)), ("msa_mi10", (16, 25))):
    fl.append("    %-14s = (%d,%d)%s" % (n, lohi[0], lohi[1], " signed" if n == "msa_mi10" else ""))
(OUT / "mips_msa_fields.sinc").write_text("\n".join(fl) + "\n")
print(len(out), "encodings,", len(cons_lines), "constructors; skipped", skipped)
