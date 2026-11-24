#!/usr/bin/env python3
"""Generate the NXP StarCore SC140 SLEIGH module from the SC140 DSP Core Reference Manual.

Input: the text of the manual (MNSC140CORE, revision 4.1, September 2005) as
'pdftotext -layout MNSC140CORE.pdf MNSC140CORE.txt' (poppler) prints it.  The generator
reads the instruction encodings (Appendix A, 'Instruction Formats and Opcodes') and the
operand field tables ('Instruction Fields'); the VLES model and the p-code are written here.
No text of the manual is copied into the output.

usage: gen_sc140_sleigh.py MNSC140CORE.txt > specs/Ghidra/Processors/StarCore/data/languages/sc140.slaspec
"""
import re
import sys

TEXT = open(sys.argv[1]).read().split('\n')
TOK = re.compile(r'^(?:[01*]|[A-Za-z][A-Za-z]?\d{0,2})$')
START = next(k for k, l in enumerate(TEXT) if re.match(r'^\s*A\.2\s+Instructions\s*$', l) and k > 1000)


def bits_of(s):
    t = s.split()
    t = ['0' if x == '*0' else x for x in t]
    if len(t) == 16 and all(TOK.match(x) for x in t):
        return t
    return None


def parse_rows():
    rows = []
    i = START
    while i < len(TEXT):
        if 'Instruction Formats and Opcodes' in TEXT[i]:
            j = i + 1
            while j < len(TEXT) and not re.match(r'^\s*Instruction Fields\s*$', TEXT[j]) \
                    and 'Assembler Syntax' not in TEXT[j]:
                m = re.match(r'^(\S.*?)\s{2,}(\d)\s+(\d+(?:[-/]\d+)*)\s+(\d)\s+(.*)$', TEXT[j])
                if m and not TEXT[j].startswith('Instruction'):
                    words = [bits_of(m.group(5))]
                    syn = [m.group(1).strip()]
                    k = j + 1
                    while k < len(TEXT) and len(words) < int(m.group(2)):
                        s = TEXT[k]
                        if not s.strip() or s.startswith('SC140') or s.startswith('A-') or s.startswith('\f') \
                                or re.match(r'^\s+[A-Z.0-9]+\s*$', s) or re.match(r'^\s*15\s', s):
                            k += 1
                            continue
                        w = bits_of(s)
                        if w is None:
                            mm = re.match(r'^(\S.*?)\s{2,}(.*)$', s)
                            if mm and bits_of(mm.group(2)):
                                syn.append(mm.group(1).strip())
                                w = bits_of(mm.group(2))
                        if w is None:
                            break
                        words.append(w)
                        k += 1
                    while k < len(TEXT) and re.match(r'^[A-Z][A-Z0-9.]+\s\S+\s*$', TEXT[k]) and len(syn) < 3:
                        syn.append(TEXT[k].strip())
                        k += 1
                    rows.append(dict(line=j, syntax=syn, nw=int(m.group(2)), type=int(m.group(4)), words=words))
                    j = k
                    continue
                j += 1
            i = j
        i += 1
    return [r for r in rows if None not in r['words'] and len(r['words']) == r['nw']]


def parse_titles():
    titles = []
    for k in range(START, len(TEXT)):
        m = re.match(r'^([A-Z][A-Z0-9.]*)\s{2,}(.*?)\s{2,}([A-Z][A-Z0-9.]*)\s*$', TEXT[k])
        if m and m.group(1) == m.group(3):
            t = m.group(2) + ' ' + TEXT[k + 1].strip()
            u = re.search(r'\((DALU|AGU|BMU|[^)]*)\)', t)
            titles.append((k, m.group(1), u.group(1) if u else ''))
    return titles


def parse_field_tables(a, b):
    out = []
    cur = None
    for k in range(a, b):
        l = TEXT[k]
        m = re.match(r'^(\S+(?:\s?,\s?\S+)*)\s{2,}(~?[a-zA-Z01]{1,24})\s{2,}(.*)$', l)
        if m and not l.startswith('SC140') and not l.startswith('Note') and not l.startswith('Register'):
            cur = dict(names=m.group(1).replace(' ', ''), letters=m.group(2), desc=m.group(3).strip(), table={})
            out.append(cur)
        elif re.match(r'^\s{4,}[01]', l) and cur is not None:
            for c, v in re.findall(r'(?<!\S)([01]+)\s+(\S+)', l):
                cur['table'].setdefault(c, v)
    return out


ROWS = parse_rows()
TITLES = parse_titles()
SECTIONS = []
for n, (k, name, unit) in enumerate(TITLES):
    end = TITLES[n + 1][0] if n + 1 < len(TITLES) else len(TEXT)
    SECTIONS.append(dict(name=name, unit=unit, start=k, end=end, fields=parse_field_tables(k, end)))
GLOBAL = {}
for s in SECTIONS:
    for f in s['fields']:
        GLOBAL.setdefault((f['names'], f['letters']), f)


def section_of(line):
    for s in SECTIONS:
        if s['start'] <= line < s['end']:
            return s
    return None



# ---------------------------------------------------------------- operand mapping

def letter_positions(words):
    """letter -> list of (word, bit) in field order (MSB first)."""
    pos = {}
    idx = {}
    for wi, w in enumerate(words):
        for k, t in enumerate(w):
            bit = 15 - k
            if t in '01*':
                continue
            c = t[0]
            if len(t) > 1 and t[1:].isdigit():
                idx.setdefault(c, []).append((int(t[1:]), wi, bit))
            else:
                pos.setdefault(c, []).append((wi, bit))
    for c, lst in idx.items():
        lst.sort(reverse=True)
        pos.setdefault(c, [])
        pos[c] = [(wi, b) for _, wi, b in lst] + pos[c]
    return pos


def field_bits(fdef, pos, used):
    """The bit list (MSB first; ints are constant bits) for a field definition, or None."""
    letters = fdef['letters'].lstrip('~')
    need = {}
    for c in letters:
        if c not in '01':
            need[c] = need.get(c, 0) + 1
    for c, n in need.items():
        if len(pos.get(c, [])) - used.get(c, 0) < n:
            return None
    out = []
    take = dict(used)
    for c in letters:
        if c in '01':
            out.append(int(c))
        else:
            i = take.get(c, 0)
            out.append(pos[c][i])
            take[c] = i + 1
    return out, take


