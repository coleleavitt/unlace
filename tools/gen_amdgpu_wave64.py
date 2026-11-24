#!/usr/bin/env python3
"""Derive the wave64 AMDGPU languages from the wave32 GFX10/GFX11 specs.

In wave64 the lane masks are 64-bit: VCC and EXEC are SGPR pairs, the VOPC and VOP3b carry-out
destinations and the v_cndmask/carry-in sources name SGPR pairs, and VCCZ/EXECZ test the whole
pair.  The instruction encodings are the same, so the wave64 spec is the wave32 one with those
operands and registers widened; the *_saveexec_b32/*_wrexec_b32 forms keep EXEC_LO.  An
@include whose text the widening changes is inlined; the others stay includes.

usage: gen_amdgpu_wave64.py amdgcn_gfx10.slaspec > amdgcn_gfx10_w64.slaspec
"""
import os
import re
import sys

MASK_SRC2 = ('v_cndmask_b32_e64', 'v_cndmask_b16', 'v_add_co_ci_u32_e64', 'v_sub_co_ci_u32_e64', 'v_subrev_co_ci_u32_e64')
CARRY_DST = ('v_add_co_u32_e64', 'v_sub_co_u32_e64', 'v_subrev_co_u32_e64', 'v_add_co_ci_u32_e64',
             'v_sub_co_ci_u32_e64', 'v_subrev_co_ci_u32_e64', 'v_mad_u64_u32', 'v_mad_i64_i32',
             'v_div_scale_f32', 'v_div_scale_f64')
VOPC_E64 = re.compile(r'v_cmpx?_\w+_e64$')
EXEC32 = re.compile(r's_\w+_(saveexec|wrexec)_b32$')


def widen(lines, extra):
    out = []
    cur = None
    keep_exec_lo = False
    inserted = not extra
    inside_s64_j18 = False
    for line in lines:
        m = re.match(r'^:(\S+)', line)
        if m:
            cur = m.group(1)
            keep_exec_lo = bool(EXEC32.match(cur))
        elif line and not line.startswith(' ') and not line.startswith('}'):
            cur = None
            keep_exec_lo = False
        if line.startswith('define register offset=0x2000'):
            out.append(line)
            out.append('define register offset=0x2040 size=8 [ null64 ];')
            continue
        if line.startswith('define ') or line.startswith('attach ') or re.match(r'^\s+\w+ = \(', line):
            out.append(line)
            continue
        if line.startswith('#'):
            if len(out) < 9:
                line = line.replace(', wave32:', ', wave64:').replace(
                    'are 32-bit SGPRs (wave32).', 'are 64-bit SGPR pairs (wave64).')
            out.append(line)
            continue
        if not inserted and inside_s64_j18 and not line.startswith('S64_j18:'):
            out.extend(extra)
            inserted = True
        inside_s64_j18 = line.startswith('S64_j18:')
        line = re.sub(r'\bvcc_lo\b', 'vcc', line)
        if not keep_exec_lo:
            line = re.sub(r'\bexec_lo\b', 'exec', line)
        if cur and VOPC_E64.match(cur):
            line = re.sub(r'\bi0_lo7d\b', 'SD64_i0', line)
        if cur in CARRY_DST:
            line = re.sub(r'\bi8_lo7d\b', 'SD64_i8', line)
        if cur in MASK_SRC2:
            line = re.sub(r'\bS32_j18\b', 'M64_j18', line)
        m = re.match(r'@include "([^"]+)"', line)
        if m:
            inc = open(os.path.join(os.path.dirname(sys.argv[1]), m.group(1))).read().split('\n')
            wide = widen(inc, None)
            if wide != inc:
                out.extend(wide)
                continue
        out.append(line)
    return out


def main():
    lines = open(sys.argv[1]).read().split('\n')
    regs = next(l for l in lines if l.startswith('define register offset=0x0000 size=4'))
    null = regs.split('[')[1].split()[:-1].index('null')
    extra = [
        '# Wave64 lane-mask operands: SGPR pairs, with null (SGPR %d) as a 64-bit sink or zero.' % null,
        'SD64_i0: i0_spd is i0_spd { export i0_spd; }',
        'SD64_i0: "null" is i0_lo7d=%d { export null64; }' % null,
        'SD64_i8: i8_spd is i8_spd { export i8_spd; }',
        'SD64_i8: "null" is i8_lo7d=%d { export null64; }' % null,
        'M64_j18: S64_j18 is S64_j18 { export S64_j18; }',
        'M64_j18: "null" is j18_h=0 & j18_lo7=%d { export 0:8; }' % null,
        '',
    ]
    out = ['# Generated from the wave32 spec by tools/gen_amdgpu_wave64.py; edit that spec and regenerate.']
    out += widen(lines, extra)
    print('\n'.join(out))


main()
