#!/usr/bin/env python3
"""GFX11 VALU forms the base spec lacks: the true16 16-bit operations, where op_sel (VOP3) or
bit 7 of the VGPR number (VOPC/VOP1/VOP2 e32) picks the half of each 16-bit source and of the
destination, their e64 forms, and the remaining VOP3-only operations.

The opcode lists and operand shapes come from llvm-objdump (LLVM 22, -mcpu=gfx1100, real
true16) through tools/amdgpu_gfx11_probe.py: 'probe vop3' writes one line per VOP3 opcode,
'<op> | <text with op_sel=0> | <text with op_sel=0xf>', and 'probe e32' one per e32 opcode
with a half, '<vopc|vop1|vop2> <op> | <text>'.  The p-code is written here.

usage: gen_amdgpu_gfx11_valu.py vop3_ops.txt e32_ops.txt amdgcn_gfx11.slaspec > amdgcn_gfx11_valu.sinc
       gen_amdgpu_gfx11_valu.py --gfx9 vop3_ops.txt /dev/null amdgcn_gfx9.slaspec > amdgcn_gfx9_valu.sinc

With --gfx9 the VOP3 encoding is bits 31-26 = 110100 (the table from 'amdgpu_cdna_probe.py vop3'),
there are no VGPR halves in the text: a 16-bit operand is the low half (or, for the opcodes LLVM
prints op_sel for, the half op_sel picks), a 16-bit result zeroes the high half unless the opcode
takes op_sel, and a compare writes an SGPR pair (v_cmpx also EXEC).  Operand widths come from
the mnemonic's type suffixes (v_cvt_f32_f16: a 32-bit result of a 16-bit source).
"""
import re
import sys

GFX9 = len(sys.argv) > 1 and sys.argv[1] == '--gfx9'
if GFX9:
    del sys.argv[1]
E6 = '0x34' if GFX9 else '0x35'

CMP_F = {'f': '0:1', 'lt': 'a f< b', 'eq': 'a f== b', 'le': 'a f<= b', 'gt': 'a f> b', 'lg': '(a f< b) || (a f> b)',
         'ge': 'a f>= b', 'o': '!(nan(a) || nan(b))', 'u': 'nan(a) || nan(b)', 'nge': '!(a f>= b)',
         'nlg': '!((a f< b) || (a f> b))', 'ngt': '!(a f> b)', 'nle': '!(a f<= b)', 'neq': '!(a f== b)',
         'nlt': '!(a f< b)', 't': '1:1', 'tru': '1:1'}
CMP_I = {'f': '0:1', 'lt': 'a {s}< b', 'eq': 'a == b', 'le': 'a {s}<= b', 'gt': 'a {s}> b', 'ne': 'a != b',
         'ge': 'a {s}>= b', 't': '1:1'}

USEROPS = set()


def uop(name, *args):
    USEROPS.add(name)
    return '%s(%s)' % (name, ', '.join(args))