def operands_of(syntax):
    s = syntax.split(None, 1)
    if len(s) < 2:
        return []
    return [o for o in re.split(r',(?![^()]*\))', s[1])]


# ---------------------------------------------------------------- manual fixups
# Definitions the table parser misses (multi-line or unusual layout).
EXTRA_DEFS = [
    dict(names='a32', letters='a' * 16 + 'A' * 16, desc='32-bit absolute long address', table={}),
    dict(names='#s32', letters='I' * 16 + 'i' * 16, desc='32-bit signed immediate data', table={}),
    dict(names='#u32', letters='I' * 16 + 'i' * 16, desc='32-bit unsigned immediate data', table={}),
    dict(names='Da.E:Db.E', letters='ff', desc='Data Register Extension Pair',
         table={'00': 'D0.E:D1.E', '01': 'D2.E:D3.E', '10': 'D4.E:D5.E', '11': 'D6.E:D7.E'}),
]
SYNTAX_FIX = {'MOVES.4F': 'MOVES.4F Da:Db:Dc:Dd,(EA)', 'MOVE.4F(EA),Da:Db:Dc:Dd': 'MOVE.4F (EA),Da:Db:Dc:Dd',
              'VSL.4W': 'VSL.4W D2:D6:D1:D3,(Rn)+N0', 'VSL.4F': 'VSL.4F D2:D6:D1:D3,(Rn)+N0'}
for r in ROWS:
    r['syntax'] = [SYNTAX_FIX.get(s, s) for s in r['syntax']]
    if r['syntax'][0] == 'MOVE.L #s32,C4' and len(r['words']) == 1:
        r['words'] += [list('001' + 'i' * 13), list('10' + 'I' * 14)]
        r['nw'] = 3
for f in EXTRA_DEFS:
    GLOBAL[(f['names'], f['letters'])] = f
# the effective address field implies the Rn field it names
RN = GLOBAL.get(('Rn', 'RRR'))


def map_row2(row, syntax, sec):
    pos = letter_positions(row['words'])
    sect = (sec['fields'] if sec else [])
    pool = sect + EXTRA_DEFS + list(GLOBAL.values())
    used, picked = {}, []
    ops = [o.strip() for o in operands_of(syntax)]
    def present(nm):
        if nm in ('EA', 'ea'):
            return '(%s)' % nm in syntax
        if nm == 'displacement':
            return 'label' in syntax
        if nm == 'a32' and re.search(r'(?<![<>])label', syntax):
            return True
        if nm == 'k':
            return '±' in syntax
        if ',' in nm or ':' in nm:
            return nm in syntax.split(None, 1)[-1].replace(' ', '')
        if any(o.startswith(nm + '.') or o.lstrip('±').startswith(nm + '.') for o in ops):
            return True
        for o in ops:
            if o == nm or o.replace('±', '') == nm or ('(' in o and re.search(r'(?<![A-Za-z0-9])%s(?![A-Za-z0-9])' % re.escape(nm.lstrip('#')), o)):
                return True
            if nm.startswith('#') and o == nm:
                return True
        return nm in ops
    for f in pool:
        nm = f['names']
        if not present(nm):
            continue
        if any(p[0]['names'] == nm for p in picked):
            continue
        r = field_bits(f, pos, used)
        if r is None:
            continue
        bits, take = r
        letters = set(c for c in f['letters'] if c not in '01~')
        if any(take.get(c, 0) != len(pos.get(c, [])) for c in letters):
            continue
        used = take
        picked.append((f, bits))
        if nm in ('EA', 'ea') and 'R' in pos and len(pos['R']) - used.get('R', 0) == 3:
            r2 = field_bits(RN, pos, used)
            used = r2[1]
            picked.append((dict(RN, names='Rn@ea'), r2[0]))
    left = {c: len(v) - used.get(c, 0) for c, v in pos.items() if len(v) - used.get(c, 0)}
    return picked, left, pos, used



# ---------------------------------------------------------------- registers
DREGS = ['D%d' % i for i in range(16)]
RREGS = ['R%d' % i for i in range(16)]
CTRL32 = ['N0', 'N1', 'N2', 'N3', 'M0', 'M1', 'M2', 'M3'] + ['B%d' % i for i in range(8)] + \
    ['SP', 'NSP', 'ESP', 'OSP', 'PC', 'SR', 'EMR', 'VBA', 'MCTL', 'SA0', 'SA1', 'SA2', 'SA3', 'LC0', 'LC1', 'LC2', 'LC3']
SLOTS = 6


def reg_name(v):
    v = v.replace('–', '-')
    if v in ('-', '—', ''):
        return None
    m = re.match(r'^(D\d+|R\d+)\.([ELH])$', v)
    if m:
        return m.group(1) + m.group(2)
    return v


def high(r):
    m = re.match(r'^([DR])(\d+)([ELH]?)$', r)
    if m and int(m.group(2)) < 8:
        return '%s%d%s' % (m.group(1), int(m.group(2)) + 8, m.group(3))
    return r


# ---------------------------------------------------------------- emission state
OUT = []
w = OUT.append
TOKFIELDS = {}     # (word, lo, hi) -> name
SUBT = []
SUBT_DONE = set()
PCODEOPS = {'invalid_word'}


def tf(word, lo, hi):
    k = (word, lo, hi)
    if k not in TOKFIELDS:
        TOKFIELDS[k] = 'w%d_%d_%d' % k
    return TOKFIELDS[k]


def runs(bits):
    """bits: list of (word, bit) MSB first -> list of (word, lo, hi, shift) chunks."""
    out = []
    n = len(bits)
    i = 0
    while i < n:
        wd, b = bits[i]
        j = i
        while j + 1 < n and bits[j + 1][0] == wd and bits[j + 1][1] == bits[j][1] - 1:
            j += 1
        lo = bits[j][1]
        hi = b
        shift = n - 1 - j
        out.append((wd, lo, hi, shift))
        i = j + 1
    return out


