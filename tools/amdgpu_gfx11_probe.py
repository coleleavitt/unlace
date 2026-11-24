#!/usr/bin/env python3
"""Probe LLVM's GFX11 disassembler for the opcode tables the AMDGPU generators read.

Runs llvm-objdump (LLVM 17 or newer, -mcpu=gfx1100) over synthetic encodings and writes
plain tables of opcode numbers, mnemonics and operand shapes; nothing from LLVM's sources.

  amdgpu_gfx11_probe.py vop3 amdgcn_gfx11.slaspec [gfx1200] > vop3_ops.txt
      '<op> | <text, op_sel=0> | <text, op_sel=0xf>' for every VOP3 opcode the base spec
      lacks or whose LLVM form names a VGPR half (.l/.h)
  amdgpu_gfx11_probe.py e32 [gfx1200] > e32_ops.txt
      '<vopc|vop1|vop2> <op> | <text>' for every VOPC, VOP1 and VOP2 opcode whose LLVM form
      names a VGPR half
  amdgpu_gfx11_probe.py mimg > mimg_ops.txt

A trailing gfx12 -mcpu probes that target instead (with +real-true16, and s_nop padding after
each encoding so a rejected one cannot shift the next).
      '<op> <mnemonic> <sampler 0/1> <dim> <dim name> <a16> <address VGPRs>' for every MIMG opcode
"""
import os
import re
import struct
import subprocess
import sys
import tempfile


def elf(code):
    """A minimal ELF64 EM_AMDGPU image with code at 0x1000."""
    base, ehsz, phsz, shsz = 0x1000, 64, 56, 64
    shstr = b'\0.text\0.shstrtab\0'
    off_code = ehsz + phsz
    off_shstr = off_code + len(code)
    off_sh = (off_shstr + len(shstr) + 7) & ~7
    e = b'\x7fELF' + bytes([2, 1, 1, 64]) + b'\0' * 8
    e += struct.pack('<HHIQQQIHHHHHH', 2, 224, 1, base, ehsz, off_sh, 0x41, ehsz, phsz, 1, shsz, 3, 2)
    ph = struct.pack('<IIQQQQQQ', 1, 5, off_code, base, base, len(code), len(code), 4)
    sh1 = struct.pack('<IIQQQQIIQQ', 1, 1, 6, base, off_code, len(code), 0, 0, 4, 0)
    sh2 = struct.pack('<IIQQQQIIQQ', 7, 3, 0, 0, off_shstr, len(shstr), 0, 0, 1, 0)
    data = e + ph + code + shstr
    return data + b'\0' * (off_sh - len(data)) + b'\0' * shsz + sh1 + sh2


def objdump(insts, mcpu='gfx1100', mattr=None, pad=False):
    """Disassemble a list of word lists; returns the text per instruction ('' if LLVM rejects it).
    With pad, four s_nop words follow each instruction so a rejected one cannot shift the next."""
    code, offs = b'', []
    for ws in insts:
        offs.append(0x1000 + len(code))
        code += b''.join(w.to_bytes(4, 'little') for w in ws + ([0xbf800000] * 4 if pad else []))
    with tempfile.TemporaryDirectory() as d:
        p = os.path.join(d, 'probe.elf')
        open(p, 'wb').write(elf(code))
        out = subprocess.run(['llvm-objdump', '-d', '--mcpu=' + mcpu] + (['--mattr=' + mattr] if mattr else [])
                             + [p], capture_output=True, text=True, check=True).stdout
    ref = {}
    for line in out.splitlines():
        m = re.match(r'\s+(\S.*?)\s*//\s+([0-9A-F]+):((?: [0-9A-F]{8})+)', line)
        if m:
            ref[int(m.group(2), 16)] = (m.group(1).strip(), len(m.group(3).split()))
    res = []
    for o, ws in zip(offs, insts):
        t = ref.get(o)
        ok = t and t[1] == len(ws) and not t[0].startswith('.') and 'invalid' not in t[0]
        res.append(re.sub(r'\s+', ' ', t[0]) if ok else '')
    return res


