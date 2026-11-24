#!/usr/bin/env python3
"""Derive the GFX12 (RDNA 4) AMDGPU spec from the GFX11 one.

GFX12 keeps GFX11's SOP*, VOP1/2/C/3/3P, VOPD and DS encodings; tools/amdgpu_gfx12_probe.py
('map') lists, for each of those formats and opcode, LLVM's GFX11 and GFX12 mnemonics.  Each
GFX11 constructor of those formats is then
  - kept when the mnemonic is the same,
  - renamed when GFX12 gives the opcode a new name for the same operation (s_add_co_u32,
    v_mad_co_u64_u32, s_wait_alu, ...),
  - moved to the opcode of its GFX12 name when GFX12 renumbered it (v_max_f32 becomes
    v_max_num_f32, v_add_f64 the VOP2-encoded v_add_f64_e64, ...), or
  - dropped when GFX12 removed it (v_cmp_f/v_cmp_t, s_cmpk_*, s_waitcnt_*, ...).
The GFX11 memory encodings (SMEM, FLAT, MUBUF, MIMG) are dropped; amdgcn_gfx12_mem.sinc
(tools/gen_amdgpu_gfx12_mem.py) has GFX12's SMEM, VGLOBAL/VFLAT/VSCRATCH, VBUFFER, VIMAGE and
VSAMPLE.  This generator also writes the new SALU float operations, s_wait_* and the barrier
instructions, and the VOP2 f64 operations.  The true16 and new VOP3 forms come from
amdgcn_gfx12_valu.sinc and the packed/WMMA forms from amdgcn_gfx12_vop3p.sinc.

usage: gen_amdgpu_gfx12.py amdgcn_gfx11.slaspec gfx12_map.txt > amdgcn_gfx12.slaspec
"""
import re
import sys

OPFIELD = {'sop1op': 'sop1', 'sop2op': 'sop2', 'sopcop': 'sopc', 'sopkop': 'sopk', 'soppop': 'sopp',
           'vop1op': 'vop1', 'vop2op': 'vop2', 'vopcop': 'vopc', 'vop3op': 'vop3', 'dsop': 'ds'}
MEMORY = re.compile(r'\b(smop|flop|mbop|mtop)=')
SAME_OP_NEW_OPERATION = {('vop2', 2), ('vop2', 6), ('vop3', 262)}
# GFX11 name -> GFX12 name of the same operation at a new opcode
MOVES = [(r'^v_(max|min)_f(16|32)(_e32|_e64)$', r'v_\1_num_f\2\3'),
         (r'^v_(max|min)3_f(16|32)$', r'v_\g<1>3_num_f\2'),
         (r'^v_med3_f(16|32)$', r'v_med3_num_f\1'),
         (r'^v_(maxmin|minmax)_f(16|32)$', r'v_\1_num_f\2'),
         (r'^v_(add|mul)_f64$', r'v_\1_f64_e64'),
         (r'^v_(max|min)_f64$', r'v_\1_num_f64_e64'),
         (r'^v_lshlrev_b64$', r'v_lshlrev_b64_e64'),
         (r'^v_pk_(max|min)_f16$', r'v_pk_\1_num_f16')]


def strip(n):
    return re.sub(r'_e(32|64)$', '', n)


def load_map(path):
    m = {}
    for line in open(path):
        f, op, a, b = line.split()
        m.setdefault(f, {})[int(op)] = (a, b)
    return m


def groups(lines):
    """Split the spec into items: a constructor (':' line up to its closing brace) or one line."""
    i = 0
    while i < len(lines):
        line = lines[i]
        if not line.startswith(':'):
            yield [line]
            i += 1
            continue
        g = [line]
        depth = line.count('{') - line.count('}')
        opened = '{' in line
        i += 1
        while i < len(lines) and (not opened or depth > 0):
            g.append(lines[i])
            depth += lines[i].count('{') - lines[i].count('}')
            opened = opened or '{' in lines[i]
            i += 1
        yield g


