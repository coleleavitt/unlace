#!/usr/bin/env python3
"""Generate the C-SKY ABIv2 FPU and VDSP SLEIGH includes.

Usage: gen_csky_ext_sleigh.py <binutils>/opcodes/csky-opc.h <outdir>

Encodings (opcode values and operand fields of the FPUv2, FPUv3, VDSP, DSP
and DSP-enhance instructions) are read from the binutils C-SKY opcode table; no
text of that table is copied into the output. Semantics are written here.
Writes csky_fpuv2.sinc, csky_fpuv3.sinc, csky_vdsp.sinc, csky_dsp.sinc and
csky_edsp.sinc, included by csky.sinc.
"""
import os
import re
import sys

GROUPS = {
    'fpuv2': ('FLOAT_E1', 'FLOAT_1E2', 'FLOAT_1E3', 'FLOAT_3E4'),
    'fpuv3': ('FLOAT_7E60',),
    'vdsp': ('VDSP',),
    'dsp': ('DSP', 'DSP_1E2', 'DSPE60'),
    'edsp': ('DSP_ENHANCE',),
}
OPCLASS = {'fpuv2': (0x3d, 0x3e, 0x3f), 'fpuv3': (0x3d, 0x3e, 0x3f), 'vdsp': (0x3d, 0x3e, 0x3f),
           'dsp': (0x31,), 'edsp': (0x34, 0x35, 0x3a, 0x3e)}


def parse(path):
    src = open(path).read()
    v2 = src.index('csky_v2_opcodes[]')
    body = src[v2:src.index('\n  };', v2)]
    pos = [(m.start(), m.group(2)) for m in re.finditer(r'^\s{4}([A-Z][A-Z0-9_]*)\s*\("([^"]+)",', body, re.M)]
    out = []
    for k, (i, name) in enumerate(pos):
        seg = body[i:pos[k + 1][0] if k + 1 < len(pos) else len(body)]
        infos = list(re.finditer(r'S?OPCODE_INFO\w*\s*\((0x[0-9a-f]+)', seg))
        tags = []
        recs = []
        for j, x in enumerate(infos):
            s = seg[x.start():infos[j + 1].start() if j + 1 < len(infos) else len(seg)]
            ops = []
            for a, b, c, d, e, f in re.findall(r'\(\s*(\w+),\s*(\w+),\s*OPRND_SHIFT_(\d)_BIT\s*\)|OPRND_SHIFT(\d)\s*\(\s*(\w+),\s*(\w+)\s*\)', s):
                ops.append((a, b, int(c)) if a else (e, f, int(d)))
            t = re.findall(r'CSKY(?:V2)?_ISA_(\w+)', s)
            recs.append(dict(name=name, op=int(x.group(1), 16), ops=ops, tags=t, bracket='BRACKET_OPRND' in s, first=(j == 0)))
        # an info without a tag takes the next tag of its entry
        for j, r in enumerate(recs):
            if not r['tags']:
                for q in recs[j + 1:]:
                    if q['tags']:
                        r['tags'] = q['tags']
                        break
        out += recs
    return out


def bits(spec):
    """'4_7or21_24' -> [(4, 7), (21, 24)]; '25' -> [(25, 25)]."""
    out = []
    for p in spec.split('or'):
        m = re.fullmatch(r'(\d+)(?:_(\d+))?', p)
        if not m:
            return None
        lo = int(m.group(1))
        out.append((lo, int(m.group(2)) if m.group(2) else lo))
    return out


class Gen:
    def __init__(self, g):
        self.g = g
        self.fields = set()
        self.subs = []
        self.subnames = set()
        self.ops = set()
        self.cons = []
        self.keys = set()
        self.signed = set()

    def fld(self, lo, hi, signed=False):
        """A field of the 32-bit instruction: lives in the first (high) or second halfword."""
        assert (lo < 16) == (hi < 16)
        sfx = 's' if signed else ''
        if lo >= 16:
            nm = '%sa_%d_%d%s' % (self.g, lo, hi, sfx)
            self.fields.add(('a', nm, lo - 16, hi - 16))
        else:
            nm = '%sb_%d_%d%s' % (self.g, lo, hi, sfx)
            self.fields.add(('b', nm, lo, hi))
        if signed:
            self.signed.add(nm)
        return nm

    def regfield(self, lo, hi, kind):
        nm = '%s_%s_%d_%d' % (self.g, kind, lo, hi)
        half = 'a' if lo >= 16 else 'b'
        self.fields.add((half, nm, lo - (16 if lo >= 16 else 0), hi - (16 if lo >= 16 else 0)))
        self.attach = getattr(self, 'attach', {})
        self.attach[nm] = kind
        return nm

    def sub(self, name, lines):
        if name not in self.subnames:
            self.subnames.add(name)
            self.subs += lines
        return name

    def pcode(self, name):
        self.ops.add(name)
        return name


