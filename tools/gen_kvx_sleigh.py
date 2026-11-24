#!/usr/bin/env python3
"""Generate a Kalray KVX SLEIGH module for one core (kv3_v1, kv3_v2 or kv4_v1).

Encodings, operand bit fields, register names and modifier names are read from
the binutils KVX opcode table (opcodes/kvx-opc.c) and the register-class switch
of the binutils KVX disassembler (opcodes/kvx-dis.c), both given on the command
line; no text of either file is copied into the output.  The bundle model and
the p-code are written here.

usage: gen_kvx_sleigh.py <kvx-opc.c> <kvx-dis.c> <core> > kvx_<core>.slaspec
"""
import re
import sys

OPC, DIS, CORE = sys.argv[1], sys.argv[2], sys.argv[3]
src = open(OPC).read()
dis = open(DIS).read()


def c_block(start):
    i = src.index(start)
    return src[i:src.index('\n};', i)]


def parse_opcodes():
    body = c_block('struct kvxopc kvx_%s_optab[] = {' % CORE)
    pat = re.compile(r'\{ /\* (\S+) \*/\s*\.as_op = "([^"]*)",\s*\.codewords = \{(.*?)\},\s*'
                     r'\.wordcount = (\d+),.*?\.format = \{(.*?)\},\s*\.rclass = "[^"]*",\s*'
                     r'\.fmtstring = "([^"]*)",', re.S)
    out = []
    for m in pat.finditer(body):
        cws = [(int(a, 16), int(b, 16), f) for a, b, f in re.findall(
            r'\.opcode = (0x[0-9a-f]+),\s*\.mask = (0x[0-9a-f]+),\s*\.flags = ([^\n]*)', m.group(3))]
        fmt = re.findall(r'&%s_(\w+)_opnd' % CORE, m.group(5))
        out.append(dict(op=m.group(2), cw=cws, wc=int(m.group(4)), fmt=fmt, fs=m.group(6)))
    return out


def parse_operands():
    ops = {}
    pat = re.compile(r'static struct kvx_operand %s_(\w+)_opnd\s+__attribute__\(\(unused\)\) = \{(.*?)\n\};'
                     % CORE, re.S)
    for m in pat.finditer(src):
        b = m.group(2)
        def g(k):
            return re.search(r'\.%s = ([^,\n]*)' % k, b).group(1).strip()
        bf = [tuple(int(x) for x in t) for t in re.findall(r'\{ (\d+), (\d+), (\d+) \}', b[b.index('.bfield'):])]
        ops[m.group(1)] = dict(type=g('type'), width=int(g('width')), shift=int(g('shift')),
                               bias=int(g('bias')), signed='kvxSIGNED' in g('flags'), bf=bf)
    return ops


def parse_dec_names():
    return [n for _, n in re.findall(r'/\* (\d+) (\S+) \*/', c_block('int kvx_%s_dec_registers[]' % CORE))]


def parse_regfiles():
    return {k: int(v) for v, k in re.findall(r'(\d+), \t/\* KVX_REGFILE_DEC_(\w+)',
                                             c_block('int kvx_%s_regfiles[]' % CORE))}


def parse_classes():
    i = dis.index('env.opc_table == kvx_%s_optab' % CORE)
    body = dis[i:dis.index('default:', i)]
    cls, pending = {}, []
    for line in body.splitlines():
        m = re.search(r'case (RegClass_%s_\w+):' % CORE, line)
        if m:
            pending.append(m.group(1))
            continue
        m = re.search(r'KVX_PRINT_REG \(KVX_REGFILE_DEC_(\w+), value\)', line)
        if m:
            for p in pending:
                cls[p] = m.group(1)
            pending = []
        elif re.search(r'case (Immediate|Modifier)_', line):
            pending = []
    return cls


def parse_modifiers():
    return {m.group(1): re.findall(r'"([^"]*)"', m.group(2))
            for m in re.finditer(r'const char \*mod_%s_(\w+)\[\] = \{(.*?)\};' % CORE, src, re.S)}


OPS = parse_opcodes()
OPERANDS = parse_operands()
DEC = parse_dec_names()
REGFILE = parse_regfiles()
CLASSES = parse_classes()
MODS = parse_modifiers()


def sname(n):
    return n.replace('$', '').replace('..', '_').replace('.', '_')


