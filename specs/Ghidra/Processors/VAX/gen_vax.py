#!/usr/bin/env python3
"""Generate vax.slaspec (DEC VAX) from the opcode table below.

Every VAX operand is a general operand specifier: one mode byte (an index prefix
can precede it) and up to 16 bytes of displacement or immediate. A PC-relative
specifier is relative to the end of the specifier itself, so the decoder tracks
each specifier's byte offset in the context fields o1..o7: specifier k starts at
o<k> and sets o<k+1>. The operand tables are generated per operand slot, access
type and size.
Run: python3 gen_vax.py > data/languages/vax.slaspec
"""
import struct

REGS = ["R%d" % i for i in range(12)] + ["AP", "FP", "SP", "PC"]
SZ = {"b": 1, "w": 2, "l": 4, "q": 8, "o": 16}
REGN = {1: "s_rb", 2: "s_rh", 4: "s_reg", 8: "s_rq", 16: "s_ro"}
out = []
w = out.append
USED = set()
USEROPS = set()


def uop(n):
    USEROPS.add(n)
    return n


def lit_float(v, z):
    """VAX short floating literal v (0-63) as an IEEE constant of z bytes."""
    val = (8 + (v & 7)) * 2.0 ** ((v >> 3) - 4)
    if z == 4:
        return struct.unpack("<I", struct.pack("<f", val))[0]
    return struct.unpack("<Q", struct.pack("<d", val))[0]


# ---------------------------------------------------------------- operand tables
def base_rows(k, z, pre, idx):
    """(display, pattern, L, rel-disp-or-None, pcode producing local ea) for a base specifier.

    pre: field prefix ('s' for the first byte, 'b' after an index byte); idx: bytes before it.
    """
    m, r = pre + "_mode", pre + "_reg"
    rows = []
    rows.append(('"("^%s^")"' % r, "%s=6 & %s" % (m, r), idx + 1, None, "local ea:4 = %s;" % r))
    rows.append(('"-("^%s^")"' % r, "%s=7 & %s" % (m, r), idx + 1, None, "%s = %s - %d; local ea:4 = %s;" % (r, r, z, r)))
    rows.append(('"("^%s^")+"' % r, "%s=8 & %s & %s<15" % (m, r, r.replace("reg", "rn")), idx + 1, None,
                 "local ea:4 = %s; %s = %s + %d;" % (r, r, r, z)))
    rows.append(('"@("^%s^")+"' % r, "%s=9 & %s & %s<15" % (m, r, r.replace("reg", "rn")), idx + 1, None,
                 "local ea:4 = *:4 %s; %s = %s + 4;" % (r, r, r)))
    rows.append(('"@#"^u32', "%s=9 & %s=15; u32" % (m, r.replace("reg", "rn")), idx + 5, None, "local ea:4 = u32;"))
    for mode, (d, n) in ((0xA, ("d8", 1)), (0xC, ("d16", 2)), (0xE, ("d32", 4))):
        rows.append(('%s^"("^%s^")"' % (d, r), "%s=%d & %s & %s<15; %s" % (m, mode, r, r.replace("reg", "rn"), d), idx + 1 + n, None,
                     "local ea:4 = %s + %s;" % (r, d)))
        rows.append(('"@"^%s^"("^%s^")"' % (d, r), "%s=%d & %s & %s<15; %s" % (m, mode + 1, r, r.replace("reg", "rn"), d), idx + 1 + n, None,
                     "local pa:4 = %s + %s; local ea:4 = *:4 pa;" % (r, d)))
        rows.append(("rel", "%s=%d & %s=15; %s" % (m, mode, r.replace("reg", "rn"), d), idx + 1 + n, d, "local ea:4 = rel;"))
        rows.append(('"@"^rel', "%s=%d & %s=15; %s" % (m, mode + 1, r.replace("reg", "rn"), d), idx + 1 + n, d,
                     "local pa:4 = rel; local ea:4 = *:4 pa;"))
    return rows


