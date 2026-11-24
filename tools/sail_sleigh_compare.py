#!/usr/bin/env python3
"""Compare SLEIGH specs for RISC-V extensions against LLVM and QEMU.

Usage:
  sail_sleigh_compare.py decode --opcodes <riscv-opcodes>/extensions --exts rv_zba,... \
      --objdump llvm-objdump --mattr +zba,+zbb --unlace unlace --spec NAME=SLEIGHPATH ... \
      [--xlen 64] [--samples 24] [--json out.json]
  sail_sleigh_compare.py semantics --opcodes ... --exts ... --unlace unlace --spec NAME=SLEIGHPATH ... \
      [--qemu qemu-riscv64 --cpu rv64,zba=true,...] [--vectors 16] [--json out.json]

decode: every instruction riscv-opcodes defines in the listed extensions is
sampled with random operand bits, and every one of its fixed bits is flipped
once (a near miss that must decode as something else or nothing). The words go
into a minimal ELF; llvm-objdump (with and without -M no-aliases) and each
SLEIGH spec (unlace disassemble --sleighpath) decode them, and the texts are
compared after normalising spacing.

semantics: each sampled word is given rd=a0, rs1=a1, rs2=a2 and run on random
register values. The p-code of each spec (unlace raw-pcode --json) is
interpreted, and with --qemu the same words run natively under qemu-user as
the reference. A spec that lifts the word to a CALLOTHER is counted as opaque.
"""
import argparse, json, math, os, random, re, struct, subprocess, sys, tempfile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from gen_riscv_sail import opcodes  # noqa: E402

BASE = 0x10000

def elf(code, xlen, data=b'', data_addr=None, split=False):
    """A static ELF with one RWX segment: code at BASE, then data. With split
    every 4-byte word gets a section of its own, so a disassembler that loses
    sync on an undecodable word picks it up again at the next one."""
    if data_addr is None:
        data_addr = BASE + len(code)
    blob = code + b'\0' * (data_addr - BASE - len(code)) + data
    shstr = b'\0.text\0.shstrtab\0'
    nsec = len(code) // 4 if split else 1
    is64 = xlen == 64
    ehsize, phsize, shsize = (64, 56, 64) if is64 else (52, 32, 40)
    off_text = 0x1000
    off_shstr = off_text + len(blob)
    off_sh = (off_shstr + len(shstr) + 7) & ~7
    if is64:
        eh = struct.pack('<16sHHIQQQIHHHHHH', b'\x7fELF\x02\x01\x01' + b'\0' * 9, 2, 243, 1, BASE, ehsize, off_sh, 5, ehsize, phsize, 1, shsize, nsec + 2, nsec + 1)
        ph = struct.pack('<IIQQQQQQ', 1, 7, off_text, BASE, BASE, len(blob), len(blob), 0x1000)
        sh = lambda n, t, f, a, o, s: struct.pack('<IIQQQQIIQQ', n, t, f, a, o, s, 0, 0, 4, 0)
    else:
        eh = struct.pack('<16sHHIIIIIHHHHHH', b'\x7fELF\x01\x01\x01' + b'\0' * 9, 2, 243, 1, BASE, ehsize, off_sh, 5, ehsize, phsize, 1, shsize, nsec + 2, nsec + 1)
        ph = struct.pack('<IIIIIIII', 1, off_text, BASE, BASE, len(blob), len(blob), 7, 0x1000)
        sh = lambda n, t, f, a, o, s: struct.pack('<IIIIIIIIII', n, t, f, a, o, s, 0, 0, 4, 0)
    out = bytearray(eh + ph)
    out += b'\0' * (off_text - len(out))
    out += blob + shstr
    out += b'\0' * (off_sh - len(out))
    out += sh(0, 0, 0, 0, 0, 0)
    if split:
        for i in range(nsec):
            out += sh(1, 1, 6, BASE + 4 * i, off_text + 4 * i, 4)
    else:
        out += sh(1, 1, 7, BASE, off_text, len(blob))
    out += sh(7, 3, 0, 0, off_shstr, len(shstr))
    return bytes(out)

