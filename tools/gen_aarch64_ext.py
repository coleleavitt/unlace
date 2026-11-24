#!/usr/bin/env python3
"""Generate an AArch64 SLEIGH extension (.sinc) from LLVM's TableGen records.

Usage:
  llvm-tblgen --dump-json -I <llvm>/include -I <llvm>/lib/Target/AArch64 \
      <llvm>/lib/Target/AArch64/AArch64.td -o aarch64.json
  gen_aarch64_ext.py aarch64.json <Predicate,...> <prefix> <OP_> out.sinc [probe.json]

Every non-pseudo 32-bit instruction record carrying one of the predicates is
emitted. Its fixed bits become token-field constraints. Each operand field is
enumerated value by value through llvm-mc (-M no-aliases, -mattr=+all), and the
operand text LLVM prints for each accepted value becomes one entry of a SLEIGH
subtable that exports the register (or the constant) it names. Each instruction
lifts to the user operation <OP_><mnemonic>: its output is the first written
operand and its inputs are the read operands. probe.json receives the records
with one sample encoding each and LLVM's text for it.
"""
import io, sys, json, re, random, subprocess, collections
random.seed(1234)

def load(path):
    return json.load(open(path))

def records(J, want, exclude=()):
    out = []
    for name in J['!instanceof']['Instruction']:
        r = J[name]
        if r.get('isPseudo') or r.get('isCodeGenOnly'): continue
        if 'Inst' not in r or len(r['Inst']) != 32: continue
        if r.get('DecoderNamespace', ''): continue
        ps = [p['def'] for p in r.get('Predicates', [])]
        if not any(p in want for p in ps): continue
        if any(p in exclude for p in ps): continue
        mask = val = 0
        vars_ = collections.defaultdict(list)
        for pos, e in enumerate(r['Inst']):
            if e is None:
                continue
            if isinstance(e, int):
                mask |= 1 << pos; val |= e << pos
            elif e['kind'] == 'varbit':
                vars_[e['var']].append((pos, e['index']))
            elif e['kind'] == 'var':
                vars_[e['var']].append((pos, 0))
            else:
                raise Exception(e)
        def ops(lst):
            return [(a[1], a[0]['def']) for a in r[lst]['args']]
        ties = {}
        for c in r.get('Constraints', '').split(','):
            m = re.match(r'\s*\$(\w+)\s*=\s*\$(\w+)', c)
            if m: ties[m.group(2)] = m.group(1); ties[m.group(1)] = m.group(2)
        defs = [d['def'] for d in r.get('Defs', [])]
        out.append(dict(name=name, asm=r['AsmString'], mask=mask, val=val,
                        vars={k: sorted(v, key=lambda t: t[1]) for k, v in vars_.items()},
                        outs=ops('OutOperandList'), ins=ops('InOperandList'), ties=ties,
                        defs=defs, preds=ps, load=bool(r.get('mayLoad')), store=bool(r.get('mayStore'))))
    return out

def setvar(word, bits, v):
    for pos, idx in bits:
        if (v >> idx) & 1: word |= 1 << pos
        else: word &= ~(1 << pos)
    return word

def llvm(words, attr='+all'):
    inp = '\n'.join('0x%02x 0x%02x 0x%02x 0x%02x' % (w & 255, (w >> 8) & 255, (w >> 16) & 255, (w >> 24) & 255) for w in words) + '\n'
    p = subprocess.run(['llvm-mc', '--disassemble', '-triple=aarch64', '-mattr=' + attr, '-M', 'no-aliases', '-show-inst'],
                       input=inp, capture_output=True, text=True)
    bad = set()
    for line in p.stderr.splitlines():
        m = re.match(r'<stdin>:(\d+):\d+: warning: invalid instruction encoding', line)
        if m: bad.add(int(m.group(1)) - 1)
        m = re.match(r'<stdin>:(\d+):\d+: warning: potentially undefined', line)
    res = []
    lines = [l for l in p.stdout.splitlines() if '<MCInst #' in l]
    it = iter(lines)
    for i, w in enumerate(words):
        if i in bad: res.append(None); continue
        l = next(it)
        asm, _, rest = l.partition('//')
        name = re.search(r'<MCInst #\d+ (\w+)', rest).group(1)
        asm = asm.strip()
        res.append((asm, name))
    assert next(it, None) is None
    return res


