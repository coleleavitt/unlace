#!/usr/bin/env python3
"""Generate RISC-V SLEIGH constructors from the Sail RISC-V model.

Usage:
  gen_riscv_sail.py --sail <sail-riscv>/model --tokens <riscv.reg.sinc> \
      --files extensions/B/zba_insts.sail,extensions/B/zbb_insts.sail,... \
      -o out.sinc [--opcodes <riscv-opcodes>/extensions --exts rv_zba,rv64_zba,...]
      [--budget N] [--report report.json]

Both the decoding and the semantics come from the Sail model: each
"mapping clause encdec" gives the fixed bits and operand fields of a
constructor (its "when" guard is evaluated for xlen 32 and 64), each
"mapping clause assembly" gives the mnemonic and operand order, and each
"function clause execute" is compiled to p-code. The compiler evaluates
everything static (xlen, enum operands split by $[split], loop indices) at
generation time, unrolls foreach loops, inlines helper functions from the
model's core/ and prelude/ (rev8, brev8, rotations, ...) and maps
count_ones, count_leading_zeros and count_trailing_zeros onto POPCOUNT and
LZCOUNT. A helper whose inlined p-code would exceed --budget statements is
emitted as a user pcodeop named after the Sail function instead. Fixed bits
become constraints on the token fields that riscv.reg.sinc already defines;
register operands use the rd/rs1/rs2 subtables of riscv.table.sinc.

With --opcodes the generated mask/match of every constructor is checked
against riscv-opcodes (a second, independent machine-readable source).
"""
import argparse, json, os, re, sys

# ---------------------------------------------------------------- lexer
TOK = re.compile(r'''
  (?P<ws>\s+|//[^\n]*|/\*.*?\*/)
 |(?P<str>"(?:[^"\\]|\\.)*")
 |(?P<bin>0b[01_]+)
 |(?P<hex>0x[0-9A-Fa-f_]+)
 |(?P<num>\d+)
 |(?P<tyvar>'[A-Za-z_]\w*)
 |(?P<id>[A-Za-z_]\w*)
 |(?P<op><->|=>|\.\.|>>>|<<<|>=_s|<=_s|>=_u|<=_u|>_s|<_s|>_u|<_u|>>|<<|==|!=|>=|<=|[-+*/&|^~@<>=(){}\[\],;:!.])
''', re.X | re.S)

class SailError(Exception):
    pass

def lex(s):
    out, i = [], 0
    while i < len(s):
        m = TOK.match(s, i)
        if not m:
            raise SailError('cannot lex at %r' % s[i:i + 30])
        i = m.end()
        k = m.lastgroup
        if k == 'ws':
            continue
        out.append((k, m.group()))
    out.append(('eof', ''))
    return out

# ---------------------------------------------------------------- parser
# Sail's fixities: comparisons infix 4, + and - infixl 6, *, shifts and
# rotations 7 (prelude.sail); | below ^ below & as in C.
BIN = {'|': (20, 'l'), '^': (25, 'l'), '&': (30, 'l'),
       '==': (40, 'n'), '!=': (40, 'n'), '<': (40, 'n'), '>': (40, 'n'), '<=': (40, 'n'), '>=': (40, 'n'),
       '<_s': (40, 'n'), '>_s': (40, 'n'), '<=_s': (40, 'n'), '>=_s': (40, 'n'),
       '<_u': (40, 'n'), '>_u': (40, 'n'), '<=_u': (40, 'n'), '>=_u': (40, 'n'),
       '@': (50, 'r'), '+': (60, 'l'), '-': (60, 'l'),
       '<<': (70, 'l'), '>>': (70, 'l'), '<<<': (70, 'l'), '>>>': (70, 'l'), '*': (70, 'l')}

class P:
    def __init__(self, text):
        self.t = lex(text)
        self.i = 0

    def peek(self, k=0):
        return self.t[self.i + k]

    def next(self):
        t = self.t[self.i]
        self.i += 1
        return t

    def accept(self, v):
        if self.peek()[1] == v and self.peek()[0] != 'str':
            self.i += 1
            return True
        return False

    def expect(self, v):
        t = self.next()
        if t[1] != v:
            raise SailError('expected %r got %r' % (v, t[1]))
        return t

    def ident(self):
        t = self.next()
        if t[0] not in ('id', 'tyvar'):
            raise SailError('expected identifier, got %r' % (t[1],))
        return t[1]

    def block_body(self):
        stmts = []
        while not self.accept('}'):
            stmts.append(self.stmt())
            if not self.accept(';'):
                self.expect('}')
                break
        return ('block', stmts)

    def stmt(self):
        if self.accept('let') or self.accept('var'):
            name = self.ident()
            ty = None
            if self.accept(':'):
                ty = self.type_()
            self.expect('=')
            return ('let', name, ty, self.expr())
        e = self.expr()
        if self.accept('='):
            return ('assign', e, self.expr())
        return ('expr', e)

    def arm(self):
        e = self.expr()
        if self.accept('='):
            return ('block', [('assign', e, self.expr())])
        return e

    def type_(self):
        start = self.i
        depth = 0
        while True:
            k, v = self.peek()
            if depth == 0 and v in ('=', ',', ')', ';', '}') and k != 'str':
                break
            if v == '(':
                depth += 1
            if v == ')':
                depth -= 1
            self.i += 1
        toks = self.t[start:self.i]
        return ' '.join(v for _, v in toks)

    def expr(self, minp=0):
        if self.peek()[1] == 'if':
            self.next()
            c = self.expr()
            self.expect('then')
            a = self.arm()
            b = None
            if self.accept('else'):
                b = self.arm()
            return ('if', c, a, b)
        if self.peek()[1] == 'match':
            self.next()
            scrut = self.expr()
            self.expect('{')
            arms = []
            while not self.accept('}'):
                pat = self.expr()
                self.expect('=>')
                arms.append((pat, self.expr()))
                self.accept(',')
            return ('match', scrut, arms)
        if self.peek()[1] == 'foreach':
            self.next()
            self.expect('(')
            v = self.ident()
            self.expect('from')
            lo = self.expr()
            self.expect('to')
            hi = self.expr()
            step = ('num', 1)
            if self.accept('by'):
                step = self.expr()
            self.expect(')')
            body = self.stmt()
            return ('foreach', v, lo, hi, step, body)
        lhs = self.unary()
        while True:
            k, op = self.peek()
            if k != 'op' or op not in BIN:
                break
            p, assoc = BIN[op]
            if p < minp:
                break
            self.next()
            rhs = self.expr(p + 1 if assoc != 'r' else p)
            lhs = ('bin', op, lhs, rhs)
        return lhs

    def unary(self):
        if self.accept('~'):
            return ('not', self.unary())
        if self.accept('-'):
            return ('neg', self.unary())
        return self.postfix(self.primary())

    def postfix(self, e):
        while self.peek()[1] == '[':
            self.next()
            hi = self.expr()
            lo = hi
            if self.accept('..'):
                lo = self.expr()
            self.expect(']')
            e = ('slice', e, hi, lo)
        return e

    def primary(self):
        k, v = self.next()
        if k == 'num':
            return ('num', int(v))
        if k == 'bin':
            b = v[2:].replace('_', '')
            return ('bits', int(b, 2), len(b))
        if k == 'hex':
            h = v[2:].replace('_', '')
            return ('bits', int(h, 16), 4 * len(h))
        if k == 'str':
            return ('str', v[1:-1])
        if v == '(':
            if self.accept(')'):
                return ('unit',)
            e = self.expr()
            if self.accept(','):
                items = [e, self.expr()]
                while self.accept(','):
                    items.append(self.expr())
                self.expect(')')
                return ('tuple', items)
            self.expect(')')
            return e
        if v == '{':
            return self.block_body()
        if k in ('id', 'tyvar'):
            if v in ('true', 'false'):
                return ('bool', v == 'true')
            if self.peek()[1] == '(' :
                self.next()
                args = []
                if not self.accept(')'):
                    args.append(self.expr())
                    while self.accept(','):
                        args.append(self.expr())
                    self.expect(')')
                return ('call', v, args)
            return ('id', v)
        raise SailError('unexpected %r' % v)

