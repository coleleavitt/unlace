#!/usr/bin/env python3
"""Probe LLVM's GFX12 (RDNA 4) disassembler for the tables the GFX12 generators read.

llvm-objdump (LLVM 22) decodes synthetic encodings for -mcpu=gfx1100 and -mcpu=gfx1200
(+real-true16); only opcode numbers, mnemonics and operand shapes are kept.

  amdgpu_gfx12_probe.py map > gfx12_map.txt
      '<format> <op> <gfx11 mnemonic or -> <gfx12 mnemonic or ->' for the encodings GFX12 keeps
      from GFX11 (SOP*, VOP1/2/C/3/3P, VOPD halves, DS)
  amdgpu_gfx12_probe.py mem > gfx12_mem.txt
      '<format> <op> | <text>' for SMEM, VGLOBAL, VSCRATCH, VFLAT and VBUFFER
  amdgpu_gfx12_probe.py wmma > gfx12_wmma.txt
      '<op> <mnemonic> <VGPRs of D> <A> <B> <C>' for the VOP3P WMMA/SWMMAC opcodes (wave32)
  amdgpu_gfx12_probe.py image > gfx12_image.txt
      '<op> <mnemonic> <vsample 0/1> <dim> <dim name> <a16> <address VGPRs per operand, comma-joined>'
"""
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from amdgpu_gfx11_probe import assembles, objdump  # noqa: E402

V = 256


def fmt_templates():
    return {
        'sop1': (256, [lambda op: [0xbe800000 | (1 << 16) | (op << 8) | 2]]),
        'sop2': (99, [lambda op: [0x80000000 | (op << 23) | (1 << 16) | (3 << 8) | 2]]),
        'sopc': (128, [lambda op: [0xbf000000 | (op << 16) | (2 << 8) | 1]]),
        'sopk': (32, [lambda op: [0xb0000000 | (op << 23) | (1 << 16) | 0x12]]),
        'sopp': (128, [lambda op: [0xbf800000 | (op << 16)], lambda op: [0xbf800000 | (op << 16) | 3]]),
        'vop1': (256, [lambda op: [0x7e000000 | (1 << 17) | (op << 9) | (V + 2)],
                       lambda op: [0x7e000000 | (2 << 17) | (op << 9) | (V + 2)]]),
        'vop2': (62, [lambda op: [(op << 25) | (1 << 17) | (3 << 9) | (V + 2)],
                      lambda op: [(op << 25) | (2 << 17) | (4 << 9) | (V + 2)]]),
        'vopc': (256, [lambda op: [0x7c000000 | (op << 17) | (3 << 9) | (V + 2)],
                       lambda op: [0x7c000000 | (op << 17) | (4 << 9) | (V + 2)]]),
        'vop3': (1024, [lambda op: [0xd4000000 | (op << 16) | 1, (V + 2) | ((V + 3) << 9) | ((V + 4) << 18)],
                        lambda op: [0xd4000000 | (op << 16) | 0x7e, (V + 2) | ((V + 3) << 9) | ((V + 4) << 18)],
                        lambda op: [0xd4000000 | (op << 16) | 2, (V + 2) | ((V + 4) << 9) | ((V + 6) << 18)],
                        lambda op: [0xd4000000 | (op << 16) | 1, 2 | ((V + 3) << 9) | ((V + 4) << 18)]]),
        'vop3p': (128, [lambda op: [0xcc000000 | (op << 16) | 1, (V + 2) | ((V + 3) << 9) | ((V + 4) << 18) | (3 << 27)],
                        lambda op: [0xcc000000 | (op << 16) | 0, (V + 8) | ((V + 16) << 9) | ((V + 0) << 18) | (3 << 27)]]),
        'ds': (256, [lambda op: [0xd8000000 | (op << 18) | 0x10, 2 | (3 << 8) | (4 << 16) | (1 << 24)],
                     lambda op: [0xd8000000 | (op << 18) | 0x10, 2 | (4 << 8) | (6 << 16) | (8 << 24)]]),
        # VOPD: X op in bits 22-25 with Y = v_dual_mul_f32; Y op in bits 17-21 with X = v_dual_mul_f32
        'vopdx': (16, [lambda op: [0xc8000000 | (op << 22) | (3 << 17) | (3 << 9) | (V + 2),
                                   (V + 5) | (6 << 9) | (2 << 17) | (1 << 24)]]),
        'vopdy': (32, [lambda op: [0xc8000000 | (3 << 22) | (op << 17) | (3 << 9) | (V + 2),
                                   (V + 5) | (6 << 9) | (2 << 17) | (1 << 24)]]),
    }