def act(k, L, d):
    a = "o%d = o%d + %d;" % (k + 1, k, L)
    if d:
        a = "rel = inst_start + o%d + %d + %s; " % (k, L, d) + a
    return "[ " + a + " ]"


def mem_table(k, z):
    t = "M%d_%d" % (k, z)
    if t in DONE:
        return t
    DONE.add(t)
    for disp, pat, L, d, body in base_rows(k, z, "s", 0):
        w("%s: %s is %s %s { %s export ea; }" % (t, disp, pat, act(k, L, d), body))
    for disp, pat, L, d, body in base_rows(k, z, "b", 1):
        sc = "" if z == 1 else " * %d" % z
        w('%s: %s^"["^s_reg^"]" is s_mode=4 & s_reg; %s %s { %s ea = ea + s_reg%s; export ea; }'
          % (t, disp, pat, act(k, L, d), body, sc))
    return t


def regexport(k, z):
    return "%s: %s is s_mode=5 & %s %s { export %s; }" % ("%s", REGN[z], REGN[z], act(k, 1, None), REGN[z])


def code_table(k, call):
    """Code-target operand that performs the transfer itself (call or goto), so a
    PC-relative or absolute target is a direct flow; calls also mark the target
    as a procedure entry (its first word is the entry mask)."""
    name = ("CC%d" if call else "CJ%d") % k
    if name in DONE:
        return name
    DONE.add(name)
    xfer = "call" if call else "goto"
    gs = " entry = 1; globalset(rel, entry);" if call else ""
    for disp, pat, L, d, body in base_rows(k, 1, "s", 0):
        if d and "*:4" not in body:
            dt = "PCD%d_%s%s" % (k, d, "c" if call else "j")
            if dt not in DONE:
                DONE.add(dt)
                w("%s: rel is %s [ rel = inst_start + o%d + %d + %s;%s ] { export *:4 rel; }" % (dt, d, k, L, d, gs))
            w("%s: %s is %s [ o%d = o%d + %d; ] { %s %s; }" % (name, dt, pat.replace("; " + d, "; " + dt), k + 1, k, L, xfer, dt))
        elif d:
            a = "[ rel = inst_start + o%d + %d + %s; o%d = o%d + %d; ]" % (k, L, d, k + 1, k, L)
            w("%s: %s is %s %s { %s %s [ea]; }" % (name, disp, pat, a, body, xfer))
        elif "u32;" in body and "@#" in disp:
            dt = "ABS%s" % ("c" if call else "j")
            if dt not in DONE:
                DONE.add(dt)
                w('%s: "@#"^u32 is u32 %s { export *:4 u32; }' % (dt, ("[ entry = 1; globalset(u32, entry); ]" if call else "")))
            w("%s: %s is %s [ o%d = o%d + %d; ] { %s %s; }" % (name, dt, pat.replace("; u32", "; " + dt), k + 1, k, L, xfer, dt))
        else:
            w("%s: %s is %s %s { %s %s [ea]; }" % (name, disp, pat, act(k, L, None), body, xfer))
    for disp, pat, L, d, body in base_rows(k, 1, "b", 1):
        w('%s: %s^"["^s_reg^"]" is s_mode=4 & s_reg; %s %s { %s ea = ea + s_reg; %s [ea]; }'
          % (name, disp, pat, act(k, L, d), body, xfer))
    return name