def parse_expr(text):
    p = P(text)
    e = p.expr()
    if p.peek()[0] != 'eof':
        raise SailError('trailing input %r' % p.peek()[1])
    return e

# ---------------------------------------------------------------- model
TOP = re.compile(r'^(union|mapping|function|val|enum|type|overload|infix|let|register|scattered|struct|bitfield|\$\[|//|\}|$)')

def items(text):
    cur = []
    for line in text.split('\n'):
        if line and not line[0].isspace() and TOP.match(line) and not line.startswith('}'):
            if cur:
                yield '\n'.join(cur)
            cur = [] if line.startswith('$[') or line.startswith('//') else [line]
        else:
            if cur:
                cur.append(line)
    if cur:
        yield '\n'.join(cur)

class Model:
    def __init__(self):
        self.unions = {}
        self.enums = {}
        self.types = {}
        self.maps = {}
        self.encdecs = []
        self.asms = {}
        self.execs = {}
        self.funcs = {}
        self.vals = {}
        self.unparsed = []

    def load(self, path, insts):
        with open(path) as f:
            text = f.read()
        for it in items(text):
            try:
                self.item(it.strip(), insts)
            except SailError as ex:
                if insts:
                    m = re.match(r'[^=]*=\s*(\w+)', it.strip())
                    self.unparsed.append((m.group(1) if m else it.strip()[:40], str(ex)))

    def item(self, it, insts):
        m = re.match(r'union clause instruction\s*=\s*(\w+)\s*:\s*(.*)$', it, re.S)
        if m:
            ty = m.group(2).strip()
            if ty.startswith('('):
                ty = ty[1:-1]
            self.unions[m.group(1)] = split_top(ty)
            return
        m = re.match(r'enum\s+(\w+)\s*=\s*\{(.*)\}', it, re.S)
        if m:
            self.enums[m.group(1)] = [x.strip() for x in m.group(2).split(',') if x.strip()]
            return
        m = re.match(r'type\s+(\w+)\s*=\s*(.*)$', it, re.S)
        if m:
            self.types[m.group(1)] = m.group(2).strip()
            return
        m = re.match(r'mapping clause encdec\s*=\s*(.*?)\s*<->\s*(.*)$', it, re.S)
        if m and insts:
            rhs = m.group(2)
            guard = None
            g = re.split(r'\bwhen\b', rhs, maxsplit=1)
            if len(g) == 2:
                rhs, guard = g
            self.encdecs.append((parse_expr(m.group(1)), parse_expr(rhs), parse_expr(guard) if guard else None))
            return
        m = re.match(r'mapping clause assembly\s*=\s*(\w+)\s*\((.*?)\)\s*<->\s*(.*)$', it, re.S)
        if m and insts:
            self.asms[m.group(1)] = ([a.strip() for a in m.group(2).split(',')], m.group(3))
            return
        m = re.match(r'mapping\s+(\w+)\s*:\s*[^=]*=\s*\{(.*)\}', it, re.S)
        if m:
            pairs = []
            for ent in split_top(m.group(2)):
                if '<->' in ent:
                    a, b = ent.split('<->')
                    pairs.append((parse_expr(a), parse_expr(b)))
            self.maps[m.group(1)] = pairs
            return
        m = re.match(r'function clause execute\s+(\w+)\s*\((.*?)\)\s*=\s*(.*)$', it, re.S)
        if m and insts:
            self.execs[m.group(1)] = ([a.strip() for a in m.group(2).split(',')], P(m.group(3)).expr())
            return
        m = re.match(r'val\s+(\w+)\s*:\s*(.*)$', it, re.S)
        if m:
            self.vals[m.group(1)] = m.group(2).strip()
            return
        m = re.match(r'function\s+(\w+)\s*\((.*?)\)\s*(?:->\s*([^=]*))?=\s*(.*)$', it, re.S)
        if m and m.group(1) not in ('clause',):
            params = [a.split(':')[0].strip() for a in m.group(2).split(',') if a.strip()]
            if m.group(3) and m.group(1) not in self.vals:
                ptys = [a.split(':', 1)[1].strip() for a in m.group(2).split(',') if ':' in a]
                if len(ptys) == len(params):
                    self.vals[m.group(1)] = '(%s) -> %s' % (', '.join(ptys), m.group(3).strip())
            try:
                self.funcs[m.group(1)] = (params, P(m.group(4)).expr())
            except SailError:
                pass
            return

def split_top(s):
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '([{':
            depth += 1
        if ch in ')]}':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out