# Binary/unary/ternary semantics on the operand values a, b, c (16-bit for true16 forms).
SEM = {
    'v_subrev_f16': 'b f- a', 'v_max_f16': 'max_f', 'v_min_f16': 'min_f', 'v_fmac_f16': '(a f* b) f+ d',
    'v_ldexp_f16': uop('ldexp', 'a', 'b'),
    'v_add_nc_u16': 'a + b', 'v_sub_nc_u16': 'a - b', 'v_add_nc_i16': 'a + b', 'v_sub_nc_i16': 'a - b',
    'v_mul_lo_u16': 'a * b', 'v_max_u16': 'max_u', 'v_max_i16': 'max_s', 'v_min_u16': 'min_u',
    'v_min_i16': 'min_s', 'v_lshlrev_b16': 'b << (a & 15)', 'v_lshrrev_b16': 'b >> (a & 15)',
    'v_ashrrev_i16': 'b s>> (a & 15)', 'v_and_b16': 'a & b', 'v_or_b16': 'a | b', 'v_xor_b16': 'a ^ b',
    'v_not_b16': '~a', 'v_mov_b16': 'a',
    'v_cvt_f16_u16': 'cvt_u16', 'v_cvt_f16_i16': 'cvt_i16',
    'v_cvt_u16_f16': 'trunc(a)', 'v_cvt_i16_f16': 'trunc(a)',
    'v_sqrt_f16': 'sqrt(a)', 'v_floor_f16': 'floor(a)', 'v_ceil_f16': 'ceil(a)', 'v_trunc_f16': 'trunc_f',
    'v_rndne_f16': 'round(a)', 'v_rcp_f16': 'rcp',
    'v_fma_f16': '(a f* b) f+ c', 'v_min3_f16': 'min3_f', 'v_max3_f16': 'max3_f',
    'v_min3_i16': 'min3_s', 'v_max3_i16': 'max3_s', 'v_min3_u16': 'min3_u', 'v_max3_u16': 'max3_u',
    'v_maxmin_f16': 'maxmin_f', 'v_minmax_f16': 'minmax_f',
    'v_mad_u16': 'a * b + c', 'v_mad_i16': 'a * b + c',
    'v_xnor_b32': '~(a ^ b)', 'v_xor3_b32': 'a ^ b ^ c', 'v_add_nc_i32': 'a + b', 'v_sub_nc_i32': 'a - b',
    'v_maxmin_f32': 'maxmin_f', 'v_minmax_f32': 'minmax_f', 'v_maxmin_u32': 'maxmin_u',
    'v_minmax_u32': 'minmax_u', 'v_maxmin_i32': 'maxmin_s', 'v_minmax_i32': 'minmax_s',
    'v_ceil_f64': 'ceil(a)', 'v_rndne_f64': 'round(a)', 'v_fmac_dx9_zero_f32': '(a f* b) f+ d',
    'v_fma_dx9_zero_f32': '(a f* b) f+ c', 'v_cvt_i32_i16': 'sext(a)', 'v_cvt_u32_u16': 'zext(a)',
    'v_pack_b32_f16': '(zext(b) << 16) | zext(a)',
    'v_add_f16': 'a f+ b', 'v_sub_f16': 'a f- b', 'v_mul_f16': 'a f* b',
    'v_cvt_f16_f32': 'float2float(a)', 'v_cvt_f32_f16': 'float2float(a)',
    'v_mad_u32_u16': 'zext(a) * zext(b) + c', 'v_mad_i32_i16': 'sext(a) * sext(b) + c',
    'v_alignbit_b32': 'alignbit', 'v_alignbyte_b32': 'alignbyte',
    # GFX9 forms
    'v_mac_f16': '(a f* b) f+ d', 'v_mad_f16': '(a f* b) f+ c', 'v_mad_legacy_f16': '(a f* b) f+ c',
    'v_fma_legacy_f16': '(a f* b) f+ c', 'v_max_f16': 'max_f', 'v_min_f16': 'min_f', 'v_add_i32': 'a + b',
    'v_sub_i32': 'a - b', 'v_add_i16': 'a + b', 'v_sub_i16': 'a - b', 'v_mul_legacy_f32': 'a f* b',
    # GFX12 names
    'v_min_num_f16': 'min_f', 'v_max_num_f16': 'max_f', 'v_minimum_f16': 'min_f', 'v_maximum_f16': 'max_f',
    'v_minimum_f32': 'min_f', 'v_maximum_f32': 'max_f', 'v_minimum_f64': 'min_f', 'v_maximum_f64': 'max_f',
    'v_min3_num_f16': 'min3_f', 'v_max3_num_f16': 'max3_f', 'v_minimum3_f16': 'min3_f', 'v_maximum3_f16': 'max3_f',
    'v_minimum3_f32': 'min3_f', 'v_maximum3_f32': 'max3_f', 'v_minmax_num_f16': 'minmax_f',
    'v_maxmin_num_f16': 'maxmin_f', 'v_minmax_num_f32': 'minmax_f', 'v_maxmin_num_f32': 'maxmin_f',
    'v_minimummaximum_f16': 'minmax_f', 'v_maximumminimum_f16': 'maxmin_f', 'v_minimummaximum_f32': 'minmax_f',
    'v_maximumminimum_f32': 'maxmin_f', 'v_s_rcp_f32': 'rcp', 'v_s_rcp_f16': 'rcp', 'v_s_sqrt_f32': 'sqrt(a)',
    'v_s_sqrt_f16': 'sqrt(a)',
}
NAMED = {  # named user operations
    'v_log_f16': 'log2', 'v_exp_f16': 'exp2', 'v_rsq_f16': 'rsqrt', 'v_sin_f16': 'sin', 'v_cos_f16': 'cos',
    'v_fract_f16': 'fract', 'v_frexp_mant_f16': 'frexp_mant', 'v_frexp_exp_i16_f16': 'frexp_exp',
    'v_frexp_mant_f64': 'frexp_mant', 'v_frexp_exp_i32_f64': 'frexp_exp', 'v_med3_f16': 'med3',
    'v_med3_i16': 'med3', 'v_med3_u16': 'med3', 'v_div_fixup_f16': 'div_fixup', 'v_div_fixup_f64': 'div_fixup',
    'v_div_fmas_f64': 'div_fmas', 'v_cubeid_f32': 'cubeid', 'v_cubesc_f32': 'cubesc', 'v_cubetc_f32': 'cubetc',
    'v_cubema_f32': 'cubema', 'v_mullit_f32': 'mullit', 'v_qsad_pk_u16_u8': 'qsad', 'v_mqsad_pk_u16_u8': 'mqsad',
    'v_mqsad_u32_u8': 'mqsad', 'v_cvt_pk_rtz_f16_f32': 'cvt_pk', 'v_cvt_pk_i16_f32': 'cvt_pk',
    'v_cvt_pk_u16_f32': 'cvt_pk', 'v_cvt_pk_norm_i16_f16': 'cvt_pk', 'v_cvt_pk_norm_u16_f16': 'cvt_pk',
    'v_cvt_pk_norm_i16_f32': 'cvt_pk', 'v_cvt_pk_norm_u16_f32': 'cvt_pk', 'v_cvt_norm_i16_f16': 'cvt_norm',
    'v_cvt_norm_u16_f16': 'cvt_norm', 'v_sat_pk_u8_i16': 'sat_pk', 'v_cvt_off_f32_i4': 'cvt_off',
    'v_dot2_f16_f16': 'dot2', 'v_dot2_bf16_bf16': 'dot2', 'v_movreld_b32': 'movreld', 'v_movrels_b32': 'movrels',
    'v_movrelsd_b32': 'movrels', 'v_movrelsd_2_b32': 'movrels', 'v_permlane16_b32': 'permlane',
    'v_permlanex16_b32': 'permlane', 'v_permlane16_var_b32': 'permlane', 'v_permlanex16_var_b32': 'permlane',
    'v_med3_num_f16': 'med3', 'v_s_exp_f32': 'exp2', 'v_s_exp_f16': 'exp2', 'v_s_log_f32': 'log2', 'v_s_log_f16': 'log2',
    'v_s_rsq_f32': 'rsqrt', 'v_s_rsq_f16': 'rsqrt',
    'v_div_fixup_legacy_f16': 'div_fixup', 'v_cvt_pkrtz_f16_f32': 'cvt_pk', 'v_cvt_pknorm_i16_f16': 'cvt_pk',
    'v_cvt_pknorm_u16_f16': 'cvt_pk', 'v_exp_legacy_f32': 'exp2', 'v_log_legacy_f32': 'log2',
}