def assembles(texts, insts, mcpu='gfx1100'):
    """Indices of the texts llvm-mc assembles back to the same words (encodings a compiler emits)."""
    idx = [i for i, t in enumerate(texts) if t]
    src = ''.join(texts[i] + '\n' for i in idx)
    r = subprocess.run(['llvm-mc', '-triple=amdgcn', '-mcpu=' + mcpu, '-show-encoding'], input=src,
                       capture_output=True, text=True)
    bad = {idx[int(m) - 1] for m in re.findall(r'<stdin>:(\d+):\d+: error', r.stderr)}
    encs = [bytes(int(x, 16) for x in m.split(','))
            for m in re.findall(r'encoding: \[([^\]]*)\]', r.stdout)]
    good, k = set(), 0
    for i in idx:
        if i in bad:
            continue
        if k < len(encs) and encs[k] == b''.join(w.to_bytes(4, 'little') for w in insts[i]):
            good.add(i)
        k += 1
    return good


def cpu():
    """The -mcpu (and -mattr) of the run: gfx1100, or the one named after the arguments."""
    m = sys.argv[-1] if sys.argv[-1].startswith('gfx') else 'gfx1100'
    return m, ('+real-true16' if m != 'gfx1100' else None)


def vop3(spec):
    have = {int(x) for x in re.findall(r'e6=0x35\b[^;]*?vop3op=(\d+)', open(spec).read())}
    w1 = (256 + 2) | ((256 + 3) << 9) | ((256 + 4) << 18)
    insts = [[(0x35 << 26) | (op << 16) | (sel << 11) | 1, w1] for op in range(1024) for sel in (0, 0xf)]
    txt = objdump(insts, *cpu(), pad=cpu()[0] != 'gfx1100')
    for op in range(1024):
        a, b = txt[2 * op], txt[2 * op + 1]
        if a and (op not in have or re.search(r'\bv\d+\.[lh]\b', a)):
            print('%d | %s | %s' % (op, a, b))


def e32():
    fmts = []
    for op in range(256):
        fmts.append(('vopc', op, (0x3e << 25) | (op << 17) | (0x01 << 9) | (256 + 2)))
    for op in range(62):
        fmts.append(('vop2', op, (op << 25) | (0x01 << 17) | (0x03 << 9) | (256 + 2)))
    for op in range(256):
        fmts.append(('vop1', op, (0x3f << 25) | (0x01 << 17) | (op << 9) | (256 + 2)))
    for (f, op, w), t in zip(fmts, objdump([[x[2]] for x in fmts], *cpu(), pad=cpu()[0] != 'gfx1100')):
        if t and re.search(r'\bv\d+\.[lh]\b', t):
            print('%s %d | %s' % (f, op, t))


def mimg():
    keys, insts = [], []
    for op in range(256):
        for dim in range(8):
            for a16 in (0, 1):
                for ss in (3, 0):
                    w0 = (0x3c << 26) | (op << 18) | (1 << 8) | (dim << 2) | (a16 << 16)
                    insts.append([w0, 2 | (5 << 8) | (1 << 16) | (ss << 26)])
                    keys.append((op, dim, a16, ss))
    seen = set()
    txt = objdump(insts)
    good = assembles(txt, insts)
    for i, ((op, dim, a16, ss), t) in enumerate(zip(keys, txt)):
        if i not in good or not t.startswith('image_') or (op, dim, a16) in seen:
            continue
        seen.add((op, dim, a16))
        a = t.split(',')[1].strip()
        m = re.match(r'v\[(\d+):(\d+)\]$', a)
        n = int(m.group(2)) - int(m.group(1)) + 1 if m else 1
        dn = re.search(r'dim:(\S+)', t).group(1)
        print(op, t.split()[0], 1 if t.count('s[') > 1 else 0, dim, dn, a16, n)


if __name__ == '__main__':
    if sys.argv[1] == 'vop3':
        vop3(sys.argv[2])
    elif sys.argv[1] == 'e32':
        e32()
    else:
        mimg()