SALU = r'''
# GFX12 scalar additions: float SALU on the bits of SGPRs, 64-bit adds and multiply, barriers
# and the split wait counters (no-ops).
:s_add_f32 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=64 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { i16_lo7 = S32_i0 f+ S32_i8; }
:s_sub_f32 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=65 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { i16_lo7 = S32_i0 f- S32_i8; }
:s_min_num_f32 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=66 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { r:4 = S32_i0; if (S32_i0 f< S32_i8) goto <k>; r = S32_i8; <k> i16_lo7 = r; }
:s_max_num_f32 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=67 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { r:4 = S32_i0; if (S32_i0 f> S32_i8) goto <k>; r = S32_i8; <k> i16_lo7 = r; }
:s_mul_f32 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=68 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { i16_lo7 = S32_i0 f* S32_i8; }
:s_fmac_f32 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=71 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { i16_lo7 = (S32_i0 f* S32_i8) f+ i16_lo7; }
:s_cvt_pk_rtz_f16_f32 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=72 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { i16_lo7 = cvt_pk(S32_i0, S32_i8); }
:s_add_f16 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=73 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { h:2 = S32_i0:2 f+ S32_i8:2; i16_lo7 = zext(h); }
:s_sub_f16 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=74 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { h:2 = S32_i0:2 f- S32_i8:2; i16_lo7 = zext(h); }
:s_min_num_f16 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=75 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; r:2 = a; if (a f< b) goto <k>; r = b; <k> i16_lo7 = zext(r); }
:s_max_num_f16 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=76 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; r:2 = a; if (a f> b) goto <k>; r = b; <k> i16_lo7 = zext(r); }
:s_mul_f16 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=77 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { h:2 = S32_i0:2 f* S32_i8:2; i16_lo7 = zext(h); }
:s_fmac_f16 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=78 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { d:2 = i16_lo7:2; h:2 = (S32_i0:2 f* S32_i8:2) f+ d; i16_lo7 = zext(h); }
:s_minimum_f32 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=79 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { r:4 = S32_i0; if (S32_i0 f< S32_i8) goto <k>; r = S32_i8; <k> i16_lo7 = r; }
:s_maximum_f32 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=80 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { r:4 = S32_i0; if (S32_i0 f> S32_i8) goto <k>; r = S32_i8; <k> i16_lo7 = r; }
:s_minimum_f16 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=81 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; r:2 = a; if (a f< b) goto <k>; r = b; <k> i16_lo7 = zext(r); }
:s_maximum_f16 i16_lo7, S32_i0, S32_i8 is e2=2 ... & sop2op=82 ... & i16_lo7 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; r:2 = a; if (a f> b) goto <k>; r = b; <k> i16_lo7 = zext(r); }
:s_add_nc_u64 i16_sp, S64_i0, S64_i8 is e2=2 ... & sop2op=83 ... & i16_sp ... & S64_i0 ... & S64_i8 ... { i16_sp = S64_i0 + S64_i8; }
:s_sub_nc_u64 i16_sp, S64_i0, S64_i8 is e2=2 ... & sop2op=84 ... & i16_sp ... & S64_i0 ... & S64_i8 ... { i16_sp = S64_i0 - S64_i8; }
:s_mul_u64 i16_sp, S64_i0, S64_i8 is e2=2 ... & sop2op=85 ... & i16_sp ... & S64_i0 ... & S64_i8 ... { i16_sp = S64_i0 * S64_i8; }
:s_ceil_f32 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=96 ... & i16_lo7 ... & S32_i0 ... { i16_lo7 = ceil(S32_i0); }
:s_floor_f32 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=97 ... & i16_lo7 ... & S32_i0 ... { i16_lo7 = floor(S32_i0); }
:s_trunc_f32 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=98 ... & i16_lo7 ... & S32_i0 ... { t:4 = trunc(S32_i0); i16_lo7 = int2float(t); }
:s_rndne_f32 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=99 ... & i16_lo7 ... & S32_i0 ... { i16_lo7 = round(S32_i0); }
:s_cvt_f32_i32 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=100 ... & i16_lo7 ... & S32_i0 ... { i16_lo7 = int2float(S32_i0); }
:s_cvt_f32_u32 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=101 ... & i16_lo7 ... & S32_i0 ... { t:8 = zext(S32_i0); i16_lo7 = int2float(t); }
:s_cvt_i32_f32 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=102 ... & i16_lo7 ... & S32_i0 ... { i16_lo7 = trunc(S32_i0); }
:s_cvt_u32_f32 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=103 ... & i16_lo7 ... & S32_i0 ... { t:8 = trunc(S32_i0); i16_lo7 = t:4; }
:s_cvt_f16_f32 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=104 ... & i16_lo7 ... & S32_i0 ... { h:2 = float2float(S32_i0); i16_lo7 = zext(h); }
:s_cvt_f32_f16 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=105 ... & i16_lo7 ... & S32_i0 ... { h:2 = S32_i0:2; i16_lo7 = float2float(h); }
:s_cvt_hi_f32_f16 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=106 ... & i16_lo7 ... & S32_i0 ... { h:2 = S32_i0(2); i16_lo7 = float2float(h); }
:s_ceil_f16 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=107 ... & i16_lo7 ... & S32_i0 ... { h:2 = ceil(S32_i0:2); i16_lo7 = zext(h); }
:s_floor_f16 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=108 ... & i16_lo7 ... & S32_i0 ... { h:2 = floor(S32_i0:2); i16_lo7 = zext(h); }
:s_trunc_f16 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=109 ... & i16_lo7 ... & S32_i0 ... { h:2 = S32_i0:2; t:4 = trunc(h); h = int2float(t); i16_lo7 = zext(h); }
:s_rndne_f16 i16_lo7, S32_i0 is e9=0x17d ... & sop1op=110 ... & i16_lo7 ... & S32_i0 ... { h:2 = round(S32_i0:2); i16_lo7 = zext(h); }
:s_cmp_lt_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=65 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = a f< b; }
:s_cmp_lt_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=81 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = a f< b; }
:s_cmp_eq_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=66 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = a f== b; }
:s_cmp_eq_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=82 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = a f== b; }
:s_cmp_le_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=67 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = a f<= b; }
:s_cmp_le_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=83 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = a f<= b; }
:s_cmp_gt_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=68 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = a f> b; }
:s_cmp_gt_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=84 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = a f> b; }
:s_cmp_lg_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=69 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = (a f< b) || (a f> b); }
:s_cmp_lg_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=85 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = (a f< b) || (a f> b); }
:s_cmp_ge_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=70 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = a f>= b; }
:s_cmp_ge_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=86 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = a f>= b; }
:s_cmp_o_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=71 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = !(nan(a) || nan(b)); }
:s_cmp_o_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=87 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = !(nan(a) || nan(b)); }
:s_cmp_u_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=72 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = nan(a) || nan(b); }
:s_cmp_u_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=88 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = nan(a) || nan(b); }
:s_cmp_nge_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=73 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = !(a f>= b); }
:s_cmp_nge_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=89 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = !(a f>= b); }
:s_cmp_nlg_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=74 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = !((a f< b) || (a f> b)); }
:s_cmp_nlg_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=90 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = !((a f< b) || (a f> b)); }
:s_cmp_ngt_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=75 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = !(a f> b); }
:s_cmp_ngt_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=91 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = !(a f> b); }
:s_cmp_nle_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=76 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = !(a f<= b); }
:s_cmp_nle_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=92 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = !(a f<= b); }
:s_cmp_neq_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=77 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = !(a f== b); }
:s_cmp_neq_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=93 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = !(a f== b); }
:s_cmp_nlt_f32 S32_i0, S32_i8 is e9=0x17e ... & sopcop=78 ... & S32_i0 ... & S32_i8 ... { a:4 = S32_i0; b:4 = S32_i8; SCC = !(a f< b); }
:s_cmp_nlt_f16 S32_i0, S32_i8 is e9=0x17e ... & sopcop=94 ... & S32_i0 ... & S32_i8 ... { a:2 = S32_i0:2; b:2 = S32_i8:2; SCC = !(a f< b); }
:s_barrier_signal S32_i0 is e9=0x17d ... & sop1op=78 ... & S32_i0 ... { barrier(); }
:s_barrier_signal_isfirst S32_i0 is e9=0x17d ... & sop1op=79 ... & S32_i0 ... { barrier(); SCC = barrier_isfirst(); }
:s_get_barrier_state i16_lo7, S32_i0 is e9=0x17d ... & sop1op=80 ... & i16_lo7 ... & S32_i0 ... { i16_lo7 = barrier_state(S32_i0); }
:s_barrier_init S32_i0 is e9=0x17d ... & sop1op=81 ... & S32_i0 ... { }
:s_barrier_join S32_i0 is e9=0x17d ... & sop1op=82 ... & S32_i0 ... { }
:s_alloc_vgpr S32_i0 is e9=0x17d ... & sop1op=83 ... & S32_i0 ... { SCC = 1; }
:s_sleep_var S32_i0 is e9=0x17d ... & sop1op=88 ... & S32_i0 ... { }
:s_barrier_wait uimm16 is e9=0x17f & soppop=20 & uimm16 { barrier(); }
:s_barrier_leave is e9=0x17f & soppop=21 { }
:s_wait_loadcnt uimm16 is e9=0x17f & soppop=64 & uimm16 { }
:s_wait_storecnt uimm16 is e9=0x17f & soppop=65 & uimm16 { }
:s_wait_samplecnt uimm16 is e9=0x17f & soppop=66 & uimm16 { }
:s_wait_bvhcnt uimm16 is e9=0x17f & soppop=67 & uimm16 { }
:s_wait_expcnt uimm16 is e9=0x17f & soppop=68 & uimm16 { }
:s_wait_dscnt uimm16 is e9=0x17f & soppop=70 & uimm16 { }
:s_wait_kmcnt uimm16 is e9=0x17f & soppop=71 & uimm16 { }
:s_wait_loadcnt_dscnt uimm16 is e9=0x17f & soppop=72 & uimm16 { }
:s_wait_storecnt_dscnt uimm16 is e9=0x17f & soppop=73 & uimm16 { }

# GFX12 VOP2 f64 operations (64-bit src0, VGPR-pair vsrc1 and vdst)
:v_add_f64_e32 i17_vp, V64_i0, i9_vp is e1=0 ... & vop2op=2 ... & i17_vp ... & V64_i0 ... & i9_vp ... { i17_vp = V64_i0 f+ i9_vp; }
:v_mul_f64_e32 i17_vp, V64_i0, i9_vp is e1=0 ... & vop2op=6 ... & i17_vp ... & V64_i0 ... & i9_vp ... { i17_vp = V64_i0 f* i9_vp; }
:v_min_num_f64_e32 i17_vp, V64_i0, i9_vp is e1=0 ... & vop2op=13 ... & i17_vp ... & V64_i0 ... & i9_vp ... { r:8 = V64_i0; if (V64_i0 f< i9_vp) goto <k>; r = i9_vp; <k> i17_vp = r; }
:v_max_num_f64_e32 i17_vp, V64_i0, i9_vp is e1=0 ... & vop2op=14 ... & i17_vp ... & V64_i0 ... & i9_vp ... { r:8 = V64_i0; if (V64_i0 f> i9_vp) goto <k>; r = i9_vp; <k> i17_vp = r; }
:v_lshlrev_b64_e32 i17_vp, V32_i0, i9_vp is e1=0 ... & vop2op=31 ... & i17_vp ... & V32_i0 ... & i9_vp ... { i17_vp = i9_vp << (V32_i0 & 63); }
'''
NEW_OPS = ('barrier_isfirst', 'barrier_state')


