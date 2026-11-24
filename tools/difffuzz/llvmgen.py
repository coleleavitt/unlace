"""Random RISC-V encodings that llvm-objdump decodes with a given -mattr, for extensions Capstone 5
does not know (Zcb, Zcmp, Zcmt, Zimop, Zcmop, Zicond, Zalasr, ...): one in four is a 16-bit word.
"""
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))


def decode(objdump, words, mattr, xlen):
    """{word: (bytes, mnemonic, operands)} for the words llvm-objdump decodes as one instruction."""
    from sail_sleigh_compare import BASE, elf
    code = b"".join(struct.pack("<I", w if w & 3 == 3 else (w & 0xFFFF) | 0x00010000) for w in words)
    with tempfile.NamedTemporaryFile(suffix=".elf") as f:
        f.write(elf(code, xlen, split=True))
        f.flush()
        out = subprocess.run([objdump, "-d", "--mattr=" + mattr, "-M", "no-aliases", f.name],
                             capture_output=True, text=True).stdout
    res = {}
    for line in out.splitlines():
        m = re.match(r"\s*([0-9a-f]+):\s+([0-9a-f]{8}|[0-9a-f]{4})\s+(\S+)\s*(.*)$", line)
        if not m or m.group(3).startswith("<unknown>"):
            continue
        at = int(m.group(1), 16) - BASE
        if at % 4:
            continue
        w = words[at // 4]
        size = 4 if w & 3 == 3 else 2
        if len(m.group(2)) != 2 * size:
            continue
        b = struct.pack("<I", w)[:size]
        res[w] = (b, m.group(3), re.sub(r"\s+", " ", m.group(4).strip()))
    return res


def generate(rng, n, objdump, mattr, only=None, xlen=64):
    pat = re.compile(only) if only else None
    out, seen = [], set()
    for _ in range(200):
        ws = []
        for _ in range(4096):
            if rng.random() < 0.25:
                w = rng.getrandbits(16)
                if w & 3 == 3:
                    w &= ~1
            else:
                w = rng.getrandbits(32) | 3
            ws.append(w)
        for w, (b, mn, ops) in decode(objdump, ws, mattr, xlen).items():
            if b in seen or (pat and not pat.match(mn)):
                continue
            seen.add(b)
            out.append({"bytes": b, "mnemonic": mn, "op_str": ops})
            if len(out) >= n:
                return out
    return out
