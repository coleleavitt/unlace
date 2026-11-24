#!/usr/bin/env python3
"""Generate the TILEPro SLEIGH module.

Encodings (per-pipe fixed-bit masks and operand layouts) are read from the
binutils TILEPro opcode table given on the command line; no text of that
table is copied into the output.  Semantics are written here, following the
TILEPro Instruction Set Architecture reference (Tilera UG120).
"""
import re
import sys

MODE = 1 << 63


def parse(path):
    src = open(path).read()
    body = src[src.index('tilepro_opcodes['):]
    body = body[:body.index('\n};')]
    pat = re.compile(r'\{\s*"([^"]+)",\s*(\w+),\s*(0x[0-9a-f]+|\d+),\s*(\d+),\s*(\w+),\s*(\d+),\s*\{([^\n]*)\},\s*#ifndef DISASM_ONLY\s*\{([^}]*)\},\s*\{([^}]*)\}')
    out = []
    for m in pat.finditer(body):
        count = int(m.group(4))
        ops = [[int(x) for x in g.split(',') if x.strip()][:count] for g in re.findall(r'\{([^}]*)\}', m.group(7))]

        def nums(s):
            r = []
            for x in s.split(','):
                x = x.strip()
                if not x:
                    continue
                r.append(-1 if x == '-1ULL' else int(x.replace('ULL', ''), 16 if x.startswith('0x') else 10))
            return r
        out.append(dict(name=m.group(1), pipes=int(m.group(3), 0), implicit=m.group(5), ops=ops,
                        mask=nums(m.group(8)), val=nums(m.group(9))))
    return out


PIPES = ['X0', 'X1', 'Y0', 'Y1', 'Y2']
SLOT = {'X0': '0', 'X1': '1', 'Y0': '0', 'Y1': '1', 'Y2': '2'}

# operand index -> (kind, name)
OPER = {
    0: ('imm', 'i8X0'), 1: ('imm', 'i8X1'), 2: ('imm', 'i8Y0'), 3: ('imm', 'i8Y1'),
    4: ('imm', 'i16X0'), 5: ('imm', 'i16X1'), 6: ('jmp', 'jlX1'),
    7: ('dst', 'dX1'), 8: ('src', 'sAX1'), 9: ('dst', 'dX0'), 10: ('src', 'sAX0'),
    11: ('dst', 'dY0'), 12: ('src', 'sAY0'), 13: ('dst', 'dY1'), 14: ('src', 'sAY1'),
    15: ('src', 'sAY2'), 16: ('src', 'sBX0'), 17: ('src', 'sBX1'), 18: ('src', 'sBY0'),
    19: ('src', 'sBY1'), 20: ('br', 'brX1'), 21: ('srcdst', 'dX0'), 22: ('jmp', 'jX1'),
    23: ('dst', 'bdY2'), 24: ('srcdst', 'aX1'), 25: ('imm', 'mfX1'), 26: ('imm', 'mmsX0'),
    27: ('imm', 'mmeX0'), 28: ('imm', 'mmsX1'), 29: ('imm', 'mmeX1'), 30: ('imm', 'mtX1'),
    31: ('srcdst', 'dY0'), 32: ('imm', 'shX0'), 33: ('imm', 'shX1'), 34: ('imm', 'shY0'),
    35: ('imm', 'shY1'), 36: ('src', 'sBDY2'), 37: ('imm', 'di8X1'),
}

PCODEOP = set()


def op(name, *args):
    PCODEOP.add(name)
    return '%s(%s)' % (name, ', '.join(args))