def sample(J, want, excl):
    recs = records(J, want, excl)
    del J
    # phase 2: bases
    cands = []
    for ri, r in enumerate(recs):
        for t in range(24):
            w = r['val']
            for v, bits in r['vars'].items():
                w = setvar(w, bits, random.getrandbits(len(bits)) if t else 0)
            cands.append((ri, w))
    res = llvm([w for _, w in cands])
    base = {}
    for (ri, w), o in zip(cands, res):
        if o and o[1] == recs[ri]['name'] and ri not in base:
            base[ri] = (w, o[0])
    print('records', len(recs), 'with base', len(base), file=sys.stderr)
    # phase 3: enumerate each var
    MAXB = 9
    enum = []
    for ri, (w, _) in base.items():
        for v, bits in recs[ri]['vars'].items():
            k = len(bits)
            vals = range(1 << k) if k <= MAXB else sorted(set([0, 1, 2, 3, (1 << k) - 1, (1 << k) - 2] + [random.getrandbits(k) for _ in range(300)]))
            for x in vals:
                enum.append((ri, v, x, setvar(w, bits, x)))
    res = llvm([e[3] for e in enum])
    tabs = collections.defaultdict(dict)
    for (ri, v, x, w), o in zip(enum, res):
        if o and o[1] == recs[ri]['name']:
            tabs[(ri, v)][x] = o[0]
    out = []
    for ri, r in enumerate(recs):
        if ri not in base: 
            out.append(dict(r, base=None)); continue
        r = dict(r, base=base[ri][0], btext=base[ri][1], tabs={v: tabs[(ri, v)] for v in r['vars']})
        out.append(r)

    return out