def table(kind, k, z):
    """kind: R read, F float read, V modify/write, A address, B bit base, J branch."""
    name = {"R": "R", "F": "F", "V": "V", "A": "A", "B": "VB", "J": "BR"}[kind] + "%d_%d" % (k, z)
    if name in DONE:
        return name
    if kind == "J":
        DONE.add(name)
        d = {1: "d8", 2: "d16"}[z]
        w("%s: rel is %s [ rel = inst_start + o%d + %d + %s; ] { export *:4 rel; }" % (name, d, k, z, d))
        return name
    if kind == "B":
        m = mem_table(k, 1)
        DONE.add(name)
        w("%s: s_reg is s_mode=5 & s_reg %s { export s_reg; }" % (name, act(k, 1, None)))
        w("%s: %s is %s { export *:4 %s; }" % (name, m, m, m))
        return name
    m = mem_table(k, z)
    DONE.add(name)
    if kind == "A":
        w("%s: %s is %s { export %s; }" % (name, m, m, m))
        n = 1 if z == 1 else 0
        tok = "; i8" if n else ""
        w('%s: "#"^ia is s_mode=8 & s_rn=15%s [ ia = inst_start + o%d + 1; o%d = o%d + %d; ] { export *[const]:4 ia; }'
          % (name, tok, k, k + 1, k, 1 + n))
        return name
    w(regexport(k, z) % name)
    w("%s: %s is %s { export *:%d %s; }" % (name, m, m, z, m))
    if kind == "V":
        return name
    if kind == "F":
        for v in range(64):
            w('%s: "#"^%d is s_hi2=0 & s_lit=%d %s { local t:%d = 0x%x; export t; }'
              % (name, v, v, act(k, 1, None), z, lit_float(v, z)))
    else:
        w('%s: "#"^s_lit is s_hi2=0 & s_lit %s { local t:%d = s_lit; export t; }' % (name, act(k, 1, None), z))
    if z <= 8:
        imm = {1: "i8", 2: "i16", 4: "i32", 8: "i64"}[z]
        w('%s: "#"^%s is s_mode=8 & s_rn=15; %s %s { local t:%d = %s; export t; }'
          % (name, imm, imm, act(k, 1 + z, None), z, imm))
    else:
        w('%s: "#"^i64 is s_mode=8 & s_rn=15; i64; i64b %s { local t:16 = zext(i64b:8); t = (t << 64) | zext(i64:8); export t; }'
          % (name, act(k, 17, None)))
    return name


DONE = set()


def header():
    w("# DEC VAX. Generated by gen_vax.py; edit that, not this.")
    w("define endian=little;")
    w("define alignment=1;")
    w("define space ram type=ram_space size=4 default;")
    w("define space register type=register_space size=4;")
    w("define register offset=0 size=4 [ %s ];" % " ".join(REGS))
    w("define register offset=0 size=2 [ %s ];" % " ".join("%sh _" % r for r in REGS))
    w("define register offset=0 size=1 [ %s ];" % " ".join("%sb _ _ _" % r for r in REGS))
    for o in range(2):
        w("define register offset=%d size=8 [ %s ];" % (4 * o, " ".join("%sq" % REGS[i] for i in range(o, 16, 2))))
    for o in range(4):
        w("define register offset=%d size=16 [ %s ];" % (4 * o, " ".join("%so" % REGS[i] for i in range(o, 16, 4))))
    w("define register offset=0x100 size=1 [ N Z V C ];")
    w("define register offset=0x104 size=4 [ PSL ];")
    w("define register offset=0x200 size=8 contextreg;")
    w("define context contextreg entry=(0,0) noflow o1=(1,6) noflow o2=(7,12) noflow o3=(13,18) noflow"
      " o4=(19,24) noflow o5=(25,30) noflow o6=(31,36) noflow o7=(37,42) noflow;")
    w("define token opbyte(8) op=(0,7);")
    w("define token spec(8) s_mode=(4,7) s_hi2=(6,7) s_lit=(0,5) s_reg=(0,3) s_rn=(0,3) s_rb=(0,3) s_rh=(0,3) s_rq=(0,3) s_ro=(0,3);")
    w("define token bspec(8) b_mode=(4,7) b_reg=(0,3) b_rn=(0,3);")
    w("define token d8t(8) d8=(0,7) signed;")
    w("define token d16t(16) d16=(0,15) signed;")
    w("define token d32t(32) d32=(0,31) signed u32=(0,31);")
    w("define token i8t(8) i8=(0,7);")
    w("define token i16t(16) i16=(0,15);")
    w("define token i32t(32) i32=(0,31);")
    w("define token i64t(64) i64=(0,63);")
    w("define token i64u(64) i64b=(0,63);")
    w("define token maskt(16) emask=(0,15);")
    w("attach variables [ s_reg b_reg ] [ %s ];" % " ".join(REGS))
    w("attach variables [ s_rb ] [ %s ];" % " ".join(r + "b" for r in REGS))
    w("attach variables [ s_rh ] [ %s ];" % " ".join(r + "h" for r in REGS))
    w("attach variables [ s_rq ] [ %s ];" % " ".join(r + "q" for r in REGS))
    w("attach variables [ s_ro ] [ %s ];" % " ".join(r + "o" for r in REGS))
    w("macro nz(r) { N = r s< 0; Z = r == 0; }")
    w("macro packpsl() { PSL = (PSL & 0xfffffff0) | zext(C) | (zext(V) << 1) | (zext(Z) << 2) | (zext(N) << 3); }")
    w("macro unpackpsl() { C = (PSL & 1) != 0; V = (PSL & 2) != 0; Z = (PSL & 4) != 0; N = (PSL & 8) != 0; }")


