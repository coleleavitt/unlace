#!/usr/bin/env python3
"""Generate the TILE-Gx SLEIGH module.

Encodings (per-pipe fixed-bit masks and operand layouts) are read from the
binutils TILE-Gx opcode table given on the command line; no text of that
table is copied into the output.  Semantics are written here, following the
TILE-Gx Instruction Set Architecture reference (Tilera UG401).
"""
import re
import sys

MODE = 3 << 62

def parse(path):
    src = open(path).read()
    body = src[src.index('tilegx_opcodes['):]
    body = body[:body.index('\n};')]
    pat = re.compile(r'\{\s*"([^"]+)",\s*(\w+),\s*(0x[0-9a-f]+|\d+),\s*(\d+),\s*(\w+),\s*(\d+),\s*\{([^\n]*)\},\s*#ifndef DISASM_ONLY\s*\{([^}]*)\},\s*\{([^}]*)\}')
    out = []
    for m in pat.finditer(body):
        ops = [[int(x) for x in g.split(',') if x.strip()] for g in re.findall(r'\{([^}]*)\}', m.group(7))]
        def nums(s):
            r = []
            for x in s.split(','):
                x = x.strip()
                if not x:
                    continue
                r.append(-1 if x == '-1ULL' else int(x.replace('ULL', ''), 16 if x.startswith('0x') else 10))
            return r
        out.append(dict(name=m.group(1), pipes=int(m.group(3), 0), ops=ops, mask=nums(m.group(8)), val=nums(m.group(9))))
    return out

PIPES = ['X0', 'X1', 'Y0', 'Y1', 'Y2']
SLOT = {'X0': '0', 'X1': '1', 'Y0': '0', 'Y1': '1', 'Y2': '2'}

# operand index -> (kind, display/read name, write name)
OPER = {
    0: ('imm', 'i8X0'), 1: ('imm', 'i8X1'), 2: ('imm', 'i8Y0'), 3: ('imm', 'i8Y1'),
    4: ('imm', 'i16X0'), 5: ('imm', 'i16X1'),
    6: ('dst', 'dX1'), 7: ('src', 'sAX1'), 8: ('dst', 'dX0'), 9: ('src', 'sAX0'),
    10: ('dst', 'dY0'), 11: ('src', 'sAY0'), 12: ('dst', 'dY1'), 13: ('src', 'sAY1'),
    14: ('src', 'sAY2'), 15: ('srcdst', 'aX1'), 16: ('src', 'sBX0'), 17: ('src', 'sBX1'),
    18: ('src', 'sBY0'), 19: ('src', 'sBY1'), 20: ('br', 'brX1'), 21: ('imm', 'bfsX0'),
    22: ('imm', 'bfeX0'), 23: ('srcdst', 'dX0'), 24: ('srcdst', 'dY0'), 25: ('jmp', 'jX1'),
    26: ('dst', 'bdY2'), 27: ('imm', 'mfX1'), 28: ('imm', 'mtX1'), 29: ('imm', 'shX0'),
    30: ('imm', 'shX1'), 31: ('imm', 'shY0'), 32: ('imm', 'shY1'), 33: ('src', 'sBDY2'),
    34: ('imm', 'di8X1'),
}

PCODEOP = set()

def op(name, *args):
    PCODEOP.add(name)
    return '%s(%s)' % (name, ', '.join(args))