def uop(name, args):
    PCODEOPS.add(name)
    return '%s(%s)' % (name, ', '.join(args))


ROLEBIT = {'E1': 'x1', 'E2': 'x2', 'E3': 'x3', 'H': 'x1', 'h': 'x2'}


def rsize(r):
    if re.match(r'^D\d+$', r):
        return 8
    if re.match(r'^D\d+E$', r):
        return 1
    if re.match(r'^[DR]\d+[LH]$', r):
        return 2
    return 4


def table_sizes(fdef, nbits, idx):
    out = set()
    for code, val in fdef['table'].items():
        if len(code) != nbits:
            continue
        parts = re.split(r'[,:]', val)
        if idx is not None:
            if idx >= len(parts):
                continue
            parts = [parts[idx]]
        elif len(parts) > 1:
            continue
        r = reg_name(parts[0])
        if r and re.match(r'^[A-Z][A-Z0-9]*$', r):
            out.add(rsize(r))
    return sorted(out)



def regtable(fdef, bits, role, idx, size=None):
    """Subtable for a register field; 'idx' selects one register of a pair (or None)."""
    chunks = runs(bits)
    key = 'r_%s_%s_%s_%s_%s_%s' % (re.sub(r'\W', '', fdef['names']), fdef['letters'], role or 'n',
                                   idx if idx is not None else 'x', size or 'a',
                                   '_'.join('%d%d%d' % (c[0], c[1], c[2]) for c in chunks))
    if key in SUBT_DONE:
        return key
    if len(set(c[0] for c in chunks)) != 1:
        return None
    SUBT_DONE.add(key)
    wd = chunks[0][0]
    for code, val in sorted(fdef['table'].items()):
        if len(code) != len(bits):
            continue
        parts = re.split(r'[,:]', val)
        if idx is not None:
            if idx >= len(parts):
                continue
            parts = [parts[idx]]
        elif len(parts) > 1:
            continue
        r = reg_name(parts[0])
        if r is None or not re.match(r'^[A-Z][A-Z0-9]*$', r):
            continue
        if size is not None and rsize(r) != size:
            continue
        v = int(code, 2)
        c = ' & '.join('%s=%d' % (tf(cw, lo, hi), (v >> sh) & ((1 << (hi - lo + 1)) - 1)) for cw, lo, hi, sh in chunks)
        if role in ROLEBIT and re.match(r'^[DR]\d[LHE]?$', r):
            SUBT.append((wd, '%s: "%s" is %s & %s=0 { export %s; }' % (key, r, c, ROLEBIT[role], r)))
            SUBT.append((wd, '%s: "%s" is %s & %s=1 { export %s; }' % (key, high(r), c, ROLEBIT[role], high(r))))
        else:
            SUBT.append((wd, '%s: "%s" is %s { export %s; }' % (key, r, c, r)))
    return key


ROLEBIT = {'E1': 'x1', 'E2': 'x2', 'E3': 'x3', 'H': 'x1', 'h': 'x2'}
EA_TEXT = {'(Rn)+': 'post_inc', '(Rn)–': 'post_dec', '(Rn)-': 'post_dec', '(Rn+N0)': 'idx_n0', '(Rn)': 'plain',
           '(Rn)+N0': 'post_n0', '(Rn)+N1': 'post_n1', '(Rn)+N2': 'post_n2', '(Rn)+N3': 'post_n3'}


def eatable(fdef, bits, rnkey, size):
    chunks = runs(bits)
    key = 'ea_%s_%d_%s_%s' % (fdef['letters'], size, '_'.join('%d%d%d' % (c[0], c[1], c[2]) for c in chunks), rnkey)
    if key in SUBT_DONE:
        return key
    SUBT_DONE.add(key)
    wd = chunks[0][0]
    for code, val in sorted(fdef['table'].items()):
        mode = EA_TEXT.get(val)
        if mode is None or len(code) != len(bits):
            continue
        v = int(code, 2)
        c = ' & '.join('%s=%d' % (tf(cw, lo, hi), (v >> sh) & ((1 << (hi - lo + 1)) - 1)) for cw, lo, hi, sh in chunks)
        disp = {'post_inc': '"("^%s^")+"', 'post_dec': '"("^%s^")-"', 'idx_n0': '"("^%s^"+N0)"', 'plain': '"("^%s^")"',
                'post_n0': '"("^%s^")+N0"', 'post_n1': '"("^%s^")+N1"', 'post_n2': '"("^%s^")+N2"',
                'post_n3': '"("^%s^")+N3"'}[mode] % rnkey
        if mode == 'post_inc':
            sem = 'local l_a:4 = %s; %s = %s + %d; export *[ram]:%d l_a;' % (rnkey, rnkey, rnkey, size, size)
        elif mode == 'post_dec':
            sem = 'local l_a:4 = %s; %s = %s - %d; export *[ram]:%d l_a;' % (rnkey, rnkey, rnkey, size, size)
        elif mode == 'idx_n0':
            sem = 'local l_a:4 = %s + N0; export *[ram]:%d l_a;' % (rnkey, size)
        elif mode == 'plain':
            sem = 'export *[ram]:%d %s;' % (size, rnkey)
        else:
            sem = 'local l_a:4 = %s; %s = %s + N%s; export *[ram]:%d l_a;' % (rnkey, rnkey, rnkey, mode[-1], size)
        SUBT.append((wd, '%s: %s is %s & %s { %s }' % (key, disp, c, rnkey, sem)))
        SUBT.append((wd, 'q%s: is %s & %s { }' % (key, c, rnkey)))
    return key


def sizeof(mn):
    m = re.search(r'\.(B|W|L|F|2W|2F|2L|4W|4F)$', mn)
    return {'B': 1, 'W': 2, 'F': 2, 'L': 4, '2W': 4, '2F': 4, '2L': 8, '4W': 8, '4F': 8}.get(m.group(1) if m else '', 2)


PRED_TABLE = 0
for _ccc, (_even, _odd) in {0: (0, 0), 1: (1, 2), 2: (1, 1), 3: (2, 2), 4: (0, 0), 5: (0, 0), 6: (1, 0), 7: (2, 0)}.items():
    PRED_TABLE |= _even << (2 * (2 * _ccc)) | _odd << (2 * (2 * _ccc + 1))