ALU = {
    'add': '{T} = {1} + {2};', 'addi': '{T} = {1} + {2};', 'addli': '{T} = {1} + {2};',
    'addlis': '{T} = {1} + {2};', 'auli': '{T} = {1} + ({2} << 16);',
    'sub': '{T} = {1} - {2};',
    'and': '{T} = {1} & {2};', 'andi': '{T} = {1} & {2};',
    'or': '{T} = {1} | {2};', 'ori': '{T} = {1} | {2};',
    'xor': '{T} = {1} ^ {2};', 'xori': '{T} = {1} ^ {2};',
    'nor': '{T} = ~({1} | {2});',
    'seq': '{T} = zext({1} == {2});', 'seqi': '{T} = zext({1} == {2});',
    'sne': '{T} = zext({1} != {2});',
    'slt': '{T} = zext({1} s< {2});', 'slti': '{T} = zext({1} s< {2});',
    'slt_u': '{T} = zext({1} < {2});', 'slti_u': '{T} = zext({1} < {2});',
    'slte': '{T} = zext({1} s<= {2});', 'slte_u': '{T} = zext({1} <= {2});',
    's1a': '{T} = ({1} << 1) + {2};', 's2a': '{T} = ({1} << 2) + {2};', 's3a': '{T} = ({1} << 3) + {2};',
    'shl': '{T} = {1} << ({2} & 31);', 'shli': '{T} = {1} << {2};',
    'shr': '{T} = {1} >> ({2} & 31);', 'shri': '{T} = {1} >> {2};',
    'sra': '{T} = {1} s>> ({2} & 31);', 'srai': '{T} = {1} s>> {2};',
    'rl': 'local n:4 = {2} & 31; {T} = ({1} << n) | ({1} >> ((32 - n) & 31));',
    'rli': '{T} = ({1} << {2}) | ({1} >> ((32 - {2}) & 31));',
    'mnz': '{T} = 0; if ({1} == 0) goto <done>; {T} = {2}; <done>',
    'mz': '{T} = 0; if ({1} != 0) goto <done>; {T} = {2}; <done>',
    'mvnz': '{T} = {0}; if ({1} == 0) goto <done>; {T} = {2}; <done>',
    'mvz': '{T} = {0}; if ({1} != 0) goto <done>; {T} = {2}; <done>',
    'move': '{T} = {1};', 'movei': '{T} = {1};', 'moveli': '{T} = {1};', 'movelis': '{T} = {1};',
    'clz': '{T} = lzcount({1});', 'pcnt': '{T} = popcount({1});',
    'ctz': '{T} = popcount(({1} & -{1}) - 1);',
    'bytex': '{T} = ({1} << 24) | (({1} & 0xff00) << 8) | (({1} >> 8) & 0xff00) | ({1} >> 24);',
    'lnk': '{T} = inst_next;',
}
for k in range(4):
    ALU['tblidxb%d' % k] = '{T} = ({0} & ~0x3fc) | ((({1} >> %d) & 0xff) << 2);' % (8 * k)
MM = 'local w:4 = (({4} - {3}) & 31) + 1; local m:4 = 0xffffffff >> (32 - w); local mm:4 = (m << {3}) | (m >> ((32 - {3}) & 31)); '
ALU['mm'] = MM + '{T} = ({1} & mm) | ({2} & ~mm);'
HALF = {'hs': '({x} s>> 16)', 'hu': '({x} >> 16)', 'ls': 'sext({x}:2)', 'lu': 'zext({x}:2)'}
for pos in ('hh', 'hl', 'll'):
    for sg in ('ss', 'su', 'us', 'uu'):
        prod = HALF[pos[0] + sg[0]].format(x='{1}') + ' * ' + HALF[pos[1] + sg[1]].format(x='{2}')
        ALU['mul%s_%s' % (pos, sg)] = '{T} = %s;' % prod
        ALU['mul%sa_%s' % (pos, sg)] = '{T} = {0} + %s;' % prod

LOADS = {'b': (1, 's'), 'b_u': (1, 'z'), 'h': (2, 's'), 'h_u': (2, 'z'), 'w': (4, ''), 'w_na': (4, '')}


def load_expr(sz, ext, addr):
    if sz == 4:
        return '*:4 %s' % addr
    return '%sext(*:%d %s)' % (ext, sz, addr)


