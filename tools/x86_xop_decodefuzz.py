#!/usr/bin/env python3
"""Random XOP and FMA4 encodings: unlace's disassembly against llvm-objdump (AMD's extensions run on
no CPU here). Usage: tools/x86_xop_decodefuzz.py <repo> <unlace> <specs> <workdir> <count> <64|32> [seed]
Each encoding sits in a 32-byte slot (so an undecoded one cannot desynchronise the next); an encoding
both reject is skipped, the rest must agree on length, mnemonic and register operands (memory operands
are compared as present/absent, since the two print RIP-relative and scaled addresses differently).
In 32-bit mode is4 register numbers are taken modulo 8, as the CPU does (LLVM prints xmm8-15).
"""
import sys, os, random, re, subprocess, collections
sys.path.insert(0, sys.argv[1] + "/tools")
import x86_avx512_sweep as S
unlace, specs, work, n, bits = sys.argv[2], sys.argv[3], sys.argv[4], int(sys.argv[5]), int(sys.argv[6])
os.makedirs(work, exist_ok=True)
rng = random.Random(int(sys.argv[7]) if len(sys.argv) > 7 else 1)
XOP8 = [0x85,0x86,0x87,0x8e,0x8f,0x95,0x96,0x97,0x9e,0x9f,0xa2,0xa3,0xa6,0xb6,0xc0,0xc1,0xc2,0xc3,0xcc,0xcd,0xce,0xcf,0xec,0xed,0xee,0xef]
XOP9 = [0x01,0x02,0x12,0x80,0x81,0x82,0x83,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9a,0x9b,0xc1,0xc2,0xc3,0xc6,0xc7,0xcb,0xd1,0xd2,0xd3,0xd6,0xd7,0xdb,0xe1,0xe2,0xe3]
XOPA = [0x10,0x12]
FMA4 = [0x48,0x49] + list(range(0x5c,0x60)) + list(range(0x68,0x80))
code = b""
for i in range(n):
    k = rng.random()
    tail = bytes(rng.getrandbits(8) for _ in range(10))
    if k < 0.75:
        mm = rng.choice([8, 9, 10])
        b1 = (rng.getrandbits(3) << 5) | mm
        if bits == 32: b1 |= 0xC0
        b2 = rng.getrandbits(8)
        if rng.random() < 0.85: b2 &= ~3
        opc = rng.choice({8: XOP8, 9: XOP9, 10: XOPA}[mm]) if rng.random() < 0.9 else rng.getrandbits(8)
        ins = bytes([0x8F, b1, b2, opc]) + tail
    else:
        b1 = (rng.getrandbits(3) << 5) | 3
        if bits == 32: b1 |= 0xC0
        b2 = (rng.getrandbits(6) << 2) | 1
        ins = bytes([0xC4, b1, b2, rng.choice(FMA4)]) + tail
    code += ins[:15] + b"\x90" * (32 - len(ins[:15]))
# raw ELF
import struct
base = 0x1000
mach = 62 if bits == 64 else 3
if bits == 64:
    hdr = b"\x7fELF\x02\x01\x01" + b"\0"*9 + struct.pack("<HHIQQQIHHHHHH", 2, mach, 1, base, 64, 0, 0, 64, 56, 1, 64, 0, 0)
    ph = struct.pack("<IIQQQQQQ", 1, 5, 0x1000, base, base, len(code), len(code), 0x1000)
else:
    hdr = b"\x7fELF\x01\x01\x01" + b"\0"*9 + struct.pack("<HHIIIIIHHHHHH", 2, mach, 1, base, 52, 0, 0, 52, 32, 1, 40, 0, 0)
    ph = struct.pack("<IIIIIIII", 1, 0x1000, base, base, len(code), len(code), 5, 0x1000)
img = hdr + ph; img += b"\0" * (0x1000 - len(img)) + code
elf = os.path.join(work, "f.elf"); open(elf, "wb").write(img)
mattr = "+xop,+fma4,+tbm,+lwp,+avx2"
L = {}
for l in subprocess.run(["llvm-objdump", "-d", "-M", "intel", "--mattr=" + mattr, elf], capture_output=True, text=True).stdout.splitlines():
    m = re.match(r"\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )+)\s*(.*)$", l)
    if m: L[int(m.group(1), 16)] = (m.group(2).replace(" ", ""), re.sub(r"\s+", " ", m.group(3)).strip())
U = S.unlace_rows(unlace, elf, specs, base + len(code))
# llvm-objdump wraps a long instruction's bytes: the leading hex tokens of the text are more bytes
for a, (b, t) in list(L.items()):
    while re.match(r"^[0-9a-f]{2}( |$)", t):
        b += t[:2]; t = t[3:]
    L[a] = (b, t)
def mem_norm(s):
    s = re.sub(r"#.*", "", s).lower()
    if bits == 32:
        # is4 bit 7 is ignored outside 64-bit mode (checked natively); LLVM prints xmm8-15
        s = re.sub(r"([xy]mm)(\d+)", lambda m: m.group(1) + str(int(m.group(2)) & 7), s)
    s = re.sub(r"\[[^\]]*\]", "[m]", s)
    s = re.sub(r"(-?0x[0-9a-f]+|-?\d+)$", lambda m: hex(int(m.group(1), 0) & 0xffffffff), s.strip())
    return s.replace(" ", "")
bad = collections.Counter(); ex = {}
ok = 0
for i in range(n):
    a = base + 32 * i
    l, u = L.get(a), U.get(a)
    lv = l and not l[1].startswith("<unknown>") and "(bad)" not in l[1]
    if u and u[1].startswith(".byte"): u = None
    if not lv and not u:
        continue
    if not lv:
        key = "sleigh-only " + (u[1].split()[0] if u else "?")
    elif not u:
        key = "llvm-only " + l[1].split()[0]
    elif u[0] != l[0] or mem_norm(u[1]) != mem_norm(l[1]):
        key = "differ " + l[1].split()[0]
    else:
        ok += 1; continue
    bad[key] += 1; ex.setdefault(key, (code[32*i:32*i+16].hex(), l, u))
print("ok", ok, "bad", sum(bad.values()))
for k, v in bad.most_common(40): print(v, k, ex[k])