def is_mem(op):
    return op.startswith('(')


INSTR = []
EXPR = {}
SKIPPED = []
STATS = {'pcode': 0, 'userop': 0}


def emit_row(row, syntax, sec):
    unit = sec['unit'] if sec else ''
    agu = unit in ('AGU', 'BMU')
    syntax = re.sub(r'\s*\(D[a-z] (even|odd)\)', '', syntax)
    picked, left, pos, used = map_row2(row, syntax, sec)
    wbit = left.pop('w', 0)
    left.pop('k', None)
    if left:
        SKIPPED.append((syntax, left))
        return
    mn = syntax.split()[0]
    ops = [o.strip() for o in operands_of(syntax)]
    cons = []
    for wi, wd in enumerate(row['words']):
        k = 0
        while k < 16:
            t = wd[k]
            if t in '01' or (t == 'w' and wbit):
                j = k
                val = ''
                while j < 16 and (wd[j] in '01' or (wd[j] == 'w' and wbit)):
                    val += ('1' if (ops and is_mem(ops[0])) else '0') if wd[j] == 'w' else wd[j]
                    j += 1
                cons.append((wi, '%s=0x%x' % (tf(wi, 15 - (j - 1), 15 - k), int(val, 2))))
                k = j
            else:
                k += 1
    star = None
    for k, t in enumerate(row['words'][0]):
        if t == '*':
            star = tf(0, 15 - k, 15 - k)
    flat_ops = []
    for o in ops:
        flat_ops += re.split(r'[,:]', o) if re.match(r'^[±]?D[a-z](\.E)?([,:]D[a-z](\.E)?)+$', o) else [o]
    nops = len(flat_ops)
    def role_of(opname):
        if agu:
            return 'H' if re.match(r'^(Rn|Rx|EA|ea)$', opname) else 'h'
        if unit != 'DALU':
            return None
        names = [x.lstrip('±').split('.')[0] for x in flat_ops]
        if opname not in names:
            return None
        i = names.index(opname)
        if nops >= 3:
            return ['E2', 'E1', 'E3', 'E3'][min(i, 3)]
        if nops == 2:
            return ['E1', 'E3'][i]
        return 'E3'
    # register operands and the sizes each can take
    regops = []
    for fdef, bits in picked:
        nm = fdef['names']
        if nm in ('EA', 'ea', 'Rn@ea') or not fdef['table'] or nm.startswith('#') or nm == 'k':
            continue
        names = re.split(r'[,:]', nm)
        for i, sub in enumerate(names):
            ix = i if len(names) > 1 else None
            regops.append((fdef, bits, sub, ix, table_sizes(fdef, len(bits), ix)))
    combos = [[]]
    for ro in regops:
        if not ro[4]:
            SKIPPED.append((syntax, 'no registers'))
            return
        combos = [c + [s] for c in combos for s in ro[4]]
    for combo in combos:
        emit_form(row, syntax, sec, mn, ops, picked, regops, combo, cons, star, unit, agu, role_of)


DKEYS = set()


