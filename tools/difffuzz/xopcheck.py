"""Check the p-code of the XOP integer instructions and TBM (amd_xop.sinc) against a Python model
written from the AMD64 APM text (vol. 4 for XOP, vol. 3 for TBM). No CPU here runs them.

Usage: ~/.local/share/difffuzz-venv/bin/python tools/difffuzz/xopcheck.py <repo> <unlace> <sleighpath>
Each form is lifted with unlace, run in pcode_emu on random YMM/GPR inputs (boundary lanes every
fourth trial) and compared with the model: the destination YMM register in full (so the cleared
upper bits count) and, for TBM, RAX and CF/ZF/SF/OF/PF. Exit status 1 on a difference.
"""
import sys, os, random, tempfile, subprocess, re, collections
sys.path.insert(0, sys.argv[1] + "/tools/difffuzz")
import difffuzz as D
from arches import ARCHES
from pcode_emu import State, step, Unmodeled
unlace, sleighpath = sys.argv[2], sys.argv[3]
arch = ARCHES["x86-64"]
regs, big = D.register_map(arch.lang)
rng = random.Random(5)
M128 = (1 << 128) - 1

def xop(mm, w, vvvv, l, opc, reg, rm, imm=None):
    b1 = ((~(reg >> 3) & 1) << 7) | (1 << 6) | ((~(rm >> 3) & 1) << 5) | mm
    b2 = (w << 7) | ((~vvvv & 15) << 3) | (l << 2)
    b = bytes([0x8F, b1, b2, opc, 0xC0 | ((reg & 7) << 3) | (rm & 7)])
    return b + (bytes([imm]) if imm is not None else b"")