# ---------------------------------------------------------------- constants
def nbytes(w):
    return max(1, (w + 7) // 8)

def mask(w):
    return (1 << w) - 1

class C:
    """A value known at generation time: bits (w set), int (w None) or bool."""
    def __init__(self, v, w=None, kind='bits'):
        self.v, self.w, self.kind = v, w, kind
    def __repr__(self):
        return 'C(%r,%r,%s)' % (self.v, self.w, self.kind)

class V:
    """A runtime value: bits of width w held zero-extended in varnode name, a
    1-byte bool, or an int (unsigned, held in 8 bytes)."""
    def __init__(self, name, w, kind='bits', reg=False, imm=False):
        self.name, self.w, self.kind, self.reg, self.imm = name, w, kind, reg, imm
    def __repr__(self):
        return 'V(%s,%r,%s)' % (self.name, self.w, self.kind)

INT_W = 64

class Budget(Exception):
    pass

class Unsupported(Exception):
    pass

# ---------------------------------------------------------------- compiler
class Compiler:
    def __init__(self, model, xlen, budget):
        self.m = model
        self.xlen = xlen
        self.budget = budget
        self.pcodeops = set()
        self.begin()

    def begin(self):
        self.lines = []
        self.ntmp = 0
        self.nlab = 0
        self.depth = 0

    def emit(self, s):
        self.lines.append('\t' * (1 + self.depth) + s)

    def tmp(self, w, expr, kind='bits'):
        self.ntmp += 1
        n = 'sg%d' % self.ntmp
        size = 1 if kind == 'bool' else (8 if kind == 'int' else nbytes(w))
        self.emit('local %s:%d = %s;' % (n, size, expr))
        return V(n, w, kind)

    def operand(self, x, size):
        if isinstance(x, C):
            if x.kind == 'bool':
                return '1:1' if x.v else '0:1'
            return '0x%x:%d' % (x.v & mask(size * 8), size)
        return x.name

    def size(self, x):
        if x.kind == 'bool':
            return 1
        if x.kind == 'int':
            return 8
        return nbytes(x.w)

    def fit(self, x, size):
        """x as a varnode or constant of exactly size bytes, zero-extended."""
        if isinstance(x, C):
            return '0x%x:%d' % (x.v & mask(size * 8), size)
        if x.imm:
            return self.tmp(size * 8, x.name).name
        s = self.size(x)
        if s == size:
            return x.name
        if s < size:
            return self.tmp(size * 8, 'zext(%s)' % x.name).name
        return self.tmp(size * 8, '%s:%d' % (x.name, size)).name

    def masked(self, v, w):
        if w % 8 and isinstance(v, V):
            return self.tmp(w, '%s & 0x%x' % (v.name, mask(w)))
        return v

    # ---- static evaluation of type-level widths
    def static_int(self, e, env):
        saved = (len(self.lines), self.ntmp)
        try:
            r = self.expr(e, env, None)
        except Unsupported:
            r = None
        if not isinstance(r, C) or r.kind == 'bool':
            del self.lines[saved[0]:]
            self.ntmp = saved[1]
            raise Unsupported('not static: %r' % (e,))
        return r.v

    def width_of_type(self, ty, env):
        ty = ty.strip()
        if ty in ('xlenbits',):
            return self.xlen
        if ty == 'bool':
            return 'bool'
        m = re.match(r"^bits\s*\((.*)\)$", ty)
        if m:
            return self.static_int(parse_expr(m.group(1)), env)
        if ty in self.m.types:
            return self.width_of_type(self.m.types[ty], env)
        m = re.match(r"^range\s*\(", ty)
        if m:
            return 'int'
        raise Unsupported('type %s' % ty)

    # ---- expressions
    def expr(self, e, env, want):
        k = e[0]
        if k == 'num':
            return C(e[1], None, 'int')
        if k == 'bits':
            return C(e[1], e[2])
        if k == 'bool':
            return C(e[1], None, 'bool')
        if k == 'id':
            n = e[1]
            if n in env:
                return env[n]
            if n == 'xlen':
                return C(self.xlen, None, 'int')
            if n == 'log2_xlen':
                return C(5 if self.xlen == 32 else 6, None, 'int')
            if n == 'xlen_bytes':
                return C(self.xlen // 8, None, 'int')
            if n == 'RETIRE_SUCCESS':
                return C(0, None, 'int')
            raise Unsupported('identifier %s' % n)
        if k == 'block':
            inner = dict(env)
            r = C(0, None, 'int')
            for s in e[1]:
                r = self.stmt(s, inner, want)
            for n in env:
                env[n] = inner[n]
            return r
        if k == 'if':
            return self.if_(e, env, want)
        if k == 'match':
            scrut = self.expr(e[1], env, None)
            if not isinstance(scrut, C):
                raise Unsupported('runtime match')
            for pat, arm in e[2]:
                if pat == ('id', '_') or self.pat_eq(pat, scrut, env):
                    return self.expr(arm, env, want)
            raise Unsupported('no match arm for %r' % scrut)
        if k == 'not':
            a = self.expr(e[1], env, want)
            if isinstance(a, C):
                return C(~a.v & mask(a.w), a.w)
            return self.masked(self.tmp(a.w, '~%s' % a.name), a.w)
        if k == 'neg':
            a = self.expr(e[1], env, want)
            if isinstance(a, C):
                return C(-a.v, a.w, a.kind)
            return self.masked(self.tmp(a.w, '-%s' % a.name, a.kind), a.w)
        if k == 'slice':
            return self.slice(e, env)
        if k == 'bin':
            return self.binop(e, env, want)
        if k == 'call':
            return self.call(e, env, want)
        if k == 'tuple':
            raise Unsupported('tuple')
        raise Unsupported('expr %s' % k)

    def pat_eq(self, pat, scrut, env):
        if pat[0] == 'id':
            return scrut.kind == 'enum' and scrut.v == pat[1]
        if pat[0] == 'bits':
            return scrut.v == pat[1]
        return False

    def stmt(self, s, env, want):
        k = s[0]
        if k == 'let':
            _, name, ty, rhs = s
            w = self.width_of_type(ty, env) if ty else None
            v = self.expr(rhs, env, w if isinstance(w, int) else None)
            if isinstance(w, int):
                v = self.coerce(v, w)
            env[name] = v
            return C(0, None, 'int')
        if k == 'assign':
            return self.assign(s[1], s[2], env)
        e = s[1]
        if e[0] == 'call' and e[1] == 'assert':
            return C(0, None, 'int')
        if e[0] == 'foreach':
            _, var, lo, hi, step, body = e
            a, b, st = (self.static_int(x, env) for x in (lo, hi, step))
            i = a
            while i <= b:
                env2 = dict(env)
                env2[var] = C(i, None, 'int')
                self.stmt(body, env2, None)
                for n in env:
                    env[n] = env2[n]
                i += st
            return C(0, None, 'int')
        if e[0] == 'if' and e[3] is None:
            c = self.cond(e[1], env)
            if isinstance(c, C):
                if c.v:
                    self.stmt(('expr', e[2]), env, None)
                return C(0, None, 'int')
            assigned = set()
            self.assigned_vars(e[2], assigned)
            for n in sorted(assigned):
                if n in env and not (isinstance(env[n], V) and env[n].name.startswith('sv')):
                    env[n] = self.mutable(env[n], n)
            self.nlab += 1
            lab = 'sgskip%d' % self.nlab
            self.emit('if (!%s) goto <%s>;' % (self.operand(c, 1), lab))
            self.depth += 1
            self.stmt(('expr', e[2]), env, None)
            self.depth -= 1
            self.emit('<%s>' % lab)
            return C(0, None, 'int')
        return self.expr(e, env, want)

    def assigned_vars(self, e, out):
        if isinstance(e, tuple):
            if e and e[0] == 'assign':
                t = e[1]
                while t[0] == 'slice':
                    t = t[1]
                if t[0] == 'id':
                    out.add(t[1])
            for x in e:
                if isinstance(x, (tuple, list)):
                    self.assigned_vars(x, out)
        elif isinstance(e, list):
            for x in e:
                self.assigned_vars(x, out)

    def mutable(self, v, name):
        self.ntmp += 1
        n = 'sv%d' % self.ntmp
        size = self.size(v) if isinstance(v, V) else (1 if v.kind == 'bool' else (8 if v.kind == 'int' else nbytes(v.w)))
        self.emit('local %s:%d = %s;' % (n, size, self.operand(v, size)))
        return V(n, v.w, v.kind)

    def store(self, env, name, val):
        cur = env.get(name)
        if isinstance(cur, V) and cur.name.startswith('sv'):
            size = self.size(cur)
            self.emit('%s = %s;' % (cur.name, self.fit(val, size) if val.kind != 'bool' else self.operand(val, 1)))
        else:
            env[name] = val

    def assign(self, lhs, rhs, env):
        if lhs[0] == 'call' and lhs[1] == 'X':
            reg = self.expr(lhs[2][0], env, None)
            v = self.coerce(self.expr(rhs, env, self.xlen), self.xlen)
            self.emit('%s = %s;' % (reg.name, self.fit(v, self.xlen // 8)))
            return C(0, None, 'int')
        if lhs[0] == 'id':
            cur = env.get(lhs[1])
            w = cur.w if cur is not None and cur.kind == 'bits' else None
            v = self.expr(rhs, env, w)
            if w is not None:
                v = self.coerce(v, w)
            self.store(env, lhs[1], v)
            return C(0, None, 'int')
        if lhs[0] == 'slice' and lhs[1][0] == 'id':
            name = lhs[1][1]
            cur = env[name]
            hi = self.static_int(lhs[2], env)
            lo = self.static_int(lhs[3], env)
            w = hi - lo + 1
            v = self.coerce(self.expr(rhs, env, w), w)
            fm = mask(w) << lo
            keep = self.band(cur, C(~fm & mask(cur.w), cur.w), cur.w)
            ins = self.shl(self.coerce_zext(v, cur.w), C(lo, None, 'int'), cur.w)
            self.store(env, name, self.bor(keep, ins, cur.w))
            return C(0, None, 'int')
        raise Unsupported('assignment to %r' % (lhs,))

    # ---- arithmetic helpers with folding
    def band(self, a, b, w):
        if isinstance(a, C) and isinstance(b, C):
            return C(a.v & b.v, w)
        for x, y in ((a, b), (b, a)):
            if isinstance(x, C) and x.v & mask(w) == 0:
                return C(0, w)
            if isinstance(x, C) and x.v & mask(w) == mask(w):
                return y
        s = nbytes(w)
        return self.tmp(w, '%s & %s' % (self.fit(a, s), self.fit(b, s)))

    def bor(self, a, b, w):
        if isinstance(a, C) and isinstance(b, C):
            return C(a.v | b.v, w)
        for x, y in ((a, b), (b, a)):
            if isinstance(x, C) and x.v & mask(w) == 0:
                return y
        s = nbytes(w)
        return self.tmp(w, '%s | %s' % (self.fit(a, s), self.fit(b, s)))

    def shl(self, a, n, w):
        if isinstance(n, C) and n.v == 0:
            return a
        if isinstance(a, C) and isinstance(n, C):
            return C((a.v << n.v) & mask(w), w)
        if isinstance(a, C) and a.v == 0:
            return a
        s = nbytes(w)
        return self.masked(self.tmp(w, '%s << %s' % (self.fit(a, s), self.amount(n))), w)

    def shr(self, a, n, w):
        if isinstance(n, C) and n.v == 0:
            return a
        if isinstance(a, C) and isinstance(n, C):
            return C(a.v >> n.v, w)
        s = nbytes(w)
        return self.tmp(w, '%s >> %s' % (self.fit(a, s), self.amount(n)))

    def amount(self, n):
        if isinstance(n, C):
            return '%d' % n.v
        return n.name

    def coerce_zext(self, v, w):
        if isinstance(v, C):
            return C(v.v & mask(w), w)
        if v.imm:
            return self.tmp(w, v.name)
        if v.kind == 'bool':
            return self.tmp(w, 'zext(%s)' % v.name)
        if self.size(v) == nbytes(w):
            return V(v.name, w, 'bits', v.reg)
        if self.size(v) < nbytes(w):
            return self.tmp(w, 'zext(%s)' % v.name)
        return self.masked(self.tmp(w, '%s:%d' % (v.name, nbytes(w))), w)

    def coerce(self, v, w):
        """Give an int-typed value (literal, popcount, ...) the width w."""
        if isinstance(v, C):
            if v.kind == 'bool':
                raise Unsupported('bool as bits')
            return C(v.v & mask(w), w)
        if v.kind == 'int':
            return self.coerce_zext(v, w)
        if v.kind == 'bits' and v.w != w:
            raise Unsupported('width %d where %d is expected' % (v.w, w))
        return v

    def to_int(self, v):
        if isinstance(v, C):
            return C(v.v, None, 'int')
        if v.imm:
            return self.tmp(INT_W, v.name, 'int')
        if v.kind == 'int':
            return v
        if self.size(v) == 8:
            return V(v.name, INT_W, 'int')
        return self.tmp(INT_W, 'zext(%s)' % v.name, 'int')

    def binop(self, e, env, want):
        _, op, l, r = e
        if op in ('<<', '>>', '<<<', '>>>'):
            a = self.expr(l, env, want)
            n = self.expr(r, env, None)
            if isinstance(a, C) and a.w is None:
                raise Unsupported('shift of an int')
            if isinstance(n, V) and n.kind == 'bits':
                n = self.to_int(n) if (op in ('<<<', '>>>')) else n
            w = a.w
            if op == '<<':
                return self.shl(a, n, w)
            if op == '>>':
                return self.shr(a, n, w)
            n = self.to_int(n)
            back = self.isub(C(w, None, 'int'), n)
            if op == '<<<':
                return self.bor(self.shl(a, n, w), self.shr(a, back, w), w)
            return self.bor(self.shr(a, n, w), self.shl(a, back, w), w)
        if op == '@':
            a = self.expr(l, env, None)
            b = self.expr(r, env, None)
            w = a.w + b.w
            return self.bor(self.shl(self.coerce_zext(a, w), C(b.w, None, 'int'), w), self.coerce_zext(b, w), w)
        if op in ('&', '|') :
            a = self.expr(l, env, want)
            if a.kind == 'bool':
                b = self.cond(r, env)
                return self.logic(op, a, b)
            b = self.expr(r, env, a.w if a.w else want)
            w = a.w or b.w or want
            a, b = self.coerce(a, w), self.coerce(b, w)
            return self.band(a, b, w) if op == '&' else self.bor(a, b, w)
        if op in ('==', '!=', '<', '>', '<=', '>=', '<_s', '>_s', '<=_s', '>=_s', '<_u', '>_u', '<=_u', '>=_u'):
            return self.compare(op, l, r, env)
        a = self.expr(l, env, want)
        b = self.expr(r, env, a.w if a.kind == 'bits' and a.w else want)
        if a.kind == 'int' or b.kind == 'int':
            if a.kind == 'bits' and a.w is not None:
                b = self.coerce(b, a.w)
            elif b.kind == 'bits' and b.w is not None:
                a = self.coerce(a, b.w)
        if (a.kind == 'int' and b.kind == 'int'):
            if isinstance(a, C) and isinstance(b, C):
                return C({'+': a.v + b.v, '-': a.v - b.v, '*': a.v * b.v, '^': a.v ^ b.v}[op], None, 'int')
            sa, sb = self.int_operand(a), self.int_operand(b)
            return self.tmp(INT_W, '%s %s %s' % (sa, op, sb), 'int')
        w = a.w or b.w
        if isinstance(a, C) and isinstance(b, C):
            return C({'+': a.v + b.v, '-': a.v - b.v, '*': a.v * b.v, '^': a.v ^ b.v}[op] & mask(w), w)
        if op == '^':
            for x, y in ((a, b), (b, a)):
                if isinstance(x, C) and x.v == 0:
                    return y
        s = nbytes(w)
        return self.masked(self.tmp(w, '%s %s %s' % (self.fit(a, s), op, self.fit(b, s))), w)

    def int_operand(self, x):
        if isinstance(x, C):
            return '0x%x:8' % (x.v & mask(64))
        return self.to_int(x).name

    def isub(self, a, b):
        if isinstance(a, C) and isinstance(b, C):
            return C(a.v - b.v, None, 'int')
        return self.tmp(INT_W, '%s - %s' % (self.int_operand(a), self.int_operand(b)), 'int')

    def logic(self, op, a, b):
        if isinstance(a, C) and isinstance(b, C):
            return C((a.v and b.v) if op == '&' else (a.v or b.v), None, 'bool')
        for x, y in ((a, b), (b, a)):
            if isinstance(x, C):
                if op == '&':
                    return y if x.v else x
                return x if x.v else y
        return self.tmp(1, '%s %s %s' % (a.name, '&&' if op == '&' else '||', b.name), 'bool')

    def cond(self, e, env):
        v = self.expr(e, env, None)
        if v.kind != 'bool':
            raise Unsupported('condition is not a bool')
        return v

    def compare(self, op, l, r, env):
        a = self.expr(l, env, None)
        b = self.expr(r, env, a.w if a.kind == 'bits' else None)
        if a.kind == 'enum' or b.kind == 'enum':
            eq = a.v == b.v
            return C(eq if op == '==' else not eq, None, 'bool')
        if a.kind == 'bits' and a.w is None and b.kind == 'bits':
            a = self.coerce(a, b.w)
        if b.kind == 'bits' and b.w is None and a.kind == 'bits':
            b = self.coerce(b, a.w)
        if a.kind == 'int' or b.kind == 'int':
            a, b = self.to_int(a) if isinstance(a, V) else C(a.v, None, 'int'), self.to_int(b) if isinstance(b, V) else C(b.v, None, 'int')
            w = INT_W
        else:
            w = a.w
            if isinstance(a, C) and a.w is None:
                a = C(a.v, w)
            if isinstance(b, C) and b.w is None:
                b = C(b.v, w)
        signed = op.endswith('_s')
        base = op.split('_')[0]
        if isinstance(a, C) and isinstance(b, C):
            x, y = a.v, b.v
            if signed:
                x, y = sx(x, w), sx(y, w)
            return C({'==': x == y, '!=': x != y, '<': x < y, '>': x > y, '<=': x <= y, '>=': x >= y}[base], None, 'bool')
        s = 8 if a.kind == 'int' else nbytes(w)
        xa, xb = self.fit(a, s) if a.kind != 'int' else self.int_operand(a), self.fit(b, s) if b.kind != 'int' else self.int_operand(b)
        if signed and w % 8:
            xa = self.sext_to(V(xa, w) if not xa.startswith('0x') else a, w, s * 8).name
            xb = self.sext_to(V(xb, w) if not xb.startswith('0x') else b, w, s * 8).name
        sop = {'==': '==', '!=': '!=', '<': '<', '>': '>', '<=': '<=', '>=': '>='}[base]
        if signed:
            sop = 's' + sop
        return self.tmp(1, '%s %s %s' % (xa, sop, xb), 'bool')

    def sext_to(self, v, w, W):
        if isinstance(v, C):
            return C(sx(v.v, w) & mask(W), W)
        if w % 8 == 0:
            if nbytes(w) == nbytes(W):
                return v
            return self.tmp(W, 'sext(%s)' % v.name)
        s = nbytes(W)
        z = self.fit(v, s)
        up = self.tmp(W, '%s << %d' % (z, s * 8 - w))
        return self.masked(self.tmp(W, '%s s>> %d' % (up.name, s * 8 - w)), W)

    def slice(self, e, env):
        _, base, hi_e, lo_e = e
        x = self.expr(base, env, None)
        if x.kind != 'bits':
            raise Unsupported('slice of %s' % x.kind)
        try:
            hi = self.static_int(hi_e, env)
            lo = self.static_int(lo_e, env)
        except Unsupported:
            if hi_e[0] == 'bin' and hi_e[1] == '+' and hi_e[2] == lo_e:
                w = self.static_int(hi_e[3], env) + 1
            elif hi_e == lo_e:
                w = 1
            else:
                raise
            lo_v = self.to_int(self.expr(lo_e, env, None))
            t = self.shr(x, lo_v, x.w)
            return self.coerce_zext(t, w) if w != x.w else t
        w = hi - lo + 1
        if lo == 0 and w == x.w:
            return x
        if isinstance(x, C):
            return C((x.v >> lo) & mask(w), w)
        t = self.shr(x, C(lo, None, 'int'), x.w)
        if nbytes(w) == self.size(t):
            return self.masked(V(t.name, w), w) if w % 8 else V(t.name, w, 'bits', t.reg)
        return self.coerce_zext(V(t.name, x.w, 'bits', getattr(t, 'reg', False)), w)

    def if_(self, e, env, want):
        _, c_e, a_e, b_e = e
        c = self.cond(c_e, env)
        if isinstance(c, C):
            if c.v:
                return self.expr(a_e, env, want)
            return self.expr(b_e, env, want) if b_e else C(0, None, 'int')
        # the then-arm is the value by default and the else-arm is assigned
        # when the condition fails, as hand-written min/max do (rd = rs1 first)
        a = self.expr(a_e, env, want)
        w = a.w if a.kind == 'bits' and a.w else want
        if a.kind == 'bool' or w is None:
            raise Unsupported('bool-valued if')
        a = self.coerce(a, w)
        r = self.mutable(a, 'if')
        self.nlab += 1
        lab = 'sgelse%d' % self.nlab
        self.emit('if (%s) goto <%s>;' % (self.operand(c, 1), lab))
        self.depth += 1
        b = self.coerce(self.expr(b_e, env, w), w)
        self.emit('%s = %s;' % (r.name, self.fit(b, self.size(r))))
        self.depth -= 1
        self.emit('<%s>' % lab)
        return r

    # ---- calls
    def call(self, e, env, want):
        _, f, args = e
        if f == 'X':
            reg = self.expr(args[0], env, None)
            return V(reg.name, self.xlen, 'bits', True)
        if f in ('sign_extend', 'zero_extend', 'EXTS', 'EXTZ'):
            if len(args) == 2:
                want = self.static_int(args[0], env)
                args = args[1:]
            v = self.expr(args[0], env, None)
            if want is None:
                raise Unsupported('extension width unknown')
            if v.kind == 'bool':
                raise Unsupported('extend a bool')
            if f in ('sign_extend', 'EXTS'):
                return self.sext_to(v, v.w, want)
            return self.coerce_zext(v, want)
        if f in ('zeros', 'ones'):
            if args and args[0][0] != 'unit':
                want = self.static_int(args[0], env)
            if want is None:
                raise Unsupported('zeros() width unknown')
            return C(0 if f == 'zeros' else mask(want), want)
        if f == 'to_bits':
            if len(args) == 2:
                want = self.static_int(args[0], env)
                args = args[1:]
            v = self.expr(args[0], env, want)
            return self.coerce(v, want)
        if f == 'unsigned':
            return self.to_int(self.expr(args[0], env, None))
        if f == 'bit_to_bool':
            v = self.expr(args[0], env, None)
            if isinstance(v, C):
                return C(bool(v.v), None, 'bool')
            return self.tmp(1, '%s != 0' % self.fit(v, self.size(v)), 'bool')
        if f in ('bool_to_bit', 'bool_to_bits'):
            v = self.cond(args[0], env)
            if isinstance(v, C):
                return C(1 if v.v else 0, 1)
            return V(v.name, 1, 'bits')
        if f == 'not':
            v = self.cond(args[0], env)
            if isinstance(v, C):
                return C(not v.v, None, 'bool')
            return self.tmp(1, '!%s' % v.name, 'bool')
        if f in ('count_ones', 'count_leading_zeros', 'count_trailing_zeros'):
            v = self.expr(args[0], env, None)
            if isinstance(v, C):
                raise Unsupported('constant count')
            s = self.size(v)
            if f == 'count_ones':
                return self.tmp(INT_W, 'popcount(%s)' % v.name, 'int')
            if f == 'count_leading_zeros':
                r = self.tmp(INT_W, 'lzcount(%s)' % v.name, 'int')
                if v.w % 8:
                    r = self.isub(r, C(s * 8 - v.w, None, 'int'))
                return r
            low = self.tmp(v.w, '(%s & -%s) - 1' % (v.name, v.name))
            low = self.masked(low, v.w)
            return self.tmp(INT_W, 'popcount(%s)' % low.name, 'int')
        if f in self.m.funcs:
            return self.inline(f, args, env, want)
        if f in self.m.vals and f not in self.m.maps:
            vals = [self.expr(a, env, None) for a in args]
            sig = re.sub(r'^forall[^.]*\.\s*', '', self.m.vals[f], flags=re.S)
            fenv = {}
            m = re.match(r'^\((.*)\)\s*->\s*(.*)$', sig, re.S) or re.match(r'^(.*?)\s*->\s*(.*)$', sig, re.S)
            if m:
                for pt, v in zip(split_top(m.group(1)), vals):
                    tm = re.match(r"^bits\s*\(\s*('\w+)\s*\)$", pt.strip())
                    if tm and v.kind == 'bits' and v.w:
                        fenv[tm.group(1)] = C(v.w, None, 'int')
            return self.pcodeop(f, vals, sig, fenv, want)
        if f in self.m.maps:
            a = self.expr(args[0], env, None)
            for l, r in self.m.maps[f]:
                if isinstance(a, C) and self.pat_eq(l, a, env):
                    return self.expr(r, env, want)
            raise Unsupported('mapping %s' % f)
        raise Unsupported('function %s' % f)

    def inline(self, f, args, env, want):
        params, body = self.m.funcs[f]
        vals = [self.expr(a, env, None) for a in args]
        fenv = {}
        sig = re.sub(r'^forall[^.]*\.\s*', '', self.m.vals.get(f, ''), flags=re.S)
        m = re.match(r'^\((.*)\)\s*->\s*(.*)$', sig, re.S) or re.match(r'^(.*?)\s*->\s*(.*)$', sig, re.S)
        if m:
            ptys = split_top(m.group(1))
            for pt, v in zip(ptys, vals):
                tm = re.match(r"^bits\s*\(\s*('\w+)\s*\)$", pt.strip())
                if tm and v.kind == 'bits' and v.w:
                    fenv[tm.group(1)] = C(v.w, None, 'int')
                tm = re.match(r"^(?:implicit|int)\s*\(\s*('\w+)\s*\)$", pt.strip())
                if tm and isinstance(v, C):
                    fenv[tm.group(1)] = C(v.v, None, 'int')
        for p, v in zip(params, vals):
            fenv[p] = v
        saved = (list(self.lines), self.ntmp, self.nlab, self.depth)
        try:
            old_budget = self.budget
            r = self.expr(body, fenv, want)
            if len(self.lines) - len(saved[0]) > self.budget:
                raise Budget()
            return r
        except (Budget, Unsupported):
            self.lines, self.ntmp, self.nlab, self.depth = saved[0], saved[1], saved[2], saved[3]
            return self.pcodeop(f, vals, sig, fenv, want)

    def pcodeop(self, f, vals, sig, fenv, want):
        m = re.search(r'->\s*(.*)$', sig, re.S)
        w = want
        if m:
            w = self.width_of_type(m.group(1).strip(), fenv)
        if not isinstance(w, int):
            raise Unsupported('pcodeop %s result width' % f)
        self.pcodeops.add(f)
        ops = ', '.join(self.fit(v, self.size(v)) if isinstance(v, V) else self.operand(v, nbytes(v.w or 64)) for v in vals)
        return self.tmp(w, '%s(%s)' % (f, ops))

def sx(v, w):
    v &= mask(w)
    return v - (1 << w) if v >> (w - 1) & 1 else v

# ---------------------------------------------------------------- encodings
REG_AT = {7: 'rd', 15: 'rs1', 20: 'rs2'}

def load_tokens(path):
    with open(path) as f:
        text = f.read()
    m = re.search(r'define token instr \(32\)(.*?);', text, re.S)
    fields = {}
    for name, lo, hi, signed in re.findall(r'(\w+)=\((\d+),(\d+)\)(\s+signed)?', m.group(1)):
        if not signed.strip():
            fields.setdefault((int(lo), int(hi)), []).append(name)
    return fields

def field_name(fields, lo, hi, prefer=('funct3', 'funct7', 'op')):
    names = fields.get((lo, hi), [])
    for p in prefer:
        for n in names:
            if n.startswith(p) and (p != 'op' or re.match(r'op\d{4}$', n)):
                return n
    return None

def cover(fields, fixed_bits):
    """Constraints over existing token fields for {bit: value}."""
    bits = sorted(fixed_bits)
    runs, cur = [], []
    for b in bits:
        if cur and b == cur[-1] + 1:
            cur.append(b)
        else:
            if cur:
                runs.append(cur)
            cur = [b]
    if cur:
        runs.append(cur)
    out = []
    for run in runs:
        p, hi = run[0], run[-1]
        while p <= hi:
            best = None
            for q in range(hi, p - 1, -1):
                n = field_name(fields, p, q)
                if n:
                    best = (q, n)
                    break
            if not best:
                raise Unsupported('no token field covers bit %d' % p)
            q, n = best
            v = 0
            for b in range(q, p - 1, -1):
                v = (v << 1) | fixed_bits[b]
            out.append((n, v, p))
            p = q + 1
    out.sort(key=lambda t: t[2])
    return ['%s=0x%x' % (n, v) for n, v, _ in out]

class Gen:
    def __init__(self, model, fields, budget, opaque=()):
        self.m = model
        self.fields = fields
        self.budget = budget
        self.opaque = set(opaque)
        self.parts = {}
        self.reserved = set()
        self.report = {'constructors': [], 'skipped': [], 'pcodeops': []}

    def arg_types(self, ctor):
        return self.m.unions[ctor]

    def run(self, xlen):
        comp = Compiler(self.m, xlen, self.budget)
        out = []
        for name, why in self.m.unparsed:
            self.report['skipped'].append({'xlen': xlen, 'ctor': name, 'why': 'Sail the parser does not handle: ' + why})
        for lhs, rhs, guard in self.m.encdecs:
            if lhs[0] != 'call' or lhs[1] not in self.m.execs:
                if lhs[0] == 'call':
                    self.report['skipped'].append({'xlen': xlen, 'ctor': lhs[1], 'why': 'no execute clause it can compile'})
                continue
            ctor = lhs[1]
            try:
                for c in self.expand(ctor, lhs, rhs, guard, xlen, comp):
                    out.append(c)
            except (Unsupported, SailError, Budget) as ex:
                self.report['skipped'].append({'xlen': xlen, 'ctor': ctor, 'why': str(ex)})
        return out, comp.pcodeops

    def pieces(self, rhs):
        if rhs[0] == 'bin' and rhs[1] == '@':
            return self.pieces(rhs[2]) + self.pieces(rhs[3])
        return [rhs]

    def expand(self, ctor, lhs, rhs, guard, xlen, comp):
        types = self.arg_types(ctor)
        largs = lhs[2]
        if len(largs) != len(types):
            raise Unsupported('arity')
        names = {}
        consts = {}
        for i, (a, t) in enumerate(zip(largs, types)):
            if a[0] == 'id' and a[1] not in self.m.enums.get(t, []):
                names[a[1]] = t
            else:
                consts[i] = a
        pos = 32
        layout = []
        for p in self.pieces(rhs):
            if p[0] == 'bits':
                w = p[2]
                layout.append(('lit', pos - w, pos - 1, p[1]))
            elif p[0] == 'call' and p[1] == 'encdec_reg':
                w = 5
                layout.append(('reg', pos - w, pos - 1, p[2][0][1]))
            elif p[0] == 'call' and p[1] in self.m.maps:
                rbits = self.m.maps[p[1]][0][1]
                w = rbits[2]
                layout.append(('map', pos - w, pos - 1, (p[1], p[2][0][1])))
            elif p[0] == 'id':
                t = names[p[1]]
                w = comp.width_of_type(t, {})
                layout.append(('field', pos - w, pos - 1, p[1]))
            else:
                raise Unsupported('encoding piece %r' % (p,))
            pos -= w
        if pos != 0:
            raise Unsupported('not a 32-bit encoding')
        # enumerate: enum-typed fields, fields named by a mnemonic mapping, and
        # fields a guard restricts in a way a cube of fixed bits cannot express
        asm_args, asm = self.m.asms[ctor]
        asm_pieces = split_caret(asm)
        enum_fields = {}
        for kind, lo, hi, x in layout:
            if kind == 'map':
                enum_fields[x[1]] = [l for l, r in self.m.maps[x[0]]]
        mn_field = None
        for pc in asm_pieces:
            mm = re.match(r'^(\w+)\((\w+)\)$', pc)
            if mm and mm.group(1) in self.m.maps:
                argname = asm_args[largs.index(('id', mm.group(2)))] if False else mm.group(2)
                mn_field = (mm.group(1), argname)
        lname = {}
        for i, a in enumerate(largs):
            lname[asm_args[i] if i < len(asm_args) else None] = a
        # the assembly/execute clauses name the arguments positionally
        exec_args, body = self.m.execs[ctor]
        pos_of = {n: i for i, n in enumerate(exec_args)}
        combos = [dict()]
        for i, a in consts.items():
            combos = [{**c, i: a} for c in combos]
        for f, vals in enum_fields.items():
            i = [j for j, a in enumerate(largs) if a == ('id', f)][0]
            combos = [{**c, i: v} for c in combos for v in vals]
        if mn_field:
            argpos = pos_of.get(mn_field[1])
            if argpos is not None and argpos not in consts and largs[argpos][0] == 'id' and largs[argpos][1] not in enum_fields:
                f = largs[argpos][1]
                w = comp.width_of_type(names[f], {})
                combos = [{**c, argpos: ('bits', v, w)} for c in combos for v in range(1 << w)]
        for combo in combos:
            yield from self.one(ctor, largs, types, names, layout, guard, combo, xlen, comp, asm_args, asm_pieces, exec_args, body)

    def one(self, ctor, largs, types, names, layout, guard, combo, xlen, comp, asm_args, asm_pieces, exec_args, body, alt=None):
        genv = {}
        fixedval = {}
        for i, a in combo.items():
            if largs[i][0] == 'id' and largs[i][1] in names:
                fname = largs[i][1]
                if a[0] == 'bits':
                    genv[fname] = C(a[1], a[2])
                    fixedval[fname] = a[1]
                else:
                    genv[fname] = C(a[1], None, 'enum')
            elif a[0] == 'id':
                genv['#%d' % i] = C(a[1], None, 'enum')
        # guard
        fixed = {}
        operand_fields = {}
        for kind, lo, hi, x in layout:
            if kind == 'lit':
                for b in range(lo, hi + 1):
                    fixed[b] = (x >> (b - lo)) & 1
            elif kind == 'map':
                mname, f = x
                val = genv.get(f)
                bitsv = None
                for l, r in self.m.maps[mname]:
                    if val is not None and l == ('id', val.v):
                        bitsv = r[1]
                if bitsv is None:
                    raise Unsupported('mapping value')
                for b in range(lo, hi + 1):
                    fixed[b] = (bitsv >> (b - lo)) & 1
            elif kind == 'field' and x in fixedval:
                for b in range(lo, hi + 1):
                    fixed[b] = (fixedval[x] >> (b - lo)) & 1
            elif kind == 'field':
                operand_fields[x] = (lo, hi)
            elif kind == 'reg':
                if lo not in REG_AT:
                    raise Unsupported('register field at bit %d' % lo)
        if guard is not None and alt is None:
            if ctor in self.reserved:
                guard = drop_field_terms(guard, set(operand_fields))
            gw = self.guard_ok(guard, genv, operand_fields, names, comp, fixed)
            if gw is False:
                return
            if isinstance(gw, list):
                for extra in gw:
                    yield from self.one(ctor, largs, types, names, layout, guard, combo, xlen, comp, asm_args, asm_pieces, exec_args, body, alt=extra)
                return
        if alt:
            fixed.update(alt)
        # operands
        env = {}
        regs = {}
        for kind, lo, hi, x in layout:
            if kind == 'reg':
                regs[x] = REG_AT[lo]
        imm = {}
        for f, (lo, hi) in operand_fields.items():
            n = field_name(self.fields, lo, hi, prefer=('op',))
            if not n:
                raise Unsupported('no token field for %s %d..%d' % (f, lo, hi))
            imm[f] = (n, hi - lo + 1, comp.width_of_type(names[f], {}))
        for f, n in regs.items():
            env[f] = V(n, 5, 'reg')
        for f, (n, w, tw) in imm.items():
            env[f] = V(n, tw, 'bits', imm=True)
        for f, v in genv.items():
            if not f.startswith('#'):
                env[f] = v
        # positional args of execute/assembly
        ex_env = {}
        for i, n in enumerate(exec_args):
            a = largs[i]
            if i in combo and a[0] != 'id':
                ex_env[n] = genv.get('#%d' % i) or C(combo[i][1], combo[i][2]) if combo[i][0] == 'bits' else genv.get('#%d' % i)
            elif a[0] == 'id' and a[1] in env:
                ex_env[n] = env[a[1]]
            elif '#%d' % i in genv:
                ex_env[n] = genv['#%d' % i]
            elif i in combo and combo[i][0] == 'bits':
                ex_env[n] = C(combo[i][1], combo[i][2])
        mnem, ops = self.assembly(asm_args, asm_pieces, ex_env, largs, env, regs, imm)
        comp.begin()
        if mnem in self.opaque or ctor in self.opaque:
            op = mnem.replace('.', '_')
            comp.pcodeops.add(op)
            widths = {n: tw for n, w, tw in imm.values()}
            args = []
            for o in ops[1:]:
                if o in widths:
                    args.append(comp.tmp(widths[o], o).name)
                else:
                    args.append(o)
            comp.emit('%s = %s(%s);' % (ops[0], op, ', '.join(args)))
        else:
            comp.expr(body, ex_env, None)
        lines = comp.lines
        cons = []
        for f in sorted(set(regs.values()) | {v[0] for v in imm.values()}, key=lambda s: ops.index(s) if s in ops else 99):
            cons.append(f)
        cons += cover(self.fields, fixed)
        m_ = sum(1 << b for b in fixed)
        v_ = sum(fixed[b] << b for b in fixed)
        self.report['constructors'].append({'xlen': xlen, 'ctor': ctor, 'mnemonic': mnem, 'mask': '0x%08x' % m_, 'match': '0x%08x' % v_, 'ops': len(lines)})
        text = ':%s %s is %s\n{\n%s\n}\n' % (mnem, ','.join(ops), ' & '.join(cons), '\n'.join(lines))
        self.parts.setdefault(xlen, []).append({'mnem': mnem, 'ops': ops, 'cons': cons, 'lines': list(lines), 'mask': m_, 'match': v_})
        yield (mnem, m_, v_, text)

    def guard_ok(self, guard, genv, operand_fields, names, comp, fixed):
        """Evaluate the guard; restrict operand fields it mentions to fixed bits."""
        refs = set()
        def walk(e):
            if isinstance(e, tuple):
                if e and e[0] == 'id' and e[1] in operand_fields:
                    refs.add(e[1])
                for x in e:
                    if isinstance(x, (tuple, list)):
                        walk(x)
            elif isinstance(e, list):
                for x in e:
                    walk(x)
        walk(guard)
        def ev(env):
            comp.begin()
            r = guard_eval(comp, guard, env)
            return r
        base = dict(genv)
        if not refs:
            return ev(base)
        if len(refs) > 1:
            raise Unsupported('guard over several fields')
        f = refs.pop()
        lo, hi = operand_fields[f]
        w = hi - lo + 1
        allowed = [v for v in range(1 << w) if ev(dict(base, **{f: C(v, w)}))]
        if not allowed:
            return False
        if len(allowed) == 1 << w:
            return True
        # a cube: bits common to every allowed value become fixed, and the
        # remaining free bits must account for all allowed values
        const_mask = mask(w)
        for v in allowed:
            const_mask &= ~(v ^ allowed[0])
        if len(allowed) != 1 << (w - bin(const_mask).count('1')):
            # several cubes: split on the top free bit until each half is
            # a whole cube; each becomes a constructor with those bits fixed
            # and the operand left whole
            alts = []
            def split(vals, top):
                free = top
                if len(vals) == 1 << free:
                    alts.append({lo + b: (vals[0] >> b) & 1 for b in range(free, w)})
                    return
                bit = free - 1
                for half in ([v for v in vals if not v >> bit & 1], [v for v in vals if v >> bit & 1]):
                    if half:
                        split(half, bit)
            split(sorted(allowed), w)
            return alts
        top = 0
        while top < w and const_mask >> (w - 1 - top) & 1 and not (allowed[0] >> (w - 1 - top)) & 1:
            top += 1
        if bin(const_mask).count('1') != top:
            raise Unsupported('guard on %s fixes non-top bits' % f)
        for b in range(w - top, w):
            fixed[lo + b] = 0
        operand_fields[f] = (lo, hi - top)
        return True

    def assembly(self, asm_args, pieces, ex_env, largs, env, regs, imm):
        mnem = None
        ops = []
        for pc in pieces:
            pc = pc.strip()
            if pc.startswith('"'):
                s = pc[1:-1]
                if mnem is None:
                    mnem = s
                continue
            mm = re.match(r'^(\w+)\((.*)\)$', pc)
            if not mm:
                raise Unsupported('assembly piece %s' % pc)
            f, a = mm.group(1), mm.group(2).strip()
            if f in ('spc', 'sep'):
                continue
            if f == 'reg_name':
                v = ex_env[a]
                ops.append(v.name)
            elif f.startswith('hex_bits'):
                v = ex_env[a]
                if not isinstance(v, V):
                    raise Unsupported('constant immediate')
                ops.append(v.name)
            elif f in self.m.maps:
                v = ex_env[a]
                for l, r in self.m.maps[f]:
                    if (l[0] == 'id' and v.kind == 'enum' and l[1] == v.v) or (l[0] == 'bits' and isinstance(v, C) and v.kind == 'bits' and l[1] == v.v):
                        mnem = r[1]
                if mnem is None:
                    raise Unsupported('mnemonic for %r' % v)
            else:
                raise Unsupported('assembly function %s' % f)
        return mnem, ops

def drop_field_terms(e, fields):
    """The guard with every comparison that mentions an operand field taken as true."""
    def mentions(x):
        if isinstance(x, tuple):
            if x and x[0] == 'id' and x[1] in fields:
                return True
            return any(mentions(y) for y in x if isinstance(y, (tuple, list)))
        if isinstance(x, list):
            return any(mentions(y) for y in x)
        return False
    if e[0] == 'bin' and e[1] in ('&', '|'):
        return ('bin', e[1], drop_field_terms(e[2], fields), drop_field_terms(e[3], fields))
    if mentions(e):
        return ('bool', True)
    return e

def guard_eval(comp, e, env):
    k = e[0]
    if k == 'call' and e[1] in ('currentlyEnabled', 'hartSupports'):
        return True
    if k == 'bin' and e[1] in ('&', '|'):
        a, b = guard_eval(comp, e[2], env), guard_eval(comp, e[3], env)
        return (a and b) if e[1] == '&' else (a or b)
    if k == 'call' and e[1] == 'not':
        return not guard_eval(comp, e[2][0], env)
    r = comp.expr(e, env, None)
    if not isinstance(r, C):
        raise Unsupported('guard is not static')
    return bool(r.v)

def split_caret(s):
    out, cur, q = [], '', False
    depth = 0
    for ch in s.strip():
        if ch == '"':
            q = not q
        if not q and ch in '(':
            depth += 1
        if not q and ch in ')':
            depth -= 1
        if ch == '^' and not q and depth == 0:
            out.append(cur.strip())
            cur = ''
        else:
            cur += ch
    out.append(cur.strip())
    return out

def aliases(gen, xlen, pseudo):
    """Display aliases riscv-opcodes defines as `$pseudo_op` of a generated
    instruction with one register operand fixed to x0 (`zext.w` = `add.uw` with
    rs2 = zero): the base constructor's semantics, the register left out of the
    display and constrained to 0."""
    out = []
    have = {p['mnem'] for p in gen.parts.get(xlen, [])}
    for name, base, ext, m_p, v_p in pseudo:
        if name in have or not ext_applies(ext, xlen):
            continue
        for p in gen.parts.get(xlen, []):
            if p['mnem'] != base or (m_p & p['mask']) != p['mask'] or (v_p & p['mask']) != p['match']:
                continue
            extra = m_p & ~p['mask']
            reg = [(lo, n) for lo, n in REG_AT.items() if extra == 0x1f << lo and v_p & extra == 0]
            if not reg or reg[0][1] not in p['ops']:
                continue
            lo, n = reg[0]
            field = 'op%02d%02d' % (lo, lo + 4)
            ops = [o for o in p['ops'] if o != n]
            cons = p['cons'] + ['%s=0' % field]
            out.append((name, m_p, v_p, ':%s %s is %s\n{\n%s\n}\n' % (name, ','.join(ops), ' & '.join(cons), '\n'.join(p['lines']))))
            have.add(name)
            break
    return out

def ext_applies(ext, xlen):
    if ext.startswith('rv64_'):
        return xlen == 64
    if ext.startswith('rv32_'):
        return xlen == 32
    return True

def pseudo_ops(path, exts):
    out = []
    for e in exts:
        with open(os.path.join(path, e)) as f:
            for line in f:
                toks = line.split('#')[0].split()
                if len(toks) < 3 or toks[0] != '$pseudo_op':
                    continue
                base = toks[1].split('::')[1]
                name = toks[2]
                if name.endswith('.rv32'):
                    continue
                m_ = v_ = 0
                for t in toks[3:]:
                    mm = re.match(r'^(\d+)(?:\.\.(\d+))?=(\S+)$', t)
                    if not mm:
                        continue
                    hi = int(mm.group(1))
                    lo = int(mm.group(2)) if mm.group(2) else hi
                    val = int(mm.group(3), 0)
                    for b in range(lo, hi + 1):
                        m_ |= 1 << b
                        v_ |= ((val >> (b - lo)) & 1) << b
                out.append((name, base, e, m_, v_))
    return out

# ---------------------------------------------------------------- riscv-opcodes
def opcodes(path, exts):
    out = {}
    for e in exts:
        for line in open(os.path.join(path, e)):
            line = line.split('#')[0].strip()
            if not line or (line.startswith('$') and not line.startswith('$pseudo_op')):
                continue
            toks = line.split()
            if toks[0] == '$pseudo_op':
                toks = toks[2:]
            name = re.sub(r'\.rv32$', '', toks[0])
            m_ = v_ = 0
            for t in toks[1:]:
                mm = re.match(r'^(\d+)(?:\.\.(\d+))?=(\S+)$', t)
                if not mm:
                    continue
                hi = int(mm.group(1))
                lo = int(mm.group(2)) if mm.group(2) else hi
                val = int(mm.group(3), 0)
                for b in range(lo, hi + 1):
                    m_ |= 1 << b
                    v_ |= ((val >> (b - lo)) & 1) << b
            out.setdefault(name, []).append((e, m_, v_))
    return out

def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--sail', required=True, help='sail-riscv model/ directory')
    ap.add_argument('--tokens', required=True, help='riscv.reg.sinc (its "instr" token fields)')
    ap.add_argument('--files', required=True, help='comma-separated instruction files under --sail')
    ap.add_argument('-o', '--out', required=True)
    ap.add_argument('--budget', type=int, default=160, help='largest inlined helper, in p-code statements')
    ap.add_argument('--opcodes', help='riscv-opcodes extensions/ directory to cross-check against')
    ap.add_argument('--exts', default='', help='riscv-opcodes files to check (rv_zba,rv64_zba,...)')
    ap.add_argument('--report', help='write a JSON report here')
    ap.add_argument('--source-rev', default='', help='source revisions to record in the header')
    ap.add_argument('--decode-reserved', default='', help='Sail constructors whose encdec guard is ignored, so reserved operand values decode as LLVM and GNU decode them (AES64KS1I,...)')
    ap.add_argument('--opaque', default='', help='mnemonics or Sail constructors to lift to a user pcodeop named after the mnemonic instead (orc.b,ORCB,...)')
    a = ap.parse_args()
    model = Model()
    for d in ('prelude', 'core'):
        for fn in sorted(os.listdir(os.path.join(a.sail, d))):
            if fn.endswith('.sail'):
                try:
                    model.load(os.path.join(a.sail, d, fn), False)
                except SailError:
                    pass
    files = [f for f in a.files.split(',') if f]
    for f in files:
        base = os.path.dirname(os.path.join(a.sail, f))
        for fn in sorted(os.listdir(base)):
            path = os.path.join(base, fn)
            if fn.endswith('.sail') and os.path.relpath(path, a.sail) not in files:
                model.load(path, False)
    for f in files:
        model.load(os.path.join(a.sail, f), True)
    gen = Gen(model, load_tokens(a.tokens), a.budget, [x for x in a.opaque.split(',') if x])
    gen.reserved = {x for x in a.decode_reserved.split(',') if x}
    res = {}
    ops = set()
    for xlen in (32, 64):
        cons, used = gen.run(xlen)
        res[xlen] = cons
        ops |= used
    if a.opcodes:
        pseudo = pseudo_ops(a.opcodes, [e for e in a.exts.split(',') if e])
        for xlen in (32, 64):
            for mn, m_, v_, text in aliases(gen, xlen, pseudo):
                res[xlen].append((mn, m_, v_, text))
                gen.report['constructors'].append({'xlen': xlen, 'ctor': 'alias', 'mnemonic': mn, 'mask': '0x%08x' % m_, 'match': '0x%08x' % v_, 'ops': 0})
    out = ['# Generated by tools/gen_riscv_sail.py from the Sail RISC-V model', '# (github.com/riscv/sail-riscv, BSD-2-Clause): ' + ', '.join(os.path.basename(f) for f in files) + '.']
    if a.source_rev:
        out.append('# Sources: ' + a.source_rev + '.')
    if a.opaque:
        out.append('# Lifted to a user pcodeop for readability: ' + a.opaque + '.')
    out += ['# Do not edit: regenerate with the command in docs/sleigh-from-isa-specs.md.', '']
    for op in sorted(ops):
        out.append('define pcodeop %s;' % op)
    if ops:
        out.append('')
    for xlen, cond in ((32, '@if ADDRSIZE == "32"'), (64, '@else')):
        out.append(cond)
        out.append('')
        for mnem, m_, v_, text in res[xlen]:
            out.append(text)
    out.append('@endif')
    open(a.out, 'w').write('\n'.join(out) + '\n')
    gen.report['pcodeops'] = sorted(ops)
    bad = []
    if a.opcodes:
        ref = opcodes(a.opcodes, [e for e in a.exts.split(',') if e])
        seen = set()
        for c in gen.report['constructors']:
            mn = c['mnemonic']
            cands = ref.get(mn, [])
            mm, vv = int(c['mask'], 16), int(c['match'], 16)
            ok = any(m_ == mm and v_ == vv for _, m_, v_ in cands)
            if not ok:
                ok = any((m_ & mm) == m_ and (vv & m_) == v_ for _, m_, v_ in cands) and 'narrowed' or False
            c['opcodes'] = ok if ok else ('missing' if not cands else 'differs')
            if not ok:
                bad.append(c)
            seen.add(mn)
        gen.report['opcodes_unmatched'] = sorted(set(ref) - seen)
    if a.report:
        json.dump(gen.report, open(a.report, 'w'), indent=1)
    n32, n64 = len(res[32]), len(res[64])
    print('constructors: rv32 %d, rv64 %d; skipped %d; pcodeops %s' % (n32, n64, len(gen.report['skipped']), ','.join(sorted(ops)) or '-'))
    for s in gen.report['skipped']:
        print('  skipped rv%d %s: %s' % (s['xlen'], s['ctor'], s['why']))
    if a.opcodes:
        print('riscv-opcodes: %d constructors disagree; unmatched opcodes: %s' % (len(bad), ','.join(gen.report['opcodes_unmatched']) or '-'))
        for c in bad:
            print('  rv%d %s mask %s match %s: %s' % (c['xlen'], c['mnemonic'], c['mask'], c['match'], c['opcodes']))
    return 1 if bad else 0

if __name__ == '__main__':
    sys.exit(main())