# Context layout.  SLEIGH numbers context bits from the most significant bit, so
# instruction bit b of context word w is bit 32*w+31-b.
SLOTS = ['bcu', 'tca', 'alu0', 'alu1', 'mau', 'lsu']
XSLOTS = ['alu0', 'alu1', 'mau', 'lsu']
WORD = {('bcu', 0): 0, ('tca', 0): 1, ('alu0', 0): 2, ('alu1', 0): 3, ('mau', 0): 4, ('lsu', 0): 5}
for k, s in enumerate(XSLOTS):
    WORD[(s, 1)] = 6 + 2 * k
    WORD[(s, 2)] = 7 + 2 * k
FLAGW = 14
CTX = {}


def cfield(slot, idx, lo, hi):
    name = '%s_%d_%d_%d' % (slot, idx, lo, hi)
    if name not in CTX:
        word = WORD[(slot, idx)]
        CTX[name] = (32 * word + 31 - hi, 32 * word + 31 - lo)
    return name


def wordfield(slot, idx):
    return cfield(slot, idx, 0, 31)


FLAGS = {}
for k, s in enumerate(SLOTS):
    FLAGS[s + 'v'] = (32 * FLAGW + k, 32 * FLAGW + k)
FLAGS['notfirst'] = (32 * FLAGW + 6, 32 * FLAGW + 6)
FLAGS['nsyl'] = (32 * FLAGW + 7, 32 * FLAGW + 9)
for k, s in enumerate(XSLOTS):
    FLAGS[s + 'xc'] = (32 * FLAGW + 10 + 2 * k, 32 * FLAGW + 11 + 2 * k)
# Hardware loops: loopdo marks its loop end (the bundle after the body) with lpend and the
# distance back to the loop start.
NOFLOW = {'lpend': (32 * FLAGW + 18, 32 * FLAGW + 18), 'lpdist': (32 * FLAGW + 19, 32 * FLAGW + 40)}

# Register files.
FILES = {'GPR': [sname(DEC[REGFILE['GPR'] + i]) for i in range(64)],
         'PGR': [sname(DEC[REGFILE['PGR'] + i]) for i in range(32)],
         'QGR': [sname(DEC[REGFILE['QGR'] + i]) for i in range(16)],
         'SFR': [sname(DEC[REGFILE['SFR'] + i]) for i in range(512)]}
order = sorted((v, k) for k, v in REGFILE.items() if k not in ('GPR', 'PGR', 'QGR', 'SFR', 'REGISTERS'))
for n, (start, k) in enumerate(order):
    end = order[n + 1][0] if n + 1 < len(order) else REGFILE['REGISTERS']
    FILES[k] = [sname(x) for x in DEC[start:end]]
REGSIZE = {'GPR': 8, 'PGR': 16, 'QGR': 32, 'SFR': 8}

# ---------------------------------------------------------------- semantics
PCODEOPS = set()


def uop(name, args):
    PCODEOPS.add(name)
    return '%s(%s)' % (name, ', '.join(args))


SCOND = {'.dnez': 'l_v != 0', '.deqz': 'l_v == 0', '.dltz': 'l_v s< 0', '.dgez': 'l_v s>= 0',
         '.dlez': 'l_v s<= 0', '.dgtz': 'l_v s> 0', '.odd': '(l_v & 1) != 0', '.even': '(l_v & 1) == 0',
         '.wnez': 'l_v:4 != 0', '.weqz': 'l_v:4 == 0', '.wltz': 'l_v:4 s< 0', '.wgez': 'l_v:4 s>= 0',
         '.wlez': 'l_v:4 s<= 0', '.wgtz': 'l_v:4 s> 0',
         '.nez': 'l_v != 0', '.eqz': 'l_v == 0', '.ltz': 'l_v s< 0', '.gez': 'l_v s>= 0', '.lez': 'l_v s<= 0',
         '.gtz': 'l_v s> 0'}
CMP = {'.ne': '!=', '.eq': '==', '.lt': 's<', '.ge': 's>=', '.le': 's<=', '.gt': 's>',
       '.ltu': '<', '.geu': '>=', '.leu': '<=', '.gtu': '>'}
EXPAND = {'comparison', 'scalarcond', 'simplecond', 'lsucond', 'doscale'}
LOADS = {'lbz': (1, 'z'), 'lbs': (1, 's'), 'lhz': (2, 'z'), 'lhs': (2, 's'), 'lwz': (4, 'z'),
         'lws': (4, 's'), 'ld': (8, ''), 'lq': (16, ''), 'lo': (32, '')}