def expand(form, w):
    """Expand the shorthand forms (min/max on the value width w and signedness)."""
    s = {'max_f': 'f>', 'min_f': 'f<', 'max_u': '>', 'min_u': '<', 'max_s': 's>', 'min_s': 's<'}
    if form in s:
        return None, 'r = a; if (a %s b) goto <k>; r = b; <k>' % s[form]
    m = re.match(r'(min3|max3)_(f|u|s)$', form)
    if m:
        op = {'min3': '<', 'max3': '>'}[m.group(1)]
        op = {'f': 'f' + op, 'u': op, 's': 's' + op}[m.group(2)]
        return None, 'r = a; if (r %s b) goto <k1>; r = b; <k1> if (r %s c) goto <k2>; r = c; <k2>' % (op, op)
    m = re.match(r'(maxmin|minmax)_(f|u|s)$', form)
    if m:
        o1, o2 = ('>', '<') if m.group(1) == 'maxmin' else ('<', '>')
        p = {'f': 'f', 'u': '', 's': 's'}[m.group(2)]
        return None, ('r = a; if (r %s%s b) goto <k1>; r = b; <k1> if (r %s%s c) goto <k2>; r = c; <k2>'
                      % (p, o1, p, o2))
    if form == 'trunc_f':
        return None, 'l:4 = trunc(a); r = int2float(l);'
    if form == 'rcp':
        return None, 'o:%d = int2float(1:4); r = o f/ a;' % w
    if form == 'alignbit':
        return None, 'l:8 = (zext(a) << 32) | zext(b); s:8 = zext(c & 31); l = l >> s; r = l:4;'
    if form == 'alignbyte':
        return None, 'l:8 = (zext(a) << 32) | zext(b); s:8 = zext(c & 3) * 8; l = l >> s; r = l:4;'
    if form == 'cvt_u16':
        return None, 'l:4 = zext(a); r = int2float(l);'
    if form == 'cvt_i16':
        return None, 'l:4 = sext(a); r = int2float(l);'
    return form, None