ALU = {
    'add': '{T} = {1} + {2};', 'addi': '{T} = {1} + {2};', 'addli': '{T} = {1} + {2};',
    'addx': '{T} = sext({1}:4 + {2}:4);', 'addxi': '{T} = sext({1}:4 + {2}:4);',
    'addxli': '{T} = sext({1}:4 + {2}:4);',
    'and': '{T} = {1} & {2};', 'andi': '{T} = {1} & {2};',
    'or': '{T} = {1} | {2};', 'ori': '{T} = {1} | {2};',
    'xor': '{T} = {1} ^ {2};', 'xori': '{T} = {1} ^ {2};',
    'nor': '{T} = ~({1} | {2});',
    'sub': '{T} = {1} - {2};', 'subx': '{T} = sext({1}:4 - {2}:4);',
    'cmpeq': '{T} = zext({1} == {2});', 'cmpeqi': '{T} = zext({1} == {2});',
    'cmpne': '{T} = zext({1} != {2});',
    'cmples': '{T} = zext({1} s<= {2});', 'cmpleu': '{T} = zext({1} <= {2});',
    'cmplts': '{T} = zext({1} s< {2});', 'cmpltsi': '{T} = zext({1} s< {2});',
    'cmpltu': '{T} = zext({1} < {2});', 'cmpltui': '{T} = zext({1} < {2});',
    'cmoveqz': '{T} = {0}; if ({1} != 0) goto <done>; {T} = {2}; <done>',
    'cmovnez': '{T} = {0}; if ({1} == 0) goto <done>; {T} = {2}; <done>',
    'mnz': '{T} = 0; if ({1} == 0) goto <done>; {T} = {2}; <done>',
    'mz': '{T} = 0; if ({1} != 0) goto <done>; {T} = {2}; <done>',
    'move': '{T} = {1};', 'movei': '{T} = {1};', 'moveli': '{T} = {1};',
    'shl16insli': '{T} = ({1} << 16) | ({2} & 0xffff);',
    'shl': '{T} = {1} << ({2} & 63);', 'shli': '{T} = {1} << {2};',
    'shrs': '{T} = {1} s>> ({2} & 63);', 'shrsi': '{T} = {1} s>> {2};',
    'shru': '{T} = {1} >> ({2} & 63);', 'shrui': '{T} = {1} >> {2};',
    'rotl': 'local n:8 = {2} & 63; {T} = ({1} << n) | ({1} >> (64 - n));',
    'rotli': '{T} = ({1} << {2}) | ({1} >> (64 - {2}));',
    'shlx': '{T} = sext({1}:4 << ({2}:4 & 31));', 'shlxi': '{T} = sext({1}:4 << ({2}:4 & 31));',
    'shrux': '{T} = sext({1}:4 >> ({2}:4 & 31));', 'shruxi': '{T} = sext({1}:4 >> ({2}:4 & 31));',
    'shl1add': '{T} = ({1} << 1) + {2};', 'shl2add': '{T} = ({1} << 2) + {2};',
    'shl3add': '{T} = ({1} << 3) + {2};',
    'shl1addx': '{T} = sext(({1}:4 << 1) + {2}:4);', 'shl2addx': '{T} = sext(({1}:4 << 2) + {2}:4);',
    'shl3addx': '{T} = sext(({1}:4 << 3) + {2}:4);',
    'clz': '{T} = lzcount({1});', 'pcnt': '{T} = popcount({1});',
    'ctz': '{T} = popcount(({1} & -{1}) - 1);',
    'revbytes': '{T} = ({1} << 56) | (({1} & 0xff00) << 40) | (({1} & 0xff0000) << 24) | (({1} & 0xff000000) << 8) | (({1} >> 8) & 0xff000000) | (({1} >> 24) & 0xff0000) | (({1} >> 40) & 0xff00) | ({1} >> 56);',
    'mulx': '{T} = sext({1}:4 * {2}:4);', 'mulax': '{T} = sext({0}:4 + {1}:4 * {2}:4);',
    'tblidxb0': '{T} = ({0} & ~0x3fc) | (({1} & 0xff) << 2);',
    'tblidxb1': '{T} = ({0} & ~0x3fc) | ((({1} >> 8) & 0xff) << 2);',
    'tblidxb2': '{T} = ({0} & ~0x3fc) | ((({1} >> 16) & 0xff) << 2);',
    'tblidxb3': '{T} = ({0} & ~0x3fc) | ((({1} >> 24) & 0xff) << 2);',
    'lnk': '{T} = inst_next;',
}
BF = 'local w:8 = (({3} - {2}) & 63) + 1; local m:8 = 0xffffffffffffffff >> (64 - w); '
ALU['bfextu'] = BF + 'local r:8 = ({1} >> {2}) | ({1} << (64 - {2})); {T} = r & m;'
ALU['bfexts'] = BF + 'local r:8 = ({1} >> {2}) | ({1} << (64 - {2})); {T} = ((r & m) << (64 - w)) s>> (64 - w);'
ALU['bfins'] = BF + 'local mm:8 = (m << {2}) | (m >> (64 - {2})); local r:8 = ({1} << {2}) | ({1} >> (64 - {2})); {T} = ({0} & ~mm) | (r & mm);'
ALU['mm'] = BF + 'local mm:8 = (m << {2}) | (m >> (64 - {2})); {T} = ({1} & mm) | ({0} & ~mm);'
HALF = {'hs': '({x} s>> 32)', 'hu': '({x} >> 32)', 'ls': 'sext({x}:4)', 'lu': 'zext({x}:4)'}
for a in HALF:
    for b in HALF:
        prod = HALF[a].format(x='{1}') + ' * ' + HALF[b].format(x='{2}')
        ALU['mul_%s_%s' % (a, b)] = '{T} = %s;' % prod
        ALU['mula_%s_%s' % (a, b)] = '{T} = {0} + %s;' % prod