STORES = {'sb': 1, 'sh': 2, 'sw': 4, 'sd': 8, 'sq': 16, 'so': 32}
SCALE = {1: 0, 2: 1, 4: 2, 8: 3, 16: 4, 32: 5}
BIN64 = {'addd': 'l_a + l_b', 'sbfd': 'l_b - l_a', 'andd': 'l_a & l_b', 'ord': 'l_a | l_b', 'xord': 'l_a ^ l_b',
         'nandd': '~(l_a & l_b)', 'nord': '~(l_a | l_b)', 'nxord': '~(l_a ^ l_b)', 'andnd': '~l_a & l_b', 'ornd': '~l_a | l_b',
         'muld': 'l_a * l_b', 'addx2d': '(l_a << 1) + l_b', 'addx4d': '(l_a << 2) + l_b', 'addx8d': '(l_a << 3) + l_b',
         'addx16d': '(l_a << 4) + l_b', 'sbfx2d': 'l_b - (l_a << 1)', 'sbfx4d': 'l_b - (l_a << 2)',
         'sbfx8d': 'l_b - (l_a << 3)', 'sbfx16d': 'l_b - (l_a << 4)', 'slld': 'l_a << (l_b & 63)',
         'srld': 'l_a >> (l_b & 63)', 'srad': 'l_a s>> (l_b & 63)'}
BIN32 = {'addw': 'l_a + l_b', 'sbfw': 'l_b - l_a', 'andw': 'l_a & l_b', 'orw': 'l_a | l_b', 'xorw': 'l_a ^ l_b',
         'nandw': '~(l_a & l_b)', 'norw': '~(l_a | l_b)', 'nxorw': '~(l_a ^ l_b)', 'andnw': '~l_a & l_b', 'ornw': '~l_a | l_b',
         'mulw': 'l_a * l_b', 'addx2w': '(l_a << 1) + l_b', 'addx4w': '(l_a << 2) + l_b', 'addx8w': '(l_a << 3) + l_b',
         'addx16w': '(l_a << 4) + l_b', 'sbfx2w': 'l_b - (l_a << 1)', 'sbfx4w': 'l_b - (l_a << 2)',
         'sbfx8w': 'l_b - (l_a << 3)', 'sbfx16w': 'l_b - (l_a << 4)', 'sllw': 'l_a << (l_b & 31)',
         'srlw': 'l_a >> (l_b & 31)', 'sraw': 'l_a s>> (l_b & 31)'}
MINMAX = {'maxd': ('s>=', 8), 'mind': ('s<=', 8), 'maxud': ('>=', 8), 'minud': ('<=', 8),
          'maxw': ('s>=', 4), 'minw': ('s<=', 4), 'maxuw': ('>=', 4), 'minuw': ('<=', 4)}
UNARY = {'sxbd': 'sext(l_a:1)', 'sxhd': 'sext(l_a:2)', 'sxwd': 'sext(l_a:4)', 'zxbd': 'zext(l_a:1)',
         'zxhd': 'zext(l_a:2)', 'zxwd': 'zext(l_a:4)', 'negd': '-l_a', 'negw': 'zext(-(l_a:4))', 'notd': '~l_a',
         'notw': 'zext(~(l_a:4))', 'clzd': 'lzcount(l_a)', 'cbsd': 'popcount(l_a)',
         'ctzd': 'popcount((l_a & -l_a) - 1)', 'copyd': 'l_a', 'copyw': 'zext(l_a:4)'}
MAC = {'maddd': ('+', 8), 'msbfd': ('-', 8), 'maddw': ('+', 4), 'msbfw': ('-', 4)}