def emit_form(row, syntax, sec, mn, ops, picked, regops, combo, cons, star, unit, agu, role_of):
    fsz = {}
    for (fdef, bits, sub, ix, sizes), size in zip(regops, combo):
        fsz.setdefault(tuple(b for b in bits if not isinstance(b, int)), set()).add(size)
    dkey = (tuple(sorted(c for _, c in cons)), tuple(sorted(tuple(b for b in bits if not isinstance(b, int))
                                                         for f, bits in picked)),
            tuple(sorted((k, tuple(sorted(v))) for k, v in fsz.items())))
    if dkey in DKEYS:
        return
    DKEYS.add(dkey)
    subst, semv, actions, patops = {}, {}, [], {}
    rnkey = None
    for fdef, bits in picked:
        if fdef['names'] == 'Rn@ea':
            rnkey = regtable(RN, bits, 'H' if agu else None, None)
            patops.setdefault(bits[0][0], []).append(rnkey)
    pairs = {}
    for (fdef, bits, sub, ix, sizes), size in zip(regops, combo):
        key = regtable(fdef, bits, role_of(sub.split('.')[0]), ix, size)
        if key is None:
            SKIPPED.append((syntax, 'reg'))
            return
        semv[sub] = (key, size)
        patops.setdefault(bits[0][0], []).append(key)
        pairs.setdefault(fdef['names'], []).append(key)
    queues = {}
    for nm, keys in pairs.items():
        sep = ':' if ':' in nm else ','
        toks = []
        for i, kk in enumerate(keys):
            if i:
                toks.append('"%s"' % sep)
            toks.append(kk)
        subst[nm] = toks
        comps = re.split(r'[,:]', nm)
        if len(comps) > 1:
            for c, kk in zip(comps, keys):
                queues.setdefault(c, []).append(kk)
    for fdef, bits in picked:
        nm = fdef['names']
        if nm == 'Rn@ea' or (fdef['table'] and not nm.startswith('#') and nm != 'k' and nm not in ('EA', 'ea')):
            continue
        if nm in ('EA', 'ea'):
            key = eatable(fdef, bits, rnkey, sizeof(mn))
            patops.setdefault(bits[0][0], []).append(key)
            subst['(%s)' % nm] = [key]
            semv[nm] = (key, sizeof(mn))
            continue
        n = len(bits)
        parts = []
        k = 0
        while k < n:
            b = bits[k]
            if isinstance(b, int):
                if b:
                    parts.append('(1 << %d)' % (n - 1 - k))
                k += 1
                continue
            j = k
            while j + 1 < n and not isinstance(bits[j + 1], int) and bits[j + 1][0] == b[0] and bits[j + 1][1] == bits[j][1] - 1:
                j += 1
            parts.append('(%s << %d)' % (tf(b[0], bits[j][1], b[1]), n - 1 - j))
            k = j + 1
        expr = ' | '.join(parts) if parts else '0'
        signed = bool(re.match(r'^(#?s\d|displacement|sa\d)', nm)) or ('signed' in fdef['desc'] and 'unsigned' not in fdef['desc'])
        if fdef['letters'].startswith('~'):
            expr = '(%s) $xor 0x%x' % (expr, (1 << n) - 1)
        if signed:
            expr = '((%s) $xor 0x%x) - 0x%x' % (expr, 1 << (n - 1), 1 << (n - 1))
        sym = 'v_' + re.sub(r'\W', '', nm)
        if nm == 'displacement':
            EXPR[sym] = 'inst_start + (%s)' % expr
            actions.append('%s = %s;' % (sym, EXPR[sym]))
            semv['label'] = (sym, 4)
            for t in ('>label', '<label', 'label'):
                subst[t] = [sym]
        elif nm == 'a32' and 'label' in syntax:
            EXPR[sym] = expr
            actions.append('%s = %s;' % (sym, expr))
            semv['label'] = (sym, 4)
            subst['label'] = [sym]
        else:
            EXPR[sym] = expr
            actions.append('%s = %s;' % (sym, expr))
            semv[nm] = (sym, 0)
            semv[nm.lstrip('#')] = (sym, 0)
            subst[nm] = [sym]
            subst[nm.lstrip('#')] = [sym]
    disp_ops = []
    keys = sorted(subst, key=len, reverse=True)
    for oi, o in enumerate(ops):
        if oi:
            disp_ops.append('","')
        s = o.replace('–', '-').replace('±', '')
        if s in queues and queues[s] and s not in subst:
            disp_ops.append(queues[s].pop(0))
            continue
        if s.split('.')[0] in queues and queues[s.split('.')[0]] and s.split('.')[0] not in subst:
            disp_ops.append(queues[s.split('.')[0]].pop(0))
            if '.' in s:
                disp_ops.append('"%s"' % s[s.index('.'):])
            continue
        out = []
        while s:
            for kk in keys:
                kn = kk.replace('–', '-')
                nxt = s[len(kn):len(kn) + 1]
                if s.startswith(kn) and not (kn[-1:].isalnum() and nxt.isalnum()):
                    out += subst[kk]
                    s = s[len(kn):]
                    break
            else:
                out.append('"%s"' % s[0].replace('"', ''))
                s = s[1:]
        merged = []
        for t in out:
            if merged and t.startswith('"') and merged[-1].startswith('"'):
                merged[-1] = merged[-1][:-1] + t[1:]
            else:
                merged.append(t)
        disp_ops += merged
    disp = '"%s"' % mn + (' ' + ' '.join(disp_ops) if disp_ops else '')
    acts = []
    if unit == 'DALU':
        acts.append('x1 = (pe >> (11 - 3 * di)) & 1; x2 = (pe >> (10 - 3 * di)) & 1; x3 = (pe >> (9 - 3 * di)) & 1;')
        acts.append('pr = (0x%x >> (2 * (2 * ccc + (di & 1)))) & 3; di = di + 1;' % PRED_TABLE)
    elif agu:
        acts.append('x1 = (ph >> (1 - ai)) & 1; x2 = (pl >> (1 - ai)) & 1;')
        acts.append('pr = (0x%x >> (2 * (2 * ccc + ai))) & 3; ai = ai + 1;' % PRED_TABLE)
    else:
        acts.append('pr = 0;')
    acts.append('pos = pos + 1; rem = rem - %d;' % row['nw'])
    acts.append('slast = %s;' % star if (row['type'] == 1 and star) else 'slast = 1;')
    used_fields = {}
    for a in actions:
        for m in re.finditer(r'\b(w(\d)_\d+_\d+)\b', a):
            used_fields.setdefault(int(m.group(2)), []).append(m.group(1))
    segs = []
    for wi in range(row['nw']):
        cs = [c for (cw, c) in cons if cw == wi] + used_fields.get(wi, [])
        if wi == 0 and star:
            cs.append(star)
        cs += patops.get(wi, [])
        if not cs:
            cs = [tf(wi, 0, 15)]
        segs.append(' & '.join(dict.fromkeys(cs)))
    sem = semantics(mn, syntax, ops, semv, sizeof(mn), unit, agu)
    if sem is None:
        args, pre = [], []
        for name, (sv, sz) in semv.items():
            if sv in [a for a in args] or sv in [p.split()[1].split(':')[0] for p in pre]:
                continue
            if sz == 0 or sv.startswith('v_'):
                pre.append('local l_c%d:4 = %s;' % (len(pre), sv))
                args.append('l_c%d' % (len(pre) - 1))
            else:
                args.append(sv)
        sem = (' '.join(pre) + ' ' + uop('sc_' + re.sub(r'\W', '_', mn.lower()), list(dict.fromkeys(args))) + ';', '', None)
        STATS['userop'] += 1
    else:
        STATS['pcode'] += 1
    if sem[2]:
        kind, delay, tgt = sem[2]
        acts.append('brk = %d; brd = %d;' % (kind, delay))
        if tgt is not None:
            acts.append('brtgt = %s;' % EXPR[tgt])
    INSTR.append(dict(disp=disp, pattern=' ; '.join(segs), exec=sem[0], wb=sem[1], actions=' '.join(actions + acts),
                      nw=row['nw']))


BR_GOTO, BR_COND, BR_CALL, BR_IJMP, BR_ICALL, BR_RET, BR_RTE = 1, 2, 3, 4, 5, 6, 7


def conv(e, fs, ts, signed=True):
    if fs == ts or fs == 0:
        return e
    if fs < ts:
        return '%s(%s)' % ('sext' if signed else 'zext', e)
    return '%s:%d' % (e, ts) if re.match(r'^\w+$', e) else '(%s):%d' % (e, ts)


def T(size):
    return 'TT%d' % size


