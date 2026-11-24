#!/usr/bin/env python3
"""GFX12 memory and image encodings: SMEM, VGLOBAL/VFLAT/VSCRATCH, VBUFFER, VIMAGE and VSAMPLE.

Layouts from llvm-mc -mcpu=gfx1200 -show-encoding:
  SMEM (64-bit, bits 31-26 = 111101): sbase 0-5 (SGPR pair / 2), sdata 6-12, op 13-18, scope
    21-22, th 23-25; word 1 signed 24-bit offset 0-23, soffset SGPR 25-31 (null = 124).
  VFLAT/VSCRATCH/VGLOBAL (96-bit, bits 31-26 = 111011, segment 24-25 = 0/1/2): saddr 0-6
    (124 = off), op 14-21; word 1 vdst 0-7, sve 17 (scratch), scope 18-19, th 20-22, vsrc
    23-30; word 2 vaddr 0-7, signed 24-bit offset 8-31.
  VBUFFER (96-bit, bits 31-26 = 110001): soffset 0-6, op 14-21; word 1 vdata 0-7, rsrc
    SGPR 9-15, scope 18-19, th 20-22, format 23-29, offen 30, idxen 31; word 2 vaddr 0-7,
    24-bit offset 8-31.
  VIMAGE (bits 31-26 = 110100) and VSAMPLE (111001): dim 0-2, r128 4, d16 5, a16 6, op 14-21,
    dmask 22-25 (VSAMPLE: tfe 3, unorm 13); word 1 vdata 0-7, rsrc SGPR 9-15, scope 18-19, th
    20-22 (VIMAGE: tfe 23, vaddr4 24-31; VSAMPLE: lwe 8, ssamp SGPR 23-29); word 2 vaddr0-3,
    one per byte, the last used one a tuple when the address needs more VGPRs.
Opcode numbers and mnemonics come from 'amdgpu_gfx12_probe.py mem', each image opcode's
address operands per dim and a16 from 'amdgpu_gfx12_probe.py image'; the th/scope spellings are
llvm-objdump's.  Loads, stores and the integer atomics are p-code (global and flat in ram,
scratch in private, a buffer at its resource base plus soffset, offset, the offen VGPR and
idxen VGPR times the resource stride); image operations, float and packed atomics are
user-ops.  Offsets print in hex.

usage: gen_amdgpu_gfx12_mem.py gfx12_mem.txt gfx12_image.txt amdgcn_gfx12.slaspec [include ...] > amdgcn_gfx12_mem.sinc
"""
import re
import sys

TH_LOAD = ['', 'TH_LOAD_NT', 'TH_LOAD_HT', 'TH_LOAD_LU', 'TH_LOAD_NT_RT', 'TH_LOAD_RT_NT', 'TH_LOAD_NT_HT', '0x7']
TH_STORE = ['', 'TH_STORE_NT', 'TH_STORE_HT', 'TH_STORE_WB', 'TH_STORE_NT_RT', 'TH_STORE_RT_NT', 'TH_STORE_NT_HT',
            'TH_STORE_NT_WB']
TH_ATOMIC = ['', 'TH_ATOMIC_RETURN', 'TH_ATOMIC_NT', 'TH_ATOMIC_NT_RETURN', 'TH_ATOMIC_0x4', 'TH_ATOMIC_0x5',
             'TH_ATOMIC_0x6', 'TH_ATOMIC_0x7']
SCOPE = ['', 'SCOPE_SE', 'SCOPE_DEV', 'SCOPE_SYS']
INT_ATOMIC = {'swap': 'n', 'add': 'o + n', 'sub': 'o - n', 'and': 'o & n', 'or': 'o | n', 'xor': 'o ^ n',
              'min_i': 'sel:s<', 'min_u': 'sel:<', 'max_i': 'sel:s>', 'max_u': 'sel:>'}


class Out:
    def __init__(self):
        self.lines, self.tables = [], {}

    def w(self, s):
        self.lines.append(s)