def regname(kind, i):
    return {'r': 'r%d', 'fr': 'fr%d', 'vr': 'vr%d'}[kind] % i


def operand(G, spec, typ, shift, mnem):
    """Return (display, pattern pieces (a, b), semantics kind, value expr, size)."""
    b = bits(spec)
    if typ in ('AREG', 'AREG_WITH_BRACKET') and b and len(b) == 1:
        lo, hi = b[0]
        f = G.regfield(lo, hi, 'r')
        disp = '"("^%s^")"' % f if typ == 'AREG_WITH_BRACKET' else f
        return dict(disp=disp, pat=[f], kind='areg', val=f, half='a' if lo >= 16 else 'b')
    if typ in ('FREG', 'VREG') and b and len(b) == 1:
        lo, hi = b[0]
        f = G.regfield(lo, hi, 'fr' if typ == 'FREG' else 'vr')
        return dict(disp=f, pat=[f], kind='freg' if typ == 'FREG' else 'vreg', val=f, half='a' if lo >= 16 else 'b')
    if typ == 'FREG' and b and len(b) == 2:
        (l0, h0), (l1, h1) = b
        f0, f1 = G.fld(l0, h0), G.fld(l1, h1)
        nm = '%s_frc_%d_%d_%d' % (G.g, l0, h0, l1)
        w0 = h0 - l0 + 1
        lines = []
        for i in range(32):
            v0, v1 = i & ((1 << w0) - 1), i >> w0
            if (l0 >= 16) == (l1 >= 16):
                pat = '%s=%d & %s=%d' % (f0, v0, f1, v1)
            elif l1 >= 16:
                pat = '%s=%d; %s=%d' % (f1, v1, f0, v0)
            else:
                pat = '%s=%d; %s=%d' % (f0, v0, f1, v1)
            lines.append('%s: "%s" is %s { export fr%d; }' % (nm, regname('fr', i), pat, i))
        G.sub(nm, lines)
        return dict(disp=nm, pat=['(%s & %s)' % (f0, f1) if (l0 >= 16) == (l1 >= 16) else None, nm], kind='freg', val=nm, span=True)
    if typ == 'VREG_WITH_INDEX' and b and len(b) == 2:
        (l0, h0), (l1, h1) = b
        r = G.regfield(l0, h0, 'vr')
        ix = G.fld(l1, h1)
        return dict(disp='%s^"["^%s^"]"' % (r, ix), pat=[r, ix], kind='vidx', val=r, idx=ix)
    if typ in ('IMM_FLDST', 'FCONSTANT') and b and len(b) == 2:
        (l0, h0), (l1, h1) = b
        lo4, hi4 = G.fld(l0, h0), G.fld(l1, h1)
        nm = '%s_%s_%d' % (G.g, typ.lower(), shift)
        if typ == 'IMM_FLDST':
            G.sub(nm, ['%s: v is %s; %s [ v = ((%s << 4) | %s) << %d; ] { export *[const]:4 v; }' % (nm, hi4, lo4, hi4, lo4, shift)])
        else:
            G.sub(nm, ['%s: "[pc, "^v^"]" is %s; %s [ v = ((%s << 4) | %s) << %d; ] { local a:4 = (inst_start + v) & 0xfffffffc; export a; }' % (nm, hi4, lo4, hi4, lo4, shift)])
        return dict(disp=nm, pat=[nm], kind='imm' if typ == 'IMM_FLDST' else 'lit', val=nm, span=True)
    if typ == 'AREG_WITH_LSHIFT_FPU' and b and len(b) == 2:
        (l0, h0), (l1, h1) = b
        sh = G.fld(l0, h0)
        r = G.regfield(l1, h1, 'r')
        return dict(disp='%s^" << "^%s' % (r, sh), pat=[r, sh], kind='rsh', val='(%s << %s)' % (r, sh))
    if typ == 'FREGLIST_DASH' and b and len(b) == 2:
        (l0, h0), (l1, h1) = b
        first = G.fld(l0, h0)
        cnt = G.fld(l1, h1)
        return dict(disp=None, pat=[first, cnt], kind='flist', first=(l0, h0), cnt=(l1, h1), ff=first, cf=cnt)
    if typ == 'IMM5b_VSH' and b and len(b) == 2:
        (l0, h0), (l1, h1) = b
        top, low = G.fld(l0, h0), G.fld(l1, h1)
        nm = '%s_vsh' % G.g
        G.sub(nm, ['%s: v is %s; %s [ v = (%s << 4) | %s; ] { export *[const]:4 v; }' % (nm, low, top, top, low)])
        return dict(disp=nm, pat=[nm], kind='imm', val=nm, span=True)
    if typ in ('SFLOAT_FMOVI', 'DFLOAT_FMOVI', 'HFLOAT_FMOVI'):
        # sign bit 5; fraction bit 25, bits 24-20, bits 9-8; exponent 11 - bits 19-16
        s, f89 = G.fld(5, 5), G.fld(8, 9)
        e4, f20, f25 = G.fld(16, 19), G.fld(20, 24), G.fld(25, 25)
        w, ebias, fsh = {'SFLOAT_FMOVI': (32, 127, 15), 'DFLOAT_FMOVI': (64, 1023, 44), 'HFLOAT_FMOVI': (16, 15, 2)}[typ]
        nm = '%s_fmovi_%d' % (G.g, w)
        G.sub(nm, ['%s: v is %s & %s & %s; %s & %s [ v = (%s << %d) | ((11 - %s + %d) << %d) | (((%s << 7) | (%s << 2) | %s) << %d); ] { export *[const]:%d v; }' % (
            nm, e4, f20, f25, s, f89, s, w - 1, e4, ebias, w - (w // 32 * 0) - {32: 9, 64: 12, 16: 6}[w], f25, f20, f89, fsh, w // 8)])
        return dict(disp=nm, pat=[nm], kind='fimm', val=nm, span=True, width=w)
    if typ in ('OIMM4b', 'OIMM5b') and b and len(b) == 1:
        f = G.fld(*b[0])
        nm = '%s_o%s' % (G.g, f)
        G.sub(nm, ['%s: v is %s [ v = %s + 1; ] { export *[const]:4 v; }' % (nm, f, f)])
        return dict(disp=nm, pat=[nm], kind='imm', val=nm, half='a' if b[0][0] >= 16 else 'b')
    if typ in ('IMM1b', 'IMM2b', 'IMM5b') and b and len(b) == 1 or (typ == 'IMM4b' and G.g in ('dsp', 'edsp') and b and len(b) == 1):
        f = G.fld(*b[0])
        nm = '%s_i%s' % (G.g, f)
        G.sub(nm, ['%s: %s is %s { export *[const]:4 %s; }' % (nm, f, f, f)])
        return dict(disp=nm, pat=[nm], kind='imm', val=nm, half='a' if b[0][0] >= 16 else 'b')
    if typ == 'BLOOP_OFF12b' and b and len(b) == 1:
        # loop start, backwards from the bloop that closes the loop
        f = G.fld(*b[0], signed=True)
        nm = '%s_bloop12' % G.g
        G.sub(nm, ['%s: dest is %s [ dest = inst_start + (%s << 1); ] { export *:4 dest; }' % (nm, f, f)])
        return dict(disp=nm, pat=[nm], kind='imm', val=nm, half='b')
    if typ == 'BLOOP_OFF4b' and b and len(b) == 1:
        # last instruction of the loop body (or the bloop itself)
        f = G.fld(*b[0], signed=True)
        nm = '%s_bloop4' % G.g
        G.sub(nm, ['%s: dest is %s [ dest = inst_start + (%s << 1); ] { export *[const]:4 dest; }' % (nm, f, f)])
        return dict(disp=nm, pat=[nm], kind='imm', val=nm, half='b')
    if typ in ('IMM4b', 'IMM9b', 'SFLOAT', 'DFLOAT') and b:
        if len(b) == 1:
            f = G.fld(*b[0])
            return dict(disp=f, pat=[f], kind='imm', val=f)
        fs = [G.fld(l, h) for l, h in b]
        nm = '%s_imm_%s' % (G.g, spec)
        expr, sh = [], 0
        for (l, h), f in zip(b, fs):
            expr.append('(%s << %d)' % (f, sh))
            sh += h - l + 1
        G.sub(nm, ['%s: v is %s [ v = %s; ] { export *[const]:4 v; }' % (nm, ' & '.join(fs) if all(l >= 16 for l, h in b) or all(l < 16 for l, h in b) else '; '.join([' & '.join(f for (l, h), f in zip(b, fs) if l >= 16), ' & '.join(f for (l, h), f in zip(b, fs) if l < 16)]), ' | '.join(expr))])
        return dict(disp=nm, pat=[nm], kind='imm', val=nm, span=any(l >= 16 for l, h in b) and any(l < 16 for l, h in b))
    return None


SZ = {'s': 4, 'd': 8, 'h': 2, 'm': 'm', '32': 4, '64': 8, '16': 2, 'f32': 'm'}


def size_of(n):
    m = re.search(r'\.(16|32|64|f32)$', n)
    if m:
        return SZ[m.group(1)]
    m = re.fullmatch(r'f(?:add|sub|mov|abs|neg|mul|nmul|mac|msc|nmac|nmsc|div|recip|sqrt|ld|st|ldr|str|ldm|stm|lrw|movi)([sdmh])', n)
    if m:
        return SZ[m.group(1)]
    m = re.fullmatch(r'fcmp(?:z?(?:hs|ls|lt|ne|uo))([sdh])', n)
    if m:
        return SZ[m.group(1)]
    return None


def fop(n):
    """Base operation of an FPU mnemonic (fpuv2 and fpuv3 spellings)."""
    b = re.sub(r'\.(16|32|64|f32)$', '', n)
    if b == n:
        m = re.fullmatch(r'f(add|sub|mov|abs|neg|mul|nmul|mac|msc|nmac|nmsc|div|recip|sqrt)[sdmh]', n)
        if m:
            b = 'f' + m.group(1)
        m = re.fullmatch(r'(fcmpz?(?:hs|ls|lt|ne|uo))[sdh]', n)
        if m:
            b = m.group(1)
    alias = {'fmula': 'fmac', 'fmuls': 'fnmac', 'fnmula': 'fnmsc', 'fnmuls': 'fmsc'}
    return alias.get(b, b)


def float_sem(G, n, ops, names):
    sz = size_of(n)
    b = fop(n)
    z, x, y = (names + [None] * 3)[:3]
    if sz == 'm' or sz == 2 or sz is None:
        return None
    t = 'local a:%d = %s:%d; ' % (sz, x, sz) if x else ''
    if b in ('fadd', 'fsub', 'fmul', 'fdiv', 'fnmul'):
        e = {'fadd': 'a f+ c', 'fsub': 'a f- c', 'fmul': 'a f* c', 'fdiv': 'a f/ c', 'fnmul': 'f- (a f* c)'}[b]
        return t + 'local c:%d = %s:%d; %s = zext(%s);' % (sz, y, sz, z, e) if sz == 4 else t + 'local c:8 = %s; %s = %s;' % (y, z, e)
    if b in ('fmac', 'fnmac', 'fmsc', 'fnmsc') or re.fullmatch(r'ff(n?)mul([as])', b or ''):
        m = re.fullmatch(r'ff(n?)mul([as])', b or '')
        if m:
            b = {('', 'a'): 'fmac', ('', 's'): 'fnmac', ('n', 'a'): 'fnmsc', ('n', 's'): 'fmsc'}[(m.group(1), m.group(2))]
        e = {'fmac': 'd f+ (a f* c)', 'fnmac': 'd f- (a f* c)', 'fmsc': '(a f* c) f- d', 'fnmsc': 'f- (d f+ (a f* c))'}[b]
        return t + 'local c:%d = %s:%d; local d:%d = %s:%d; %s = %s;' % (sz, y, sz, sz, z, sz, z, 'zext(%s)' % e if sz == 4 else e)
    if b in ('fmov', 'fabs', 'fneg', 'fsqrt', 'frecip'):
        e = {'fmov': 'a', 'fabs': 'abs(a)', 'fneg': 'f- a', 'fsqrt': 'sqrt(a)', 'frecip': 'int2float(1:4) f/ a' if sz == 4 else 'int2float(1:8) f/ a'}[b]
        return t + '%s = %s;' % (z, 'zext(%s)' % e if sz == 4 else e)
    m = re.fullmatch(r'fcmp(z?)(hs|ls|lt|ne|uo|h)(z?)', b)
    if m:
        zero = m.group(1) or m.group(3)
        o = m.group(2)
        a = 'local a:%d = %s:%d; ' % (sz, names[0], sz)
        c = 'local c:%d = int2float(0:4);' % sz if zero else 'local c:%d = %s:%d;' % (sz, names[1], sz)
        e = {'hs': 'a f>= c', 'lt': 'a f< c', 'ne': 'a f!= c', 'uo': 'nan(a) || nan(c)', 'ls': 'a f<= c', 'h': 'a f> c'}[o]
        if zero and o == 'ls' and not m.group(3):
            e = 'a f< c'
        return a + c + ' C = %s;' % e
    return None


def conv_int(s, x, z, rnd):
    if rnd == 'trunc':
        return 'local a:%d = %s:%d; local i:4 = trunc(a); %s = zext(i);' % (s, x, s, z)
    return 'local a:%d = %s:%d; local r:%d = %s(a); local i:4 = trunc(r); %s = zext(i);' % (s, x, s, s, rnd, z)


def conv_sem(n, names):
    z, x = names[0], names[1] if len(names) > 1 else None
    rnd = {'rn': 'round', 'rz': 'trunc', 'rpi': 'ceil', 'rni': 'floor'}
    m = re.fullmatch(r'f([sd])to([su])i\.(rn|rz|rpi|rni)', n) or None
    if m:
        s = 4 if m.group(1) == 's' else 8
        return conv_int(s, x, z, rnd[m.group(3)])
    m = re.fullmatch(r'fftoi\.f(32|64)\.([su])32\.(rn|rz|rpi|rni)', n)
    if m:
        s = int(m.group(1)) // 8
        return conv_int(s, x, z, rnd[m.group(3)])
    m = re.fullmatch(r'f([su])ito([sd])', n) or re.fullmatch(r'fitof\.([su])32\.f(32|64)', n)
    if m:
        s = 4 if m.group(2) in ('s', '32') else 8
        if m.group(1) == 's':
            return 'local i:4 = %s:4; local r:%d = int2float(i); %s = %s;' % (x, s, z, 'zext(r)' if s == 4 else 'r')
        return 'local i:8 = zext(%s:4); local r:%d = int2float(i); %s = %s;' % (x, s, z, 'zext(r)' if s == 4 else 'r')
    if n in ('fdtos', 'fdtos.f64'):
        return 'local a:8 = %s; local r:4 = float2float(a); %s = zext(r);' % (x, z)
    if n == 'fstod':
        return 'local a:4 = %s:4; %s = float2float(a);' % (x, z)
    m = re.fullmatch(r'fftofi\.f(32|64)\.(rn|rz|rpi|rni)', n)
    if m:
        s = int(m.group(1)) // 8
        return 'local a:%d = %s:%d; local r:%d = %s(a); %s = %s;' % (s, x, s, s, rnd[m.group(2)], z, 'zext(r)' if s == 4 else 'r')
    return None


def move_sem(n, names, kinds):
    if n in ('fmfvrl', 'fmfvr.32.1'):
        return '%s = %s:4;' % (names[0], names[1])
    if n == 'fmfvrh':
        return '%s = %s(4);' % (names[0], names[1])
    if n in ('fmtvrl', 'fmtvr.32.1'):
        return '%s = (%s & 0xffffffff00000000) | zext(%s);' % (names[0], names[0], names[1])
    if n == 'fmtvrh':
        return '%s = (%s & 0xffffffff) | (zext(%s) << 32);' % (names[0], names[0], names[1])
    if n == 'fmfvr.64' and len(names) == 3:
        return '%s = %s:4; %s = %s(4);' % (names[0], names[2], names[1], names[2])
    if n == 'fmtvr.64' and len(names) == 3:
        return '%s = (zext(%s) << 32) | zext(%s);' % (names[0], names[2], names[1])
    if n == 'vmov':
        return '%s = %s;' % (names[0], names[1])
    return None


def mem_sem(n, ops, names, kinds):
    """Loads and stores of the FPU and VDSP: (address expression, size, is_store, register)."""
    m = re.fullmatch(r'f(ld|st)(r?)(?:([sdmh])|\.(16|32|64)|(16))', n) or re.fullmatch(r'v(ld|st)(r?)([dq])\.(?:8|16|32)', n)
    if not m:
        return None
    isst = m.group(1) == 'st'
    if n.startswith('v'):
        sz = 8 if m.group(3) == 'd' else 16
    else:
        k = m.group(3) or m.group(4) or m.group(5)
        sz = {'s': 4, 'd': 8, 'm': 8, 'h': 2, '16': 2, '32': 4, '64': 8}[k]
    reg = names[0]
    base = names[1]
    off = names[2]
    addr = '%s + %s' % (base, off)
    val = reg if sz >= 8 else '%s:%d' % (reg, sz)
    if isst:
        return 'local ea:4 = %s; *:%d ea = %s;' % (addr, sz, val)
    if sz == 16 or (sz == 8 and not reg.startswith('%s_vr' % '')):
        rhs = '*:%d ea' % sz
    if sz in (2, 4):
        return 'local ea:4 = %s; %s = zext(*:%d ea);' % (addr, reg, sz)
    return 'local ea:4 = %s; %s = *:%d ea;' % (addr, reg, sz)


def dsp_sem(n, names, kinds):
    """p-code for the DSP and DSP-enhance instructions that have plain integer meaning."""
    acc = 'local acc:8 = (zext(hi) << 32) | zext(lo); '
    put = ' lo = acc:4; hi = acc(4);'
    if len(names) == 2 and kinds == ['areg', 'areg']:
        x, y = names
        m = re.fullmatch(r'mul([us])(a|s)?', n)
        if m:
            ext = 'zext' if m.group(1) == 'u' else 'sext'
            prod = '%s(%s) * %s(%s)' % (ext, x, ext, y)
            if not m.group(2):
                return 'local p:8 = %s; lo = p:4; hi = p(4);' % prod
            return acc + 'acc = acc %s %s;' % ('+' if m.group(2) == 'a' else '-', prod) + put
        m = re.fullmatch(r'mulsh([as])', n)
        if m:
            return 'local p:4 = sext(%s:2) * sext(%s:2); ' % (x, y) + acc + 'acc = acc %s sext(p);' % ('+' if m.group(1) == 'a' else '-') + put
    if n == 'bloop':
        # bloop closes the loop: the body runs again while the decremented count is nonzero
        rx, start = names[0], names[1]
        return '%s = %s - 1; if (%s != 0) goto %s;' % (rx, rx, rx, start)
    if n in ('mfhi', 'mflo'):
        return '%s = %s;' % (names[0], n[2:])
    if n in ('mthi', 'mtlo'):
        return '%s = %s;' % (n[2:], names[0])
    m = re.fullmatch(r'(max|min)\.([us])32', n)
    if m:
        z, x, y = names
        op = ('s' if m.group(2) == 's' else '') + ('>' if m.group(1) == 'max' else '<')
        return '%s = %s; if (%s %s %s) goto <keep>; %s = %s; <keep>' % (z, x, x, op, y, z, y)
    m = re.fullmatch(r'(ld|st)bi(r?)\.(b|h|w|bs|hs)', n)
    if m:
        sz = {'b': 1, 'h': 2, 'w': 4, 'bs': 1, 'hs': 2}[m.group(3)]
        z, base = names[0], names[1]
        step = names[2] if m.group(2) else str(sz)
        if m.group(1) == 'st':
            val = z if sz == 4 else '%s:%d' % (z, sz)
            return 'local a:4 = %s; *:%d a = %s; %s = a + %s;' % (base, sz, val, base, step)
        ext = '' if sz == 4 else ('sext' if m.group(3).endswith('s') else 'zext')
        load = '*:%d a' % sz if sz == 4 else '%s(*:%d a)' % (ext, sz)
        return 'local a:4 = %s; local v:4 = %s; %s = a + %s; %s = v;' % (base, load, base, step, z)
    return None


def main():
    recs = parse(sys.argv[1])
    outdir = sys.argv[2]
    for g, tags in GROUPS.items():
        G = Gen(g)
        seen = set()
        lists = []
        for r in recs:
            if not any(t in tags for t in r['tags']):
                continue
            n = r['name']
            if r['op'] >> 26 not in OPCLASS[g]:
                continue
            if g in ('dsp', 'edsp') and not r['first']:
                continue
            ops = [o for o in r['ops'] if o[1] != 'type']
            if any(bits(spec) is None for spec, typ, sh in ops):
                continue
            opbits = 0
            for spec, typ, sh in ops:
                for lo, hi in bits(spec):
                    opbits |= ((1 << (hi - lo + 1)) - 1) << lo
            fixed = 0xffffffff & ~opbits
            key = (r['op'] & fixed, fixed)
            if key in seen:
                continue
            descr = [operand(G, spec, typ, sh, n) for spec, typ, sh in ops]
            if any(d is None for d in descr):
                continue
            seen.add(key)
            G.cons.append((n, r['op'], fixed, descr, r['bracket']))
        emit(G, outdir)


def runs(mask, lo, hi):
    out = []
    b = lo
    while b <= hi:
        if mask >> b & 1:
            s = b
            while b <= hi and mask >> b & 1:
                b += 1
            out.append((s, b - 1))
        else:
            b += 1
    return out


def emit(G, outdir):
    g = G.g
    body = []
    for n, op, fixed, descr, bracket in G.cons:
        ca, cb = [], []
        for lo, hi in runs(fixed, 16, 31):
            ca.append('%s=0x%x' % (G.fld(lo, hi), (op >> lo) & ((1 << (hi - lo + 1)) - 1)))
        for lo, hi in runs(fixed, 0, 15):
            cb.append('%s=0x%x' % (G.fld(lo, hi), (op >> lo) & ((1 << (hi - lo + 1)) - 1)))
        names, kinds, disp, extra_a, extra_b, spans = [], [], [], [], [], []
        pre = ''
        for d in descr:
            k = d['kind']
            kinds.append(k)
            if k == 'flist':
                # register list: first register + count, unrolled per count
                (l0, h0), (l1, h1) = d['first'], d['cnt']
                nm = '%s_flist_%d_%d_%d_%d' % (g, l0, h0, l1, h1)
                if nm not in G.subnames:
                    lines = []
                    w0 = h0 - l0 + 1
                    for first in range(1 << w0):
                        for c in range(1 << (h1 - l1 + 1)):
                            regs = ['fr%d' % (first + i) for i in range(c + 1)]
                            pat = '%s=%d & %s=%d' % (d['ff'], first, d['cf'], c) if (l0 >= 16) == (l1 >= 16) else None
                            if pat is None:
                                fa, fb = (d['cf'], d['ff']) if l1 >= 16 else (d['ff'], d['cf'])
                                va, vb = (c, first) if l1 >= 16 else (first, c)
                                pat = '%s=%d; %s=%d' % (fa, va, fb, vb)
                            lines.append('%s: "%s-%s" is %s { export %d:4; }' % (nm, regs[0], regs[-1], pat, c + 1))
                    G.sub(nm, lines)
                    G.flists = getattr(G, 'flists', {})
                    G.flists[nm] = (l0, h0, l1, h1, d['ff'], d['cf'])
                names.append(nm)
                disp.append(nm)
                spans.append(nm)
                continue
            if d.get('span'):
                spans.append(d['pat'][-1])
            else:
                for p in d['pat']:
                    if p is None:
                        continue
                    half = d.get('half') or ('a' if any(f[1] == p and f[0] == 'a' for f in G.fields) else 'b')
                    (extra_a if half == 'a' else extra_b).append(p)
            names.append(d['val'])
            disp.append(d['disp'])
        # display: bracketed memory operands
        if bracket and len(disp) >= 3:
            dtxt = '%s, "("^%s^", "^%s^")"' % (disp[0], disp[1], disp[2])
        else:
            dtxt = ', '.join(disp)
        sem = None
        if n.startswith('f'):
            sem = mem_sem(n, None, names, kinds) or move_sem(n, names, kinds) or conv_sem(n, names) or float_sem(G, n, None, names)
            if sem is None and kinds and kinds[0] == 'lit':
                pass
            fl = [x for x in names if x and '_flist_' in x]
            if sem is None and fl and re.fullmatch(r'f(ld|st)m(u?)(\.(16|32|64)|[sdmh])', n):
                sem = flist_sem(G, n, names)
            if sem is None and re.fullmatch(r'flrw(s|d|\.32|\.64)', n):
                sz = 8 if n[-1] in 'd4' else 4
                sem = '%s = %s;' % (names[0], 'zext(*:4 %s)' % names[1] if sz == 4 else '*:8 %s' % names[1])
            if sem is None and 'fimm' in kinds:
                w = [d for d in descr if d['kind'] == 'fimm'][0]['width']
                sem = '%s = %s;' % (names[0], names[kinds.index('fimm')] if w == 64 else 'zext(%s)' % names[kinds.index('fimm')])
            if sem is None and n.startswith('fsel'):
                sem = '%s = %s; if (C) goto <keep>; %s = %s; <keep>' % (names[0], names[1], names[0], names[2])
        elif g in ('dsp', 'edsp'):
            sem = dsp_sem(n, names, kinds)
        else:
            sem = mem_sem(n, None, names, kinds) or move_sem(n, names, kinds)
        if sem is None:
            srcs = [x for x, k in zip(names, kinds) if k in ('freg', 'vreg', 'areg', 'imm', 'vidx', 'rsh', 'lit')]
            uop = G.pcode(re.sub(r'\W', '_', n))
            if n.startswith('fcmp') or n.startswith('fst') or n.startswith('vst'):
                sem = '%s(%s);' % (uop, ', '.join(srcs))
            elif kinds and kinds[0] in ('freg', 'vreg', 'areg'):
                ins = srcs if g in ('dsp', 'edsp') and re.search(r'mula|muls|mulac|mulsc|psabsaa|^mulca|sel$|^dext|^pkg$', n) else srcs[1:]
                sem = '%s = %s(%s);' % (names[0], uop, ', '.join(ins))
            else:
                sem = '%s(%s);' % (uop, ', '.join(srcs))
        a_part = ' & '.join(ca + extra_a) or None
        b_part = ' & '.join(cb + extra_b) or None
        pat = '(%s; %s)' % (a_part or '%s' % G.fld(16, 31), b_part or G.fld(0, 15))
        if spans:
            pat += ''.join(' & %s' % s for s in spans)
        body.append(':%s %s is %s { %s }' % (n, dtxt, pat, sem))
    lines = ['# C-SKY ABIv2 %s instructions.' % {'fpuv2': 'FPUv2', 'fpuv3': 'FPUv3', 'vdsp': 'VDSP (v1)', 'dsp': 'DSP (CK807/CK810 hi:lo multiplies)', 'edsp': 'DSP-enhance (CK804/CK805)'}[g],
             '# Generated by tools/gen_csky_ext_sleigh.py; edit the generator, not this file.', '']
    for half in ('a', 'b'):
        fs = sorted(f for f in G.fields if f[0] == half)
        lines.append('define token %s%s(16)' % (g, half))
        for _, nm, lo, hi in fs:
            lines.append('\t%s = (%d,%d)%s' % (nm, lo, hi, ' signed' if nm in G.signed else ''))
        lines.append(';')
    att = getattr(G, 'attach', {})
    for kind in ('r', 'fr', 'vr'):
        fs = sorted(nm for nm, k in att.items() if k == kind)
        if not fs:
            continue
        n = {'r': 32, 'fr': 32, 'vr': 16}[kind]
        for nm in fs:
            f = [x for x in G.fields if x[1] == nm][0]
            w = f[3] - f[2] + 1
            regs = [regname(kind, i) for i in range(1 << w)]
            if kind == 'vr' and w > 4:
                regs = regs[:16] + ['_'] * 16
            lines.append('attach variables [ %s ] [ %s ];' % (nm, ' '.join(regs)))
    lines.append('')
    for o in sorted(G.ops):
        lines.append('define pcodeop %s;' % o)
    lines.append('')
    lines += G.subs
    lines.append('')
    lines += body
    open(os.path.join(outdir, 'csky_%s.sinc' % g), 'w').write('\n'.join(lines) + '\n')


def flist_sem(G, n, names):
    nm = [x for x in names if '_flist_' in x][0]
    base = names[1]
    k = re.search(r'\.(16|32|64)$|([sdmh])$', n)
    sz = {'16': 2, '32': 4, '64': 8, 's': 4, 'd': 8, 'm': 8, 'h': 2}[k.group(1) or k.group(2)]
    isst = n.startswith('fst')
    upd = 'mu' in n
    l0, h0, l1, h1, ff, cf = G.flists[nm]
    # the list count is the operand's export; registers are unrolled by the list subtable
    op = G.pcode(re.sub(r'\W', '_', n))
    return '%s(%s, %s);' % (op, base, nm) if not upd else '%s = %s(%s, %s);' % (base, op, base, nm)


main()