# ---------------------------------------------------------------- semantics
FLOAT_SFX = {"F": 4, "D": 8, "G": 8}


def opsz(m):
    return SZ[m[-1]] if m not in ("vb", "bb", "bw") else {"vb": 4, "bb": 1, "bw": 2}[m]


def kind_of(m, flt):
    if m in ("bb", "bw"):
        return "J"
    if m == "vb":
        return "B"
    a = m[0]
    if a in "rsuc" or m in ("mskw", "posl", "prl", "cntb"):
        return "F" if flt and m[-1] in "lq" and m.startswith("r") else "R"
    if a in "mw":
        return "V"
    if a == "a":
        return "A"
    raise ValueError(m)


B = {"BNEQ": "!Z", "BEQL": "Z", "BGTR": "!(N || Z)", "BLEQ": "N || Z", "BGEQ": "!N", "BLSS": "N",
     "BGTRU": "!(C || Z)", "BLEQU": "C || Z", "BVC": "!V", "BVS": "V", "BCC": "!C", "BCS": "C"}


def sem(mn, o, sz):
    """p-code for mnemonic mn with operand varnodes o (list) of byte sizes sz."""
    base, suf = mn[:-1], mn[-1]
    s = sz[0] if sz else 0
    flt = None
    m2 = mn.rstrip("23")
    if len(m2) >= 4 and m2[-1] in "FDGH" and m2[:-1] in ("ADD", "SUB", "MUL", "DIV", "MOV", "CMP", "MNEG", "TST"):
        flt = m2[-1]
    if flt:
        if flt == "H":
            return None
        op = m2[:-1]
        z = FLOAT_SFX[flt]
        if op in ("ADD", "SUB", "MUL", "DIV"):
            f = {"ADD": "f+", "SUB": "f-", "MUL": "f*", "DIV": "f/"}[op]
            if mn.endswith("2"):
                body = "local r:%d = %s %s %s; %s = r;" % (z, o[1], f, o[0], o[1])
            else:
                body = "local r:%d = %s %s %s; %s = r;" % (z, o[1], f, o[0], o[2])
            return body + " local zf:%d = int2float(0:4); N = r f< zf; Z = r f== zf; V = 0; C = 0;" % z
        if op == "MOV":
            return "local r:%d = %s; %s = r; local zf:%d = int2float(0:4); N = r f< zf; Z = r f== zf; V = 0;" % (z, o[0], o[1], z)
        if op == "MNEG":
            return "local r:%d = f- %s; %s = r; local zf:%d = int2float(0:4); N = r f< zf; Z = r f== zf; V = 0; C = 0;" % (z, o[0], o[1], z)
        if op == "CMP":
            return "N = %s f< %s; Z = %s f== %s; V = 0; C = 0;" % (o[0], o[1], o[0], o[1])
        if op == "TST":
            return "local zf:%d = int2float(0:4); N = %s f< zf; Z = %s f== zf; V = 0; C = 0;" % (z, o[0], o[0])
    if mn in B:
        return "if (%s) goto %s;" % (B[mn], o[0])
    if mn in ("BRB", "BRW"):
        return "goto %s;" % o[0]
    if mn in ("BSBB", "BSBW"):
        return "SP = SP - 4; *:4 SP = inst_next; call %s; SP = SP + 4;" % o[0]
    if mn == "JMP":
        return "build %s;" % o[0]
    if mn == "JSB":
        return "SP = SP - 4; *:4 SP = inst_next; build %s; SP = SP + 4;" % o[0]
    if mn == "RSB":
        return "local ra:4 = *:4 SP; return [ra];"
    if mn == "RET":
        return "SP = AP; local ra:4 = *:4 (FP + 16); return [ra];"
    if mn == "CALLS":
        return ("local n:4 = %s; SP = SP - 4; *:4 SP = n; build %s; SP = SP + 4 + n * 4;" % (o[0], o[1]))
    if mn == "CALLG":
        return "AP = %s; build %s;" % (o[0], o[1])
    if mn == "NOP":
        return ""
    if mn in ("MOVB", "MOVW", "MOVL", "MOVQ", "MOVO"):
        return "local r:%d = %s; %s = r; nz(r); V = 0;" % (s, o[0], o[1])
    if mn in ("CLRB", "CLRW", "CLRL", "CLRQ", "CLRO"):
        return "%s = 0; N = 0; Z = 1; V = 0;" % o[0]
    if mn in ("TSTB", "TSTW", "TSTL"):
        return "local r:%d = %s; nz(r); V = 0; C = 0;" % (s, o[0])
    if mn in ("CMPB", "CMPW", "CMPL"):
        return "local a:%d = %s; local b:%d = %s; N = a s< b; Z = a == b; V = 0; C = a < b;" % (s, o[0], s, o[1])
    if mn in ("BITB", "BITW", "BITL"):
        return "local r:%d = %s & %s; nz(r); V = 0;" % (s, o[0], o[1])
    if mn in ("MCOMB", "MCOMW", "MCOML"):
        return "local r:%d = ~%s; %s = r; nz(r); V = 0;" % (s, o[0], o[1])
    if mn in ("MNEGB", "MNEGW", "MNEGL"):
        return ("local a:%d = %s; local r:%d = -a; %s = r; nz(r); V = sborrow(0:%d, a); C = r != 0;"
                % (s, o[0], s, o[1], s))
    if mn.startswith("MOVZ"):
        return "local r:%d = zext(%s); %s = r; N = 0; Z = r == 0; V = 0;" % (sz[1], o[0], o[1])
    if mn.startswith("CVT") and len(mn) == 5 and mn[3] in "BWL" and mn[4] in "BWL":
        a, b = SZ[mn[3].lower()], SZ[mn[4].lower()]
        if b > a:
            return "local r:%d = sext(%s); %s = r; nz(r); V = 0; C = 0;" % (b, o[0], o[1])
        return ("local x:%d = %s; local r:%d = x:%d; %s = r; nz(r); V = sext(r) != x; C = 0;"
                % (a, o[0], b, b, o[1]))
    if mn.startswith("CVT") and len(mn) in (5, 6):
        src, dst = mn[-2], mn[-1]
        rnd = len(mn) == 6
        if src in "BWL" and dst in "FDG":
            return ("local r:%d = int2float(%s); %s = r; local zf:%d = int2float(0:4); N = r f< zf; Z = r f== zf; V = 0; C = 0;"
                    % (sz[1], o[0], o[1], sz[1]))
        if src in "FDG" and dst in "BWL":
            x = "round(%s)" % o[0] if rnd else o[0]
            return "local r:%d = trunc(%s); %s = r; nz(r); V = 0; C = 0;" % (sz[1], x, o[1])
        if src in "FDG" and dst in "FDG":
            return ("local r:%d = float2float(%s); %s = r; local zf:%d = int2float(0:4); N = r f< zf; Z = r f== zf; V = 0; C = 0;"
                    % (sz[1], o[0], o[1], sz[1]))
    arith = {"ADD": "+", "SUB": "-", "MUL": "*", "DIV": "s/", "BIS": "|", "BIC": "&~", "XOR": "^"}
    if base[:-1] in arith and suf in "23" and mn[-2] in "BWL":
        op = base[:-1]
        if mn[-1] == "2":
            x, y, d = o[0], o[1], o[1]
        else:
            x, y, d = o[0], o[1], o[2]
        hd = "local x:%d = %s; local y:%d = %s; " % (s, x, s, y)
        if op == "ADD":
            return hd + "local r:%d = y + x; %s = r; nz(r); V = scarry(y, x); C = carry(y, x);" % (s, d)
        if op == "SUB":
            return hd + "local r:%d = y - x; %s = r; nz(r); V = sborrow(y, x); C = y < x;" % (s, d)
        if op == "MUL":
            return (hd + "local p:%d = sext(y) * sext(x); local r:%d = p:%d; %s = r; nz(r); V = sext(r) != p; C = 0;"
                    % (2 * s, s, s, d))
        if op == "DIV":
            return hd + "local r:%d = y s/ x; %s = r; nz(r); V = x == 0; C = 0;" % (s, d)
        if op == "BIC":
            return hd + "local r:%d = y & ~x; %s = r; nz(r); V = 0;" % (s, d)
        return hd + "local r:%d = y %s x; %s = r; nz(r); V = 0;" % (s, arith[op], d)
    if mn in ("INCB", "INCW", "INCL"):
        return "local y:%d = %s; local r:%d = y + 1; %s = r; nz(r); V = scarry(y, 1); C = carry(y, 1);" % (s, o[0], s, o[0])
    if mn in ("DECB", "DECW", "DECL"):
        return "local y:%d = %s; local r:%d = y - 1; %s = r; nz(r); V = sborrow(y, 1); C = y < 1;" % (s, o[0], s, o[0])
    if mn == "ADAWI":
        return "local x:2 = %s; local y:2 = %s; local r:2 = y + x; %s = r; nz(r); V = scarry(y, x); C = carry(y, x);" % (o[0], o[1], o[1])
    if mn == "ADWC":
        return ("local x:4 = %s; local y:4 = %s; local c:4 = zext(C); local t:4 = y + x; local r:4 = t + c; %s = r; nz(r); "
                "V = ((~(y ^ x)) & (y ^ r)) s< 0; C = carry(y, x) || carry(t, c);" % (o[0], o[1], o[1]))
    if mn == "SBWC":
        return ("local x:4 = %s; local y:4 = %s; local c:4 = zext(C); local t:4 = y - x; local r:4 = t - c; %s = r; nz(r); "
                "V = ((y ^ x) & (y ^ r)) s< 0; C = (y < x) || (t < c);" % (o[0], o[1], o[1]))
    if mn in ("ASHL", "ASHQ"):
        z = 4 if mn == "ASHL" else 8
        return ("local c:1 = %s; local x:%d = %s; local r:%d = x; if (c s< 0) goto <right>; r = x << c; V = (r s>> c) != x; "
                "goto <done>; <right> r = x s>> (-c); V = 0; <done> %s = r; nz(r); C = 0;" % (o[0], z, o[1], z, o[2]))
    if mn == "ROTL":
        return ("local c:1 = %s & 31; local x:4 = %s; local r:4 = (x << c) | (x >> ((32 - c) & 31)); %s = r; nz(r); V = 0;"
                % (o[0], o[1], o[2]))
    if mn == "EMUL":
        return "local r:8 = sext(%s) * sext(%s) + sext(%s); %s = r; nz(r); V = 0; C = 0;" % (o[0], o[1], o[2], o[3])
    if mn == "EDIV":
        return ("local x:8 = sext(%s); local y:8 = %s; local q:8 = y s/ x; local m:8 = y s%% x; %s = q:4; %s = m:4; "
                "local r:4 = q:4; nz(r); V = sext(r) != q; C = 0;" % (o[0], o[1], o[2], o[3]))
    if mn == "PUSHL":
        return "local v:4 = %s; SP = SP - 4; *:4 SP = v; nz(v); V = 0;" % o[0]
    if mn.startswith("PUSHA"):
        return "local v:4 = %s; SP = SP - 4; *:4 SP = v; nz(v); V = 0;" % o[0]
    if mn.startswith("MOVA"):
        return "local v:4 = %s; %s = v; nz(v); V = 0;" % (o[0], o[1])
    if mn == "MOVPSL":
        return "packpsl(); %s = PSL;" % o[0]
    if mn == "BISPSW":
        return "packpsl(); PSL = PSL | zext(%s); unpackpsl();" % o[0]
    if mn == "BICPSW":
        return "packpsl(); PSL = PSL & ~zext(%s); unpackpsl();" % o[0]
    if mn == "PUSHR":
        lines = ["local m:2 = %s;" % o[0]]
        for i in range(14, -1, -1):
            lines.append("if ((m & 0x%x) == 0) goto <s%d>; SP = SP - 4; *:4 SP = %s; <s%d>" % (1 << i, i, REGS[i], i))
        return " ".join(lines)
    if mn == "POPR":
        lines = ["local m:2 = %s;" % o[0]]
        for i in range(15):
            if REGS[i] == "SP":
                lines.append("if ((m & 0x%x) == 0) goto <s%d>; SP = *:4 SP; <s%d>" % (1 << i, i, i))
            else:
                lines.append("if ((m & 0x%x) == 0) goto <s%d>; %s = *:4 SP; SP = SP + 4; <s%d>" % (1 << i, i, REGS[i], i))
        return " ".join(lines)
    if mn.startswith("ACB") and mn[3] in "BWL":
        z = SZ[mn[3].lower()]
        return ("local lim:%d = %s; local ad:%d = %s; local x:%d = %s; local r:%d = x + ad; %s = r; nz(r); V = scarry(x, ad); "
                "if (ad s< 0) goto <neg>; if (r s<= lim) goto %s; goto inst_next; <neg> if (r s>= lim) goto %s;"
                % (z, o[0], z, o[1], z, o[2], z, o[2], o[3], o[3]))
    if mn.startswith("ACB") and mn[3] in "FDG":
        z = FLOAT_SFX[mn[3]]
        return ("local lim:%d = %s; local ad:%d = %s; local r:%d = %s f+ ad; %s = r; local zf:%d = int2float(0:4); "
                "if (ad f< zf) goto <neg>; if (r f<= lim) goto %s; goto inst_next; <neg> if (r f>= lim) goto %s;"
                % (z, o[0], z, o[1], z, o[2], o[2], z, o[3], o[3]))
    if mn in ("AOBLSS", "AOBLEQ"):
        c = "s<" if mn == "AOBLSS" else "s<="
        return ("local lim:4 = %s; local r:4 = %s + 1; %s = r; nz(r); V = r == 0x80000000; if (r %s lim) goto %s;"
                % (o[0], o[1], o[1], c, o[2]))
    if mn in ("SOBGEQ", "SOBGTR"):
        c = "s>=" if mn == "SOBGEQ" else "s>"
        return ("local x:4 = %s; local r:4 = x - 1; %s = r; nz(r); V = x == 0x80000000; if (r %s 0) goto %s;"
                % (o[0], o[0], c, o[1]))
    if mn in ("BLBS", "BLBC"):
        c = "!=" if mn == "BLBS" else "=="
        return "if ((%s & 1) %s 0) goto %s;" % (o[0], c, o[1])
    if mn.startswith("BB"):
        t, after = mn[2], mn[3:4]
        body = "local p:4 = %s & 31; local b:4 = (%s >> p) & 1;" % (o[0], o[1])
        if after == "S":
            body += " %s = %s | (1 << p);" % (o[1], o[1])
        elif after == "C":
            body += " %s = %s & ~(1 << p);" % (o[1], o[1])
        return body + " if (b %s 0) goto %s;" % ("!=" if t == "S" else "==", o[2])
    if mn in ("EXTV", "EXTZV", "CMPV", "CMPZV"):
        sh = "s>>" if mn in ("EXTV", "CMPV") else ">>"
        body = ("local p:4 = %s & 31; local n:4 = zext(%s & 31); local x:4 = (%s >> p) << (32 - n); "
                "local f:4 = 0; if (n == 0) goto <z>; f = x %s (32 - n); <z>" % (o[0], o[1], o[2], sh))
        if mn.startswith("EXT"):
            return body + " %s = f; nz(f); V = 0; C = 0;" % o[3]
        return body + " local y:4 = %s; N = f s< y; Z = f == y; V = 0; C = f < y;" % o[3]
    if mn == "INSV":
        return ("local p:4 = %s & 31; local n:4 = zext(%s & 31); local m:4 = ((1 << n) - 1) << p; "
                "%s = (%s & ~m) | ((%s << p) & m);" % (o[1], o[2], o[3], o[3], o[0]))
    if mn in ("CASEB", "CASEW", "CASEL"):
        z = sz[0]
        return ("local i:%d = %s - %s; local lim:%d = %s; if (i > lim) goto <out>; local e:4 = inst_next + zext(i) * 2; "
                "local d:2 = *:2 e; local t:4 = inst_next + sext(d); goto [t]; <out> local t2:4 = inst_next + (zext(lim) + 1) * 2; "
                "goto [t2];" % (z, o[0], o[1], z, o[2]))
    if mn == "INDEX":
        return "local r:4 = (%s + %s) * %s; %s = r; nz(r); V = 0; C = 0;" % (o[4], o[0], o[3], o[5])
    if mn in ("MOVC3", "MOVC5"):
        pass
    return None