def vreg(s, n):
    return {1: 'v%d' % s, 2: 'v%d_%d' % (s, s + 1), 4: 'wv%d_%d' % (s, s + 3), 8: 'wv%d_%d' % (s, s + 7)}.get(
        n, 'mv%d_%d' % (s, s + n - 1))


def vdisp(s, n):
    return 'v%d' % s if n == 1 else 'v[%d:%d]' % (s, s + n - 1)


def main():
    mem = [l for l in open(sys.argv[1]) if '|' in l]
    img = [l.split() for l in open(sys.argv[2]) if l.strip()]
    text = ''.join(open(f).read() for f in sys.argv[3:])
    have = set(re.findall(r'define pcodeop (\w+);', text))
    s4 = re.search(r'define register offset=0x0+ size=4 \[([^\]]*)\]', text).group(1).split()
    s8 = re.search(r'define register offset=0x0+ size=8 \[([^\]]*)\]', text).group(1).split()
    o = []
    w = o.append
    tables = {}
    userops = set()

    def sname(s):
        return s4[s]

    def sdisp(s, n):
        nm = s4[s]
        if n == 1:
            return nm
        if nm.startswith('ttmp'):
            t = int(nm[4:])
            return 'ttmp[%d:%d]' % (t, t + n - 1)
        return 's[%d:%d]' % (s, s + n - 1)

    def sreg(s, n):
        return {1: s4[s], 2: s8[s // 2] if s % 2 == 0 else None}.get(n, 'ss%d_%d' % (s, s + n - 1))

    def vt(field, n):
        """VGPR-tuple operand table on a word field."""
        t = 'VT%d_%s' % (n, field)
        if t not in tables:
            tables[t] = ['%s: "%s" is %s=%d { export %s; }' % (t, vdisp(s, n), field, s, vreg(s, n))
                         for s in range(256 - n + 1)]
        return t

    def st(field, n, scale=1, export=None, half=False):
        """SGPR-tuple operand table on a word field holding the SGPR number / scale (with half, the
        field counts pairs and its low bit is ignored, as for an s_buffer_load resource)."""
        t = 'ST%d_%s' % (n, field) + ('x%d' % scale if scale != 1 else '') + ('h' if half else '')
        if t not in tables:
            rows = []
            for v in range(128 // (scale // 2 if half else scale)):
                s = (v & ~1) * 2 if half else v * scale
                if s + n > 128:
                    break
                e = export or n
                r = sreg(s, e)
                if r is None or s + e > 128:
                    continue
                rows.append('%s: "%s" is %s=%d { export %s; }' % (t, sdisp(s, n), field, v, r))
            tables[t] = rows
        return t

    # registers: 3- and 5-VGPR tuples, 3/4/8/16-SGPR tuples, the image data staging register
    for n in (3, 4, 8, 16):
        for k in range(n):
            names = ['ss%d_%d' % (s, s + n - 1) for s in range(k, 128 - n + 1, n)]
            w('define register offset=0x%x size=%d [ %s ];' % (4 * k, 4 * n, ' '.join(names)))
    w('define register offset=0x4000 size=32 [ mimg_data ];')
    w('define register offset=0x4100 size=8 [ smem_addr ];')
    w('define token sm0(32) sx_base = (0,5) sx_sdata = (6,12) sx_op = (13,18) sx_scope = (21,22) sx_th = (23,25)'
      ' sx_e6 = (26,31);')
    w('define token sm1(32) sx_off = (0,23) signed sx_soff = (25,31) sx_soffr = (25,31);')
    w('define token vf0(32) vf_saddr = (0,6) vf_saddrr = (0,6) vf_op = (14,21) vf_seg = (24,25) vf_e6 = (26,31);')
    w('define token vf1(32) vf_vdst = (0,7) vf_sve = (17,17) vf_scope = (18,19) vf_th = (20,22) vf_vsrc = (23,30);')
    w('define token vf2(32) vf_vaddr = (0,7) vf_off = (8,31) signed;')
    w('define token vb0(32) vb_soff = (0,6) vb_op = (14,21) vb_e6 = (26,31);')
    w('define token vb1(32) vb_vdata = (0,7) vb_rsrc = (9,15) vb_scope = (18,19) vb_th = (20,22) vb_fmt = (23,29)'
      ' vb_offen = (30,30) vb_idxen = (31,31);')
    w('define token vb2(32) vb_vaddr = (0,7) vb_off = (8,31);')
    w('define token vi0(32) vi_dim = (0,2) vi_stfe = (3,3) vi_r128 = (4,4) vi_d16 = (5,5) vi_a16 = (6,6)'
      ' vi_unorm = (13,13) vi_op = (14,21) vi_dmask = (22,25) vi_e6 = (26,31);')
    w('define token vi1(32) vi_vdata = (0,7) vi_lwe = (8,8) vi_rsrc = (9,15) vi_scope = (18,19) vi_th = (20,22)'
      ' vi_tfe = (23,23) vi_ssamp = (23,29) vi_a4 = (24,31);')
    w('define token vi2(32) vi_a0 = (0,7) vi_a1 = (8,15) vi_a2 = (16,23) vi_a3 = (24,31);')
    w('attach variables [ sx_soffr vf_saddrr ] [ %s ];' % ' '.join(s4))
    w('')
    # modifiers
    for nm, names, f in (('THL', TH_LOAD, 'th'), ('THS', TH_STORE, 'th'), ('THA', TH_ATOMIC, 'th')):
        for pre in ('sx', 'vf', 'vb', 'vi'):
            for v, s in enumerate(names):
                if pre == 'sx' and v > 7:
                    continue
                w('%s_%s: %sis %s_th=%d { }' % (nm, pre, ('" th:%s" ' % s) if s else '', pre, v))
    for pre in ('sx', 'vf', 'vb', 'vi'):
        for v, s in enumerate(SCOPE):
            w('SC_%s: %sis %s_scope=%d { }' % (pre, ('" scope:%s" ' % s) if s else '', pre, v))
    w('OFF_vf: is vf_off=0 { }')
    w('OFF_vf: " offset:"^vf_off is vf_off { }')
    w('OFF_vb: is vb_off=0 { }')
    w('OFF_vb: " offset:"^vb_off is vb_off { }')
    body = []
    b = body.append

    # ---- SMEM
    for line in mem:
        head, t = line.split('|', 1)
        fmt, op = head.split()
        op = int(op)
        t = t.strip()
        mn = t.split()[0]
        if fmt != 'smem':
            continue
        m = re.match(r's_(buffer_)?load_(b\d+|[iu]\d+)$', mn)
        if not m:
            if mn == 's_dcache_inv' or mn.startswith('s_prefetch') or mn.startswith('s_buffer_prefetch'):
                b(':%s is (sx_e6=0x3d & sx_op=%d ; sx_off) { }' % (mn, op))
            continue
        buf, kind = m.group(1), m.group(2)
        n = int(kind[1:]) // 32 if kind[0] == 'b' else 1
        if n > 1:
            d = 'SD%d' % n
            if d not in tables:
                al = 2 if n == 2 else 4
                tables[d] = ['%s: "%s" is sx_sdata=%d { %s }' % (
                    d, sdisp(s, n), s, ' '.join('%s = *:4 (smem_addr + %d);' % (s4[s + k], 4 * k) for k in range(n)))
                    for s in range(0, 128 - n + 1, al)]
        else:
            d = st('sx_sdata', n)
        base = st('sx_base', 4, 4, export=2, half=True) if buf else st('sx_base', 2, 2)
        sb = '%s & 0xffffffffffff' % base if buf else base
        if n > 1:
            load = 'smem_addr = a; build %s;' % d
        elif kind[0] == 'b':
            load = '%s = *:%d a;' % (d, 4 * n)
        else:
            sz = int(kind[1:]) // 8
            load = '%s = %s(*:%d a);' % (d, 'sext' if kind[0] == 'i' else 'zext', sz)
        for soff in (0, 1):
            if soff:
                disp = '%s %s, %s, sx_soffr^" offset:"^sx_off^THL_sx^SC_sx' % (mn, d, base)
                pat = '(sx_e6=0x3d & sx_op=%d & %s & %s & THL_sx & SC_sx ; sx_off & sx_soffr)' % (op, d, base)
                addr = 'a:8 = (%s) + sx_off + zext(sx_soffr);' % sb
                b(':%s is %s { %s %s }' % (disp, pat, addr, load))
            else:
                disp = '%s %s, %s, sx_off^THL_sx^SC_sx' % (mn, d, base)
                pat = '(sx_e6=0x3d & sx_op=%d & %s & %s & THL_sx & SC_sx ; sx_off & sx_soff=124)' % (op, d, base)
                addr = 'a:8 = (%s) + sx_off;' % sb
                b(':%s is %s { %s %s }' % (disp, pat, addr, load))

    # ---- VFLAT / VSCRATCH / VGLOBAL and VBUFFER
    seg = {'vflat': 0, 'vscratch': 1, 'vglobal': 2}
    # address tables: GA/FA/PA compute the address; ..V and ..S print the VGPR and SGPR parts
    g2, g1, s2 = vt('vf_vaddr', 2), vt('vf_vaddr', 1), st('vf_saddr', 2)
    w('GA: is vf_saddr=124 ; vf_vdst ; %s & vf_off { a:8 = %s + vf_off; export a; }' % (g2, g2))
    w('GA: is %s ; vf_vdst ; %s & vf_off { a:8 = %s + zext(%s) + vf_off; export a; }' % (s2, g1, s2, g1))
    w('GAV: %s is vf_saddr=124 ; vf_vdst ; %s { }' % (g2, g2))
    w('GAV: %s is vf_saddr ; vf_vdst ; %s { }' % (g1, g1))
    w('GAS: "off" is vf_saddr=124 ; vf_vdst ; vf_vaddr { }')
    w('GAS: %s is %s ; vf_vdst ; vf_vaddr { }' % (s2, s2))
    w('FA: is vf_saddr ; vf_vdst ; %s & vf_off { a:8 = %s + vf_off; export a; }' % (g2, g2))
    w('FAV: %s is vf_saddr ; vf_vdst ; %s { }' % (g2, g2))
    w('PA: is vf_saddr=124 ; vf_sve=0 ; vf_off { a:4 = vf_off; export a; }')
    w('PA: is vf_saddr=124 ; vf_sve=1 ; %s & vf_off { a:4 = %s + vf_off; export a; }' % (g1, g1))
    w('PA: is vf_saddrr ; vf_sve=0 ; vf_off { a:4 = vf_saddrr + vf_off; export a; }')
    w('PA: is vf_saddrr ; vf_sve=1 ; %s & vf_off { a:4 = %s + vf_saddrr + vf_off; export a; }' % (g1, g1))
    w('PAV: "off" is vf_saddr ; vf_sve=0 ; vf_vaddr { }')
    w('PAV: %s is vf_saddr ; vf_sve=1 ; %s { }' % (g1, g1))
    w('PAS: "off" is vf_saddr=124 ; vf_vdst ; vf_vaddr { }')
    w('PAS: vf_saddrr is vf_saddrr ; vf_vdst ; vf_vaddr { }')
    rs = st('vb_rsrc', 4, export=2)
    w('BA: "off, "^%s^", "^vb_soffr is vb_soffr ; %s & vb_offen=0 & vb_idxen=0 ; vb_off '
      '{ r:8 = %s; a:8 = (r & 0xffffffffffff) + zext(vb_soffr) + vb_off; export a; }' % (rs, rs, rs))
    v1 = vt('vb_vaddr', 1)
    v2 = vt('vb_vaddr', 2)
    w('BA: %s^", "^%s^", "^vb_soffr^" offen" is vb_soffr ; %s & vb_offen=1 & vb_idxen=0 ; %s & vb_off '
      '{ r:8 = %s; a:8 = (r & 0xffffffffffff) + zext(vb_soffr) + zext(%s) + vb_off; export a; }' % (v1, rs, rs, v1, rs, v1))
    w('BA: %s^", "^%s^", "^vb_soffr^" idxen" is vb_soffr ; %s & vb_offen=0 & vb_idxen=1 ; %s & vb_off '
      '{ r:8 = %s; st:8 = (r >> 48) & 0x3fff; a:8 = (r & 0xffffffffffff) + zext(vb_soffr) + zext(%s) * st + vb_off; '
      'export a; }' % (v1, rs, rs, v1, rs, v1))
    w('BA: %s^", "^%s^", "^vb_soffr^" idxen offen" is vb_soffr ; %s & vb_offen=1 & vb_idxen=1 ; %s & vb_off '
      '{ r:8 = %s; st:8 = (r >> 48) & 0x3fff; i:4 = %s:4; v:4 = %s(4); '
      'a:8 = (r & 0xffffffffffff) + zext(vb_soffr) + zext(i) * st + zext(v) + vb_off; export a; }'
      % (v2, rs, rs, v2, rs, v2, v2))
    w('attach variables [ vb_soffr ] [ %s ];' % ' '.join(s4))
    o[o.index('define token vb0(32) vb_soff = (0,6) vb_op = (14,21) vb_e6 = (26,31);')] = \
        'define token vb0(32) vb_soff = (0,6) vb_soffr = (0,6) vb_op = (14,21) vb_e6 = (26,31);'

    def width(kind):
        if kind[0] == 'b':
            return max(1, int(kind[1:]) // 32)
        return 1

    for line in mem:
        head, t = line.split('|', 1)
        fmt, op = head.split()
        op = int(op)
        mn = t.split()[0]
        if fmt == 'smem':
            continue
        isbuf = fmt == 'vbuffer'
        if isbuf:
            pre, dfield, sfield = 'vb', 'vb_vdata', 'vb_vdata'
            head0 = 'vb_e6=0x31 & vb_op=%d & vb_soff' % op
            addr, space, offm, last = 'BA', 'ram', 'OFF_vb', 'vb_vaddr'
            pv = ps = None
        else:
            pre, dfield, sfield = 'vf', 'vf_vdst', 'vf_vsrc'
            head0 = 'vf_e6=0x3b & vf_seg=%d & vf_op=%d & vf_saddr' % (seg[fmt], op)
            k = {'vflat': 'F', 'vscratch': 'P', 'vglobal': 'G'}[fmt]
            addr, pv, ps = k + 'A', k + 'AV', (k + 'AS' if k != 'F' else None)
            space = 'private' if fmt == 'vscratch' else 'ram'
            offm, last = 'OFF_vf', 'vf_vaddr'

        def place(data_first, *vals):
            """Operand text: buffer forms print the data then the address; the others split it."""
            if isbuf:
                return ', '.join(vals + (addr,))
            parts = list(vals[:1]) if data_first else []
            parts.append(pv)
            parts += list(vals[1:]) if data_first else list(vals)
            if ps:
                parts.append(ps)
            return ', '.join(parts)

        def emit(disp_ops, th, word1, sem, extra1=''):
            disp = '%s %s^%s^%s^SC_%s' % (mn, disp_ops, offm, th, pre)
            tabs = [addr] + ([pv] if pv else []) + ([ps] if ps else [])
            pat = '(%s ; %s & %s & SC_%s%s ; %s & %s) & %s' % (head0, word1, th, pre, extra1, last, offm, ' & '.join(tabs))
            b(':%s is %s { %s }' % (disp, pat, sem))

        m = re.match(r'\w+?_(load|store)_(d16_hi_|d16_)?(format_)?(b\d+|[iu]\d+|x|xy|xyz|xyzw)$', mn)
        ma = re.match(r'\w+?_atomic_(swap|cmpswap|add|sub|and|or|xor|min|max|inc|dec)_([biu])(32|64)$', mn)
        if m:
            ls, d16, fmtd, kind = m.group(1), m.group(2), m.group(3), m.group(4)
            if kind.startswith('x'):
                if d16:
                    continue        # packed d16 format accesses: not modelled
                kind = 'b%d' % (32 * len(kind))
            n = width(kind)
            sz = int(kind[1:]) // 8
            if ls == 'load':
                d = vt(dfield, n)
                if d16:
                    v = '*[%s]:%d %s' % (space, sz, addr)
                    if kind[0] != 'b':
                        v = '%s(%s)' % ('sext' if kind[0] == 'i' else 'zext', v)
                    sem = 'h:2 = %s; ' % v + ('%s = (%s & 0xffff) | (zext(h) << 16);' % (d, d) if d16 == 'd16_hi_'
                                              else '%s = (%s & 0xffff0000) | zext(h);' % (d, d))
                elif kind[0] == 'b':
                    sem = '%s = *[%s]:%d %s;' % (d, space, 4 * n, addr)
                else:
                    sem = '%s = %s(*[%s]:%d %s);' % (d, 'sext' if kind[0] == 'i' else 'zext', space, sz, addr)
                emit(place(True, d) if not isbuf else place(True, d), 'THL_' + pre, d, sem)
            else:
                d = vt(sfield, n)
                if d16 == 'd16_hi_':
                    sem = 'v:4 = %s >> 16; *[%s]:%d %s = v:%d;' % (d, space, sz, addr, sz)
                elif sz < 4:
                    sem = '*[%s]:%d %s = %s:%d;' % (space, sz, addr, d, sz)
                else:
                    sem = '*[%s]:%d %s = %s;' % (space, sz, addr, d)
                emit(place(False, d) if not isbuf else place(True, d), 'THS_' + pre, d, sem)
            continue
        if ma:
            what, ty, bits = ma.group(1), ma.group(2), int(ma.group(3))
            n = bits // 32
            src = vt(sfield, 2 * n if what == 'cmpswap' else n)
            dst = vt(dfield, n)
            sz = 4 * n
            key = what if what not in ('min', 'max') else '%s_%s' % (what, 'i' if ty == 'i' else 'u')
            form = INT_ATOMIC.get(key, '')
            if what == 'cmpswap':
                calc = 'n:%d = %s:%d; c:%d = %s(%d); r:%d = o; if (o != c) goto <k>; r = n; <k>' % (
                    sz, src, sz, sz, src, sz, sz)
            elif what == 'inc':
                calc = 'n:%d = %s; r:%d = 0; if (o >= n) goto <k>; r = o + 1; <k>' % (sz, src, sz)
            elif what == 'dec':
                calc = 'n:%d = %s; r:%d = n; if (o == 0 || o > n) goto <k>; r = o - 1; <k>' % (sz, src, sz)
            elif form.startswith('sel:'):
                calc = 'n:%d = %s; r:%d = o; if (o %s n) goto <k>; r = n; <k>' % (sz, src, sz, form[4:])
            else:
                calc = 'n:%d = %s; r:%d = %s;' % (sz, src, sz, form)
            for ret in (0, 1):
                rets = ' & (%s_th=1 | %s_th=3 | %s_th=5 | %s_th=7)' % ((pre,) * 4) if ret else \
                    ' & (%s_th=0 | %s_th=2 | %s_th=4 | %s_th=6)' % ((pre,) * 4)
                sem = 'o:%d = *[%s]:%d %s; %s *[%s]:%d %s = r;%s' % (
                    sz, space, sz, addr, calc, space, sz, addr, (' %s = o;' % dst) if ret else '')
                if isbuf:
                    ops = place(True, src)
                    w1 = src + ((' & ' + dst) if ret and dst != src else '')
                else:
                    ops = place(True, dst, src) if ret else place(False, src)
                    w1 = src + ((' & ' + dst) if ret else '')
                emit(ops, 'THA_' + pre, w1, sem, rets)
            continue
        if re.match(r'global_(inv|wb|wbinv)$', mn):
            b(':%s THL_vf^SC_vf is (vf_e6=0x3b & vf_seg=2 & vf_op=%d ; THL_vf & SC_vf ; vf_vaddr) { }' % (mn, op))
            continue
        if '_atomic_' in mn and not isbuf and re.search(r'_(f32|f16|bf16|u32)$', mn):
            u = mn.split('_atomic_')[1]
            userops.add('atomic_' + u)
            d, s = vt(dfield, 1), vt(sfield, 1)
            for ret in (0, 1):
                rets = ' & (vf_th=1 | vf_th=3 | vf_th=5 | vf_th=7)' if ret else ' & (vf_th=0 | vf_th=2 | vf_th=4 | vf_th=6)'
                sem = ('%s = atomic_%s(%s, %s);' % (d, u, addr, s)) if ret else 'atomic_%s(%s, %s);' % (u, addr, s)
                emit(place(True, d, s) if ret else place(False, s), 'THA_vf', s + ((' & ' + d) if ret else ''), sem, rets)
    # ---- VIMAGE / VSAMPLE
    shapes = {}
    for op, mn, samp, dim, dn, a16, regs in img:
        shapes.setdefault((int(op), mn, int(samp)), {})[(int(dim), a16 == '1')] = (dn, tuple(int(x) for x in regs.split(',')))
    dims = {}
    for (op, mn, samp), sh in shapes.items():
        for (dim, a16), (dn, regs) in sh.items():
            dims[dim] = dn
    for d, dn in sorted(dims.items()):
        w('IDIM: "%s" is vi_dim=%d { }' % (dn, d))
    # data counts from dmask/d16/tfe into mi_vdn (VSAMPLE tfe is word 0 bit 3, VIMAGE's word 1 bit 23)
    for dm in range(16):
        for d16 in (0, 1):
            for tfe in (0, 1):
                for fixed in (0, 1):
                    c = 4 if fixed else max(1, bin(dm).count('1'))
                    if d16:
                        c = (c + 1) // 2
                    c += tfe
                    nm = 'F' if fixed else 'D'
                    if not tfe:
                        w('IC%s: is vi_dmask=%d & vi_d16=%d [ mi_vdn = %d; ] { }' % (nm, dm, d16, c))
                    w('SC%s: is vi_dmask=%d & vi_d16=%d & vi_stfe=%d [ mi_vdn = %d; ] { }' % (nm, dm, d16, tfe, c))
    for n in range(1, 6):
        for s in range(256 - n + 1):
            w('IV: "%s" is mi_vdn=%d & vi_vdata=%d { }' % (vdisp(s, n), n, s))
            w('IW: is mi_vdn=%d & vi_vdata=%d { %s = mimg_data:%d; }' % (n, s, vreg(s, n), 4 * n))
            w('IX: is mi_vdn=%d & vi_vdata=%d { mimg_data = zext(%s); }' % (n, s, vreg(s, n)))
    for s in range(0, 128, 4):
        if s + 8 <= 128:
            w('IRS: "%s" is vi_rsrc=%d { export %s; }' % (sdisp(s, 8), s, sname(s)))
        w('IRB: "%s" is vi_rsrc=%d { export %s; }' % (sdisp(s, 4), s, sname(s)))
        w('ISS: "%s" is vi_ssamp=%d { export %s; }' % (sdisp(s, 4), s, sname(s)))
    fl = [('unorm', 'vi_unorm', 0), ('r128', 'vi_r128', 0), ('a16', 'vi_a16', 0)]
    for v in range(8):
        on = [f for i, f in enumerate(fl) if (v >> i) & 1]
        pat = ' & '.join('%s=%d' % (f[1], (v >> i) & 1) for i, f in enumerate(fl))
        w('IFL: %sis %s { }' % ('"%s" ' % ''.join(' ' + f[0] for f in on) if on else '', pat))
    w('ITF: is vi_tfe=0 { }')
    w('ITF: is vi_tfe=1 [ mi_vdn = mi_vdn + 1; ] { }')
    w('ITFS: is vi_tfe=0 { }')
    w('ITFS: " tfe" is vi_tfe=1 { }')
    w('IDF: is vi_d16=0 { }')
    w('IDF: " d16" is vi_d16=1 { }')
    w('STF: is vi_stfe=0 { }')
    w('STF: " tfe" is vi_stfe=1 { }')
    w('SLW: is vi_lwe=0 { }')
    w('SLW: " lwe" is vi_lwe=1 { }')
    afield = ['vi_a0', 'vi_a1', 'vi_a2', 'vi_a3', 'vi_a4']
    for (op, mn, samp), sh in sorted(shapes.items()):
        fixed = mn.startswith('image_gather4') or mn == 'image_msaa_load'
        cnt = ('S' if samp else 'I') + 'C' + ('F' if fixed else 'D')
        store = mn.startswith('image_store')
        atomic = mn.startswith('image_atomic')
        if mn not in have:
            userops.add(mn)
        by = {}
        for (dim, a16), (dn, regs) in sorted(sh.items()):
            by.setdefault(regs, []).append((dim, a16))
        for regs, keys in sorted(by.items()):
            sel = ' | '.join('(vi_dim=%d & vi_a16=%d)' % (d, a) for d, a in keys)
            ats = [vt(afield[i], n) for i, n in enumerate(regs)]
            addrs = ats[0] if len(ats) == 1 else '"["^' + '^", "^'.join(ats) + '^"]"'
            w2 = ' & '.join(a for i, a in enumerate(ats) if i < 4)
            w1extra = (' & ' + ats[4]) if len(ats) > 4 else ''
            io = 'IX' if store else ('IW & IX' if atomic else 'IW')
            top = 0x39 if samp else 0x34
            srcs = [addrs, 'IRS'] + (['ISS'] if samp else [])
            th = 'THA_vi' if atomic else ('THS_vi' if store else 'THL_vi')
            tf = 'STF^SLW' if samp else 'ITF'
            # the count tables (and VIMAGE's tfe, which adds one) come first: IV reads mi_vdn
            first = cnt + ('' if samp else '^ITF')
            disp = '%s %s^IV, %s^" dmask:"^vi_dmask^" dim:"^IDIM^IFL^%s^%s^IDF^SC_vi' % (
                mn, first, ', '.join(srcs), th, 'STF^SLW' if samp else 'ITFS')
            w0 = 'vi_e6=0x%x & vi_op=%d & (%s) & vi_dmask & IDIM & IFL & IDF%s' % (top, op, sel, ' & STF' if samp else '')
            w1 = 'IRS & %s & SC_vi%s%s & vi_vdata & IV & %s' % (th, ' & ISS & SLW' if samp else ' & ITF & ITFS', w1extra, io)
            pat = '(%s & %s ; %s ; %s)' % (w0, cnt, w1, w2)
            args = 'IRS, ' + ('ISS, ' if samp else '') + ats[0]
            if store:
                sem = 'build IX; %s(%s, mimg_data);' % (mn, args)
            elif atomic:
                sem = 'build IX; mimg_data = %s(%s, mimg_data); build IW;' % (mn, args)
            else:
                sem = 'mimg_data = %s(%s); build IW;' % (mn, args)
            b(':%s is %s { %s }' % (disp, pat, sem))
    for nm in sorted(userops - have):
        w('define pcodeop %s;' % nm)
    sizes = {int(re.match(r'VT(\d+)_', t).group(1)) for t in tables if t.startswith('VT')} | {3, 5}
    for n in sorted(sizes - {1, 2, 4, 8}):
        for k in range(n):
            names = [vreg(s, n) for s in range(k, 256 - n + 1, n)]
            w('define register offset=0x%x size=%d [ %s ];' % (0x1000 + 4 * k, 4 * n, ' '.join(names)))
    # definitions, then the operand tables, then the tables built on them, then the constructors
    defs = [l for l in o if l.startswith('define ') or l.startswith('attach ')]
    rest = [l for l in o if not (l.startswith('define ') or l.startswith('attach '))]
    tabs = [r for t in sorted(tables) for r in tables[t]]
    print('\n'.join(['# Generated by tools/gen_amdgpu_gfx12_mem.py; edit the generator.'] + defs + tabs + rest + [''] + body))


main()