def semantics(e, pipe, names, kinds):
    """Return (exec, writeback) p-code for one opcode in one pipe."""
    n = e['name']
    if n.endswith('.sn'):
        n = n[:-3]
    k = SLOT[pipe]
    T, U = 'T' + k, 'U' + k
    f = {'T': T, 'U': U}
    for i, nm in enumerate(names):
        f[str(i)] = nm

    def fmt(s):
        return re.sub(r'\{(\w+)\}', lambda mm: f[mm.group(1)], s)
    if n in ALU:
        return fmt(ALU[n]), '%s = %s;' % (names[0], T)
    if n == 'lw_tls':
        return '%s = *:4 %s;' % (T, names[1]), '%s = %s;' % (names[0], T)
    m = re.fullmatch(r'l(b|b_u|h|h_u|w|w_na)', n)
    if m:
        sz, ext = LOADS[m.group(1)]
        addr = '(%s & ~3:4)' % names[1] if m.group(1) == 'w_na' else names[1]
        return '%s = %s;' % (T, load_expr(sz, ext, addr)), '%s = %s;' % (names[0], T)
    m = re.fullmatch(r'l(b|h|w)add(_u|_na)?', n)
    if m:
        key = m.group(1) + ('_u' if m.group(2) == '_u' else '_na' if m.group(2) == '_na' else '')
        if key == 'w_u':
            key = 'w'
        sz, ext = LOADS[key]
        addr = '(sAX1 & ~3:4)' if key == 'w_na' else 'sAX1'
        ex = '%s = %s; %s = sAX1 + %s;' % (T, load_expr(sz, ext, addr), U, names[2])
        return ex, '%s = %s; %s = %s;' % (names[0], T, names[1], U)
    m = re.fullmatch(r's(b|h|w)(add)?', n)
    if m:
        sz = {'b': 1, 'h': 2, 'w': 4}[m.group(1)]
        val = names[1] if sz == 4 else '%s:%d' % (names[1], sz)
        if m.group(2):
            return '*:%d sAX1 = %s; %s = sAX1 + %s;' % (sz, val, U, names[2]), '%s = %s;' % (names[0], U)
        return '*:%d %s = %s;' % (sz, names[0], val), ''
    if n == 'tns':
        return '%s = *:4 %s; *:4 %s = 1;' % (T, names[1], names[1]), '%s = %s;' % (names[0], T)
    m = re.fullmatch(r'b(z|nz|gez|gz|lez|lz|bs|bns)t?', n)
    if m:
        a = names[0]
        cond = {'z': '%s == 0', 'nz': '%s != 0', 'gez': '%s s>= 0', 'gz': '%s s> 0',
                'lez': '%s s<= 0', 'lz': '%s s< 0', 'bs': '(%s & 1) != 0', 'bns': '(%s & 1) == 0'}[m.group(1)] % a
        return 'BC = %s;' % cond, 'if (BC) goto %s;' % names[1]
    if n in ('j', 'jb', 'jf'):
        return '', 'goto %s;' % names[0]
    if n in ('jal', 'jalb', 'jalf'):
        return '', 'lr = inst_next; call %s;' % names[0]
    if n in ('jr', 'jrp'):
        return '%s = %s;' % (T, names[0]), 'goto [%s];' % T
    if n in ('jalr', 'jalrp'):
        return '%s = %s;' % (T, names[0]), 'lr = inst_next; call [%s];' % T
    if n == 'mfspr':
        return '%s = %s;' % (T, op('mfspr', names[1])), '%s = %s;' % (names[0], T)
    if n == 'mtspr':
        return op('mtspr', names[0], names[1]) + ';', ''
    if n in ('nop', 'fnop', 'info', 'infol', 'prefetch'):
        return '', ''
    if n == 'swint1':
        return '', op('syscall') + ';'
    if n in ('bpt', 'raise', 'ill', 'swint0', 'swint2', 'swint3', 'iret', 'nap', 'drain', 'mf'):
        return '', op(n) + ';'
    if n in ('flush', 'finv', 'inv', 'icoh', 'wh64', 'dtlbpr'):
        return op(n, names[0]) + ';', ''
    # SIMD byte/halfword lanes, saturating, averaging, SAD, packing, interleaving,
    # shifted-accumulate multiplies, CRC, bitx and dword_align: a named user operation.
    srcs = [names[i] for i, kd in enumerate(kinds) if kd in ('src', 'srcdst', 'imm')]
    return '%s = %s;' % (T, op(n.replace('.', '_'), *srcs)), '%s = %s;' % (names[0], T)


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
        # jf/jb/jalf/jalb are j/jal with the offset's sign bit fixed; binutils
        # decodes them as j/jal with the 29-bit offset, and so does this module.
        if e['name'] in ('jf', 'jb', 'jalf', 'jalb'):
            continue
        for pi, p in enumerate(PIPES):
            if not (e['pipes'] >> pi & 1):
                continue
            mask, val = e['mask'][pi] & ~MODE, e['val'][pi]
            cs = []
            for lo, hi in runs(mask):
                fields.add((lo, hi))
                cs.append('f%d_%d=0x%x' % (lo, hi, (val >> lo) & ((1 << (hi - lo + 1)) - 1)))
            if not cs:
                continue
            ops = e['ops'][pi]
            kinds = [OPER[o][0] for o in ops]
            names = [OPER[o][1] for o in ops]
            disp = [('sAX1' if o == 24 else OPER[o][1]) for o in ops]
            ex, wb = semantics(e, p, names, kinds)
            if e['implicit'] == 'TREG_SN' and wb.startswith('%s = T' % names[0] if names else '-'):
                wb += ' sn = T%s;' % SLOT[p]
            pre = []
            for nm in sorted(set(re.findall(r'\b([a-zA-Z]\w*):\d', ex))):
                if nm not in set(v[1] for v in OPER.values()):
                    continue
                pre.append('local %s_v:4 = %s;' % (nm, nm))
                ex = re.sub(r'\b%s:(\d)' % nm, r'%s_v:\1' % nm, ex)
            ex = ' '.join(pre + [ex]) if pre else ex
            key = ' & '.join(cs)
            if any(c[2] == key for c in cons[p]):
                continue
            if e['name'] in ('jr', 'jrp'):
                cons[p].append((e['name'], disp, key + ' & aX1=55', ex, 'return [T1];', ops))
            cons[p].append((e['name'], disp, key, ex, wb, ops))
    o = []
    w = o.append
    w('# TILEPro (Tilera TILEPro32/TILEPro64, TILE64), little endian.')
    w('# Generated by tools/gen_tilepro_sleigh.py; edit the generator, not this file.')
    w('')
    w('define endian=little;')
    w('define alignment=8;')
    w('define space ram type=ram_space size=4 default;')
    w('define space register type=register_space size=4;')
    regs = ['r%d' % i for i in range(64)]
    regs[53], regs[54], regs[55], regs[56] = 'tp', 'sp', 'lr', 'sn'
    regs[57:63] = ['idn0', 'idn1', 'udn0', 'udn1', 'udn2', 'udn3']
    regs[63] = 'zero'
    w('define register offset=0x0 size=4 [ %s ];' % ' '.join(regs))
    w('define register offset=0x200 size=4 [ pc T0 T1 T2 U0 U1 U2 ];')
    w('define register offset=0x300 size=1 [ BC ];')
    w('')
    flds = {
        'mode': (63, 63), 'dX0': (0, 5), 'aX0': (6, 11), 'bX0': (12, 17), 's8X0': (12, 19, 's'),
        's16X0': (12, 27, 's'), 'shX0v': (12, 16), 'mmeX0v': (18, 22), 'mmsX0v': (23, 27),
        'dX1': (31, 36), 'aX1': (37, 42), 'bX1': (43, 48), 's8X1': (43, 50, 's'), 's16X1': (43, 58, 's'),
        'shX1v': (43, 47), 'mmeX1v': (49, 53), 'mmsX1v': (54, 58),
        'dY0': (0, 5), 'aY0': (6, 11), 'bY0': (12, 17), 's8Y0': (12, 19, 's'), 'shY0v': (12, 16),
        'dY1': (31, 36), 'aY1': (37, 42), 'bY1': (43, 48), 's8Y1': (43, 50, 's'), 'shY1v': (43, 47),
        'aY2lo': (26, 26), 'aY2hi': (51, 55), 'bdY2': (20, 25),
        'o0_14': (43, 57), 'o15_16': (35, 36), 'o15_16s': (35, 36, 's'), 'o17_20': (31, 34),
        'o21_26': (37, 42), 'o27s': (58, 58, 's'), 'o27_28s': (58, 59, 's'),
        'mfv': (37, 50), 'b58': (58, 58), 'mtlo': (31, 36), 'mtmid': (43, 50), 'di8hi': (49, 50, 's'),
    }
    w('define token bundle(64)')
    for nm, v in flds.items():
        w('  %s = (%d,%d)%s' % (nm, v[0], v[1], ' signed dec' if len(v) > 2 else ''))
    for lo, hi in sorted(fields):
        w('  f%d_%d = (%d,%d)' % (lo, hi, lo, hi))
    w(';')
    w('')
    regfields = ['dX0', 'aX0', 'bX0', 'dX1', 'aX1', 'bX1', 'dY0', 'aY0', 'bY0', 'dY1', 'aY1', 'bY1', 'bdY2']
    w('attach variables [ %s ] [ %s ];' % (' '.join(regfields), ' '.join(regs)))
    w('')
    for nm in sorted(PCODEOP):
        w('define pcodeop %s;' % nm)
    w('')
    for nm, fld in [('sAX0', 'aX0'), ('sBX0', 'bX0'), ('sAX1', 'aX1'), ('sBX1', 'bX1'), ('sAY0', 'aY0'),
                    ('sBY0', 'bY0'), ('sAY1', 'aY1'), ('sBY1', 'bY1'), ('sBDY2', 'bdY2')]:
        w('%s: %s is %s { export %s; }' % (nm, fld, fld, fld))
        w('%s: "zero" is %s=63 { export 0:4; }' % (nm, fld))
    for r in range(64):
        if r == 63:
            w('sAY2: "zero" is aY2lo=1 & aY2hi=31 { export 0:4; }')
        else:
            w('sAY2: "%s" is aY2lo=%d & aY2hi=%d { export %s; }' % (regs[r], r & 1, r >> 1, regs[r]))
    w('')
    for nm, fld in [('i8X0', 's8X0'), ('i16X0', 's16X0'), ('i8X1', 's8X1'), ('i16X1', 's16X1'),
                    ('i8Y0', 's8Y0'), ('i8Y1', 's8Y1')]:
        w('%s: %s is %s { export *[const]:4 %s; }' % (nm, fld, fld, fld))
    for nm, fld in [('shX0', 'shX0v'), ('shX1', 'shX1v'), ('shY0', 'shY0v'), ('shY1', 'shY1v'),
                    ('mmsX0', 'mmsX0v'), ('mmeX0', 'mmeX0v'), ('mmsX1', 'mmsX1v'), ('mmeX1', 'mmeX1v')]:
        w('%s: %s is %s { export *[const]:4 %s; }' % (nm, fld, fld, fld))
    w('mfX1: val is mfv & b58 [ val = (b58 << 14) | mfv; ] { export *[const]:4 val; }')
    w('mtX1: val is mtlo & mtmid & b58 [ val = (b58 << 14) | (mtmid << 6) | mtlo; ] { export *[const]:4 val; }')
    w('di8X1: val is mtlo & di8hi [ val = (di8hi << 6) | mtlo; ] { export *[const]:4 val; }')
    w('brX1: dest is o0_14 & o15_16s [ dest = inst_start + (((o15_16s << 15) | o0_14) << 3); ] { export *[ram]:4 dest; }')
    if any(22 in ops for p in PIPES for (_n, _d, _c, _e, _w, ops) in cons[p]):
        w('jX1: dest is o0_14 & o15_16 & o17_20 & o21_26 & o27s [ dest = inst_start + (((o27s << 27) | (o21_26 << 21) | (o17_20 << 17) | (o15_16 << 15) | o0_14) << 3); ] { export *[ram]:4 dest; }')
    w('jlX1: dest is o0_14 & o15_16 & o17_20 & o21_26 & o27_28s [ dest = inst_start + (((o27_28s << 27) | (o21_26 << 21) | (o17_20 << 17) | (o15_16 << 15) | o0_14) << 3); ] { export *[ram]:4 dest; }')
    w('')
    opnames = set(v[1] for v in OPER.values()) | set(regfields) | {'sAX1'}

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
    w(':^Y0 " ; " ^Y1 " ; " ^Y2 is mode=1 & Y0 & Y1 & Y2 & Y0w & Y1w & Y2w { build Y0; build Y1; build Y2; build Y0w; build Y2w; build Y1w; }')
    print('\n'.join(o))


main()