def semantics(name, fs, ops, mods, slot):
    """p-code for one decoded form: (exec, writeback), or None for a user op.

    ops: [(kind, sleigh operand, regfile or None)] in format order, modifiers
    dropped; mods: the modifier strings that select this constructor."""
    T, B = 'T_' + slot, 'BC_' + slot
    regs = [o[1] for o in ops]
    def load(v):
        return 'local l_a:8 = %s;' % v
    if name == 'goto':
        return '', 'goto %s;' % regs[0]
    if name == 'loopdo':
        # ls/le/lc set up the loop; the loop-back is added at le by the root table
        return '%s = %s;' % (T, regs[0]), 'lc = %s; ls = inst_next; le = &%s;' % (T, regs[1])
    if name == 'call':
        return '', 'ra = inst_next; call %s;' % regs[0]
    if name == 'ret':
        return '', 'return [ra];'
    if name == 'igoto':
        return '%s = %s;' % (T, regs[0]), 'goto [%s];' % T
    if name == 'icall':
        return '%s = %s;' % (T, regs[0]), 'ra = inst_next; call [%s];' % T
    if name == 'cb' and mods and mods[0] in SCOND:
        return 'local l_v:8 = %s; %s = %s;' % (regs[0], B, SCOND[mods[0]]), 'if (%s) goto %s;' % (B, regs[1])
    if name in ('nop',):
        return '', ''
    if name == 'pcrel' and len(ops) == 2:
        return '%s = inst_start + %s;' % (T, regs[1]), '%s = %s;' % (regs[0], T)
    if name in ('get', 'set', 'make', 'copyd') and len(ops) == 2 and ops[0][2] in ('GPR', 'SFR', None) \
            and ops[1][2] in ('GPR', 'SFR', None):
        return '%s = %s;' % (T, regs[1]), '%s = %s;' % (regs[0], T)
    if len(ops) == 3 and all(o[2] in ('GPR', None) for o in ops) and ops[0][2] == 'GPR' and ' = ' in fs:
        a, b = regs[1], regs[2]
        pre = 'local l_a:8 = %s; local l_b:8 = %s; ' % (a, b)
        if name in BIN64:
            return pre + '%s = %s;' % (T, BIN64[name]), '%s = %s;' % (regs[0], T)
        if name in BIN32:
            e = re.sub(r'\bl_b\b', 'l_b4', re.sub(r'\bl_a\b', 'l_a4', BIN32[name]))
            return pre + 'local l_a4:4 = l_a:4; local l_b4:4 = l_b:4; local l_r:4 = %s; %s = zext(l_r);' % (e, T), '%s = %s;' % (regs[0], T)
        if name in MINMAX:
            op, sz = MINMAX[name]
            if sz == 8:
                return pre + '%s = l_b; if (!(l_a %s l_b)) goto <done>; %s = l_a; <done>' % (T, op, T), '%s = %s;' % (regs[0], T)
            return pre + 'local l_a4:4 = l_a:4; local l_b4:4 = l_b:4; %s = zext(l_b4); if (!(l_a4 %s l_b4)) goto <done>; %s = zext(l_a4); <done>' % (T, op, T), '%s = %s;' % (regs[0], T)
        if name in ('compd', 'compw') and mods and mods[0] in CMP:
            if name == 'compd':
                return pre + '%s = zext(l_a %s l_b);' % (T, CMP[mods[0]]), '%s = %s;' % (regs[0], T)
            return pre + 'local l_a4:4 = l_a:4; local l_b4:4 = l_b:4; %s = zext(l_a4 %s l_b4);' % (T, CMP[mods[0]]), '%s = %s;' % (regs[0], T)
        if name in MAC:
            op, sz = MAC[name]
            if sz == 8:
                return pre + '%s = %s %s l_a * l_b;' % (T, regs[0], op), '%s = %s;' % (regs[0], T)
            return pre + 'local l_d:8 = %s; local l_r:4 = l_d:4 %s l_a:4 * l_b:4; %s = zext(l_r);' % (regs[0], op, T), '%s = %s;' % (regs[0], T)
    if name == 'cmoved' and mods and mods[0] in SCOND and len(ops) == 3:
        c, d, v = regs
        return ('local l_v:8 = %s; %s = %s; if (!(%s)) goto <done>; %s = %s; <done>'
                % (c, T, d, SCOND[mods[0]], T, v)), '%s = %s;' % (d, T)
    if name in UNARY and len(ops) == 2 and ops[0][2] == 'GPR' and ops[1][2] == 'GPR':
        return 'local l_a:8 = %s; %s = %s;' % (regs[1], T, UNARY[name]), '%s = %s;' % (regs[0], T)
    if name in ('extfz', 'extfs') and len(ops) == 4:
        d, x, stop, start = regs
        body = 'local l_w:8 = %s - %s + 1; local l_v:8 = %s >> %s; ' % (stop, start, x, start)
        if name == 'extfz':
            body += '%s = l_v & (0xffffffffffffffff >> (64 - l_w));' % T
        else:
            body += '%s = (l_v << (64 - l_w)) s>> (64 - l_w);' % T
        return body, '%s = %s;' % (d, T)
    if name == 'insf' and len(ops) == 4:
        d, x, stop, start = regs
        return ('local l_w:8 = %s - %s + 1; local l_m:8 = (0xffffffffffffffff >> (64 - l_w)) << %s; '
                '%s = (%s & ~l_m) | ((%s << %s) & l_m);' % (stop, start, start, T, d, x, start)), '%s = %s;' % (d, T)
    if name in LOADS:
        sz, ext = LOADS[name]
        tmp = {16: 'TQ_', 32: 'TO_'}.get(sz, 'T_') + slot
        val = '*:%d l_ea' % sz if not ext else '%sext(*:%d l_ea)' % (ext, sz)
        if '?' in fs:
            cnd = [m for m in mods if m in SCOND]
            if not cnd:
                return None
            if len(ops) == 4:
                c, d, off, base = regs
                ea = '%s + %s' % (base, off)
            else:
                c, d, base = regs
                ea = base
            return ('local l_v:8 = %s; local l_ea:8 = %s; %s = %s; if (!(%s)) goto <done>; %s = %s; <done>'
                    % (c, ea, tmp, d, SCOND[cnd[0]], tmp, val)), '%s = %s;' % (d, tmp)
        d, off, base = regs
        sh = (' << %d' % SCALE[sz]) if '.xs' in mods else ''
        return 'local l_ea:8 = %s + (%s%s); %s = %s;' % (base, off, sh, tmp, val), '%s = %s;' % (d, tmp)
    if name in STORES:
        sz = STORES[name]
        def sval(v):
            return v if sz >= 8 else 'l_sv:%d' % sz
        if '?' in fs:
            cnd = [m for m in mods if m in SCOND]
            if not cnd:
                return None
            if len(ops) == 4:
                c, off, base, v = regs
                ea = '%s + %s' % (base, off)
            else:
                c, base, v = regs
                ea = base
            return ('local l_sv:8 = %s; local l_v:8 = %s; if (!(%s)) goto <done>; *:%d (%s) = %s; <done>'
                    % (v, c, SCOND[cnd[0]], sz, ea, sval(v))) if sz < 8 else \
                   ('local l_v:8 = %s; if (!(%s)) goto <done>; *:%d (%s) = %s; <done>'
                    % (c, SCOND[cnd[0]], sz, ea, v)), ''
        off, base, v = regs
        sh = (' << %d' % SCALE[sz]) if '.xs' in mods else ''
        pre = 'local l_sv:8 = %s; ' % v if sz < 8 else ''
        return pre + '*:%d (%s + (%s%s)) = %s;' % (sz, base, off, sh, sval(v)), ''
    return None