def lanes(v, w, n=128):
    return [(v >> (i * w)) & ((1 << w) - 1) for i in range(n // w)]
def pack(xs, w):
    return sum((x & ((1 << w) - 1)) << (i * w) for i, x in enumerate(xs))
def s(x, w):
    x &= (1 << w) - 1
    return x - (1 << w) if x >> (w - 1) else x
def sat(x, w):
    return max(-(1 << (w - 1)), min((1 << (w - 1)) - 1, x))
W = {"b": 8, "w": 16, "d": 32, "q": 64}

# ---- reference models, written from the AMD64 APM vol. 4 text
def m_pcmov(a, b, c, n): return ((a & c) | (b & ~c)) & ((1 << n) - 1)
def m_pcom(t, u, cc):
    w = W[t]
    def f(a, b):
        out = []
        for x, y in zip(lanes(a, w), lanes(b, w)):
            if not u: x, y = s(x, w), s(y, w)
            r = [x < y, x <= y, x > y, x >= y, x == y, x != y, False, True][cc & 7]
            out.append((1 << w) - 1 if r else 0)
        return pack(out, w)
    return f
def m_prot(t):
    w = W[t]
    def f(src, cnt_lanes):
        out = []
        for x, c in zip(lanes(src, w), cnt_lanes):
            c = s(c, 8)
            k = c % w if c >= 0 else (w - ((-c) % w)) % w
            out.append(((x << k) | (x >> (w - k))) & ((1 << w) - 1))
        return pack(out, w)
    return f
def m_psh(t, arith):
    w = W[t]
    def f(src, cnt_lanes):
        out = []
        for x, c in zip(lanes(src, w), cnt_lanes):
            c = s(c, 8)
            if c >= 0:
                out.append((x << (c & (w - 1))) & ((1 << w) - 1))
            else:
                k = (-c) & (w - 1)
                out.append((s(x, w) >> k) if arith else (x >> k))
        return pack(out, w)
    return f
def m_phadd(f, t, u, sub=False):
    fw, tw = W[f], W[t]
    k = tw // fw
    def g(a):
        xs = lanes(a, fw)
        if not u: xs = [s(x, fw) for x in xs]
        out = []
        for i in range(128 // tw):
            grp = xs[i * k:(i + 1) * k]
            out.append(grp[0] - grp[1] if sub else sum(grp))
        return pack(out, tw)
    return g
def m_pmacs(kind, satur):
    def g(a, b, c):
        if kind == "ww":
            r = [s(x, 16) * s(y, 16) + s(z, 16) for x, y, z in zip(lanes(a, 16), lanes(b, 16), lanes(c, 16))]
            return pack([sat(v, 16) if satur else v for v in r], 16)
        if kind == "wd":
            A, B = lanes(a, 16), lanes(b, 16)
            r = [s(A[2 * i + 1], 16) * s(B[2 * i + 1], 16) + s(z, 32) for i, z in enumerate(lanes(c, 32))]
            return pack([sat(v, 32) if satur else v for v in r], 32)
        if kind == "dd":
            r = [s(x, 32) * s(y, 32) + s(z, 32) for x, y, z in zip(lanes(a, 32), lanes(b, 32), lanes(c, 32))]
            return pack([sat(v, 32) if satur else v for v in r], 32)
        if kind in ("dql", "dqh"):
            o = 0 if kind == "dql" else 1
            A, B = lanes(a, 32), lanes(b, 32)
            r = [s(A[2 * i + o], 32) * s(B[2 * i + o], 32) + s(z, 64) for i, z in enumerate(lanes(c, 64))]
            return pack([sat(v, 64) if satur else v for v in r], 64)
        if kind == "madcwd":
            A, B = lanes(a, 16), lanes(b, 16)
            r = [s(A[2 * i], 16) * s(B[2 * i], 16) + s(A[2 * i + 1], 16) * s(B[2 * i + 1], 16) + s(z, 32) for i, z in enumerate(lanes(c, 32))]
            return pack([sat(v, 32) if satur else v for v in r], 32)
    return g

cases = []   # (name, bytes, inputs-> expected dst128 function, which regs)
X = lambda i: "YMM%d" % i
# dst=1, src1(vvvv)=2, rm=3, is4=4
cases.append(("vpcmov", xop(8, 0, 2, 0, 0xA2, 1, 3, 4 << 4), lambda R: m_pcmov(R[2], R[3], R[4], 128)))
cases.append(("vpcmov.w1", xop(8, 1, 2, 0, 0xA2, 1, 3, 4 << 4), lambda R: m_pcmov(R[2], R[4], R[3], 128)))
cases.append(("vpcmov.256", xop(8, 0, 2, 1, 0xA2, 1, 3, 4 << 4), lambda R: m_pcmov(R[2], R[3], R[4], 256), 256))
for t, op in zip("bwdq", (0xCC, 0xCD, 0xCE, 0xCF)):
    for u, base in (("", op), ("u", op + 0x20)):
        for cc in list(range(8)) + [0x1d]:
            cases.append(("vpcom%s%s.%d" % (u, t, cc), xop(8, 0, 2, 0, base, 1, 3, cc), (lambda f: lambda R: f(R[2], R[3]))(m_pcom(t, u, cc))))
for t, i in zip("bwdq", range(4)):
    w = W[t]
    for imm in (0, 1, 3, w - 1, w, 0x7f, 0x80, 0xf9):
        cases.append(("vprot%s.i%d" % (t, imm), xop(8, 0, 0, 0, 0xC0 + i, 1, 3, imm), (lambda f, imm, w: lambda R: f(R[3], [imm] * (128 // w)))(m_prot(t), imm, w)))
    cases.append(("vprot%s.w0" % t, xop(9, 0, 2, 0, 0x90 + i, 1, 3), (lambda f, w: lambda R: f(R[3], lanes(R[2], w)))(m_prot(t), w)))
    cases.append(("vprot%s.w1" % t, xop(9, 1, 2, 0, 0x90 + i, 1, 3), (lambda f, w: lambda R: f(R[2], lanes(R[3], w)))(m_prot(t), w)))
    for a, base in ((False, 0x94), (True, 0x98)):
        nm = "vpsh%s%s" % ("a" if a else "l", t)
        cases.append((nm + ".w0", xop(9, 0, 2, 0, base + i, 1, 3), (lambda f, w: lambda R: f(R[3], lanes(R[2], w)))(m_psh(t, a), w)))
        cases.append((nm + ".w1", xop(9, 1, 2, 0, base + i, 1, 3), (lambda f, w: lambda R: f(R[2], lanes(R[3], w)))(m_psh(t, a), w)))
PH = {0xc1: ("b", "w", 0), 0xc2: ("b", "d", 0), 0xc3: ("b", "q", 0), 0xc6: ("w", "d", 0), 0xc7: ("w", "q", 0), 0xcb: ("d", "q", 0),
      0xd1: ("b", "w", 1), 0xd2: ("b", "d", 1), 0xd3: ("b", "q", 1), 0xd6: ("w", "d", 1), 0xd7: ("w", "q", 1), 0xdb: ("d", "q", 1)}
for opc, (f, t, u) in PH.items():
    cases.append(("vphadd%s%s%s" % ("u" if u else "", f, t), xop(9, 0, 0, 0, opc, 1, 3), (lambda g: lambda R: g(R[3]))(m_phadd(f, t, u))))
for opc, (f, t) in {0xe1: ("b", "w"), 0xe2: ("w", "d"), 0xe3: ("d", "q")}.items():
    cases.append(("vphsub%s%s" % (f, t), xop(9, 0, 0, 0, opc, 1, 3), (lambda g: lambda R: g(R[3]))(m_phadd(f, t, 0, True))))
MAC = {0x95: ("ww", 0), 0x85: ("ww", 1), 0x96: ("wd", 0), 0x86: ("wd", 1), 0x9e: ("dd", 0), 0x8e: ("dd", 1),
       0x97: ("dql", 0), 0x87: ("dql", 1), 0x9f: ("dqh", 0), 0x8f: ("dqh", 1), 0xb6: ("madcwd", 0), 0xa6: ("madcwd", 1)}
for opc, (k, sa) in MAC.items():
    cases.append(("vpmac.%s.%d" % (k, sa), xop(8, 0, 2, 0, opc, 1, 3, 4 << 4), (lambda g: lambda R: g(R[2], R[3], R[4]))(m_pmacs(k, sa))))

cands = [{"bytes": c[1], "mnemonic": c[0], "op_str": ""} for c in cases]
with tempfile.TemporaryDirectory() as tmp:
    rows, problems = D.lift(unlace, arch, cands, tmp, sleighpath)
bad = collections.Counter(); ex = {}; okn = 0; skipped = 0
for c, cand in zip(cases, cands):
    name, nbits = c[0], (c[3] if len(c) > 3 else 128)
    row = rows.get(cand["addr"])
    if row is None:
        bad[name + " not-lifted"] += 1; continue
    for trial in range(200):
        R = {}
        st = State(big, lambda a: 0, regs)
        for i in range(16):
            v = rng.getrandbits(256)
            if trial % 4 == 0:   # small and boundary lanes
                v = sum(rng.choice([0, 1, 0x7f, 0x80, 0xff, 0x7fff, 0x8000, 0xffff, 0x7fffffff, 0x80000000]) << (32 * k) for k in range(8))
            st.set(X(i), v); R[i] = v & ((1 << nbits) - 1)
        try:
            step(st, row["ops"], cand["addr"], len(cand["bytes"]))
        except Unmodeled as e:
            skipped += 1; break
        got = st.get(X(1))
        want = c[2](R) & ((1 << nbits) - 1)
        if got != want:
            bad[name] += 1; ex.setdefault(name, (hex(want), hex(got))); break
    else:
        okn += 1
print("xop cases", len(cases), "ok", okn, "unmodeled", skipped, "bad", len(bad))
for k, v in bad.items(): print(k, v, ex.get(k))
xbad = len(bad)

# ---- TBM
OPS = {"blcfill": (lambda s, m: (s + 1) & s, 1), "blci": (lambda s, m: (~(s + 1)) | s, 1), "blcic": (lambda s, m: (s + 1) & ~s, 1),
       "blcmsk": (lambda s, m: (s + 1) ^ s, 1), "blcs": (lambda s, m: (s + 1) | s, 1), "blsfill": (lambda s, m: (s - 1) | s, -1),
       "blsic": (lambda s, m: (s - 1) | ~s, -1), "t1mskc": (lambda s, m: (s + 1) | ~s, 1), "tzmsk": (lambda s, m: (s - 1) & ~s, -1)}
lines = []
for mn in OPS:
    lines += ["%s eax, ecx" % mn, "%s rax, rcx" % mn]
for ctl in (0x0804, 0x2000, 0x0020, 0x4010, 0xff03):
    lines += ["bextr eax, ecx, %d" % ctl, "bextr rax, rcx, %d" % ctl]
with tempfile.TemporaryDirectory() as tmp:
    src = os.path.join(tmp, "t.s"); open(src, "w").write(".intel_syntax noprefix\n" + "\n".join(lines) + "\n")
    out = subprocess.run(["llvm-mc", "-triple=x86_64", "-mattr=+tbm", "-show-encoding", src], capture_output=True, text=True).stdout
    encs = [bytes(int(x, 16) for x in re.findall(r"0x([0-9a-f]{2})", m)) for m in re.findall(r"encoding: \[([^\]]*)\]", out)]
    cands = [{"bytes": e, "mnemonic": l, "op_str": ""} for e, l in zip(encs, lines)]
    rows, _ = D.lift(unlace, arch, cands, tmp, sleighpath)
rng = random.Random(3); bad = collections.Counter(); ex = {}
for cand in cands:
    l = cand["mnemonic"]; mn = l.split()[0]; w = 64 if "rax" in l else 32; m = (1 << w) - 1
    row = rows.get(cand["addr"])
    if row is None:
        bad[l + " not lifted"] += 1; continue
    for t in range(300):
        s = rng.choice([0, 1, m, m - 1, 1 << (w - 1), rng.getrandbits(w), rng.getrandbits(8)]) & m
        st = State(big, lambda a: 0, regs)
        st.set("RCX", s | (rng.getrandbits(64) << w if w == 32 else 0) & ((1 << 64) - 1)); st.set("RAX", rng.getrandbits(64))
        for f in ("CF", "ZF", "SF", "OF", "PF"): st.set(f, rng.getrandbits(1))
        step(st, row["ops"], cand["addr"], len(cand["bytes"]))
        if mn == "bextr":
            ctl = int(l.split(",")[-1]); start, ln = ctl & 0xff, (ctl >> 8) & 0xff
            r = (s >> start) & ((1 << ln) - 1) if start < w else 0
            r &= m
            want = {"RAX": r, "CF": 0, "OF": 0, "ZF": int(r == 0)}
        else:
            f, d = OPS[mn]
            r = f(s, m) & m
            cf = int(s == m) if d > 0 else int(s == 0)
            want = {"RAX": r, "CF": cf, "OF": 0, "ZF": int(r == 0), "SF": r >> (w - 1), "PF": int(bin(r & 0xff).count("1") % 2 == 0)}
        got = {k: (st.get(k) if k != "RAX" else st.get("RAX")) for k in want}
        if got != want:
            bad[l] += 1; ex.setdefault(l, (hex(s), want, got)); break
print("tbm cases", len(cands), "bad", len(bad))
for k in bad: print(k, ex.get(k))
sys.exit(1 if xbad or bad else 0)