def main():
    spec = open(sys.argv[1]).read().split('\n')
    m = load_map(sys.argv[2])
    out = []
    w = out.append
    w('# Generated from amdgcn_gfx11.slaspec by tools/gen_amdgpu_gfx12.py; edit the generator.')
    w('# AMD RDNA 4 (gfx12) shader ISA, wave32: the GFX11 module re-encoded for gfx1200/gfx1201.')
    dropped, moved, renamed = 0, 0, 0
    gone = []
    names12 = {f: {b: op for op, (a, b) in t.items() if b != '-'} for f, t in m.items()}
    for g in groups(spec):
        line = g[0]
        if line.startswith('@include') or line.startswith('# Generated: true16'):
            continue
        if line.startswith('define pcodeop barrier;'):
            g = g + ['define pcodeop %s;' % n for n in NEW_OPS]
        mm = re.match(r'(DOP[XY]): "(v_dual_\w+) ', line)
        if mm:
            f = 'vopdx' if mm.group(1) == 'DOPX' else 'vopdy'
            op = int(re.search(r'vopd[xy]=(\d+)', line).group(1))
            a, b = m.get(f, {}).get(op, ('-', '-'))
            if b == '-' and a != '-':
                continue
            if a != '-' and b != a:
                g = [line.replace('"%s ' % a, '"%s ' % b, 1)]
        if not line.startswith(':'):
            out.extend(g)
            continue
        text = '\n'.join(g)
        if MEMORY.search(text) or re.search(r'\be6=0x3c\b', text):
            dropped += 1
            gone.append(line.split()[0])
            continue
        fo = re.search(r'\b(%s)=(0x[0-9a-f]+|\d+)' % '|'.join(OPFIELD), text)
        if not fo:
            out.extend(g)
            continue
        f, op = OPFIELD[fo.group(1)], int(fo.group(2), 0)
        if f == 'vop3' and re.search(r'\be9=0x198\b', text):
            f = 'vop3p'
        mn = re.match(r':(\S+)', line).group(1)
        a, b = m.get(f, {}).get(op, ('-', '-'))
        if a == '-':
            out.extend(g)          # LLVM rejects the probe for this opcode; keep the GFX11 form
            continue
        if b == a:
            out.extend(g)
            continue
        if b != '-' and (f, op) in SAME_OP_NEW_OPERATION:
            dropped += 1
            gone.append(line.split()[0])
            continue
        if b != '-':
            new = b if mn == a else strip(b) if mn == strip(a) else None
            if new is None:
                new = mn.replace(strip(a), strip(b), 1)
            g = [line.replace(':' + mn, ':' + new, 1)] + g[1:]
            renamed += 1
            out.extend(g)
            continue
        target = None
        for pat, rep in MOVES:
            if re.match(pat, a):
                target = re.sub(pat, rep, a)
        op2 = names12.get(f, {}).get(target) if target else None
        if op2 is None:
            dropped += 1
            gone.append(line.split()[0])
            continue
        new = target if mn == a else strip(target)
        if mn.endswith('_e64') and not new.endswith('_e64'):
            new += '_e64'
        g = [line.replace(':' + mn, ':' + new, 1)] + g[1:]
        g = [re.sub(r'\b%s=%s\b' % (fo.group(1), fo.group(2)), '%s=%d' % (fo.group(1), op2), x) for x in g]
        moved += 1
        out.extend(g)
    w('')
    out.append(SALU)
    out.append('# Generated: true16 and new VALU forms, VOP3P/WMMA, memory and image encodings.')
    out.append('@include "amdgcn_gfx12_valu.sinc"')
    out.append('@include "amdgcn_gfx12_vop3p.sinc"')
    out.append('@include "amdgcn_gfx12_mem.sinc"')
    sys.stderr.write('renamed %d moved %d dropped %d\n' % (renamed, moved, dropped))
    if '-v' in sys.argv:
        sys.stderr.write(' '.join(gone) + '\n')
    print('\n'.join(out))


main()