def samples(ref, n, rng, near=True, regs=False):
    words = []
    for name, encs in sorted(ref.items()):
        for ext, m, v in encs:
            for _ in range(n):
                w = v | (rng.getrandbits(32) & ~m & 0xffffffff)
                words.append((name, 'sample', fix_regs(w, m) if regs else w))
            if near:
                base = v | (rng.getrandbits(32) & ~m & 0xffffffff)
                for b in range(2, 32):
                    if m >> b & 1:
                        words.append((name, 'near', base ^ (1 << b)))
    return words

def norm(s):
    s = s.strip().lower()
    s = re.sub(r'\s*,\s*', ',', s)
    s = re.sub(r'\s+', ' ', s)
    return s

def objdump(path, objd, mattr, aliases):
    args = [objd, '-d', '--mattr=' + mattr, path]
    if not aliases:
        args[2:2] = ['-M', 'no-aliases']
    out = {}
    for line in subprocess.run(args, capture_output=True, text=True).stdout.splitlines():
        m = re.match(r'^\s*([0-9a-f]+):\s+([0-9a-f]{8})\s+(.*)$', line)
        if m:
            out[int(m.group(1), 16)] = norm(m.group(3).replace('\t', ' '))
    return out

def unlace_disasm(path, unl, spec, n):
    args = [unl, 'disassemble', path, '0x%x-0x%x' % (BASE, BASE + 4 * n), '--addr', '--json']
    if spec:
        args += ['--sleighpath', spec]
    d = json.loads(subprocess.run(args, capture_output=True, text=True).stdout)
    out = {}
    for ins in d['instructions']:
        t = ins['text']
        out[ins['address']] = None if t.startswith('.byte') else norm(t)
    return out

def decode(a):
    rng = random.Random(a.seed)
    ref = opcodes(a.opcodes, a.exts.split(','))
    words = samples(ref, a.samples, rng)
    code = b''.join(struct.pack('<I', w) for _, _, w in words)
    tmp = tempfile.mkdtemp()
    path = os.path.join(tmp, 'words.elf')
    open(path, 'wb').write(elf(code, a.xlen, split=True))
    llvm_na = objdump(path, a.objdump, a.mattr, False)
    llvm_al = objdump(path, a.objdump, a.mattr, True)
    specs = dict(s.split('=', 1) for s in a.spec)
    dec = {k: unlace_disasm(path, a.unlace, v, len(words)) for k, v in specs.items()}
    scope = set(ref) | {'zext.w'}
    inscope = lambda t: bool(t) and t.split(' ')[0] in scope
    res = {k: {'sample': [0, 0], 'near': [0, 0], 'outside': 0, 'disagree': []} for k in specs}
    for i, (name, kind, w) in enumerate(words):
        addr = BASE + 4 * i
        l1, l2 = llvm_na.get(addr), llvm_al.get(addr)
        if l1 and l1.startswith('<unknown>'):
            l1 = l2 = None
        for k in specs:
            s = dec[k].get(addr)
            ok = s == l1 or s == l2
            if not ok and not inscope(s) and not inscope(l1) and not inscope(l2):
                res[k]['outside'] += 1
                continue
            r = res[k][kind]
            r[0] += 1
            r[1] += ok
            if not ok:
                res[k]['disagree'].append({'word': '0x%08x' % w, 'from': name, 'kind': kind, 'spec': s, 'llvm': l1, 'llvm_alias': l2})
    for k in specs:
        r = res[k]
        print('%s rv%d: sampled %d/%d agree with LLVM, near misses %d/%d (%d near misses decode outside these extensions on both sides and are not compared)' % (k, a.xlen, r['sample'][1], r['sample'][0], r['near'][1], r['near'][0], r['outside']))
        by = {}
        for d in r['disagree']:
            by.setdefault((d['from'], d['kind']), []).append(d)
        for (nm, kind), ds in sorted(by.items()):
            d = ds[0]
            print('  %-10s %-6s x%-3d e.g. %s: spec %r, llvm %r' % (nm, kind, len(ds), d['word'], d['spec'], d['llvm_alias'] if d['llvm_alias'] != d['llvm'] else d['llvm']))
    if a.json:
        json.dump(res, open(a.json, 'w'), indent=1)

