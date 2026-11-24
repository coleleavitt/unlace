#!/usr/bin/env python3
"""Derive the CDNA AMDGPU specs (gfx90a = CDNA2, gfx942 = CDNA3) from the GFX9 one.

tools/amdgpu_cdna_probe.py ('map') lists LLVM's gfx900 and CDNA mnemonic for every opcode of the
GFX9 formats; each GFX9 constructor is kept, renamed, moved to the opcode its name has on the
target, or dropped (v_mul_legacy_f32's VOP2 slot holds v_fmac_f64 on CDNA; gfx942 drops v_mac_f32,
v_mad_f32 and v_mad_legacy_f32).  The GFX9 FLAT atomics, which always wrote their destination,
are replaced by ones that return the old value only with glc (gfx942: sc0).  The generator adds:
  - the CDNA VALU operations (v_fmac_f32/f64, v_xnor_b32, v_pk_fmac_f16, v_dot*c, v_mul_legacy_f32
    as VOP3, gfx942's v_lshl_add_u64, v_mov_b64 and fp8 conversions),
  - VOP3P (bits 31-23 = 110100111): the packed 16-bit operations, v_pk_fma/mul/add/mov_b32 on
    VGPR pairs (op_sel and op_sel_hi pick each lane's dword), dot and fma_mix,
  - the accumulation registers a0-a255, v_accvgpr_read/write/mov, and every MFMA/SMFMAC opcode
    'amdgpu_cdna_probe.py mfma' lists, with its tile sizes: the result and accumulator are AGPR
    tuples when acc_cd (word 0 bit 15) is set and VGPR tuples otherwise, A and B AGPRs when the
    acc bits (word 1 bits 27-28) are set; each is a user-op named after the instruction,
  - the global/flat atomics including the f32/f64/pk forms.

usage: gen_amdgpu_cdna.py amdgcn_gfx9.slaspec map.txt mfma.txt gfx90a|gfx942 > amdgcn_gfx90a.slaspec
"""
import re
import sys

OPFIELD = {'sop1op': 'sop1', 'sop2op': 'sop2', 'sopcop': 'sopc', 'sopkop': 'sopk', 'soppop': 'sopp',
           'vop1op': 'vop1', 'vop2op': 'vop2', 'vopcop': 'vopc', 'vop3op': 'vop3', 'dsop': 'ds',
           'mbop': 'mubuf', 'smop': 'smem'}
FLSEG = {0: 'flat', 1: 'scratch', 2: 'global'}
V = 256


def strip(n):
    return re.sub(r'_e(32|64)$', '', n)


def load_map(path):
    m = {}
    for line in open(path):
        f, op, a, b = line.split()
        m.setdefault(f, {})[int(op)] = (a, b)
    return m


def groups(lines):
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


def vt(s, n):
    return {1: 'v%d' % s, 2: 'v%d_%d' % (s, s + 1)}.get(n, 'vt%d_%d' % (s, s + n - 1))


def at(s, n):
    return 'a%d' % s if n == 1 else 'at%d_%d' % (s, s + n - 1)


def rng(p, s, n):
    return '%s%d' % (p, s) if n == 1 else '%s[%d:%d]' % (p, s, s + n - 1)