LOADS = {'': (8, ''), '1s': (1, 's'), '1u': (1, 'z'), '2s': (2, 's'), '2u': (2, 'z'), '4s': (4, 's'), '4u': (4, 'z')}

def load_expr(sz, ext, addr):
    if sz == 8:
        return '*:8 %s' % addr
    return '%sext(*:%d %s)' % (ext, sz, addr)

def semantics(e, pipe, names, kinds):
    """Return (exec, writeback) p-code for one opcode in one pipe."""
    n = e['name']
    k = SLOT[pipe]
    T, U = 'T' + k, 'U' + k
    f = {'T': T, 'U': U}
    for i, nm in enumerate(names):
        f[str(i)] = nm
    def fmt(s):
        return re.sub(r'\{(\w+)\}', lambda mm: f[mm.group(1)], s)
    if n in ALU:
        return fmt(ALU[n]), '%s = %s;' % (names[0], T)
    m = re.fullmatch(r'ld(nt)?(1s|1u|2s|2u|4s|4u)?(_add)?', n) or re.fullmatch(r'ld(na)(_add)?', n)
    if n in ('ld_tls', 'ld4s_tls'):
        sz, ext = LOADS['' if n == 'ld_tls' else '4s']
        return '%s = %s;' % (T, load_expr(sz, ext, names[1])), '%s = %s;' % (names[0], T)
    if m and n.startswith('ldna'):
        addr = '(%s & ~7:8)' % names[1]
        ex = '%s = *:8 %s;' % (T, addr)
        if n.endswith('_add'):
            return ex + ' %s = %s + %s;' % (U, names[1], names[2]), '%s = %s; %s = %s;' % (names[0], T, names[1], U)
        return ex, '%s = %s;' % (names[0], T)
    if m:
        sz, ext = LOADS[m.group(2) or '']
        ex = '%s = %s;' % (T, load_expr(sz, ext, names[1]))
        if m.group(3):
            return ex + ' %s = %s + %s;' % (U, names[1], names[2]), '%s = %s; %s = %s;' % (names[0], T, names[1], U)
        return ex, '%s = %s;' % (names[0], T)
    m = re.fullmatch(r'st(nt)?(1|2|4)?(_add)?', n)
    if m:
        sz = int(m.group(2) or 8)
        val = names[1] if sz == 8 else '%s:%d' % (names[1], sz)
        ex = '*:%d %s = %s;' % (sz, names[0], val)
        if m.group(3):
            return ex + ' %s = %s + %s;' % (U, names[0], names[2]), '%s = %s;' % (names[0], U)
        return ex, ''
    m = re.fullmatch(r'prefetch(_add)?(_l[123])?(_fault)?', n)
    if m:
        if m.group(1):
            return '%s = %s + %s;' % (U, names[0], names[1]), '%s = %s;' % (names[0], U)
        return '', ''
    m = re.fullmatch(r'(exch|fetchadd|fetchaddgez|fetchand|fetchor|cmpexch)(4?)', n)
    if m:
        w = 4 if m.group(2) else 8
        a, b = names[1], names[2]
        bv = b if w == 8 else b + ':4'
        old = '*:8 %s' % a if w == 8 else 'sext(*:4 %s)' % a
        cur = T if w == 8 else T + ':4'
        body = {'exch': '*:{w} {a} = {bv};',
                'fetchadd': '*:{w} {a} = {cur} + {bv};',
                'fetchand': '*:{w} {a} = {cur} & {bv};',
                'fetchor': '*:{w} {a} = {cur} | {bv};',
                'fetchaddgez': 'local nv:{w} = {cur} + {bv}; if (nv s< 0) goto <skip>; *:{w} {a} = nv; <skip>',
                'cmpexch': 'local cv:{w} = CMPEXCH_VALUE{cvw}; if ({cur} != cv) goto <skip>; *:{w} {a} = {bv}; <skip>',
                }[m.group(1)].format(w=w, a=a, bv=bv, cur=cur, cvw='' if w == 8 else ':4')
        return '%s = %s; %s' % (T, old, body), '%s = %s;' % (names[0], T)
    m = re.fullmatch(r'b(eqz|nez|gez|gtz|lez|ltz|lbc|lbs)t?', n)
    if m:
        a = names[0]
        cond = {'eqz': '%s == 0', 'nez': '%s != 0', 'gez': '%s s>= 0', 'gtz': '%s s> 0',
                'lez': '%s s<= 0', 'ltz': '%s s< 0', 'lbc': '(%s & 1) == 0', 'lbs': '(%s & 1) != 0'}[m.group(1)] % a
        return 'BC = %s;' % cond, 'if (BC) goto %s;' % names[1]
    if n == 'j':
        return '', 'goto %s;' % names[0]
    if n == 'jal':
        return '', 'lr = inst_next; call %s;' % names[0]
    if n in ('jr', 'jrp'):
        return '%s = %s;' % (T, names[0]), 'goto [%s];' % T
    if n in ('jalr', 'jalrp'):
        return '%s = %s;' % (T, names[0]), 'lr = inst_next; call [%s];' % T
    if n == 'mfspr':
        return '%s = %s;' % (T, op('mfspr', names[1])), '%s = %s;' % (names[0], T)
    if n == 'mtspr':
        return op('mtspr', names[0], names[1]) + ';', ''
    if n in ('nop', 'fnop', 'info', 'infol'):
        return '', ''
    if n == 'swint1':
        return '', op('syscall') + ';'
    if n in ('bpt', 'raise', 'ill', 'swint0', 'swint2', 'swint3', 'iret', 'nap', 'drain', 'mf', 'flushwb'):
        return '', op(n) + ';'
    if n in ('flush', 'finv', 'inv', 'icoh', 'wh64', 'dtlbpr'):
        return op(n, names[0]) + ';', ''
    # Everything else (SIMD v1/v2/v4, complex and FP helpers, CRC, saturating, revbits,
    # dblalign, shufflebytes) is a named user operation over its source operands.
    srcs = [names[i] for i, kd in enumerate(kinds) if kd in ('src', 'srcdst', 'imm')]
    return '%s = %s;' % (T, op(n, *srcs)), '%s = %s;' % (names[0], T)