# ---------------------------------------------------------------- semantics
def enc_i(op, rd, f3, rs1, imm):
    return ((imm & 0xfff) << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | op

def enc_s(op, f3, rs1, rs2, imm):
    return (((imm >> 5) & 0x7f) << 25) | (rs2 << 20) | (rs1 << 15) | (f3 << 12) | ((imm & 0x1f) << 7) | op

def enc_u(op, rd, imm):
    return (imm & 0xfffff000) | (rd << 7) | op

S0, A0, A1, A2, A7 = 8, 10, 11, 12, 17

SLOT = 32

def harness(tests, data_addr):
    """Per test: ld a1,0(s0); ld a2,8(s0); fld fa1,0(s0); fld fa2,8(s0); <word>;
    sd a0,16(s0); fsd fa0,24(s0); addi s0,s0,32. Then write(1, data, len) and
    exit(0)."""
    code = [enc_u(0x37, S0, data_addr)]
    for w in tests:
        code += [enc_i(0x03, A1, 3, S0, 0), enc_i(0x03, A2, 3, S0, 8), enc_i(0x07, A1, 3, S0, 0), enc_i(0x07, A2, 3, S0, 8), w,
                 enc_s(0x23, 3, S0, A0, 16), enc_s(0x27, 3, S0, A0, 24), enc_i(0x13, S0, 0, S0, SLOT)]
    n = SLOT * len(tests)
    code += [enc_i(0x13, A0, 0, 0, 1), enc_u(0x37, A1, data_addr), enc_u(0x37, A2, (n + 0x800) & ~0xfff), enc_i(0x13, A2, 0, A2, n - ((n + 0x800) & ~0xfff)),
             enc_i(0x13, A7, 0, 0, 64), 0x73, enc_i(0x13, A0, 0, 0, 0), enc_i(0x13, A7, 0, 0, 93), 0x73]
    return b''.join(struct.pack('<I', c) for c in code)

def fix_regs(w, m):
    """rd=a0, rs1=a1, rs2=a2 wherever the encoding leaves those fields free."""
    for lo, r in ((7, A0), (15, A1), (20, A2)):
        f = 0x1f << lo
        if m & f == 0:
            w = (w & ~f) | (r << lo)
    return w

FREG_BASE = 0x3000
FMT = {2: 'e', 4: 'f', 8: 'd'}

def fl(v, size):
    return struct.unpack('<' + FMT[size], (v & ((1 << (8 * size)) - 1)).to_bytes(size, 'little'))[0]

def bits(f, size):
    if math.isnan(f):
        return {2: 0x7e00, 4: 0x7fc00000, 8: 0x7ff8000000000000}[size]
    try:
        return int.from_bytes(struct.pack('<' + FMT[size], f), 'little')
    except OverflowError:
        return int.from_bytes(struct.pack('<' + FMT[size], math.copysign(math.inf, f)), 'little')

def ffloor(f):
    if math.isnan(f) or math.isinf(f) or f == 0:
        return f
    r = float(math.floor(f))
    return math.copysign(0.0, f) if r == 0 else r

def fround_away(f):
    if math.isnan(f) or math.isinf(f) or f == 0:
        return f
    a = abs(f)
    r = float(math.floor(a))
    if a - r >= 0.5:
        r += 1.0
    return math.copysign(r, f)

def ftrunc_int(f):
    if math.isnan(f) or math.isinf(f):
        return 0
    return int(f)

class Pcode:
    def __init__(self, xlen):
        self.xlen = xlen

    def run(self, ops, regs, regoff, next_addr, fregs=None):
        mem = {}
        written = set()
        rsz = self.xlen // 8
        def wr(vn, val):
            for i in range(vn['size']):
                mem[(vn['space'], vn['offset'] + i)] = (val >> (8 * i)) & 0xff
        def rd(vn):
            if vn['space'] == 'const':
                return vn['offset'] & ((1 << (8 * vn['size'])) - 1)
            v = 0
            for i in range(vn['size']):
                v |= mem.get((vn['space'], vn['offset'] + i), 0) << (8 * i)
            return v
        for r, val in regs.items():
            wr({'space': 'register', 'offset': regoff(r), 'size': rsz}, val)
        for r, val in (fregs or {}).items():
            wr({'space': 'register', 'offset': FREG_BASE + 8 * r, 'size': 8}, val)
        i = 0
        steps = 0
        while i < len(ops):
            steps += 1
            if steps > 100000:
                raise RuntimeError('loop')
            o = ops[i]
            op = o['opcode']
            ins = o['inputs']
            out = o.get('output')
            sz = out['size'] if out else 0
            M = (1 << (8 * sz)) - 1
            def sx(v, s):
                return v - (1 << (8 * s)) if v >> (8 * s - 1) & 1 else v
            x = [rd(v) for v in ins] if op not in ('BRANCH', 'CBRANCH') else None
            if op == 'BRANCH' or op == 'CBRANCH':
                if op == 'CBRANCH' and not rd(ins[1]):
                    i += 1
                    continue
                t = ins[0]
                if t['space'] == 'const':
                    i += sx(t['offset'], t['size']) if t['offset'] >> (8 * t['size'] - 1) & 1 else t['offset']
                    continue
                if t['offset'] == next_addr:
                    break
                return None
            if op == 'CALLOTHER':
                return 'opaque'
            s0 = ins[0]['size']
            r = {
                'COPY': lambda: x[0],
                'INT_ADD': lambda: x[0] + x[1],
                'INT_SUB': lambda: x[0] - x[1],
                'INT_MULT': lambda: x[0] * x[1],
                'INT_AND': lambda: x[0] & x[1],
                'INT_OR': lambda: x[0] | x[1],
                'INT_XOR': lambda: x[0] ^ x[1],
                'INT_NEGATE': lambda: ~x[0],
                'INT_2COMP': lambda: -x[0],
                'INT_LEFT': lambda: x[0] << x[1] if x[1] < 8 * s0 else 0,
                'INT_RIGHT': lambda: x[0] >> x[1] if x[1] < 8 * s0 else 0,
                'INT_SRIGHT': lambda: sx(x[0], s0) >> min(x[1], 8 * s0),
                'INT_ZEXT': lambda: x[0],
                'INT_SEXT': lambda: sx(x[0], s0),
                'SUBPIECE': lambda: x[0] >> (8 * x[1]),
                'INT_EQUAL': lambda: int(x[0] == x[1]),
                'INT_NOTEQUAL': lambda: int(x[0] != x[1]),
                'INT_LESS': lambda: int(x[0] < x[1]),
                'INT_LESSEQUAL': lambda: int(x[0] <= x[1]),
                'INT_SLESS': lambda: int(sx(x[0], s0) < sx(x[1], s0)),
                'INT_SLESSEQUAL': lambda: int(sx(x[0], s0) <= sx(x[1], s0)),
                'BOOL_NEGATE': lambda: int(not x[0]),
                'BOOL_AND': lambda: x[0] & x[1],
                'BOOL_OR': lambda: x[0] | x[1],
                'BOOL_XOR': lambda: x[0] ^ x[1],
                'POPCOUNT': lambda: bin(x[0]).count('1'),
                'LZCOUNT': lambda: 8 * s0 - x[0].bit_length(),
                'INT_CARRY': lambda: int(x[0] + x[1] >= 1 << (8 * s0)),
                'FLOAT_NAN': lambda: int(math.isnan(fl(x[0], s0))),
                'FLOAT_EQUAL': lambda: int(fl(x[0], s0) == fl(x[1], s0)),
                'FLOAT_NOTEQUAL': lambda: int(fl(x[0], s0) != fl(x[1], s0)),
                'FLOAT_LESS': lambda: int(fl(x[0], s0) < fl(x[1], s0)),
                'FLOAT_LESSEQUAL': lambda: int(fl(x[0], s0) <= fl(x[1], s0)),
                'FLOAT_FLOOR': lambda: bits(ffloor(fl(x[0], s0)), s0),
                'FLOAT_CEIL': lambda: bits(-ffloor(-fl(x[0], s0)), s0),
                'FLOAT_ROUND': lambda: bits(fround_away(fl(x[0], s0)), s0),
                'FLOAT_NEG': lambda: bits(-fl(x[0], s0), s0),
                'FLOAT_ABS': lambda: bits(abs(fl(x[0], s0)), s0),
                'FLOAT_ADD': lambda: bits(fl(x[0], s0) + fl(x[1], s0), s0),
                'FLOAT_SUB': lambda: bits(fl(x[0], s0) - fl(x[1], s0), s0),
                'FLOAT_MULT': lambda: bits(fl(x[0], s0) * fl(x[1], s0), s0),
                'FLOAT_FLOAT2FLOAT': lambda: bits(fl(x[0], s0), sz),
                'FLOAT_TRUNC': lambda: ftrunc_int(fl(x[0], s0)),
                'FLOOR': lambda: bits(ffloor(fl(x[0], s0)), s0),
                'CEIL': lambda: bits(-ffloor(-fl(x[0], s0)), s0),
                'ROUND': lambda: bits(fround_away(fl(x[0], s0)), s0),
                'TRUNC': lambda: ftrunc_int(fl(x[0], s0)),
                'NAN': lambda: int(math.isnan(fl(x[0], s0))),
                'INT2FLOAT': lambda: bits(float(sx(x[0], s0)), sz),
                'FLOAT2FLOAT': lambda: bits(fl(x[0], s0), sz),
            }.get(op)
            if r is None:
                raise RuntimeError('p-code op %s' % op)
            if out['space'] == 'register':
                written.add(out['offset'])
            wr(out, r() & M)
            i += 1
        if fregs is not None:
            fa0 = FREG_BASE + 8 * A0
            if fa0 in written:
                return ('f', rd({'space': 'register', 'offset': fa0, 'size': 8}))
            return ('x', rd({'space': 'register', 'offset': regoff(A0), 'size': rsz}))
        return rd({'space': 'register', 'offset': regoff(A0), 'size': rsz})

def run_qemu(a, tmp, ws, vecs):
    tests = [w for w in ws for _ in vecs]
    owner = [(w, x, y) for w in ws for x, y in vecs]
    code = harness(tests, 0)
    data_addr = (BASE + len(code) + 0x1fff) & ~0xfff
    code = harness(tests, data_addr)
    data = b''.join(struct.pack('<QQQQ', x, y, 0, 0) for _, x, y in owner)
    prog = os.path.join(tmp, 'qemu1.elf')
    with open(prog, 'wb') as f:
        f.write(elf(code, 64, data, data_addr))
    os.chmod(prog, 0o755)
    p = subprocess.run([a.qemu, '-cpu', a.cpu, prog], capture_output=True)
    if p.returncode != 0 or len(p.stdout) != len(data):
        return None
    return [struct.unpack_from('<QQ', p.stdout, SLOT * j + 16) for j in range(len(owner))]

def raw_pcode(path, unl, spec, n):
    """Each word's p-code; a word that does not decode ends a listing, so the
    next listing starts after it."""
    out = {}
    start, end = BASE, BASE + 4 * n
    while start < end:
        args = [unl, 'raw-pcode', path, '0x%x-0x%x' % (start, end), '--addr', '--json']
        if spec:
            args += ['--sleighpath', spec]
        d = json.loads(subprocess.run(args, capture_output=True, text=True).stdout)
        for ins in d['instructions']:
            out[ins['address']] = ins
        last = max([i['address'] for i in d['instructions']] + [start - 4])
        err = d.get('error') or {}
        start = max(last + 4, (err.get('address', start) + 4) if err else end)
    return out

def pick(g, wv):
    """The QEMU result (a0, fa0) for the register the p-code wrote."""
    if isinstance(g, tuple):
        return (g[0], wv[1] if g[0] == 'f' else wv[0])
    return wv[0] if isinstance(wv, tuple) else wv

def is_nan_bits(v):
    if math.isnan(fl(v, 8)):
        return 'd'
    if v >> 32 == 0xffffffff and math.isnan(fl(v, 4)):
        return 's'
    if v >> 16 == 0xffffffffffff and math.isnan(fl(v, 2)):
        return 'h'
    return None

def same(g, w):
    """Equal results; for an FP destination two NaNs of the same format
    (and boxing) count as equal, since p-code does not model NaN payloads."""
    if g == w:
        return True
    if isinstance(g, tuple) and isinstance(w, tuple) and g[0] == w[0] == 'f':
        n = is_nan_bits(g[1])
        return n is not None and n == is_nan_bits(w[1])
    return False

def show(v):
    if isinstance(v, tuple):
        return '%s:%s' % (v[0], hex(v[1]))
    return v if isinstance(v, str) else hex(v)

FP_POOL = [0x0, 0x8000000000000000, 0x3fe0000000000000, 0x3ff8000000000000, 0x4004000000000000, 0xc004000000000000,
           0xbfe0000000000000, 0x7ff0000000000000, 0xfff0000000000000, 0x7ff8000000000000, 0x7ff4000000000000,
           0x400d99999999999a, 0xc00d99999999999a, 0x4340000000000001, 0x41e0000000000000, 0xc1e0000000200000,
           0x41f0000000000001, 0x3fdfffffffffffff]
F32_POOL = [0x0, 0x80000000, 0x3f000000, 0x3fc00000, 0x40200000, 0xc0200000, 0xbf000000, 0x7f800000, 0xff800000,
            0x7fc00000, 0x7fa00000, 0x406ccccd, 0xc06ccccd, 0x4b000001, 0x3effffff]
F16_POOL = [0x0, 0x8000, 0x3800, 0x3e00, 0x4100, 0xc100, 0xb800, 0x7c00, 0xfc00, 0x7e00, 0x7d00, 0x4366, 0x6400, 0x37ff]

def fp_value(rng):
    k = rng.random()
    if k < 0.3:
        return rng.choice(FP_POOL)
    if k < 0.55:
        return 0xffffffff00000000 | rng.choice(F32_POOL)
    if k < 0.75:
        return 0xffffffffffff0000 | rng.choice(F16_POOL)
    if k < 0.85:
        return rng.choice(F32_POOL)
    return rng.getrandbits(64)

def semantics(a):
    rng = random.Random(a.seed)
    ref = opcodes(a.opcodes, a.exts.split(','))
    words = [(n, w) for n, k, w in samples(ref, a.samples, rng, near=False, regs=True)]
    seen, uniq = set(), []
    for n, w in words:
        if w not in seen:
            seen.add(w)
            uniq.append((n, w))
    words = uniq
    edge = [0, 1, (1 << a.xlen) - 1, 1 << (a.xlen - 1), (1 << (a.xlen - 1)) - 1, 0x80, 0xff00ff00ff00ff00 & ((1 << a.xlen) - 1), 31, 32, 63, 64]
    vecs = []
    for _ in range(a.vectors):
        if a.fp:
            vecs.append((fp_value(rng), fp_value(rng)))
            continue
        val = lambda: rng.choice(edge) if rng.random() < 0.3 else rng.getrandbits(a.xlen)
        vecs.append((val(), val()))
    tmp = a.keep or tempfile.mkdtemp()
    one = os.path.join(tmp, 'one.elf')
    open(one, 'wb').write(elf(b''.join(struct.pack('<I', w) for _, w in words), a.xlen))
    specs = dict(s.split('=', 1) for s in a.spec)
    pc = {k: raw_pcode(one, a.unlace, v, len(words)) for k, v in specs.items()}
    regoff = lambda r: 0x2000 + r * (a.xlen // 8)
    interp = Pcode(a.xlen)
    results = {k: {} for k in specs}
    for k in specs:
        for i, (n, w) in enumerate(words):
            ins = pc[k].get(BASE + 4 * i)
            if not ins or ins['mnemonic'] == '.byte':
                results[k][w] = 'undecoded'
                continue
            outs = []
            for x, y in vecs:
                try:
                    xm = (1 << a.xlen) - 1
                    outs.append(interp.run(ins['ops'], {A1: x & xm, A2: y & xm, A0: 0xdead}, regoff, BASE + 4 * i + 4,
                                           {A1: x, A2: y, A0: 0xdead} if a.fp else None))
                except RuntimeError as ex:
                    outs.append('error: %s' % ex)
            results[k][w] = outs
    oracle = None
    if a.qemu:
        oracle = {}
        tests, owner = [], []
        for n, w in words:
            for x, y in vecs:
                tests.append(w)
                owner.append((w, x, y))
        code = harness(tests, 0)
        data_addr = (BASE + len(code) + 0x1fff) & ~0xfff
        code = harness(tests, data_addr)
        data = b''.join(struct.pack('<QQQQ', x, y, 0, 0) for _, x, y in owner)
        prog = os.path.join(tmp, 'qemu.elf')
        open(prog, 'wb').write(elf(code, 64, data, data_addr))
        os.chmod(prog, 0o755)
        p = subprocess.run([a.qemu, '-cpu', a.cpu, prog], capture_output=True)
        if p.returncode == 0 and len(p.stdout) == len(data):
            for j, (w, x, y) in enumerate(owner):
                oracle.setdefault(w, []).append(struct.unpack_from('<QQ', p.stdout, SLOT * j + 16))
        else:
            # some word traps (a reserved encoding QEMU rejects): run each
            # word on its own and leave the trapping ones without a reference
            for n, w in words:
                got = run_qemu(a, tmp, [w], vecs)
                if got is not None:
                    oracle[w] = got
    report = {}
    names = dict((w, n) for n, w in words)
    for k in specs:
        agree = opaque = undecoded = wrong = unchecked = 0
        undec_names = set()
        bad = []
        for n, w in words:
            got = results[k][w]
            if got == 'undecoded':
                undecoded += 1
                undec_names.add(n)
                continue
            if 'opaque' in got:
                opaque += 1
                continue
            if oracle is not None and w not in oracle:
                unchecked += 1
                continue
            want = oracle[w] if oracle else None
            if want is None:
                other = [results[o][w] for o in specs if o != k and isinstance(results[o][w], list) and 'opaque' not in results[o][w]]
                if not other:
                    unchecked += 1
                    continue
                want = other[0]
            if oracle is not None:
                want = [pick(g, wv) for g, wv in zip(got, want)]
            diff = [i for i in range(len(got)) if not same(got[i], want[i])]
            if not diff:
                agree += 1
            else:
                wrong += 1
                j = diff[0]
                bad.append({'word': '0x%08x' % w, 'insn': names[w], 'a1': hex(vecs[j][0]), 'a2': hex(vecs[j][1]), 'got': show(got[j]), 'want': show(want[j])})
        ref_name = 'qemu' if oracle else 'the other spec'
        print('%s rv%d vs %s: %d words agree on all %d vectors, %d differ, %d opaque (CALLOTHER), %d undecoded%s' % (k, a.xlen, ref_name, agree, len(vecs), wrong, opaque, undecoded, ', %d with no reference (every other spec is opaque)' % unchecked if unchecked else ''))
        if undec_names:
            print('  undecoded: %s' % ', '.join(sorted(undec_names)))
        by = {}
        for b in bad:
            by.setdefault(b['insn'], []).append(b)
        for n, bs in sorted(by.items()):
            b = bs[0]
            print('  %-10s x%-3d e.g. %s a1=%s a2=%s: got %s, want %s' % (n, len(bs), b['word'], b['a1'], b['a2'], b['got'], b['want']))
        report[k] = {'agree': agree, 'differ': wrong, 'opaque': opaque, 'undecoded': undecoded, 'unchecked': unchecked, 'bad': bad}
    if a.json:
        json.dump(report, open(a.json, 'w'), indent=1)
    return 0

def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest='cmd', required=True)
    for name in ('decode', 'semantics'):
        p = sub.add_parser(name)
        p.add_argument('--opcodes', required=True)
        p.add_argument('--exts', required=True)
        p.add_argument('--unlace', required=True)
        p.add_argument('--spec', action='append', default=[], help='NAME=SLEIGHPATH (empty path: the built-in specs)')
        p.add_argument('--xlen', type=int, default=64)
        p.add_argument('--samples', type=int, default=24)
        p.add_argument('--seed', type=int, default=1)
        p.add_argument('--json')
        if name == 'decode':
            p.add_argument('--objdump', required=True)
            p.add_argument('--mattr', required=True)
        else:
            p.add_argument('--vectors', type=int, default=16)
            p.add_argument('--qemu')
            p.add_argument('--keep', help='write the test ELFs into this directory')
            p.add_argument('--fp', action='store_true', help='also load fa1/fa2 with the vectors (FP-flavoured values), and compare fa0 when the p-code writes it')
            p.add_argument('--cpu', default='rv64,zba=true,zbb=true,zbc=true,zbs=true,zbkb=true,zbkx=true,zicond=true')
    a = ap.parse_args()
    return decode(a) if a.cmd == 'decode' else semantics(a)

if __name__ == '__main__':
    sys.exit(main() or 0)