def semantics(mn, syntax, ops, v, size, unit, agu):
    """(exec, writeback, branch) p-code for one form, or None for a user operation.
    v maps operand names to (SLEIGH operand, size in bytes; 0 for a constant)."""
    base = mn.split('.')[0]
    d = mn[:-1] if mn.endswith('D') and mn[:-1] in ('BRA', 'BT', 'BF', 'BSR', 'JMP', 'JSR', 'JT', 'JF', 'RTS', 'RTE') else mn
    delay = 1 if d != mn else 0
    def guard(code):
        return 'if (!PRED) goto <skip>; %s <skip>' % code if code else ''
    def val(name):
        return v.get(name) or v.get(name.lstrip('#'))
    if d in ('BRA', 'JMP') and 'label' in v:
        return '', '', (BR_GOTO, delay, v['label'][0])
    if d in ('BT', 'JT') and 'label' in v:
        return 'BC = T;', '', (BR_COND, delay, v['label'][0])
    if d in ('BF', 'JF') and 'label' in v:
        return 'BC = !T;', '', (BR_COND, delay, v['label'][0])
    if d in ('BSR', 'JSR') and 'label' in v:
        return '', '', (BR_CALL, delay, v['label'][0])
    if d in ('JMP', 'JT', 'JF', 'JSR') and 'Rn' in v:
        c = {'JMP': 'BC = 1;', 'JT': 'BC = T;', 'JF': 'BC = !T;', 'JSR': 'BC = 1;'}[d]
        return c + ' BRT = %s;' % v['Rn'][0], '', (BR_ICALL if d == 'JSR' else BR_IJMP, delay, None)
    if d == 'RTS':
        return '', '', (BR_RET, delay, None)
    if d == 'RTE':
        return '', '', (BR_RTE, delay, None)
    if mn == 'NOP':
        return '', '', None
    mem = [o for o in ops if o.startswith('(')]
    if base in ('MOVE', 'MOVEU') and len(ops) == 2 and len(mem) == 1 and size in (1, 2, 4) and not mn.endswith('F'):
        reg = ops[1] if mem[0] == ops[0] else ops[0]
        if '.' in reg or reg not in v:
            return None
        rv, rs = v[reg]
        m = mem[0].strip('()')
        if m in ('EA', 'ea'):
            if m not in v:
                return None
            ea = v[m][0]
            src = ea
        else:
            mm = re.match(r'^(Rn|SP)([+–-])(\w+)$', m)
            if m in ('a16', 'a32'):
                addr = val(m)[0]
            elif m == 'Rn':
                addr = v['Rn'][0]
            elif m == 'Rn+Rr':
                addr = '%s + %s' % (v['Rn'][0], v['Rr'][0])
            elif mm:
                b = v['Rn'][0] if mm.group(1) == 'Rn' else 'SP'
                off = val(mm.group(3))
                if off is None:
                    return None
                addr = '%s %s %s' % (b, '+' if mm.group(2) == '+' else '-', off[0])
            else:
                return None
            src = '*[ram]:%d l_ea' % size
            pre = 'local l_ea:4 = %s; ' % addr
        load = mem[0] == ops[0]
        signed = base != 'MOVEU'
        if load:
            body = ('' if m in ('EA', 'ea') else pre) + '%s = %s;' % (T(rs), conv(src, size, rs, signed))
            return guard(body), guard('%s = %s;' % (rv, T(rs))), None
        body = ('' if m in ('EA', 'ea') else pre) + '%s = %s;' % (src, conv(rv, rs, size))
        return guard(body), '', None
    if base in ('MOVE', 'MOVEU') and len(ops) == 2 and ops[0].startswith('#') and val(ops[0]) and ops[1] in v:
        rv, rs = v[ops[1]]
        return guard('%s = %s;' % (T(rs), val(ops[0])[0])), guard('%s = %s;' % (rv, T(rs))), None
    if mn in ('TFR', 'TFRA') and len(ops) == 2 and ops[0] in v and ops[1] in v:
        (a, sa), (b, sb) = v[ops[0]], v[ops[1]]
        return guard('%s = %s;' % (T(sb), conv(a, sa, sb))), guard('%s = %s;' % (b, T(sb))), None
    if mn in ('TFRT', 'TFRF') and len(ops) == 2 and ops[0] in v and ops[1] in v:
        (a, sa), (b, sb) = v[ops[0]], v[ops[1]]
        c = 'T' if mn == 'TFRT' else '!T'
        return guard('%s = %s; if (!(%s)) goto <keep>; %s = %s; <keep>' % (T(sb), b, c, T(sb), conv(a, sa, sb))), \
            guard('%s = %s;' % (b, T(sb))), None
    if mn == 'CLR' and ops == ['Dn'] and 'Dn' in v:
        return guard('%s = 0;' % T(v['Dn'][1])), guard('%s = %s;' % (v['Dn'][0], T(v['Dn'][1]))), None
    arith = {'ADD': '+', 'SUB': '-', 'AND': '&', 'OR': '|', 'EOR': '^', 'ADDA': '+', 'SUBA': '-'}
    if mn in arith and all(x in v or val(x) for x in ops):
        o = arith[mn]
        vals = [v.get(x) or val(x) for x in ops]
        if len(ops) == 3:
            (a, sa), (b, sb), (dd, sd) = vals
            x, y = (b, a) if mn == 'SUB' else (a, b)
            sx, sy = (sb, sa) if mn == 'SUB' else (sa, sb)
            return guard('%s = %s %s %s;' % (T(sd), conv(x, sx, sd), o, conv(y, sy, sd))), guard('%s = %s;' % (dd, T(sd))), None
        if len(ops) == 2:
            (a, sa), (dd, sd) = vals
            return guard('%s = %s %s %s;' % (T(sd), dd, o, conv(a, sa, sd))), guard('%s = %s;' % (dd, T(sd))), None
    if mn == 'IMPY' and len(ops) == 3 and all(x in v for x in ops):
        (a, sa), (b, sb), (dd, sd) = (v[x] for x in ops)
        return guard('local l_p:4 = sext(%s:2) * sext(%s:2); %s = sext(l_p);' % (a, b, T(sd))), guard('%s = %s;' % (dd, T(sd))), None
    shifts = {'ASL': '<<', 'ASLL': '<<', 'LSLL': '<<', 'ASR': 's>>', 'ASRR': 's>>', 'LSR': '>>', 'LSRR': '>>'}
    if mn in shifts and len(ops) == 2 and all(x in v or val(x) for x in ops):
        (a, sa), (dd, sd) = [v.get(x) or val(x) for x in ops]
        if sa == 0:
            return guard('%s = %s %s %s;' % (T(sd), dd, shifts[mn], a)), guard('%s = %s;' % (dd, T(sd))), None
        return guard('local l_n:1 = %s:1; %s = %s %s l_n;' % (a, T(sd), dd, shifts[mn])), guard('%s = %s;' % (dd, T(sd))), None
    if mn in ('ASLA', 'ASRA', 'LSRA', 'ASL2A') and ops == ['Rx'] and 'Rx' in v:
        r, s = v['Rx']
        e = {'ASLA': '%s << 1', 'ASRA': '%s s>> 1', 'LSRA': '%s >> 1', 'ASL2A': '%s << 2'}[mn] % r
        return guard('%s = %s;' % (T(s), e)), guard('%s = %s;' % (r, T(s))), None
    if mn in ('NEG', 'NOT', 'INC', 'ABS') and ops == ['Dn'] and 'Dn' in v:
        r, s = v['Dn']
        if mn == 'ABS':
            return guard('%s = %s; if (%s s>= 0) goto <pos>; %s = -%s; <pos>' % (T(s), r, r, T(s), r)), guard('%s = %s;' % (r, T(s))), None
        e = {'NEG': '-%s', 'NOT': '~%s', 'INC': '%s + 1'}[mn] % r
        return guard('%s = %s;' % (T(s), e)), guard('%s = %s;' % (r, T(s))), None
    if mn in ('SXT.B', 'SXT.W', 'ZXT.B', 'ZXT.W') and len(ops) == 2 and all(x in v for x in ops):
        (a, sa), (dd, sd) = v[ops[0]], v[ops[1]]
        n = 1 if mn.endswith('B') else 2
        return guard('%s = %s(%s:%d);' % (T(sd), 'sext' if mn[0] == 'S' else 'zext', a, n)), guard('%s = %s;' % (dd, T(sd))), None
    if mn in ('SXT.L', 'ZXT.L') and ops == ['Dn'] and 'Dn' in v:
        r, s = v['Dn']
        return guard('%s = %s(%s:4);' % (T(s), 'sext' if mn[0] == 'S' else 'zext', r)), guard('%s = %s;' % (r, T(s))), None
    cmp = {'CMPEQ': '==', 'CMPGT': 's>', 'CMPHI': '>', 'CMPEQA': '==', 'CMPGTA': 's>', 'CMPHIA': '>'}
    if base in cmp and len(ops) == 2 and all(x in v or val(x) for x in ops):
        (a, sa), (b, sb) = [v.get(x) or val(x) for x in ops]
        return guard('TT1 = zext(%s %s %s);' % (b, cmp[base], conv(a, sa, sb))), guard('Tn = TT1;'), None
    tst = {'TSTEQ': '== 0', 'TSTGE': 's>= 0', 'TSTGT': 's> 0', 'TSTEQA': '== 0', 'TSTGEA': 's>= 0', 'TSTGTA': 's> 0'}
    if base in tst and len(ops) == 1 and ops[0] in v:
        r, s = v[ops[0]]
        return guard('TT1 = zext(%s %s);' % (r, tst[base])), guard('Tn = TT1;'), None
    return None


