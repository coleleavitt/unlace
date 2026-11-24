#!/usr/bin/env python3
"""Probe LLVM's CDNA disassembler (gfx90a, gfx942) against the GFX9 base for the CDNA generators.

llvm-objdump (LLVM 22) decodes synthetic encodings for -mcpu=gfx900 and each CDNA target; only
opcode numbers, mnemonics and operand shapes are kept.

  amdgpu_cdna_probe.py map gfx90a > map.txt
      '<format> <op> <gfx900 mnemonic or -> <target mnemonic or ->' for SOP*, VOP1/2/C, VOP3,
      VOP3P, DS, FLAT (by segment), MUBUF and SMEM
  amdgpu_cdna_probe.py vop3 amdgcn_gfx90a.slaspec gfx90a > vop3.txt
      '<op> | <text, op_sel=0> | <text, op_sel=0xf>' for every VOP3 opcode (below the VOP3P range)
      the spec lacks, the input of tools/gen_amdgpu_gfx11_valu.py --gfx9
  amdgpu_cdna_probe.py e32 amdgcn_gfx9.slaspec gfx900 > e32.txt
      '<vopc|vop1|vop2> <op> | <text>' for every VOPC, VOP1 and VOP2 opcode the spec lacks
  amdgpu_cdna_probe.py mfma gfx90a > mfma.txt
      '<op> <mnemonic> <dst VGPRs> <A> <B> <C>' for the VOP3P MFMA/SMFMAC opcodes
"""
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from amdgpu_gfx11_probe import objdump  # noqa: E402

V = 256


def templates():
    return {
        'sop1': (256, [lambda op: [0xbe800000 | (2 << 16) | (op << 8) | 4]]),
        'sop2': (128, [lambda op: [0x80000000 | (op << 23) | (2 << 16) | (4 << 8) | 6]]),
        'sopc': (128, [lambda op: [0xbf000000 | (op << 16) | (2 << 8) | 4]]),
        'sopk': (32, [lambda op: [0xb0000000 | (op << 23) | (2 << 16) | 0x12]]),
        'sopp': (128, [lambda op: [0xbf800000 | (op << 16)], lambda op: [0xbf800000 | (op << 16) | 3]]),
        'vop1': (256, [lambda op: [0x7e000000 | (2 << 17) | (op << 9) | (V + 4)]]),
        'vop2': (63, [lambda op: [(op << 25) | (2 << 17) | (4 << 9) | (V + 6)]]),
        'vopc': (256, [lambda op: [0x7c000000 | (op << 17) | (4 << 9) | (V + 6)]]),
        'vop3': (1024, [lambda op: [0xd0000000 | (op << 16) | 2, (V + 4) | ((V + 6) << 9) | ((V + 8) << 18)],
                        lambda op: [0xd0000000 | (op << 16) | 2, 4 | ((V + 6) << 9) | ((V + 8) << 18)]]),
        'vop3p': (128, [lambda op: [0xd3800000 | (op << 16) | 2, (V + 4) | ((V + 6) << 9) | ((V + 8) << 18) | (3 << 27)]]),
        'ds': (256, [lambda op: [0xd8000000 | (op << 17) | 0x10, 2 | (4 << 8) | (6 << 16) | (8 << 24)]]),
        'flat': (128, [lambda op: [0xdc000000 | (op << 18), 2 | (4 << 8) | (0x7f << 16) | (8 << 24)]]),
        'global': (128, [lambda op: [0xdc008000 | (op << 18), 2 | (4 << 8) | (0x7f << 16) | (8 << 24)]]),
        'scratch': (128, [lambda op: [0xdc004000 | (op << 18), 2 | (4 << 8) | (0x7f << 16) | (8 << 24)]]),
        'mubuf': (128, [lambda op: [0xe0001000 | (op << 18), 2 | (4 << 8) | (2 << 16) | (5 << 24)]]),
        'smem': (256, [lambda op: [0xc0020000 | (op << 18) | (4 << 6) | 1, 0x10]]),
    }


def map_(cpu):
    for fmt, (n, mks) in templates().items():
        best = {}
        for mk in mks:
            insts = [mk(op) for op in range(n)]
            a = objdump(insts, 'gfx900', pad=True)
            b = objdump(insts, cpu, pad=True)
            for op in range(n):
                x = a[op].split()[0] if a[op] else '-'
                y = b[op].split()[0] if b[op] else '-'
                ox, oy = best.get(op, ('-', '-'))
                best[op] = (x if ox == '-' else ox, y if oy == '-' else oy)
        for op in range(n):
            x, y = best[op]
            if x != '-' or y != '-':
                print(fmt, op, x, y)


def vop3(spec, cpu):
    have = {int(x) for x in re.findall(r'e6=0x34\b[^;]*?vop3op=(\d+)', open(spec).read())}
    w1 = (V + 2) | ((V + 4) << 9) | ((V + 6) << 18)
    insts = [[0xd0000000 | (op << 16) | (sel << 11) | 2, w1] for op in range(896) for sel in (0, 0xf)]
    txt = objdump(insts, cpu, pad=True)
    for op in range(896):
        a, b = txt[2 * op], txt[2 * op + 1]
        if a and op not in have:
            print('%d | %s | %s' % (op, a, b))


def e32(spec, cpu):
    text = open(spec).read()
    have = {f: {int(x) for x in re.findall(r'\b%s=(\d+)' % fld, text)}
            for f, fld in (('vopc', 'vopcop'), ('vop1', 'vop1op'), ('vop2', 'vop2op'))}
    fmts = [('vopc', op, [0x7c000000 | (op << 17) | (4 << 9) | (V + 6)]) for op in range(256)]
    fmts += [('vop2', op, [(op << 25) | (2 << 17) | (4 << 9) | (V + 6)]) for op in range(62)]
    fmts += [('vop1', op, [0x7e000000 | (2 << 17) | (op << 9) | (V + 4)]) for op in range(256)]
    for (f, op, ws), t in zip(fmts, objdump([x[2] for x in fmts], cpu, pad=True)):
        if t and op not in have[f]:
            print('%s %d | %s' % (f, op, t))


def mfma(cpu):
    insts = []
    for op in range(128):
        insts.append([0xd3800000 | (op << 16) | (1 << 15), (V + 8) | ((V + 16) << 9) | (0 << 18) | (0 << 27)])
        insts.append([0xd3800000 | (op << 16), (V + 8) | ((V + 16) << 9) | ((V + 32) << 18) | (0 << 27)])
    seen = set()
    for k, t in enumerate(objdump(insts, cpu, pad=True)):
        op = k // 2
        if not t.startswith('v_mfma') and not t.startswith('v_smfmac') or op in seen:
            continue
        seen.add(op)
        sizes = []
        for o in t.split(None, 1)[1].split(','):
            m = re.match(r'\s*[av]\[(\d+):(\d+)\]', o)
            m1 = re.match(r'\s*[av](\d+)\b', o)
            if m:
                sizes.append(str(int(m.group(2)) - int(m.group(1)) + 1))
            elif m1:
                sizes.append('1')
        print(op, t.split()[0], ' '.join(sizes[:4]))


if __name__ == '__main__':
    if sys.argv[1] == 'vop3':
        vop3(sys.argv[2], sys.argv[3])
    elif sys.argv[1] == 'e32':
        e32(sys.argv[2], sys.argv[3])
    else:
        {'map': map_, 'mfma': mfma}[sys.argv[1]](sys.argv[2])