def main():
    spec = open(sys.argv[1]).read().split('\n')
    m = load_map(sys.argv[2])
    mf = [l.split() for l in open(sys.argv[3]) if l.strip()]
    cpu = sys.argv[4]
    names = {f: {b: op for op, (a, b) in t.items() if b != '-'} for f, t in m.items()}
    out = []
    w = out.append
    w('# Generated from amdgcn_gfx9.slaspec by tools/gen_amdgpu_cdna.py (%s); edit the generator.' % cpu)
    stats = {'renamed': 0, 'moved': 0, 'dropped': 0}
    for g in groups(spec):
        line = g[0]
        if not line.startswith(':'):
            out.extend(g)
            continue
        text = '\n'.join(g)
        mn = re.match(r':(\S+)', line).group(1)
        if re.match(r'(flat|global)_atomic_', mn):
            stats['dropped'] += 1
            continue
        fo = re.search(r'\b(%s)=(0x[0-9a-f]+|\d+)' % '|'.join(OPFIELD), text)
        ff = re.search(r'\bflop=(\d+)', text)
        if ff:
            f, op, fld = FLSEG[int(re.search(r'\bflseg=(\d)', text).group(1))], int(ff.group(1)), 'flop'
            fv = ff.group(1)
        elif fo:
            f, op, fld, fv = OPFIELD[fo.group(1)], int(fo.group(2), 0), fo.group(1), fo.group(2)
        else:
            out.extend(g)
            continue
        a, b = m.get(f, {}).get(op, ('-', '-'))
        if a == '-' or b == a:
            out.extend(g)
            continue
        target = None
        for cand in (a, strip(a), strip(a) + '_e64'):
            if cand in names.get(f, {}) and names[f][cand] != op:
                target = cand
                break
        if target is not None:
            op2 = names[f][target]
            new = target if mn == a else strip(target) if mn == strip(a) else mn
            g = [line.replace(':' + mn, ':' + new, 1)] + g[1:]
            g = [re.sub(r'\b%s=%s\b' % (fld, fv), '%s=%d' % (fld, op2), x) for x in g]
            stats['moved'] += 1
            out.extend(g)
            continue
        if b == '-' or b in names.get(f, {}) and m[f].get(op, ('', ''))[0] != '-' and any(
                x == b for x2, (x1, x) in m[f].items() if x2 != op):
            stats['dropped'] += 1
            continue
        if strip(b) in {strip(x) for x in names.get(f, {}) if names[f][x] != op} or (
                a.startswith('v_mul_legacy') or a.startswith('v_mac_') or a.startswith('v_mad_')):
            stats['dropped'] += 1
            continue
        new = b if mn == a else strip(b) if mn == strip(a) else mn
        g = [line.replace(':' + mn, ':' + new, 1)] + g[1:]
        stats['renamed'] += 1
        out.extend(g)
    sys.stderr.write('%s %s\n' % (cpu, stats))
    out.append('')
    out.append('@include "amdgcn_%s_cdna.sinc"' % cpu)
    print('\n'.join(out))
    # ---- the include
    inc = gen_include(m, names, mf, cpu, '\n'.join(out))
    open(sys.argv[5], 'w').write(inc)