def fallback(name, fs, ops, slot):
    """A named user operation over the sources; the first operand is the
    destination when the format assigns to it."""
    nm = 'kvx_' + re.sub(r'\W', '_', name)
    if ops and ' = ' in fs and fs.split('=')[0].strip().endswith('%s') and '[' not in fs.split('=')[0] \
            and '?' not in fs.split('=')[0] and ops[0][0] == 'reg':
        size = REGSIZE.get(ops[0][2], 32)
        tmp = {8: 'T_', 16: 'TQ_', 32: 'TO_'}[size] + slot
        return '%s = %s;' % (tmp, uop(nm, [o[1] for o in ops[1:]])), '%s = %s;' % (ops[0][1], tmp)
    return uop(nm, [o[1] for o in ops]) + ';', ''


# ---------------------------------------------------------------- emission
out = []
w = out.append
SUBTABLES = []
EMITTED = {}


def runs(mask):
    r, b = [], 0
    while b < 32:
        if mask >> b & 1:
            s = b
            while b < 32 and mask >> b & 1:
                b += 1
            r.append((s, b - 1))
        else:
            b += 1
    return r


def bf_constraints(slot, bf, v):
    out = []
    for size, frm, to in bf:
        f = cfield(slot, to // 32, to % 32, to % 32 + size - 1)
        out.append('%s=%d' % (f, (v >> frm) & ((1 << size) - 1)))
    return ' & '.join(out)


def bf_width(bf):
    return max(frm + size for size, frm, to in bf)


def operand(slot, oname):
    """The subtable for operand oname in slot: (name, kind, regfile)."""
    key = slot + '_' + oname
    if key in EMITTED:
        return EMITTED[key]
    od = OPERANDS[oname]
    t = od['type']
    res = None
    if t.startswith('RegClass_'):
        rf = CLASSES.get(t)
        if rf is not None:
            names = [sname(x) for x in DEC[REGFILE[rf]:]]
            for v in range(1 << bf_width(od['bf'])):
                ix = (v << od['shift']) + od['bias']
                if ix < len(names):
                    SUBTABLES.append('%s: "%s" is %s { export %s; }' % (key, names[ix], bf_constraints(slot, od['bf'], v), names[ix]))
            res = (key, 'reg', rf)
    elif t.startswith('Modifier_'):
        res = ('MOD', 'mod', t[len('Modifier_%s_' % CORE):])
    else:
        parts, pat = [], []
        for size, frm, to in od['bf']:
            f = cfield(slot, to // 32, to % 32, to % 32 + size - 1)
            pat.append(f)
            parts.append('(%s << %d)' % (f, frm))
        expr = ' | '.join(parts)
        if od['signed'] and od['width'] < 64:
            sb = 1 << (od['width'] - 1)
            expr = '((%s) $xor 0x%x) - 0x%x' % (expr, sb, sb)
        if od['shift']:
            expr = '(%s) << %d' % (expr, od['shift'])
        if od['bias']:
            expr = '(%s) + %d' % (expr, od['bias'])
        if 'pcrel' in t:
            SUBTABLES.append('%s: dest is %s [ dest = inst_start + (%s); ] { export *[ram]:8 dest; }'
                             % (key, ' & '.join(pat), expr))
            res = (key, 'pcrel', None)
        else:
            SUBTABLES.append('%s: val is %s [ val = %s; ] { export *[const]:8 val; }' % (key, ' & '.join(pat), expr))
            res = (key, 'imm', None)
    EMITTED[key] = res
    return res


MODTABLES = {}


def modtable(slot, mname, bf):
    key = '%s_m_%s_%s' % (slot, mname, '_'.join('%d_%d' % (t, s) for s, fr, t in bf))
    if key not in MODTABLES:
        rows = []
        for v, s in enumerate(MODS[mname][:1 << bf_width(bf)]):
            c = bf_constraints(slot, bf, v)
            if s == '.' or s == '':
                rows.append('%s: is %s { }' % (key, c))
            else:
                rows.append('%s: "%s" is %s { }' % (key, s, c))
        MODTABLES[key] = rows
    return key


STEER_SLOTS = {3: XSLOTS, 2: ['mau'], 1: ['lsu'], 0: ['bcu', 'tca']}


def shadowed(e, earlier):
    """binutils takes the first table entry that matches, so an entry every one
    of whose encodings an earlier entry also matches is never printed."""
    for p in earlier:
        if p['wc'] != e['wc']:
            continue
        if all((m2 & m1) == m2 and (o1 & m2) == o2 for (o1, m1, _), (o2, m2, _) in zip(e['cw'], p['cw'])):
            return True
    return False


EARLIER = {s: [] for s in SLOTS}
CONS = {s: [] for s in SLOTS}
seen = {s: set() for s in SLOTS}
stats = {'forms': 0, 'pcode': 0, 'userop': 0, 'skipped': set()}
for e in OPS:
    if any('MODE64' not in c[2] for c in e['cw']):
        continue
    steer = (e['cw'][0][0] >> 29) & 3
    for slot in STEER_SLOTS[steer]:
        if slot in ('bcu', 'tca') and e['wc'] != 1:
            continue
        if shadowed(e, EARLIER[slot]):
            continue
        cons = []
        for i, (opc, mask, _) in enumerate(e['cw']):
            for lo, hi in runs(mask):
                cons.append('%s=0x%x' % (cfield(slot, i, lo, hi), (opc >> lo) & ((1 << (hi - lo + 1)) - 1)))
        if slot in XSLOTS:
            cons.append('%sxc=%d' % (slot, e['wc'] - 1))
        opers, ok = [], True
        for oname in e['fmt']:
            od = OPERANDS[oname]
            if od['type'].startswith('Modifier_'):
                mname = od['type'][len('Modifier_%s_' % CORE):]
                opers.append(('mod', od['bf'], mname, bf_width(od['bf'])))
            else:
                r = operand(slot, oname)
                if r is None:
                    ok = False
                    break
                opers.append((r[1], r[0], r[2], 0))
        if not ok:
            stats['skipped'].add(e['op'])
            continue
        if all(len(MODS[o[2]]) >= 1 << o[3] for o in opers if o[0] == 'mod'):
            EARLIER[slot].append(e)
        # expand the modifiers p-code depends on; the rest are display subtables
        combos = [[]]
        for k, (kind, f, mname, *_r) in enumerate(opers):
            if kind == 'mod' and mname in EXPAND:
                combos = [c + [(k, v, s)] for c in combos for v, s in enumerate(MODS[mname][:1 << opers[k][3]])]
        for combo in combos:
            fixed = {k: (v, s) for k, v, s in combo}
            extra = [bf_constraints(slot, opers[k][1], v) for k, (v, s) in fixed.items()]
            key = ' & '.join(cons + extra)
            if key in seen[slot]:
                continue
            seen[slot].add(key)
            pieces = re.split(r'(%s)', e['fs'])
            head, tail, first, oi = '"%s"' % e['op'], [], True, 0
            patops, mods = [], []
            for p in pieces:
                if p == '%s':
                    kind, f, mname = opers[oi][:3]
                    if kind == 'mod':
                        if oi in fixed:
                            s = fixed[oi][1]
                            mods.append(s)
                            if s not in ('.', ''):
                                if first:
                                    head += '^"%s"' % s
                                else:
                                    tail.append('"%s"' % s)
                        else:
                            mt = modtable(slot, mname, f)
                            patops.append(mt)
                            if first:
                                head += '^' + mt
                            else:
                                tail.append(mt)
                    else:
                        first = False
                        tail.append(f)
                        patops.append(f)
                    oi += 1
                elif p:
                    if first and not p.startswith(' '):
                        head += '^"%s"' % p
                    else:
                        first = False
                        t = p.strip()
                        if t:
                            tail.append('"%s"' % t)
            disp = head + (' ' + ' '.join(tail) if tail else '')
            plain = [(k, f, r) for k, f, r, _z in opers if k != 'mod']
            sem = semantics(e['op'], e['fs'], plain, mods, slot)
            if sem is None:
                sem = fallback(e['op'], e['fs'], plain, slot)
                stats['userop'] += 1
            else:
                stats['pcode'] += 1
            stats['forms'] += 1
            pat = ' & '.join([key] + list(dict.fromkeys(patops)))
            act = ''
            if e['op'] == 'loopdo':
                f = '%s_0_6_22' % slot
                act = ('[ lpend = 1; lpdist = ((((%s $xor 0x10000) - 0x10000) << 2)) - ((nsyl + 1) << 2); '
                       'globalset(%s_pcrel17, lpend); globalset(%s_pcrel17, lpdist); ] ' % (f, slot, slot))
            CONS[slot].append((disp, pat, sem[0], sem[1], act))

LANGID = {'kv3_v1': 'kv3-1', 'kv3_v2': 'kv3-2', 'kv4_v1': 'kv4-1'}[CORE]
w('# Kalray KVX %s (64-bit mode), little endian.' % LANGID)
w('# Generated by tools/gen_kvx_sleigh.py; edit the generator, not this file.')
w('')
w('define endian=little;')
w('define alignment=4;')
w('define space ram type=ram_space size=8 default;')
w('define space register type=register_space size=4;')
w('define register offset=0x0 size=8 [ %s ];' % ' '.join(FILES['GPR']))
w('define register offset=0x0 size=16 [ %s ];' % ' '.join(FILES['PGR']))
w('define register offset=0x0 size=32 [ %s ];' % ' '.join(FILES['QGR']))
w('define register offset=0x1000 size=8 [ %s ];' % ' '.join(FILES['SFR']))
off = 0x2000
for k in sorted(FILES):
    if k in REGSIZE:
        continue
    w('define register offset=0x%x size=32 [ %s ];' % (off, ' '.join(FILES[k])))
    off += 32 * len(FILES[k])
off = (off + 0xfff) & ~0xfff
w('define register offset=0x%x size=8 [ %s ];' % (off, ' '.join('T_' + s for s in SLOTS)))
w('define register offset=0x%x size=16 [ %s ];' % (off + 0x100, ' '.join('TQ_' + s for s in SLOTS)))
w('define register offset=0x%x size=32 [ %s ];' % (off + 0x200, ' '.join('TO_' + s for s in SLOTS)))
w('define register offset=0x%x size=1 [ %s ];' % (off + 0x400, ' '.join('BC_' + s for s in SLOTS)))
w('define register offset=0x%x size=64 [ contextreg ];' % (off + 0x500))
w('')
w('define context contextreg')
for s in SLOTS:
    w('  %s = (%d,%d)' % (wordfield(s, 0), *CTX[wordfield(s, 0)]))
for s in XSLOTS:
    for i in (1, 2):
        w('  %s = (%d,%d)' % (wordfield(s, i), *CTX[wordfield(s, i)]))
for n, (a, b) in FLAGS.items():
    w('  %s = (%d,%d)' % (n, a, b))
for n, (a, b) in NOFLOW.items():
    w('  %s = (%d,%d) noflow' % (n, a, b))
for n, (a, b) in sorted(CTX.items()):
    if n.endswith('_0_31'):
        continue
    w('  %s = (%d,%d)' % (n, a, b))
w(';')
w('')
w('define token syl(32)')
w('  par = (31,31)')
w('  steer = (29,30)')
w('  ext = (27,28)')
w('  major = (24,28)')
w('  word = (0,31)')
w(';')
w('')
for nm in sorted(PCODEOPS | {'invalid_syllable'}):
    w('define pcodeop %s;' % nm)
w('')
w('\n'.join(SUBTABLES))
for rows in MODTABLES.values():
    w('\n'.join(rows))
w('')
for s in SLOTS:
    tbl = 'D_' + s
    for disp, pat, ex, wb, act in CONS[s]:
        w('%s: %s is %s %s{ %s }' % (tbl, disp, pat, act, ex))
    w('%s: "?invalid" is epsilon { invalid_syllable(); }' % tbl)
    for disp, pat, ex, wb, act in CONS[s]:
        w('W_%s: is %s { %s }' % (s, pat, wb))
    w('W_%s: is epsilon { }' % s)
    w('')
# Emission chain: every slot's exec p-code first, then the writebacks in
# reverse slot order, so the BCU branch comes last.
for k, s in reversed(list(enumerate(SLOTS))):
    nxt = 'E_' + SLOTS[k + 1] if k + 1 < len(SLOTS) else None
    if nxt:
        w('E_%s: D_%s " ; " %s is %sv=1 & D_%s & W_%s & %s { build D_%s; build %s; build W_%s; }'
          % (s, s, nxt, s, s, s, nxt, s, nxt, s))
        w('E_%s: %s is %sv=0 & %s { build %s; }' % (s, nxt, s, nxt, nxt))
    else:
        w('E_%s: D_%s is %sv=1 & D_%s & W_%s { build D_%s; build W_%s; }' % (s, s, s, s, s, s, s))
        w('E_%s: is %sv=0 { }' % (s, s))
w('')
# Syllable chain: each syllable goes to the buffer of the issue slot it occupies.
def chain(cond, action):
    w('B: B is par=1 & %s ; B [ %s nsyl = nsyl + 1; ] { build B; }' % (cond, action))
    w('B: E_bcu is par=0 & %s & E_bcu [ %s ] { build E_bcu; }' % (cond, action))
chain('steer=0 & notfirst=0', 'bcu_0_0_31 = word; bcuv = 1; notfirst = 1;')
chain('steer=0 & notfirst=1 & nsyl=1 & bcuv=1 & tcav=0 & major>1 & major<8', 'tca_0_0_31 = word; tcav = 1;')
for e, s in enumerate(XSLOTS):
    for xc in (0, 1):
        tgt = wordfield(s, xc + 1)
        cond = 'steer=0 & notfirst=1 & ext=%d & %sxc=%d' % (e, s, xc)
        if xc == 0:
            cond += ' & (nsyl!=1 | bcuv=0 | tcav=1 | major<2 | major>7)'
        chain(cond, '%s = word; %sxc = %d;' % (tgt, s, xc + 1))
alu = [('alu0', 'alu0v=0'), ('alu1', 'alu0v=1 & alu1v=0'), ('mau', 'alu0v=1 & alu1v=1 & mauv=0'),
       ('lsu', 'alu0v=1 & alu1v=1 & mauv=1 & lsuv=0')]
for s, c in alu:
    chain('steer=3 & %s' % c, '%s = word; %sv = 1; notfirst = 1;' % (wordfield(s, 0), s))
chain('steer=2 & mauv=0', '%s = word; mauv = 1; notfirst = 1;' % wordfield('mau', 0))
chain('steer=1 & lsuv=0', '%s = word; lsuv = 1; notfirst = 1;' % wordfield('lsu', 0))
w('')
# Root: the hardware-loop back edge. Reaching le with lc > 1 counts down and restarts the body
# at ls before the bundle at le runs, so the decompiler sees an ordinary loop.
w('LpStart: loc is lpdist [ loc = inst_start - lpdist; ] { export *[ram]:8 loc; }')
w(':^B is lpend=0 & B { build B; }')
w(':^B is lpend=1 & LpStart & B { lc = lc - 1; if (lc == 0) goto <body>; goto LpStart; <body> build B; }')
print('\n'.join(out))
sys.stderr.write('forms %d pcode %d userop %d skipped %s\n' % (stats['forms'], stats['pcode'], stats['userop'],
                                                             sorted(stats['skipped'])))