def result(base, n, rsz):
    """p-code computing r from the sources a, b, c for a non-compare operation."""
    names = ['a', 'b', 'c'][:n]
    if base in NAMED:
        return 'r = %s;' % uop(NAMED[base], *names)
    if base in SEM:
        form, code = expand(SEM[base], rsz)
        return 'r = %s;' % form if code is None else code
    return 'r = %s;' % uop(base[2:], *names)


def compare(base):
    """p-code setting c1 for a v_cmp/v_cmpx mnemonic, or None."""
    m = re.match(r'v_cmpx?_(\w+?)_(f|i|u)(16|32|64)$', base)
    if re.match(r'v_cmpx?_class_f(16|32|64)$', base):
        return 'c1:1 = %s;' % uop('cmp_class', 'a', 'b')
    if m and m.group(2) == 'f':
        return 'c1:1 = %s;' % CMP_F[m.group(1)]
    if m:
        return 'c1:1 = %s;' % CMP_I[m.group(1)].format(s='s' if m.group(2) == 'i' else '')
    return None


def e32(path, body):
    """VOPC/VOP1/VOP2 true16 forms: bit 7 of an 8-bit VGPR field picks the half."""
    skip = ('v_mov_b16', 'v_not_b16', 'v_swap_b16')   # the base spec has the first two
    for line in open(path):
        if '|' not in line:
            continue
        head, text = line.split('|', 1)
        fmt, op = head.split()
        op = int(op)
        mn, ops = operands(text.strip())
        base = re.sub(r'_e32$', '', mn)
        if base in skip:
            continue
        cmp = fmt == 'vopc'
        cmpx = base.startswith('v_cmpx_')
        if cmp and not cmpx:
            ops = ops[1:]
        kinds = [kind(o) for o in ops]
        if '?' in kinds or 'v64' in kinds:
            continue
        dst, srcs = (None, kinds) if cmp else (kinds[0], kinds[1:])
        tabs, pats = [], []
        for i, k in enumerate(srcs):
            if i == 0:
                tabs.append('T16S' if k == 'h16' else 'V32_i0')
            else:
                tabs.append('E9' if k == 'h16' else 'i9_vg')
        sz = [2 if k == 'h16' else 4 for k in srcs]
        load = ' '.join('%s:%d = %s;' % ('ab'[i], sz[i], t if sz[i] == 2 or t != 'i9_vg' else t)
                        for i, t in enumerate(tabs))
        head = {'vopc': 'e7=0x3e ... & vopcop=%d ...', 'vop1': 'e7=0x3f ... & vop1op=%d ...',
                'vop2': 'e1=0 ... & vop2op=%d ...'}[fmt] % op
        splits = []
        if srcs and srcs[0] == 'h16':
            splits.append(['i0_hb=0 ...', 'i0_hb=1 ...'])
        if len(srcs) > 1 and srcs[1] == 'h16':
            splits.append(['i9_vg<128 ...', 'i9_vg>=128 ...'])
        if cmp:
            c = compare(base)
            if c is None:
                continue
            sem = c + (' exec_lo = zext(c1);' if cmpx else ' vcc_lo = zext(c1);')
            dvar = [('', '', sem)]
            disp = ('' if cmpx else '"vcc_lo", ') + ', '.join(tabs)
        else:
            rsz = 2 if dst == 'h16' else 4
            rexpr = result(base, len(tabs), rsz)
            need_d = '(a f* b) f+ d' in rexpr
            dvar = []
            if dst == 'h16':
                for hi in (0, 1):
                    dexpr = ('i17_v7 = (i17_v7 & 0xffff) | (zext(r) << 16);' if hi
                             else 'i17_v7 = (i17_v7 & 0xffff0000) | zext(r);')
                    dpre = ('d:2 = i17_v7%s; ' % ('(2)' if hi else ':2')) if need_d else ''
                    dvar.append(('i17_v7^".%s", ' % 'lh'[hi], 'i17_hi=%d ... & i17_v7 ...' % hi,
                                 '%sr:2 = 0; %s %s' % (dpre, rexpr, dexpr)))
            else:
                dpre = 'd:4 = i17_vg; ' if need_d else ''
                dvar.append(('i17_vg, ', 'i17_vg ...', '%sr:4 = 0; %s i17_vg = r;' % (dpre, rexpr)))
            disp = None
        for dd, dp, sem in dvar:
            for combo in ([[]] if not splits else [[a] for a in splits[0]] if len(splits) == 1
                          else [[a, b] for a in splits[0] for b in splits[1]]):
                parts = [head] + ([dp] if dp else []) + combo + ['%s ...' % t for t in tabs]
                d = disp if disp is not None else dd + ', '.join(tabs)
                body.append(':%s %s is %s { %s %s }' % (mn, d, ' & '.join(parts), load, sem))