def name(t, fmt):
    if not t:
        return '-'
    if fmt == 'vopdx':
        return t.split()[0]
    if fmt == 'vopdy':
        m = re.search(r':: (\S+)', t)
        return m.group(1) if m else '-'
    return t.split()[0]


def map_():
    for fmt, (n, mks) in fmt_templates().items():
        best = {}
        for mk in mks:
            insts = [mk(op) for op in range(n)]
            a = objdump(insts, 'gfx1100', pad=True)
            b = objdump(insts, 'gfx1200', '+real-true16', pad=True)
            for op in range(n):
                x, y = name(a[op], fmt), name(b[op], fmt)
                ox, oy = best.get(op, ('-', '-'))
                best[op] = (x if ox == '-' else ox, y if oy == '-' else oy)
        for op in range(n):
            x, y = best[op]
            if x != '-' or y != '-':
                print(fmt, op, x, y)


def mem():
    t = {
        'smem': [lambda op, b=b, d=d: [0xf4000000 | (op << 13) | (d << 6) | b, 0x10 | (0x7c << 25)]
                 for b in (1, 2) for d in (4, 8)],
        'vglobal': [lambda op: [0xee00007c | (op << 14), 4 | (6 << 23), 2 | (16 << 8)]],
        'vscratch': [lambda op: [0xed00007c | (op << 14), 4 | (6 << 23) | (1 << 17), 2 | (16 << 8)]],
        'vflat': [lambda op: [0xec00007c | (op << 14), 4 | (6 << 23), 2 | (16 << 8)]],
        'vbuffer': [lambda op: [0xc4000002 | (op << 14), 4 | (8 << 9) | (1 << 23) | (1 << 30), 2 | (16 << 8)]],
    }
    n = {'smem': 64}
    for fmt, mks in t.items():
        got = {}
        for mk in mks:
            for op, x in enumerate(objdump([mk(op) for op in range(n.get(fmt, 256))], 'gfx1200', pad=True)):
                if x and op not in got:
                    got[op] = x
        for op in sorted(got):
            print('%s %d | %s' % (fmt, op, got[op]))


def image():
    keys, insts = [], []
    for op in range(256):
        for dim in range(8):
            for a16 in (0, 1):
                for samp in (0, 1):
                    top = 0xe7 if samp else 0xd3
                    w0 = ((top >> 2) << 26) | (1 << 22) | (op << 14) | (a16 << 6) | dim
                    w1 = 20 | (4 << 9) | ((12 << 23) if samp else 0)
                    insts.append([w0, w1, 2])   # unused address fields must be 0 for VSAMPLE
                    keys.append((op, dim, a16, samp))
    seen = set()
    txt = objdump(insts, 'gfx1200', pad=True)
    good = assembles(txt, insts, 'gfx1200')
    for i, ((op, dim, a16, samp), t) in enumerate(zip(keys, txt)):
        if i not in good or not t.startswith('image_') or (op, dim, a16, samp) in seen:
            continue
        seen.add((op, dim, a16, samp))
        if ', [' in t:
            i = t.index(', [') + 3
            depth, j = 0, i
            while t[j] != ']' or depth:
                depth += {'[': 1, ']': -1}.get(t[j], 0)
                j += 1
            addr = t[i:j]
        else:
            addr = t.split(',')[1]
        regs = []
        for part in re.findall(r'v\[(\d+):(\d+)\]|v(\d+)', addr):
            regs.append(str(int(part[1]) - int(part[0]) + 1) if part[0] else '1')
        dn = re.search(r'dim:(\S+)', t)
        print(op, t.split()[0], samp, dim, dn.group(1) if dn else '-', a16, ','.join(regs))


def wmma():
    insts = [[0xcc004000 | (op << 16) | 0, (V + 8) | ((V + 16) << 9) | ((V + 24) << 18) | (3 << 27)] for op in range(64, 128)]
    for op, t in zip(range(64, 128), objdump(insts, 'gfx1200', pad=True)):
        if not t.startswith('v_wmma') and not t.startswith('v_swmmac'):
            continue
        sizes = []
        for o in t.split(None, 1)[1].split(','):
            m = re.match(r'\s*v\[(\d+):(\d+)\]', o)
            m1 = re.match(r'\s*v(\d+)\b', o)
            if m:
                sizes.append(str(int(m.group(2)) - int(m.group(1)) + 1))
            elif m1:
                sizes.append('1')
        print(op, t.split()[0], ' '.join(sizes[:4]))


if __name__ == '__main__':
    {'map': map_, 'mem': mem, 'image': image, 'wmma': wmma}[sys.argv[1]]()