def runs(mask):
    out = []
    b = 0
    while b < 64:
        if mask >> b & 1:
            s = b
            while b < 64 and mask >> b & 1:
                b += 1
            out.append((s, b - 1))
        else:
            b += 1
    return out

def main():
    ents = parse(sys.argv[1])
    fields = set()
    cons = {p: [] for p in PIPES}
    for e in ents:
        for pi, p in enumerate(PIPES):
            if not (e['pipes'] >> pi & 1):
                continue
            mask, val = e['mask'][pi], e['val'][pi]
            if p != 'Y2':
                mask &= ~MODE
            cs = []
            for lo, hi in runs(mask):
                fields.add((lo, hi))
                cs.append('f%d_%d=0x%x' % (lo, hi, (val >> lo) & ((1 << (hi - lo + 1)) - 1)))
            if not cs:
                continue
            ops = e['ops'][pi]
            kinds = [OPER[o][0] for o in ops]
            names = []
            for o in ops:
                nm = OPER[o][1]
                if OPER[o][0] == 'srcdst' and o == 15:
                    nm = 'aX1'
                names.append(nm)
            disp = []
            for o in ops:
                kd, nm = OPER[o]
                disp.append({'srcdst': nm if o != 15 else 'sAX1'}.get(kd, nm))
            ex, wb = semantics(e, p, names, kinds)
            pre = []
            for nm in sorted(set(re.findall(r'\b([a-zA-Z]\w*):\d', ex))):
                if nm not in set(v[1] for v in OPER.values()):
                    continue
                pre.append('local %s_v:8 = %s;' % (nm, nm))
                ex = re.sub(r'\b%s:(\d)' % nm, r'%s_v:\1' % nm, ex)
            ex = ' '.join(pre + [ex]) if pre else ex
            # the _add base register: read through the zero-aware table, write the raw field
            if 15 in ops:
                ex = ex.replace('aX1 +', 'sAX1 +').replace(' aX1;', ' sAX1;').replace('= aX1', '= sAX1')
                ex = re.sub(r'(\*:\d+) aX1', r'\1 sAX1', ex)
                ex = ex.replace('(aX1 &', '(sAX1 &')
            key = ' & '.join(cs)
            if any(c[2] == key for c in cons[p]):
                continue
            if e['name'] in ('jr', 'jrp'):
                fld = 'aX1' if p == 'X1' else 'aY1'
                cons[p].append((e['name'], disp, key + ' & %s=55' % fld, ex, 'return [%s];' % ('T' + SLOT[p]), ops))
            cons[p].append((e['name'], disp, key, ex, wb, ops))
    o = []
    w = o.append
    w('# TILE-Gx (Tilera / Mellanox / EZchip TILE-Gx8000 family), little endian.')
    w('# Generated by tools/gen_tilegx_sleigh.py; edit the generator, not this file.')
    w('')
    w('define endian=little;')
    w('define alignment=8;')
    w('define space ram type=ram_space size=8 default;')
    w('define space register type=register_space size=4;')
    regs = ['r%d' % i for i in range(64)]
    regs[53], regs[54], regs[55], regs[56] = 'tp', 'sp', 'lr', 'sn'
    regs[57:63] = ['idn0', 'idn1', 'udn0', 'udn1', 'udn2', 'udn3']
    regs[63] = 'zero'
    w('define register offset=0x0 size=8 [ %s ];' % ' '.join(regs))
    w('define register offset=0x200 size=8 [ pc T0 T1 T2 U0 U1 U2 CMPEXCH_VALUE ];')
    w('define register offset=0x300 size=1 [ BC ];')
    w('')
    flds = {
        'mode': (62, 63), 'dX0': (0, 5), 'aX0': (6, 11), 'bX0': (12, 17), 's8X0': (12, 19, 's'),
        's16X0': (12, 27, 's'), 'bfsX0v': (18, 23), 'bfeX0v': (12, 17), 'shX0v': (12, 17),
        'dX1': (31, 36), 'aX1': (37, 42), 'bX1': (43, 48), 's8X1': (43, 50, 's'), 's16X1': (43, 58, 's'),
        'brlo': (31, 36), 'brhi': (43, 53, 's'), 'joff': (31, 57, 's'), 'mfv': (37, 50),
        'mtlo': (31, 36), 'mthi': (43, 50), 'di8hi': (49, 50, 's'), 'shX1v': (43, 48),
        'dY0': (0, 5), 'aY0': (6, 11), 'bY0': (12, 17), 's8Y0': (12, 19, 's'), 'shY0v': (12, 17),
        'dY1': (31, 36), 'aY1': (37, 42), 'bY1': (43, 48), 's8Y1': (43, 50, 's'), 'shY1v': (43, 48),
        'aY2': (20, 25), 'bdY2': (51, 56),
    }
    w('define token bundle(64)')
    for nm, v in flds.items():
        w('  %s = (%d,%d)%s' % (nm, v[0], v[1], ' signed dec' if len(v) > 2 else ''))
    for lo, hi in sorted(fields):
        w('  f%d_%d = (%d,%d)' % (lo, hi, lo, hi))
    w(';')
    w('')
    regfields = ['dX0', 'aX0', 'bX0', 'dX1', 'aX1', 'bX1', 'dY0', 'aY0', 'bY0', 'dY1', 'aY1', 'bY1', 'aY2', 'bdY2']
    w('attach variables [ %s ] [ %s ];' % (' '.join(regfields), ' '.join(regs)))
    w('')
    for nm in sorted(PCODEOP):
        w('define pcodeop %s;' % nm)
    w('')
    for nm, fld in [('sAX0', 'aX0'), ('sBX0', 'bX0'), ('sAX1', 'aX1'), ('sBX1', 'bX1'), ('sAY0', 'aY0'),
                    ('sBY0', 'bY0'), ('sAY1', 'aY1'), ('sBY1', 'bY1'), ('sAY2', 'aY2'), ('sBDY2', 'bdY2')]:
        w('%s: %s is %s { export %s; }' % (nm, fld, fld, fld))
        w('%s: "zero" is %s=63 { export 0:8; }' % (nm, fld))
    w('')
    for nm, fld in [('i8X0', 's8X0'), ('i16X0', 's16X0'), ('i8X1', 's8X1'), ('i16X1', 's16X1'),
                    ('i8Y0', 's8Y0'), ('i8Y1', 's8Y1')]:
        w('%s: %s is %s { export *[const]:8 %s; }' % (nm, fld, fld, fld))
    for nm, fld in [('bfsX0', 'bfsX0v'), ('bfeX0', 'bfeX0v'), ('shX0', 'shX0v'), ('shX1', 'shX1v'),
                    ('shY0', 'shY0v'), ('shY1', 'shY1v'), ('mfX1', 'mfv')]:
        w('%s: %s is %s { export *[const]:8 %s; }' % (nm, fld, fld, fld))
    w('mtX1: val is mtlo & mthi [ val = (mthi << 6) | mtlo; ] { export *[const]:8 val; }')
    w('di8X1: val is mtlo & di8hi [ val = (di8hi << 6) | mtlo; ] { export *[const]:8 val; }')
    w('brX1: dest is brlo & brhi [ dest = inst_start + (((brhi << 6) | brlo) << 3); ] { export *[ram]:8 dest; }')
    w('jX1: dest is joff [ dest = inst_start + (joff << 3); ] { export *[ram]:8 dest; }')
    w('')
    opnames = set(v[1] for v in OPER.values()) | set(regfields) | {'aX1'}
    def extra(sem, shown):
        ids = []
        for t in re.findall(r'[A-Za-z_]\w*', sem):
            if t in opnames and t not in shown and t not in ids:
                ids.append(t)
        return ''.join(' & %s' % t for t in ids)
    for p in PIPES:
        for name, disp, cs, ex, wb, ops in cons[p]:
            d = '"%s"' % name + (' ' + ', '.join(disp) if disp else '')
            w('%s: %s is %s%s%s { %s }' % (p, d, cs, ''.join(' & %s' % x for x in dict.fromkeys(disp)), extra(ex, disp), ex))
        for name, disp, cs, ex, wb, ops in cons[p]:
            w('%sw: is %s%s { %s }' % (p, cs, extra(wb, []), wb))
        w('')
    w(':^X0 " ; " ^X1 is mode=0 & X0 & X1 & X0w & X1w { build X0; build X1; build X0w; build X1w; }')
    w(':^Y0 " ; " ^Y1 " ; " ^Y2 is mode!=0 & Y0 & Y1 & Y2 & Y0w & Y1w & Y2w { build Y0; build Y1; build Y2; build Y0w; build Y2w; build Y1w; }')
    print('\n'.join(o))

main()