def widths16(base, kinds):
    """GFX9: mark the 16-bit operands of a VOP3 form, from the type suffixes of its mnemonic."""
    types = re.findall(r'_([fiub])(8|16|32|64)(?=_|$)', base)
    if not types:
        return kinds
    w = [int(t[1]) for t in types]
    dst_w, src_w = (w[0], w[0]) if len(w) == 1 else (w[0], w[1])
    out = list(kinds)
    cmp = base.startswith('v_cmp')
    for i, k in enumerate(kinds):
        if k != 'v32':
            continue
        isdst = i == 0 and not cmp
        width = dst_w if isdst else src_w
        if base in ('v_mad_u32_u16', 'v_mad_i32_i16') and i == 3:
            width = 32
        if base == 'v_ldexp_f16' and i == 2:
            width = 32
        if base in ('v_cvt_pknorm_i16_f16', 'v_cvt_pknorm_u16_f16', 'v_pack_b32_f16') and isdst:
            width = 32
        if base == 'v_sat_pk_u8_i16':
            width = 16 if isdst else 32
        if width == 16:
            out[i] = 'h16'
    return out


def e32_gfx9(path, body):
    """GFX9 VOPC/VOP1/VOP2 forms the base lacks: 16-bit operands are the low halves, results zero
    the high half, compares write VCC (v_cmpx also EXEC)."""
    head = {'vopc': 'e7=0x3e ... & vopcop=%d ...', 'vop1': 'e7=0x3f ... & vop1op=%d ...',
            'vop2': 'e1=0 ... & vop2op=%d ...'}
    for line in open(path):
        if '|' not in line:
            continue
        h, text = line.split('|', 1)
        fmt, op = h.split()
        mn, ops = operands(text.strip())
        base = re.sub(r'_e32$', '', mn)
        cmp = fmt == 'vopc'
        if cmp and ops and ops[0] == 'vcc':
            ops = ops[1:]
        kinds = widths16(base, [kind(o) for o in ops])
        if '?' in kinds or 'v128' in kinds or (not cmp and not kinds):
            continue
        dst, srcs = (None, kinds) if cmp else (kinds[0], kinds[1:])
        if len(srcs) > 2 or not srcs:
            continue
        tabs, load = [], []
        for i, k in enumerate(srcs):
            t = ('V64_i0' if k == 'v64' else 'V32_i0') if i == 0 else ('i9_vp' if k == 'v64' else 'i9_vg')
            tabs.append(t)
            n = {'h16': 2, 'v32': 4, 'v64': 8}[k]
            load.append('%s:%d = %s%s;' % ('ab'[i], n, t, ':2' if k == 'h16' else ''))
        if cmp:
            c = compare(base)
            if c is None:
                continue
            sem = c + ' vcc = zext(c1);' + (' exec = zext(c1);' if base.startswith('v_cmpx') else '')
            disp = '"vcc", ' + ', '.join(tabs)
        else:
            d = {'h16': 'i17_vg', 'v32': 'i17_vg', 'v64': 'i17_vp'}[dst]
            rsz = {'h16': 2, 'v32': 4, 'v64': 8}[dst]
            rexpr = result(base, len(tabs), rsz)
            pre = ('d:%d = %s%s; ' % (rsz, d, ':2' if dst == 'h16' else '')) if '(a f* b) f+ d' in rexpr else ''
            sem = '%sr:%d = 0; %s %s = %s;' % (pre, rsz, rexpr, d, 'zext(r)' if dst == 'h16' else 'r')
            disp = d + ', ' + ', '.join(tabs)
        pat = ' & '.join([head[fmt] % int(op)] + (['%s ...' % d] if not cmp else []) + ['%s ...' % t for t in tabs])
        body.append(':%s %s is %s { %s %s }' % (mn, disp, pat, ' '.join(load), sem))