def emit(data, P, OPP, skip=()):
    TOK = P + 'tok'

    def parse_tmpl(asm):
        asm = asm.replace('\\{', '{').replace('\\}', '}')
        m = re.match(r'(\S+)(?:[ \t]+(.*))?$', asm, re.S)
        mn, rest = m.group(1), (m.group(2) or '')
        pieces = []
        pos = 0
        for mm in re.finditer(r'\$\{(\w+)(?::\w+)?\}|\$(\w+)', rest):
            if mm.start() > pos: pieces.append(('lit', rest[pos:mm.start()]))
            pieces.append(('op', mm.group(1) or mm.group(2)))
            pos = mm.end()
        if pos < len(rest): pieces.append(('lit', rest[pos:]))
        return mn, pieces

    GRP = r'((?:\{[^{}]*\}|\[[^\[\]]*\]|[^,{}\[\]])*?(?:, (?:lsl|lsr|asr|ror|msl|sxtw|uxtw|sxtx|uxtx)\b[^,\]]*)?)'
    def tmpl_regex(pieces):
        rx = ''
        for i, (k, v) in enumerate(pieces):
            if k == 'lit': rx += re.escape(v).replace('\\ ', '\\s*').replace(' ', '\\s*')
            elif i + 1 < len(pieces) and pieces[i + 1][0] == 'op': rx += r'([^\[\s,]+)'
            else: rx += GRP
        return re.compile('^' + rx + '$')

    def split_text(asm):
        m = re.match(r'(\S+)(?:\s+(.*))?$', asm.strip(), re.S)
        return m.group(1), (m.group(2) or '')

    fields = {}
    def field(lo, hi, signed=False):
        n = '%s_%02d_%02d' % (P, hi, lo)
        fields[n] = (lo, hi)
        return n

    def runs(bits):
        # bits: list of (pos, idx) sorted by idx; group consecutive pos with consecutive idx
        rs = []
        for pos, idx in sorted(bits, key=lambda t: t[1]):
            if rs and pos == rs[-1][1] + 1 and idx == rs[-1][3] + 1:
                rs[-1][1] = pos; rs[-1][3] = idx
            else:
                rs.append([pos, pos, idx, idx])
        return [(lo, hi, ilo) for lo, hi, ilo, ihi in rs]

    def fixed_constraints(mask, val):
        cs = []
        pos = 0
        while pos < 32:
            if (mask >> pos) & 1:
                lo = pos
                while pos < 32 and (mask >> pos) & 1: pos += 1
                hi = pos - 1
                v = (val >> lo) & ((1 << (hi - lo + 1)) - 1)
                cs.append('%s=%d' % (field(lo, hi), v))
            else:
                pos += 1
        return cs

    def export_of(text):
        t = text.strip()
        m = re.match(r'^\{?\s*(z|pn|p|x|w|q|v|d|s|h|b)(\d+)\b', t)
        if m:
            k, n = m.group(1), int(m.group(2))
            if k == 'pn': k = 'p'
            if k == 'v': k = 'q'
            return '%s%d' % (k, n)
        if re.match(r'^(xzr|wzr|sp|wsp)\b', t): return t.split()[0].rstrip(',')
        m = re.search(r'#?(-?0x[0-9a-f]+|-?\d+)(?![.\d])', t)
        if m and not re.match(r'^#?-?\d+\.\d', t):
            v = int(m.group(1), 0)
            return '0x%x:8' % (v & 0xffffffffffffffff)
        return None

    subtabs = {}
    sublines = []
    def subtable(bits, table):
        # table: value -> (display text, export)
        key = (tuple(sorted(bits)), tuple(sorted(table.items())))
        if key in subtabs: return subtabs[key]
        n = '%so_%d' % (P, len(subtabs))
        subtabs[key] = n
        rs = runs(bits)
        for v, (disp, exp) in sorted(table.items()):
            cs = []
            for lo, hi, ilo in rs:
                cs.append('%s=%d' % (field(lo, hi), (v >> ilo) & ((1 << (hi - lo + 1)) - 1)))
            d = disp.replace('"', '')
            sublines.append('%s: "%s" is %s { export %s; }' % (n, d, ' & '.join(cs), exp))
        return n

    clones = {}
    def clone(s):
        if s in clones: return clones[s]
        n = s + 'b'
        clones[s] = n
        for l in list(sublines):
            if l.startswith(s + ': '):
                sublines.append(n + l[len(s):])
        return n

    pcodeops = set()
    cons = []
    stats = collections.Counter()
    for r in data:
        if r['base'] is None: stats['nobase'] += 1; continue
        if r['name'] in skip: stats['skip'] += 1; continue
        mn, pieces = parse_tmpl(r['asm'])
        rx = tmpl_regex(pieces)
        slots = [v for k, v in pieces if k == 'op']
        bm = rx.match(split_text(r['btext'])[1])
        if not bm: stats['nobasematch'] += 1; print('nomatch', r['name'], r['btext'], r['asm'], file=sys.stderr); continue
        bslot = bm.groups()
        vars_ = r['vars']; ties = r['ties']
        def srcvar(op):
            if op in vars_: return op
            if ties.get(op) in vars_: return ties[op]
            return None
        opsym = {}
        bad = False
        pat = fixed_constraints(r['mask'], r['val'])
        used_subs = []
        # per slot
        slot_i = 0
        for k, v in pieces:
            if k == 'lit': continue
            idx = slot_i; slot_i += 1
            var = srcvar(v)
            if var is None:
                opsym.setdefault(v, None)
                continue
            tab = {}
            for x, asm in r['tabs'][var].items():
                mm = rx.match(split_text(asm)[1])
                if not mm: continue
                t = mm.group(idx + 1)
                e = export_of(t)
                if e is None: e = '0x%x:8' % int(x)
                tab[int(x)] = (t, e)
            if not tab: bad = True; break
            sym = subtable([tuple(b) for b in vars_[var]], tab)
            opsym[(v, idx)] = sym
            used_subs.append(sym)
        if bad: stats['emptytab'] += 1; continue
        # display: an operand symbol may appear once, so a repeated slot gets a cloned subtable
        seen = set()
        for key in [kk for kk in list(opsym) if isinstance(kk, tuple)]:
            s = opsym[key]
            if s in seen:
                c = clone(s); opsym[key] = c; used_subs.append(c)
            seen.add(s)
        out = []
        slot_i = 0
        for k, v in pieces:
            if k == 'lit':
                if v.strip() == ',' : out.append('lit:, ')
                else: out.append('lit:' + v)
            else:
                idx = slot_i; slot_i += 1
                s = opsym.get((v, idx))
                out.append(('sym:' + s) if s else ('lit:' + bslot[idx]))
        # merge consecutive literals
        toks = []
        for o in out:
            if o.startswith('lit:') and toks and toks[-1].startswith('lit:'): toks[-1] += o[4:]
            else: toks.append(o)
        dparts = []
        for t in toks:
            if t.startswith('lit:'):
                s = t[4:]
                if s: dparts.append('"%s"' % s.replace('"', ''))
            else: dparts.append(t[4:])
        dstr = '^'.join(dparts)
        # semantics
        op = OPP + re.sub(r'[^A-Za-z0-9_]', '_', mn)
        pcodeops.add(op)
        def sym_for(name):
            for nm in (name, ties.get(name)):
                for key, s in opsym.items():
                    if isinstance(key, tuple) and key[0] == nm and s:
                        return s
            return None
        outs = [sym_for(n) for n, c in r['outs']]
        ins = []
        for n, c in r['ins']:
            s = sym_for(n)
            if s and s not in ins: ins.append(s)
        outs = [o for o in outs if o]
        body = []
        call = '%s(%s)' % (op, ', '.join(ins))
        if outs:
            body.append('%s = %s;' % (outs[0], call))
        else:
            body.append('%s;' % call)
        if 'NZCV' in r['defs']:
            f = outs[0] if outs else (ins[0] if ins else '0:1')
            body.append('NG = %ssve_first(%s); ZR = %ssve_none(%s); CY = %ssve_nlast(%s); OV = 0;' % (OPP, f, OPP, f, OPP, f))
            pcodeops.update([OPP + 'sve_first', OPP + 'sve_none', OPP + 'sve_nlast'])
        patstr = ' & '.join(pat + sorted(set(used_subs), key=used_subs.index))
        cons.append('# %s\n:%s %s is %s\n{\n\t%s\n}\n' % (r['name'], mn, dstr, patstr, '\n\t'.join(body)) if dstr else
                    '# %s\n:%s is %s\n{\n\t%s\n}\n' % (r['name'], mn, patstr, '\n\t'.join(body)))
        stats['ok'] += 1

    f = io.StringIO()
    if True:
        f.write('define token %s (32) endian = little\n' % TOK)
        for n, (lo, hi) in sorted(fields.items()):
            f.write('\t%s = (%d,%d)\n' % (n, lo, hi))
        f.write(';\n\n')
        for o in sorted(pcodeops): f.write('define pcodeop %s;\n' % o)
        f.write('\n')
        f.write('\n'.join(sublines) + '\n\n')
        f.write('with : ImmS_ImmR_TestSet=1 {\n\n')
        f.write('\n'.join(cons))
        f.write('\n} # end with ImmS_ImmR_TestSet=1\n')
    print(dict(stats), 'subtables', len(subtabs), 'fields', len(fields), file=sys.stderr)
    return f.getvalue()


if __name__ == '__main__':
    J = load(sys.argv[1])
    data = sample(J, set(sys.argv[2].split(',')), set())
    del J
    open(sys.argv[5], 'w').write(emit(data, sys.argv[3], sys.argv[4]))
    if len(sys.argv) > 6:
        json.dump(data, open(sys.argv[6], 'w'))