def generic(mn, o):
    return "%s(%s);" % (uop(mn.lower()), ", ".join(o))


def emit_ops(ops, prefix):
    for opc in sorted(ops, key=lambda x: int(x, 16)):
        mn, modes, _ = ops[opc]
        o = int(opc, 16)
        flt = any(mn.rstrip("23").endswith(c) for c in "FDG") and not mn.startswith("CVT") or mn.startswith("ACB") and mn[3] in "FDG"
        if mn.startswith("CVT") and len(mn) in (5, 6) and mn[-2] in "FDG":
            flt = True
        names, sizes = [], []
        for k, m in enumerate(modes, start=1):
            z = opsz(m)
            kd = kind_of(m, flt)
            if mn in ("JMP", "JSB") or (mn in ("CALLS", "CALLG") and k == 2):
                names.append(code_table(k, mn.startswith("CALL")))
                sizes.append(4)
                continue
            if kd == "F" and mn.startswith("CVT") and k > 1:
                kd = "R"
            names.append(table(kd, k, z))
            sizes.append(z)
        body = sem(mn, names, sizes)
        if body is None:
            body = generic(mn, names)
        start = 2 if prefix else 1
        pat = ("op=0xfd; op=0x%02x" % o) if prefix else ("op=0x%02x" % o)
        pats = "; ".join([pat] + names) if names else pat
        disp = (mn + " " + ", ".join(names)) if names else mn
        w(":%s is entry=0 & %s [ o1 = %d; ] { %s }" % (disp, pats, start, body))


def main():
    import json, sys
    ops = json.load(open(sys.argv[1]))
    header()
    body_start = len(out)
    emit_ops(ops["np"], False)
    emit_ops(ops["fd"], True)
    w(":WAIT is entry=0 & op=0xfd; op=0x02 { %s(); }" % uop("wait"))
    w(":BUGW is entry=0 & op=0xff; op=0xfe { %s(); }" % uop("bugw"))
    w(":BUGL is entry=0 & op=0xff; op=0xfd { %s(); }" % uop("bugl"))
    w(":ENTRY emask is entry=1 & emask { local m:2 = emask & 0xfff; local n:4 = popcount(m); AP = SP; SP = SP - 20 - n * 4; FP = SP; }")
    rest = out[body_start:]
    del out[body_start:]
    for n in sorted(USEROPS):
        w("define pcodeop %s;" % n)
    out.extend(rest)
    print("\n".join(out))


main()