def operands(text):
    m = re.match(r'(\S+)\s*(.*)$', text)
    mn, rest = m.group(1), m.group(2)
    rest = re.sub(r'\s*op_sel:\[[^\]]*\]', '', rest)
    ops = [o.strip() for o in rest.split(',') if o.strip()]
    return mn, ops


def kind(op):
    if re.match(r'v\d+\.[lh]$', op):
        return 'h16'
    if re.match(r'v\[\d+:\d+\]$', op):
        a, b = map(int, re.findall(r'\d+', op))
        return 'v%d' % ((b - a + 1) * 32)
    if re.match(r'v\d+$', op):
        return 'v32'
    if re.match(r'(s\d+|ttmp\d+)$', op):
        return 'sdst'
    if re.match(r'(s|ttmp)\[\d+:\d+\]$', op):
        return 'sdst64'
    return '?'


SRC = ['j0', 'j9', 'j18']
OPSEL = [0, 1, 2]   # op_sel bit of each source; bit 3 is the destination


def opsel(fixed):
    """Pattern for the 4-bit op_sel field with the given {bit: value} fixed."""
    vals = [v for v in range(16) if all(((v >> b) & 1) == x for b, x in fixed.items())]
    if len(vals) == 16:
        return ''
    return ' & (' + ' | '.join('v3opsel=%d' % v for v in vals) + ')'


def src_table(k, i, flt):
    j = SRC[i]
    if k == 'h16':
        return ('FH16_%s' if flt else 'H16_%s') % j   # placeholder: L16_/U16_ by op_sel
    if k == 'v32':
        return ('F32_%s' if flt else 'V32_%s') % j
    if k == 'v64':
        return ('F64_%s' if flt else 'V64_%s') % j
    if k == 'v128':
        return 'V128_%s' % j
    return None