def main():
    for k, lo, hi in [(0, 12, 15), (0, 8, 8), (0, 5, 7), (0, 9, 11), (0, 0, 2), (0, 7, 7), (0, 6, 6), (0, 5, 5),
                      (1, 13, 15), (0, 0, 15)] + [(1, b, b) for b in range(13)]:
        tf(k, lo, hi)
    for r in ROWS:
        s = section_of(r['line'])
        if r['syntax'][0].startswith('IFc'):
            continue
        for syn in r['syntax']:
            emit_row(r, syn, s)
    seen, instr = set(), []
    # SLEIGH tries overlapping leaf patterns in declaration order: longer forms first, so a
    # multi-word instruction wins over a one-word form that shares its first word.
    for i in sorted(INSTR, key=lambda x: -x['nw']):
        if i['pattern'] in seen:
            continue
        seen.add(i['pattern'])
        instr.append(i)
    w('# NXP (Freescale/Motorola) StarCore SC140 DSP core, little endian.')
    w('# Generated by tools/gen_sc140_sleigh.py from the SC140 DSP Core Reference Manual; edit the generator.')
    w('')
    w('define endian=little;')
    w('define alignment=2;')
    w('define space ram type=ram_space size=4 default;')
    w('define space register type=register_space size=4;')
    w('define register offset=0x0 size=8 [ %s ];' % ' '.join(DREGS))
    w('define register offset=0x0 size=2 [ %s ];' % ' '.join('D%dL D%dH _ _' % (i, i) for i in range(16)))
    w('define register offset=0x4 size=1 [ %s ];' % ' '.join(['D%dE _ _ _ _ _ _ _' % i for i in range(15)] + ['D15E']))
    w('define register offset=0x100 size=4 [ %s ];' % ' '.join(RREGS))
    w('define register offset=0x100 size=2 [ %s ];' % ' '.join('R%dL R%dH' % (i, i) for i in range(16)))
    w('define register offset=0x200 size=4 [ %s ];' % ' '.join(CTRL32))
    w('define register offset=0x300 size=1 [ T BC Tn %s ];' % ' '.join('TT1_%d' % k for k in range(SLOTS)))
    w('define register offset=0x400 size=8 [ %s ];' % ' '.join('TT8_%d' % k for k in range(SLOTS)))
    w('define register offset=0x480 size=4 [ %s BRT ];' % ' '.join('TT4_%d' % k for k in range(SLOTS)))
    w('define register offset=0x4c0 size=2 [ %s ];' % ' '.join('TT2_%d' % k for k in range(SLOTS)))
    w('define register offset=0x500 size=16 [ contextreg ];')
    w('')
    w('define context contextreg')
    for n, a, b in [('brtgt', 0, 31), ('pfx', 32, 32), ('rem', 33, 35), ('slast', 36, 36), ('ccc', 37, 39),
                    ('pe', 40, 51), ('ph', 52, 53), ('pl', 54, 55), ('di', 56, 57), ('ai', 58, 58), ('x1', 59, 59),
                    ('x2', 60, 60), ('x3', 61, 61), ('pos3', 64, 66), ('pr', 67, 68), ('brk', 69, 71), ('brd', 72, 72)]:
        w('  %s = (%d,%d)' % (n, a, b))
    w(';')
    w('')
    for k in range(3):
        w('define token w%d(16)' % k)
        for lo, hi in sorted((lo, hi) for (wd, lo, hi) in TOKFIELDS if wd == k):
            w('  %s = (%d,%d)' % (TOKFIELDS[(k, lo, hi)], lo, hi))
        if (k, 0, 15) not in TOKFIELDS:
            w('  w%d_0_15 = (0,15)' % k)
        w(';')
    w('')
    for nm in sorted(PCODEOPS):
        w('define pcodeop %s;' % nm)
    w('')
    for size in (8, 4, 2, 1):
        for k in range(SLOTS):
            w('TT%d: is pos3=%d { export TT%d_%d; }' % (size, k + 1, size, k))
        w('TT%d: is pos3=0 { export TT%d_0; }' % (size, size))
        w('TT%d: is pos3=7 { export TT%d_0; }' % (size, size))
    w('PRED: is pr=0 { export 1:1; }')
    w('PRED: is pr=1 { export T; }')
    w('PRED: is pr=2 { local l_f:1 = !T; export l_f; }')
    w('PRED: is pr=3 { export 1:1; }')
    w('')
    for wd, line in SUBT:
        w(line)
    w('')
    def with_temps(i):
        temps = [t for t in ('TT8', 'TT4', 'TT2', 'TT1', 'PRED') if re.search(r'\b%s\b' % t, i['exec'] + i['wb'])]
        segs = i['pattern'].split(' ; ')
        segs[0] += ''.join(' & ' + t for t in temps)
        return ' ; '.join(segs)
    for n in (1, 2, 3):
        for i in instr:
            if i['nw'] != n:
                continue
            act = i['actions'].replace('pos = pos + 1;', 'pos3 = pos3 + 1;')
            w('I%d: %s is %s [ %s ] { %s }' % (n, i['disp'], with_temps(i), act, i['exec']))
        if n == 1:
            w('I1: "[1w]" is w0_12_15=0x9 & w0_8_8=0 & w0_5_7=0x6 & w0_9_11 & w0_0_2 [ pfx = 1; rem = w0_9_11; ccc = w0_0_2; ] { }')
            w('I1: "?invalid" is w0_0_15 [ slast = 1; rem = 0; ] { invalid_word(); }')
        if n == 2:
            w('I2: "[2w]" is w0_12_15=0x3 & w0_8_8=0 & w0_9_11 & w0_0_2 & w0_7_7 & w0_6_6 & w0_5_5 ; w1_13_15=0x5 & '
              + ' & '.join('w1_%d_%d' % (b, b) for b in range(13))
              + ' [ pfx = 1; rem = w0_9_11 - 1; ccc = w0_0_2; ph = (w0_7_7 << 1) | w1_8_8; pl = (w0_5_5 << 1) | w0_6_6;'
              ' pe = (w1_9_9 << 11) | (w1_4_4 << 10) | (w1_0_0 << 9) | (w1_10_10 << 8) | (w1_5_5 << 7) | (w1_1_1 << 6)'
              ' | (w1_11_11 << 5) | (w1_6_6 << 4) | (w1_2_2 << 3) | (w1_12_12 << 2) | (w1_7_7 << 1) | w1_3_3; ] { }')
        for i in instr:
            if i['nw'] == n:
                w('IW%d: is %s { %s }' % (n, re.sub(r'\b(ea_\w+)', r'q\1', with_temps(i)), i['wb']))
        if n == 1:
            w('IW1: is w0_12_15=0x9 & w0_8_8=0 & w0_5_7=0x6 & w0_9_11 & w0_0_2 { }')
            w('IW1: is w0_0_15 { }')
        if n == 2:
            w('IW2: is w0_12_15=0x3 & w0_8_8=0 & w0_9_11 & w0_0_2 & w0_7_7 & w0_6_6 & w0_5_5 ; w1_13_15=0x5 & '
              + ' & '.join('w1_%d_%d' % (b, b) for b in range(13)) + ' { }')
    w('')
    w('BTGT: brtgt is brtgt { export *[ram]:4 brtgt; }')
    w('END: is brk=0 { T = Tn; }')
    for dl in (0, 1):
        ds = 'delayslot(1); ' if dl else ''
        w('END: is brk=1 & brd=%d & BTGT { T = Tn; %sgoto BTGT; }' % (dl, ds))
        w('END: is brk=2 & brd=%d & BTGT { T = Tn; %sif (BC) goto BTGT; }' % (dl, ds))
        w('END: is brk=3 & brd=%d & BTGT { T = Tn; %s*:4 SP = inst_next; *:4 (SP + 4) = SR; SP = SP + 8; call BTGT; }' % (dl, ds))
        w('END: is brk=4 & brd=%d { T = Tn; %sif (!BC) goto inst_next; goto [BRT]; }' % (dl, ds))
        w('END: is brk=5 & brd=%d { T = Tn; %s*:4 SP = inst_next; *:4 (SP + 4) = SR; SP = SP + 8; call [BRT]; }' % (dl, ds))
        w('END: is brk=6 & brd=%d { T = Tn; %sSP = SP - 8; local l_ra:4 = *:4 SP; return [l_ra]; }' % (dl, ds))
        w('END: is brk=7 & brd=%d { T = Tn; %sSP = SP - 8; SR = *:4 (SP + 4); local l_ra:4 = *:4 SP; return [l_ra]; }' % (dl, ds))
    w('')
    w('S: is ((pfx=1 & rem=0) | (pfx=0 & slast=1)) { }')
    for n in (3, 2, 1):
        w('S: I%d^" "^S is ((pfx=1 & rem!=0) | (pfx=0 & slast=0)) & I%d & IW%d ; S { build I%d; build S; build IW%d; }' % (n, n, n, n, n))
    w('')
    w(':^S is S & END { Tn = T; build S; build END; }')
    print('\n'.join(OUT))
    sys.stderr.write('forms %d pcode %d userop %d skipped %d\n' % (len(instr), STATS['pcode'], STATS['userop'], len(SKIPPED)))
    for s in SKIPPED:
        sys.stderr.write('  skipped %r\n' % (s,))


if __name__ == '__main__':
    main()