def gen_include(m, names, mf, cpu, base):
    o = []
    w = o.append
    have = lambda f, n: n in names.get(f, {}) and (':%s ' % n) not in base and (':%s ' % strip(n)) not in base
    opn = lambda f, n: names[f][n]
    w('# Generated by tools/gen_amdgpu_cdna.py (%s); edit the generator.' % cpu)
    # registers
    w('define register offset=0x6000 size=4 [ %s ];' % ' '.join('a%d' % i for i in range(256)))
    sizes = sorted({int(x) for r in mf for x in r[2:]} | {2, 4, 8, 16} | ({32} if any(r[2] == '32' for r in mf) else set()))
    for n in sizes:
        if n < 2:
            continue
        for k in range(n):
            w('define register offset=0x%x size=%d [ %s ];' % (0x6000 + 4 * k, 4 * n,
                                                               ' '.join(at(s, n) for s in range(k, 256 - n + 1, n))))
            if n > 2:
                w('define register offset=0x%x size=%d [ %s ];' % (0x1000 + 4 * k, 4 * n,
                                                                   ' '.join(vt(s, n) for s in range(k, 256 - n + 1, n))))
    ops = set()
    rows = []
    r = rows.append

    def uop(n):
        ops.add(n)
        return n
    # ---- VALU additions
    e32 = {
        'v_fmac_f32_e32': ('vop2', 'i17_vg, V32_i0, i9_vg', 'i17_vg = (V32_i0 f* i9_vg) f+ i17_vg;'),
        'v_fmac_f64_e32': ('vop2', 'i17_vp, V64_i0, i9_vp', 'i17_vp = (V64_i0 f* i9_vp) f+ i17_vp;'),
        'v_xnor_b32_e32': ('vop2', 'i17_vg, V32_i0, i9_vg', 'i17_vg = ~(V32_i0 ^ i9_vg);'),
        'v_pk_fmac_f16_e32': ('vop2', 'i17_vg, V32_i0, i9_vg',
                              'l:2 = (V32_i0:2 f* i9_vg:2) f+ i17_vg:2; h:2 = (V32_i0(2) f* i9_vg(2)) f+ i17_vg(2); '
                              'i17_vg = (zext(h) << 16) | zext(l);'),
        'v_mov_b64_e32': ('vop1', 'i17_vp, V64_i0', 'i17_vp = V64_i0;'),
    }
    for nm in ('v_dot2c_f32_f16_e32', 'v_dot2c_i32_i16_e32', 'v_dot4c_i32_i8_e32', 'v_dot8c_i32_i4_e32'):
        e32[nm] = ('vop2', 'i17_vg, V32_i0, i9_vg', 'i17_vg = %s(V32_i0, i9_vg, i17_vg);' % uop(strip(nm)[2:]))
    for nm in ('v_cvt_f32_fp8_e32', 'v_cvt_f32_bf8_e32'):
        e32[nm] = ('vop1', 'i17_vg, V32_i0', 'i17_vg = %s(V32_i0);' % uop(strip(nm)[2:]))
    for nm in ('v_cvt_pk_f32_fp8_e32', 'v_cvt_pk_f32_bf8_e32'):
        e32[nm] = ('vop1', 'i17_vp, V32_i0', 'i17_vp = %s(V32_i0);' % uop(strip(nm)[2:]))
    head = {'vop1': 'e7=0x3f ... & vop1op=%d ...', 'vop2': 'e1=0 ... & vop2op=%d ...'}
    for nm, (f, opsx, sem) in sorted(e32.items()):
        if not have(f, nm):
            continue
        pat = ' & '.join([head[f] % opn(f, nm)] + ['%s ...' % x for x in opsx.split(', ')])
        r(':%s %s is %s { %s }' % (nm, opsx, pat, sem))
    e64 = {
        'v_fmac_f32_e64': ('i0v8, F32_j0, F32_j9', 'i0v8 = (F32_j0 f* F32_j9) f+ i0v8;'),
        'v_fmac_f64_e64': ('i0vp, F64_j0, F64_j9', 'i0vp = (F64_j0 f* F64_j9) f+ i0vp;'),
        'v_xnor_b32_e64': ('i0v8, V32_j0, V32_j9', 'i0v8 = ~(V32_j0 ^ V32_j9);'),
        'v_mul_legacy_f32': ('i0v8, F32_j0, F32_j9', 'i0v8 = F32_j0 f* F32_j9;'),
        # 16-bit VOP3 forms the GFX9 base lacks (op_sel and the f16 modifiers are not modelled)
        'v_fma_f16': ('i0v8, V32_j0, V32_j9, V32_j18', 'h:2 = (V32_j0:2 f* V32_j9:2) f+ V32_j18:2; i0v8 = zext(h);'),
        'v_mad_f16': ('i0v8, V32_j0, V32_j9, V32_j18', 'h:2 = (V32_j0:2 f* V32_j9:2) f+ V32_j18:2; i0v8 = zext(h);'),
        'v_max_f16_e64': ('i0v8, V32_j0, V32_j9', 'a:2 = V32_j0:2; b:2 = V32_j9:2; h:2 = a; if (a f> b) goto <k>; h = b; <k> i0v8 = zext(h);'),
        'v_min_f16_e64': ('i0v8, V32_j0, V32_j9', 'a:2 = V32_j0:2; b:2 = V32_j9:2; h:2 = a; if (a f< b) goto <k>; h = b; <k> i0v8 = zext(h);'),
        'v_lshl_add_u64': ('i0vp, V64_j0, V32_j9, V64_j18', 'i0vp = (V64_j0 << (V32_j9 & 63)) + V64_j18;'),
        'v_mov_b64_e64': ('i0vp, V64_j0', 'i0vp = V64_j0;'),
        'v_pk_fmac_f16_e64': ('i0v8, V32_j0, V32_j9',
                              'l:2 = (V32_j0:2 f* V32_j9:2) f+ i0v8:2; h:2 = (V32_j0(2) f* V32_j9(2)) f+ i0v8(2); '
                              'i0v8 = (zext(h) << 16) | zext(l);'),
    }
    for nm in ('v_dot2c_f32_f16_e64', 'v_dot2c_i32_i16_e64', 'v_dot4c_i32_i8_e64', 'v_dot8c_i32_i4_e64'):
        e64[nm] = ('i0v8, V32_j0, V32_j9', 'i0v8 = %s(V32_j0, V32_j9, i0v8);' % uop(strip(nm)[2:]))
    for nm in ('v_cvt_f32_fp8_e64', 'v_cvt_f32_bf8_e64'):
        e64[nm] = ('i0v8, V32_j0', 'i0v8 = %s(V32_j0);' % uop(strip(nm)[2:]))
    for nm in ('v_cvt_pk_f32_fp8_e64', 'v_cvt_pk_f32_bf8_e64'):
        e64[nm] = ('i0vp, V32_j0', 'i0vp = %s(V32_j0);' % uop(strip(nm)[2:]))
    for nm in ('v_cvt_pk_fp8_f32', 'v_cvt_pk_bf8_f32', 'v_cvt_sr_fp8_f32', 'v_cvt_sr_bf8_f32'):
        e64[nm] = ('i0v8, V32_j0, V32_j9', 'i0v8 = %s(V32_j0, V32_j9, i0v8);' % uop(nm[2:]))
    for nm, (opsx, sem) in sorted(e64.items()):
        if not have('vop3', nm):
            continue
        srcs = opsx.split(', ')[1:]
        f0 = [x for x in srcs if x.startswith('F')]
        f1 = [x for x in srcs if not x.startswith('F')]
        pat = 'e6=0x34 & vop3op=%d & %s' % (opn('vop3', nm), opsx.split(', ')[0])
        if f1:
            pat += ' ; ' + ' & '.join('%s ...' % x for x in f1)
        if f0:
            pat = '(%s) ... & ' % pat + ' & '.join('%s ...' % x for x in f0)
        r(':%s %s is %s { %s }' % (nm, opsx, pat, sem))
    # ---- VOP3P (vop3op = 896 + the VOP3P opcode)
    sys.path.insert(0, __file__.rsplit('/', 1)[0])
    import gen_amdgpu_gfx11_vop3p as P
    p3 = {op: n for f in ('vop3',) for n, op in names.get(f, {}).items() if op >= 896}
    p3 = {op - 896: n for op, n in p3.items()}
    SRC = ['j0', 'j9', 'j18']
    for j in SRC:
        w('PK_%s: %s_vg is %s_v=1 & %s_vg { export %s_vg; }' % (j, j, j, j, j))
        w('PK_%s: S32_%s is %s_v=0 ... & S32_%s ... { export S32_%s; }' % (j, j, j, j, j))
        w('PK64_%s: V64_%s is V64_%s { export V64_%s; }' % (j, j, j, j))
    pk16 = {op: v for op, v in P.PK.items() if p3.get(op) == v[0]}
    for op, (mn, form, nsrc) in sorted(pk16.items()):
        code = []
        for i in range(nsrc):
            lo, hi = P.lanes(i)
            x = 'abc'[i]
            code.append('s%s:4 = PK_%s; t%s:4 = s%s >> (%s); l%s:2 = t%s:2; t%s = s%s >> (%s); h%s:2 = t%s:2;'
                        % (x, SRC[i], x, x, lo, x, x, x, x, hi, x, x))
        for p in 'lh':
            if form.startswith('sel:'):
                code.append('%sr:2 = %sa; if (%sa %s %sb) goto <k%s>; %sr = %sb; <k%s>' % (p, p, p, form[4:], p, p, p, p, p))
            else:
                code.append('%sr:2 = %s;' % (p, re.sub(r'\b([abc])\b', lambda mm: p + mm.group(1), form)))
        code.append('i0v8 = (zext(hr) << 16) | zext(lr);')
        srcs = ', '.join('PK_%s' % SRC[i] for i in range(nsrc))
        pat = ' & '.join('PK_%s ...' % SRC[i] for i in range(nsrc))
        r(':%s i0v8, %s is e9=0x1a7 & vop3op=%d & i0v8 & v3opsel ; %s & j_omod ... { %s }'
          % (mn, srcs, 896 + op, pat, ' '.join(code)))
    f32 = {'v_pk_fma_f32': ('(a f* b) f+ c', 3), 'v_pk_mul_f32': ('a f* b', 2), 'v_pk_add_f32': ('a f+ b', 2),
           'v_pk_mov_b32': ('mov', 2)}
    for op, mn in sorted(p3.items()):
        if mn in f32:
            form, nsrc = f32[mn]
            code = []
            for i in range(nsrc):
                x = 'abc'[i]
                lo = '((v3opsel >> %d) & 1) * 32' % i
                hi = ('((j_omod >> %d) & 1) * 32' % i) if i < 2 else '((v3opsel >> 3) & 1) * 32'
                code.append('s%s:8 = PK64_%s; t%s:8 = s%s >> (%s); l%s:4 = t%s:4; t%s = s%s >> (%s); h%s:4 = t%s:4;'
                            % (x, SRC[i], x, x, lo, x, x, x, x, hi, x, x))
            if form == 'mov':
                code.append('lr:4 = la; hr:4 = hb;')
            else:
                for p in 'lh':
                    code.append('%sr:4 = %s;' % (p, re.sub(r'\b([abc])\b', lambda mm: p + mm.group(1), form)))
            code.append('i0vp = (zext(hr) << 32) | zext(lr);')
            srcs = ', '.join('PK64_%s' % SRC[i] for i in range(nsrc))
            pat = ' & '.join('PK64_%s ...' % SRC[i] for i in range(nsrc))
            r(':%s i0vp, %s is e9=0x1a7 & vop3op=%d & i0vp & v3opsel ; %s & j_omod ... { %s }'
              % (mn, srcs, 896 + op, pat, ' '.join(code)))
        elif re.match(r'v_(dot\d|fma_mix|mad_mix)', mn):
            r(':%s i0v8, PK_j0, PK_j9, PK_j18 is e9=0x1a7 & vop3op=%d & i0v8 ; PK_j0 ... & PK_j9 ... & PK_j18 ... '
              '{ i0v8 = %s(PK_j0, PK_j9, PK_j18); }' % (mn, 896 + op, uop(mn[2:])))
    # ---- AGPRs: accvgpr moves and MFMA
    w('define token cd0(32) cd_d = (0,7) cd_cbsz = (8,10) cd_abid = (11,14) cd_acc = (15,15) cd_op = (16,22) cd_e9 = (23,31);')
    w('define token cd1(32) cd_a = (0,7) cd_av = (8,8) cd_b = (9,16) cd_bv = (17,17) cd_c = (18,25) cd_cv = (26,26)'
      ' cd_acca = (27,27) cd_accb = (28,28) cd_blgp = (29,31) cd_cx = (18,26);')
    w('attach variables [ cd_d cd_a cd_c ] [ %s ];' % ' '.join('a%d' % i for i in range(256)))
    if 88 in p3 or 89 in p3:
        for s in range(256):
            w('AD0: "a%d" is i0v8=%d { export a%d; }' % (s, s, s))
            w('AJ0: "a%d" is j0_v=1 & j0_vg=%d { export a%d; }' % (s, s, s))
    if 88 in p3:
        r(':v_accvgpr_read_b32 i0v8, AJ0 is e9=0x1a7 & vop3op=%d & i0v8 ; AJ0 { i0v8 = AJ0; }' % (896 + 88))
    if 89 in p3:
        r(':v_accvgpr_write_b32 AD0, V32_j0 is (e9=0x1a7 & vop3op=%d & AD0 ; V32_j0 ...) { AD0 = V32_j0; }' % (896 + 89))
    if have('vop1', 'v_accvgpr_mov_b32'):
        r(':v_accvgpr_mov_b32 AD17, AS0 is e7=0x3f & vop1op=%d & AD17 & AS0 { AD17 = AS0; }' % opn('vop1', 'v_accvgpr_mov_b32'))
        for s in range(256):
            w('AD17: "a%d" is i17_vg=%d { export a%d; }' % (s, s, s))
            w('AS0: "a%d" is i0_v=1 & i0_vg=%d { export a%d; }' % (s, s, s))
    tabs = {}

    def table(name, field, n, file, extra=''):
        t = '%s%d' % (name, n)
        if t not in tabs:
            tabs[t] = ['%s: "%s" is %s%s=%d { export %s; }' % (t, rng(file[0], s, n), extra, field, s,
                                                             (at if file == 'a' else vt)(s, n))
                       for s in range(256 - n + 1)]
        return t
    for row in mf:
        op, mn = int(row[0]), row[1]
        d, a, b = int(row[2]), int(row[3]), int(row[4])
        sparse = mn.startswith('v_smfmac')
        for acc in (0, 1):
            dt = table('MDA' if acc else 'MDV', 'cd_d', d, 'a' if acc else 'v')
            ats = [table('MAV', 'cd_a', a, 'v', 'cd_acca=0 & cd_av=1 & '), table('MAA', 'cd_a', a, 'a', 'cd_acca=1 & cd_av=1 & ')]
            bts = [table('MBV', 'cd_b', b, 'v', 'cd_accb=0 & cd_bv=1 & '), table('MBA', 'cd_b', b, 'a', 'cd_accb=1 & cd_bv=1 & ')]
            if sparse:
                ct = table('MIX', 'cd_c', 1, 'v', 'cd_cv=1 & ')
            else:
                ct = table('MCA' if acc else 'MCV', 'cd_c', d, 'a' if acc else 'v', 'cd_cv=1 & ')
            for ta in ats:
                for tb in bts:
                    sem = ('%s = %s(%s, %s, %s, %s);' % (dt, uop(mn[2:]), ta, tb, dt, ct) if sparse else
                           '%s = %s(%s, %s, %s);' % (dt, uop(mn[2:]), ta, tb, ct))
                    r(':%s %s, %s, %s, %s is cd_e9=0x1a7 & cd_op=%d & cd_acc=%d & %s ; %s & %s & %s { %s }'
                      % (mn, dt, ta, tb, ct, op, acc, dt, ta, tb, ct, sem))
    # ---- global/flat atomics
    w('define token fa0(32) fa_off = (0,12) signed fa_offu = (0,11) fa_lds = (13,13) fa_seg = (14,15) fa_glc = (16,16) fa_slc = (17,17)'
      ' fa_op = (18,24) fa_e6 = (26,31);')
    w('define token fa1(32) fa_addr = (0,7) fa_data = (8,15) fa_saddr = (16,22) fa_saddrs = (16,22) fa_acc = (23,23) fa_vdst = (24,31);')
    s4 = SREGS
    w('attach variables [ fa_saddrs ] [ %s ];' % ' '.join(s4))
    glc, slc = ('sc0', 'nt') if cpu == 'gfx942' else ('glc', 'slc')
    w('FAO: is fa_off=0 { }')
    w('FAO: " offset:"^fa_off is fa_off { }')
    w('FAOU: is fa_offu=0 { }')
    w('FAOU: " offset:"^fa_offu is fa_offu { }')
    w('FAS: is fa_slc=0 { }')
    w('FAS: " %s" is fa_slc=1 { }' % slc)
    gt = {}

    def vtab(field, n):
        t = 'FV%d_%s' % (n, field)
        if t not in gt:
            gt[t] = ['%s: "%s" is %s=%d { export %s; }' % (t, rng('v', s, n), field, s, vt(s, n)) for s in range(256 - n + 1)]
        return t
    v1, v2 = vtab('fa_addr', 1), vtab('fa_addr', 2)
    sp = ['FSP: "s[%d:%d]" is fa_saddr=%d { export %s; }' % (s, s + 1, s, SPAIRS[s // 2]) for s in range(0, 102, 2)]
    w('GAA: is fa_off ; fa_saddr=0x7f & %s { a:8 = %s + fa_off; export a; }' % (v2, v2))
    w('GAA: is fa_off ; FSP & %s { a:8 = FSP + zext(%s) + fa_off; export a; }' % (v1, v1))
    w('GAV: %s is fa_off ; fa_saddr=0x7f & %s { }' % (v2, v2))
    w('GAV: %s is fa_off ; FSP & %s { }' % (v1, v1))
    w('GAS: "off" is fa_off ; fa_saddr=0x7f { }')
    w('GAS: FSP is fa_off ; FSP { }')
    w('FAA: is fa_offu ; %s { a:8 = %s + fa_offu; export a; }' % (v2, v2))
    w('FAV: %s is fa_offu ; %s { }' % (v2, v2))
    ints = {'swap': 'n', 'add': 'o + n', 'sub': 'o - n', 'and': 'o & n', 'or': 'o | n', 'xor': 'o ^ n',
            'smin': 'sel:s<', 'umin': 'sel:<', 'smax': 'sel:s>', 'umax': 'sel:>'}
    for seg in ('global', 'flat'):
        for mn, op in sorted(names.get(seg, {}).items(), key=lambda x: x[1]):
            mm = re.match(r'\w+_atomic_(\w+?)(_x2)?$', mn)
            if not mm:
                continue
            what, x2 = mm.group(1), bool(mm.group(2))
            fl = re.match(r'(add|min|max)_f(32|64)$', what)
            n = 2 if x2 or what.endswith('f64') else 1
            sz = 4 * n
            if what == 'cmpswap':
                calc = 'n:%d = DATA:%d; c:%d = DATA(%d); r:%d = o; if (o != c) goto <k>; r = n; <k>' % (sz, sz, sz, sz, sz)
                dn = 2 * n
            elif what in ints:
                f = ints[what]
                calc = ('n:%d = DATA; r:%d = o; if (o %s n) goto <k>; r = n; <k>' % (sz, sz, f[4:]) if f.startswith('sel:')
                        else 'n:%d = DATA; r:%d = %s;' % (sz, sz, f))
                dn = n
            elif what == 'inc':
                calc, dn = 'n:%d = DATA; r:%d = 0; if (o >= n) goto <k>; r = o + 1; <k>' % (sz, sz), n
            elif what == 'dec':
                calc, dn = 'n:%d = DATA; r:%d = n; if (o == 0 || o > n) goto <k>; r = o - 1; <k>' % (sz, sz), n
            elif fl and fl.group(1) == 'add':
                calc, dn = 'n:%d = DATA; r:%d = o f+ n;' % (sz, sz), n
            elif fl:
                cmpo = 'f<' if fl.group(1) == 'min' else 'f>'
                calc, dn = 'n:%d = DATA; r:%d = o; if (o %s n) goto <k>; r = n; <k>' % (sz, sz, cmpo), n
            else:
                calc, dn = 'r:%d = %s(o, DATA);' % (sz, uop('atomic_' + what)), n
            data = vtab('fa_data', dn)
            dst = vtab('fa_vdst', n)
            calc = calc.replace('DATA', data)
            A, AV = ('GAA', 'GAV') if seg == 'global' else ('FAA', 'FAV')
            AS = '^", "^GAS' if seg == 'global' else ''
            off = 'FAO' if seg == 'global' else 'FAOU'
            for ret in (0, 1):
                operands = (dst + ', ' if ret else '') + AV + ', ' + data
                disp = '%s %s%s^%s%s^FAS' % (mn, operands, AS, off, ('^" %s"' % glc) if ret else '')
                pat = '(fa_e6=0x37 & fa_seg=%d & fa_op=%d & fa_glc=%d & fa_lds=0 & %s & FAS ; %s%s) & %s & %s%s' % (
                    2 if seg == 'global' else 0, op, ret, off, data, (' & ' + dst) if ret else '', A, AV,
                    ' & GAS' if seg == 'global' else '')
                sem = 'o:%d = *:%d %s; %s *:%d %s = r;%s' % (sz, sz, A, calc, sz, A, (' %s = o;' % dst) if ret else '')
                r(':%s is %s { %s }' % (disp, pat, sem))
    for nm in sorted(ops):
        w('define pcodeop %s;' % nm)
    for t in sorted(tabs):
        o.extend(tabs[t])
    for t in sorted(gt):
        o.extend(gt[t])
    o.extend(sp)
    # tables must precede their uses: FSP/FV tables are referenced by GAA etc.
    defs = [l for l in o if l.startswith('define ') or l.startswith('attach ') or l.startswith('#')]
    tabsl = [l for l in o if (re.match(r'^(M\w+|FV\w+|FSP|PK\w+|AD17|AS0|AD0|AJ0):', l))]
    rest = [l for l in o if l not in defs and l not in tabsl]
    return '\n'.join(defs + tabsl + rest + [''] + rows) + '\n'


SREGS = []
SPAIRS = []
if __name__ == '__main__':
    t = open(sys.argv[1]).read()
    SREGS[:] = re.search(r'define register offset=0x0+ size=4 \[([^\]]*)\]', t).group(1).split()
    SPAIRS[:] = re.search(r'define register offset=0x0+ size=8 \[([^\]]*)\]', t).group(1).split()
    main()