def main():
    out = []
    w = out.append
    w('# Generated by tools/gen_amdgpu_gfx11_valu.py from llvm-objdump output; edit the generator.')
    w('')
    for j in SRC:
        # low and high halves of a 16-bit source; op_sel in the instruction picks the table
        hl = ('', '') if GFX9 else ('^".l"', '^".h"')
        w('L16_%s: %s_vg%s is %s_v=1 & %s_vg { t:2 = %s_vg:2; export t; }' % (j, j, hl[0], j, j, j))
        w('L16_%s: S32_%s is %s_v=0 ... & S32_%s ... { t:2 = S32_%s:2; export t; }' % (j, j, j, j, j))
        w('U16_%s: %s_vg%s is %s_v=1 & %s_vg { t:2 = %s_vg(2); export t; }' % (j, j, hl[1], j, j, j))
        w('U16_%s: S32_%s is %s_v=0 ... & S32_%s ... { t:2 = S32_%s(2); export t; }' % (j, j, j, j, j))
    for i, j in enumerate(SRC):
        # float halves with the VOP3 abs (word 0) and neg (word 1) modifiers
        for h in 'LU':
            t = '%s16_%s' % (h, j)
            w('F%s: %s is v3abs%d=0 ; v3neg%d=0 ... & %s ... { export %s; }' % (t, t, i, i, t, t))
            w('F%s: "|"^%s^"|" is v3abs%d=1 ; v3neg%d=0 ... & %s ... { t:2 = abs(%s); export t; }' % (t, t, i, i, t, t))
            w('F%s: "-"^%s is v3abs%d=0 ; v3neg%d=1 ... & %s ... { t:2 = f- %s; export t; }' % (t, t, i, i, t, t))
            w('F%s: "-|"^%s^"|" is v3abs%d=1 ; v3neg%d=1 ... & %s ... { t:2 = f- abs(%s); export t; }'
              % (t, t, i, i, t, t))
    for s in range(0 if GFX9 else 128):
        w('E9: "v%d.l" is i9_vg=%d { t:2 = v%d:2; export t; }' % (s, s, s))
        w('E9: "v%d.h" is i9_vg=%d { t:2 = v%d(2); export t; }' % (s, s + 128, s))
    w('')
    body = []
    seen = set()
    for line in open(sys.argv[1]):
        parts = [p.strip() for p in line.split('|')]
        if len(parts) < 3 or not parts[0].isdigit():
            continue
        op = int(parts[0])
        mn, ops = operands(parts[1])
        base = re.sub(r'_e64$', '', mn)
        if base in ('v_add_co_u32', 'v_sub_co_u32', 'v_subrev_co_u32', 'v_div_scale_f64', 'v_cndmask_b16'):
            continue   # carry/scale forms are in the base spec under their e64 names
        kinds = [kind(o) for o in ops]
        if '?' in kinds or 'v128' in kinds:
            continue
        opsel_ok = 'op_sel' in parts[2]
        if GFX9:
            kinds = widths16(base, kinds)
        flt = bool(re.search(r'_f(16|32|64)$|_f16_|_f32_|_f64_', base)) and not base.startswith('v_cvt_f16_')
        is_cmp = base.startswith('v_cmp_') or base.startswith('v_cmpx_')
        cmpx = base.startswith('v_cmpx_')
        if cmpx and not GFX9:
            dst, srcs = None, kinds
        elif kinds and kinds[0] in ('sdst', 'sdst64'):
            dst, srcs = kinds[0], kinds[1:]
        else:
            dst, srcs = kinds[0], kinds[1:]
        tabs = []
        for i, k in enumerate(srcs):
            t = src_table(k, i, flt)
            if t is None:
                tabs = None
                break
            tabs.append(t)
        if tabs is None or len(tabs) > 3:
            continue
        names = ['a', 'b', 'c']
        sz = {'h16': 2, 'v32': 4, 'v64': 8, 'v128': 16}
        load = ' '.join('%s:%d = %s;' % (names[i], sz[srcs[i]], t) for i, t in enumerate(tabs))
        # result expression
        if is_cmp:
            m = re.match(r'v_cmpx?_(\w+?)_(f|i|u)(16|32|64)$', base)
            mc = re.match(r'v_cmpx?_class_f(16|32|64)$', base)
            if mc:
                cond = uop('cmp_class', 'a', 'b')
                expr = 'c1:1 = %s;' % cond
            elif m and m.group(2) == 'f':
                expr = 'c1:1 = %s;' % CMP_F[m.group(1)]
            elif m:
                expr = 'c1:1 = %s;' % CMP_I[m.group(1)].format(s='s' if m.group(2) == 'i' else '')
            else:
                continue
            if GFX9:
                sem = expr + ' i0_spd = zext(c1);' + (' exec = zext(c1);' if cmpx else '')
                disp = 'i0_spd, ' + ', '.join(tabs)
                pat_dst = ' & i0_h=0 & i0_spd'
            elif cmpx:
                sem = expr + ' exec_lo = zext(c1);'
                disp = ', '.join(tabs)
                pat_dst = ' & i0_x=0x7e'   # the destination field holds EXEC_LO, as in the base spec
            else:
                sem = expr + ' i0_lo7d = zext(c1);'
                disp = 'i0_lo7d, ' + ', '.join(tabs)
                pat_dst = ' & i0_h=0 & i0_lo7d'
            variants = [('', pat_dst, sem, disp)]
        else:
            rsz = {'h16': 2, 'v32': 4, 'v64': 8, 'v128': 16}[dst]
            if base in NAMED:
                rexpr = 'r = %s;' % uop(NAMED[base], *names[:len(tabs)])
            elif base in SEM:
                form, code = expand(SEM[base], rsz)
                if code is None:
                    rexpr = 'r = %s;' % form
                else:
                    rexpr = code
            else:
                rexpr = 'r = %s;' % uop(base[2:], *names[:len(tabs)])
            need_d = '(a f* b) f+ d' in rexpr
            if dst == 'h16' and GFX9 and not opsel_ok:
                dpre = 'd:2 = i0v8:2; ' if need_d else ''
                variants = [('', ' & i0v8', '%s r:2 = 0; %s i0v8 = zext(r);' % (dpre, rexpr), 'i0v8, ' + ', '.join(tabs))]
            elif dst == 'h16':
                variants = []
                for hi in (0, 1):
                    dexpr = 'i0v8 = (i0v8 & 0xffff0000) | zext(r);' if not hi else 'i0v8 = (i0v8 & 0xffff) | (zext(r) << 16);'
                    dpre = ('d:2 = i0v8%s; ' % (':2' if not hi else '(2)')) if need_d else ''
                    sfx = '' if GFX9 else '^".%s"' % 'lh'[hi]
                    variants.append((sfx or str(hi), '@D%d & i0v8' % hi,
                                     '%s r:2 = 0; %s %s' % (dpre, rexpr, dexpr),
                                     'i0v8%s, ' % sfx + ', '.join(tabs)))
            else:
                dfield = {'v32': 'i0v8', 'v64': 'i0vp', 'v128': 'V128_d'}[dst]
                dpre = 'd:%d = %s; ' % (rsz, dfield) if need_d else ''
                variants = [('', ' & %s' % dfield, '%s r:%d = 0; %s %s = r;' % (dpre, rsz, rexpr, dfield),
                             '%s, ' % dfield + ', '.join(tabs))]
        h16 = [i for i, t in enumerate(tabs) if t.startswith('H16_') or t.startswith('FH16_')]
        if GFX9 and not opsel_ok:
            # no op_sel: every 16-bit source is its low half
            tabs = [('F' if t[0] == 'F' else '') + 'L16_' + t.split('_', 1)[1] if i in h16 else t
                    for i, t in enumerate(tabs)]
            load = ' '.join('%s:%d = %s;' % (names[i], sz[srcs[i]], t) for i, t in enumerate(tabs))
            variants = [(s, p, x.replace('H16_', 'L16_'), d.replace('FH16_', 'FL16_').replace('H16_', 'L16_'))
                        for s, p, x, d in variants]
            variants = [(s, p, x, re.sub(r'\bFL16_', 'FL16_', d)) for s, p, x, d in variants]
            h16 = []
        for suffix, pat_dst, sem, disp in variants:
            for sel in range(1 << len(h16)):
                key = (mn, suffix, sel)
                if key in seen:
                    continue
                seen.add(key)
                tt = list(tabs)
                fixed = {}
                for n, i in enumerate(h16):
                    hi = (sel >> n) & 1
                    tt[i] = ('F' if tabs[i][0] == 'F' else '') + ('U16_' if hi else 'L16_') + SRC[i]
                    fixed[OPSEL[i]] = hi
                m3 = re.search(r'@D(\d)', pat_dst)
                if m3:
                    fixed[3] = int(m3.group(1))
                pd = re.sub(r'@D\d', '', pat_dst)
                d2 = disp
                l2 = load
                for a, b in zip(tabs, tt):
                    d2 = d2.replace(a, b, 1)
                    l2 = l2.replace(a, b, 1)
                w1 = [t for t in dict.fromkeys(tt) if not t.startswith('F')]
                w0 = [t for t in dict.fromkeys(tt) if t.startswith('F')]
                pat = 'e6=%s ' % E6 + '& vop3op=%d%s%s' % (op, pd, opsel(fixed))
                if w1:
                    pat += ' ; ' + ' & '.join('%s ...' % t for t in w1)
                if w0:
                    pat = '(%s) ... & ' % pat + ' & '.join('%s ...' % t for t in w0)
                body.append(':%s %s is %s { %s %s }' % (mn, d2, pat, l2, sem))
    # forms with a carry/select SGPR operand
    for hi in (0, 1) if not GFX9 else ():
        for s0 in (0, 1):
            for s1 in (0, 1):
                a, b = ('U16_j0' if s0 else 'L16_j0'), ('U16_j9' if s1 else 'L16_j9')
                dw = 'i0v8 = (i0v8 & 0xffff) | (zext(r) << 16);' if hi else 'i0v8 = (i0v8 & 0xffff0000) | zext(r);'
                body.append(':v_cndmask_b16 i0v8^".%s", %s, %s, S32_j18 is e6=0x35 & vop3op=605 & i0v8%s ; %s ... & %s ... & S32_j18 ... '
                            '{ a:2 = %s; b:2 = %s; r:2 = a; if ((S32_j18 & 1) == 0) goto <k>; r = b; <k> %s }'
                            % ('lh'[hi], a, b, opsel({0: s0, 1: s1, 3: hi}), a, b, a, b, dw))
    if GFX9:
        e32_gfx9(sys.argv[2], body)
    else:
        e32(sys.argv[2], body)
    if not GFX9 and not re.search(r'vop3op=765\b', open(sys.argv[3]).read()):
        body.append(':v_div_scale_f64 i0vp, i8_lo7d, F64_j0, F64_j9, F64_j18 is e6=0x35 ... & vop3op=765 ... & i0vp ... '
                    '& i8_lo7d ... & F64_j0 ... & F64_j9 ... & F64_j18 ... '
                    '{ i0vp = div_scale(F64_j0, F64_j9, F64_j18); i8_lo7d = 0; }')
    have = set(re.findall(r'define pcodeop (\w+);', open(sys.argv[3]).read()))
    for nm in sorted(USEROPS - have):
        w('define pcodeop %s;' % nm)
    w('')
    w('\n'.join(body))
    print('\n'.join(out))


main()
