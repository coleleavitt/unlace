#!/usr/bin/env python3
"""Generate an unlace SLEIGH language for a Cadence Xtensa HiFi core.

Input: the JSON that tools/xtensa_hifi_probe.c prints for a binutils build configured with the
core's overlay (Zephyr SDK overlays/xtensa_<core>/binutils: bfd/xtensa-modules.c and
include/xtensa-config.h). The probe walks the xtensa-isa API: every format with its decoder
mask and slot bit map, every opcode each slot can issue with its fixed bits, and every operand
with its field bits and field-to-value decoding.

Output: <prefix>_defs.sinc (register files, tokens, p-code ops) and <prefix>.sinc (operand
tables, one table per FLIX slot, one root constructor per FLIX format, and the HiFi operations
of the 24- and 16-bit formats). The base Xtensa operations of the 24/16-bit formats stay in
xtensaInstructions.sinc.

    python3 tools/gen_xtensa_hifi.py probe.json xtensa-modules.c <languages-dir> <prefix> "<description>"
"""
import json
import re
import sys

# 24/16-bit names the base module decodes under another spelling (found by slacomp's
# identical-pattern check); filled in per core by --skip.
BASE_ALIASES = set()

REG = {"AR": ("a", 4), "MR": ("M", 4), "BR": ("b", 1), "AE_DR": ("aed", 8), "AE_VALIGN": ("u", 8), "AE_EP": ("aep", 1)}


def tok_of(fl, bit):
    if fl == 11:
        return ("hx0", bit) if bit < 64 else ("hx1", bit - 64)
    if fl == 6:
        return ("hy0", bit)
    if fl == 2:
        return ("hw0", bit)
    return ("hz0", bit)


def toks(fl):
    return {11: ["hx0", "hx1"], 6: ["hy0"], 2: ["hw0"]}.get(fl, ["hz0"])


class Gen:
    def __init__(self, isa, base_mnemonics):
        self.isa = isa
        self.base = base_mnemonics
        self.fields = {}
        self.subtables = []
        self.subkey = {}
        self.subn = 0
        self.ops = set()
        self.skipped = []

    def fld(self, tok, lo, hi):
        name = f"{tok}_{lo}_{hi}"
        self.fields[name] = (tok, lo, hi)
        return name

    def seq(self, fl, by):
        ts = toks(fl)
        last = max((i for i, t in enumerate(ts) if by.get(t)), default=-1)
        if last < 0:
            return f"{ts[0]}v"
        parts = [" & ".join(by[t]) if by.get(t) else f"{t}v" for t in ts[: last + 1]]
        return f"({'; '.join(parts)})" if len(parts) > 1 else parts[0]

    def value_runs(self, fl, ibits):
        runs = []
        for b in ibits:
            t, tb = tok_of(fl, b)
            if runs and runs[-1][0] == t and tb == runs[-1][2] + 1:
                runs[-1][2] = tb
            else:
                runs.append([t, tb, tb])
        return [(self.fld(t, lo, hi), hi - lo + 1, t) for t, lo, hi in runs]

    def constrain(self, fl, bits_vals):
        uniq = dict(bits_vals)
        runs = []
        for b in sorted(uniq):
            t, tb = tok_of(fl, b)
            if runs and runs[-1][0] == t and tb == runs[-1][2] + 1:
                runs[-1][2] = tb
                runs[-1][3] += uniq[b] << (tb - runs[-1][1])
            else:
                runs.append([t, tb, tb, uniq[b]])
        by = {}
        for t, lo, hi, val in runs:
            by.setdefault(t, []).append(f"{self.fld(t, lo, hi)}={val}")
        return by

    @staticmethod
    def values(p):
        w = len(p["field"])
        m = {}
        for f, v in p["dec"] + p.get("all", []) + [x for x in p.get("top", []) if x[1] is not None]:
            if f < 1 << w:
                m[f] = v
        return sorted(m.items())

    @staticmethod
    def fit(w, vals):
        d = dict(vals)
        if 0 not in d or 1 not in d:
            return None
        for signed in (False, True):
            c, m = d[0], d[1] - d[0]
            if m == 0:
                continue
            sv = (lambda f: f - (1 << w) if signed and f >= 1 << (w - 1) else f)
            if all(sv(f) * m + c == v for f, v in vals):
                return signed, m, c
        return None

    def operand(self, fl, smap, o, p):
        vr = self.value_runs(fl, [smap[k] for k in p["field"]])

        def cons_for(f):
            by, sh = {}, 0
            for name, w, t in vr:
                by.setdefault(t, []).append(f"{name}={(f >> sh) & ((1 << w) - 1)}")
                sh += w
            return self.seq(fl, by)

        bare = {}
        for name, w, t in vr:
            bare.setdefault(t, []).append(name)
        raw, sh = [], 0
        for name, w, t in vr:
            raw.append(f"({name} << {sh})" if sh else name)
            sh += w
        raw = " | ".join(raw)
        vals = self.values(p)
        if p["reg"]:
            prefix, size = REG[p["rf"]]
            nr = max(1, p.get("nregs", 1))
            key = ("reg", p["rf"], nr, tuple(n for n, _, _ in vr), tuple(vals))
            st = self.subkey.get(key)
            if not st:
                st = f"hR{self.subn}"
                self.subn += 1
                self.subkey[key] = st
                for f, v in vals:
                    disp = ":".join(f"{prefix}{v + k}" for k in range(nr))
                    self.subtables.append(f'{st}: "{disp}" is {cons_for(f)} {{ export {prefix}{v}; }}')
            return {"sub": st, "kind": "reg", "rf": p["rf"], "size": size, "io": p["io"]}
        w = len(p["field"])
        if p["name"] == "simm7" and w == 7:
            vals = [(f, f if f < 96 else f - 128) for f in range(128)]
        ft = self.fit(w, vals)
        l32r = o["name"] == "l32r"
        key = ("imm", tuple(n for n, _, _ in vr), p["pcrel"], l32r, ft if ft else tuple(vals))
        st = self.subkey.get(key)
        if not st:
            st = f"hI{self.subn}"
            if ft:
                signed, m, c = ft
                sx = f"((({raw}) ^ {1 << (w - 1)}) - {1 << (w - 1)})" if signed else f"({raw})"
                ex = f"{sx} * {m} + {c}"
                if p["pcrel"] and l32r:
                    line = f"{st}: rel is {self.seq(fl, bare)} [ rel = (((inst_start + 3) & ~3) + ({ex})) & 0xffffffff; ] {{ export *:4 rel; }}"
                elif p["pcrel"]:
                    line = f"{st}: rel is {self.seq(fl, bare)} [ rel = (inst_start + {ex}) & 0xffffffff; ] {{ export *:1 rel; }}"
                else:
                    line = f"{st}: val is {self.seq(fl, bare)} [ val = {ex}; ] {{ export *[const]:4 val; }}"
                self.subtables.append(line)
            elif w <= 7 and vals and not p["pcrel"]:
                for f, v in vals:
                    self.subtables.append(f'{st}: "{v}" is {cons_for(f)} {{ export {v & 0xffffffff}:4; }}')
            else:
                return None
            self.subn += 1
            self.subkey[key] = st
        return {"sub": st, "kind": "pcrel" if p["pcrel"] else "imm", "rf": None, "io": p["io"]}

    def extra_plain(self, n):
        """A 24/16-bit operation the base module does not decode: the core's TIE operations."""
        return n not in self.base and n not in BASE_ALIASES and not re.match(r"^(rsr|wsr|xsr|rur|wur)\.", n)

    def opname(self, n):
        return "hifi_" + re.sub(r"[^a-z0-9_]", "_", n)

    def run(self, fmt_mask):
        roots, slots = [], []
        for f in self.isa["formats"]:
            fl = f["len"]
            enc = set(f["enc"])
            plain = len(f["slots"]) == 1 and fl <= 3
            fbits = [(b, 1 if b in enc else 0) for b in fmt_mask.get(f["name"], [])]
            names = [f"S_{f['name']}_{i}" for i in range(len(f["slots"]))]
            if not plain:
                disp = '^"; "^'.join(names)
                head = self.seq(fl, self.constrain(fl, fbits))
                elems = (head.split(" & ") if not head.startswith("(") else [head]) + names
                roots.append(f':"{{" {disp} "}}" is ' + " & ".join(e + " ..." for e in elems) + " { " + " ".join(f"build {n};" for n in names) + " }")
            for si, s in enumerate(f["slots"]):
                for o in s["ops"]:
                    if plain and not self.extra_plain(o["name"]):
                        continue
                    fixed = [(s["map"][k], 1 if k in o["val"] else 0) for k in o["fixed"]]
                    opr = []
                    for p in o["opnds"]:
                        if not p["visible"]:
                            continue
                        r = self.operand(fl, s["map"], o, p)
                        if r is None:
                            self.skipped.append(f"{f['name']}.{si} {o['name']}")
                            opr = None
                            break
                        opr.append(r)
                    if opr is None:
                        continue
                    bits = (fbits + fixed) if plain else fixed
                    head = self.seq(fl, self.constrain(fl, bits))
                    if plain:
                        pat = " & ".join([head] + [x["sub"] for x in opr])
                    else:
                        elems = (head.split(" & ") if not head.startswith("(") else [head]) + [x["sub"] for x in opr]
                        pat = " & ".join(e + " ..." for e in elems)
                    disp = ", ".join(x["sub"] for x in opr)
                    body = self.sem(o["name"], opr)
                    if plain:
                        slots.append(f":{o['name']} {disp} is {pat} {{ {body} }}")
                    else:
                        slots.append(f'S_{f["name"]}_{si}: "{o["name"]}" {disp} is {pat} {{ {body} }}')
        return roots, slots

    BASE = {
        "add": "{0} = {1} + {2};", "sub": "{0} = {1} - {2};", "and": "{0} = {1} & {2};", "or": "{0} = {1} | {2};", "xor": "{0} = {1} ^ {2};",
        "addx2": "{0} = ({1} << 1) + {2};", "addx4": "{0} = ({1} << 2) + {2};", "addx8": "{0} = ({1} << 3) + {2};",
        "subx2": "{0} = ({1} << 1) - {2};", "subx4": "{0} = ({1} << 2) - {2};", "subx8": "{0} = ({1} << 3) - {2};",
        "addi": "{0} = {1} + {2};", "addmi": "{0} = {1} + {2};", "addi.n": "{0} = {1} + {2};",
        "mov.n": "{0} = {1};", "movi": "{0} = {1};", "movi.n": "{0} = {1};",
        "moveqz": "if ({2} != 0) goto <x>; {0} = {1}; <x>", "movnez": "if ({2} == 0) goto <x>; {0} = {1}; <x>",
        "movgez": "if ({2} s< 0) goto <x>; {0} = {1}; <x>", "movltz": "if ({2} s>= 0) goto <x>; {0} = {1}; <x>",
        "abs": "{0} = {1}; if ({1} s>= 0) goto <x>; {0} = -{1}; <x>", "neg": "{0} = -{1};",
        "min": "{0} = {1}; if ({1} s<= {2}) goto <x>; {0} = {2}; <x>", "max": "{0} = {1}; if ({1} s>= {2}) goto <x>; {0} = {2}; <x>",
        "minu": "{0} = {1}; if ({1} <= {2}) goto <x>; {0} = {2}; <x>", "maxu": "{0} = {1}; if ({1} >= {2}) goto <x>; {0} = {2}; <x>",
        "slli": "{0} = {1} << {2};", "srli": "{0} = {1} >> {2};", "srai": "{0} = {1} s>> {2};",
        "l32i": "local ea:4 = {1} + {2}; {0} = *:4 ea;", "l32i.n": "local ea:4 = {1} + {2}; {0} = *:4 ea;",
        "l16si": "local ea:4 = {1} + {2}; {0} = sext(*:2 ea);", "l16ui": "local ea:4 = {1} + {2}; {0} = zext(*:2 ea);",
        "l8ui": "local ea:4 = {1} + {2}; {0} = zext(*:1 ea);",
        "s32i": "local ea:4 = {1} + {2}; *:4 ea = {0};", "s16i": "local ea:4 = {1} + {2}; *:2 ea = {0}:2;", "s8i": "local ea:4 = {1} + {2}; *:1 ea = {0}:1;",
        "l32r": "{0} = {1};", "nop": "", "nop.n": "",
        "extui": "{0} = ({1} >> {2}) & ((1 << {3}) - 1);", "sext": "local sh:4 = 31 - {2}; {0} = ({1} << sh) s>> sh;",
        "clamps": "local clhi:4 = (1 << {2}) - 1; local cllo:4 = -(1 << {2}); {0} = {1}; if ({1} s<= clhi) goto <a>; {0} = clhi; <a> if ({1} s>= cllo) goto <x>; {0} = cllo; <x>",
    }
    BRANCH = {
        "beqz": "{0} == 0", "bnez": "{0} != 0", "bgez": "{0} s>= 0", "bltz": "{0} s< 0",
        "beqi": "{0} == {1}", "bnei": "{0} != {1}", "bgei": "{0} s>= {1}", "blti": "{0} s< {1}", "bgeui": "{0} >= {1}", "bltui": "{0} < {1}",
        "bbci": "(({0} >> {1}) & 1) == 0", "bbsi": "(({0} >> {1}) & 1) != 0",
        "ball": "(~{0} & {1}) == 0", "bany": "({0} & {1}) != 0", "bnall": "(~{0} & {1}) != 0", "bnone": "({0} & {1}) == 0",
        "bbc": "(({0} >> ({1} & 31)) & 1) == 0", "bbs": "(({0} >> ({1} & 31)) & 1) != 0",
        "beq": "{0} == {1}", "bne": "{0} != {1}", "bgeu": "{0} >= {1}", "bge": "{0} s>= {1}", "bltu": "{0} < {1}", "blt": "{0} s< {1}",
    }
    LS = re.compile(r"^ae_([ls])(\d+)(?:x(\d+))?([a-z0-9]*)(?:\.[a-z0-9]+)*\.(i|ip|x|xp|iu|xu|xc|ic|xc1|ic1)$")

    def sem(self, n, opr):
        v = [x["sub"] for x in opr]
        if n in self.BASE:
            return self.BASE[n].format(*v)
        m = re.match(r"^([a-z]+)\.w15$", n)
        if m and m.group(1) in self.BRANCH:
            return f"if ({self.BRANCH[m.group(1)].format(*v)}) goto {v[-1]};"
        nm = self.opname(n)
        m = self.LS.match(n)
        if m and len(opr) == 3 and sum(1 for x in opr if x["rf"] == "AE_DR") == 1:
            nbytes = int(m.group(2)) * int(m.group(3) or 1) // 8
            mode = m.group(5)
            data = next(x for x in opr if x["rf"] == "AE_DR")
            base = next((x for x in opr if x["rf"] == "AR" and x["io"] in "mi"), None)
            off = next((x for x in opr if x is not data and x is not base and (x["kind"] == "imm" or x["rf"] == "AR")), None)
            if base and off and nbytes in (1, 2, 4, 8):
                upd = ""
                if mode in ("i", "x"):
                    addr = f"{base['sub']} + {off['sub']}"
                elif mode in ("ip", "xp"):
                    addr, upd = base["sub"], f"{base['sub']} = {base['sub']} + {off['sub']};"
                elif mode in ("iu", "xu"):
                    addr, upd = f"{base['sub']} + {off['sub']}", f"{base['sub']} = ea;"
                else:
                    self.ops.add("hifi_circular_add")
                    addr, upd = base["sub"], f"{base['sub']} = hifi_circular_add({base['sub']}, {off['sub']});"
                if base["io"] != "m":
                    upd = ""
                self.ops.add(nm)
                if m.group(1) == "l":
                    return f"local ea:4 = {addr}; {data['sub']} = {nm}(*:{nbytes} ea); {upd}".rstrip()
                return f"local ea:4 = {addr}; *:{nbytes} ea = {nm}({data['sub']}); {upd}".rstrip()
        outs = [x for x in opr if x["io"] != "i" and x["kind"] == "reg"]
        ins = ", ".join(x["sub"] for x in opr if x["io"] != "o")
        if not outs:
            self.ops.add(nm)
            return f"{nm}({ins});"
        res = []
        for k, x in enumerate(outs):
            nk = nm + (f"_{k}" if len(outs) > 1 else "")
            self.ops.add(nk)
            res.append(f"{x['sub']} = {nk}({ins});")
        return " ".join(res)


def format_masks(modules_c, isa):
    names = [f["name"] for f in isa["formats"]]
    masks = {}
    pat = re.compile(r"if \(\(insn\[0\] & (\w+)\) == (\w+) && \(insn\[1\] & (\w+)\) == (\w+) && \(insn\[2\] & (\w+)\) == (\w+)\)\s*return (\d+);")
    for m in pat.finditer(modules_c):
        bits = []
        for w, mk in enumerate((m.group(1), m.group(3), m.group(5))):
            mk = int(mk, 0)
            bits += [w * 32 + b for b in range(32) if (mk >> b) & 1]
        masks[names[int(m.group(7))]] = bits
    for f in isa["formats"]:
        if len(f["slots"]) == 1 and f["len"] <= 3:
            masks[f["name"]] = []
    return masks


def notice(modules_c):
    """The Cadence permission notice of xtensa-modules.c, which the generated tables derive from."""
    head = modules_c.split("*/", 1)[0].lstrip("/* ").splitlines()
    text = [ln.strip() for ln in head[1:]]
    return "".join(f"# {ln}\n" if ln else "#\n" for ln in text)


def main():
    probe, modules, outdir, prefix, desc = sys.argv[1:6]
    for a in sys.argv[6:]:
        if a.startswith("--skip="):
            BASE_ALIASES.update(x for x in a[7:].split(",") if x)
    isa = json.load(open(probe))
    base_sinc = open(f"{outdir}/xtensaInstructions.sinc").read()
    base = set(re.findall(r"^:([a-z0-9_.]+)", base_sinc, re.M))
    g = Gen(isa, base)
    modules_c = open(modules).read()
    note = notice(modules_c)
    roots, slots = g.run(format_masks(modules_c, isa))
    tokdefs = []
    for t, bits in (("hx0", 64), ("hx1", 24), ("hy0", 48), ("hz0", 24), ("hw0", 16)):
        fs = sorted((k, v) for k, v in g.fields.items() if v[0] == t)
        tokdefs.append(f"define token {t}({bits})\n  {t}v = (0,{bits - 1})\n" + "".join(f"  {k} = ({lo},{hi})\n" for k, (_, lo, hi) in fs) + ";")
    with open(f"{outdir}/{prefix}_defs.sinc", "w") as out:
        out.write(f"# {desc}\n# Generated by tools/gen_xtensa_hifi.py from the core's xtensa-modules.c; do not edit.\n#\n{note}\n")
        out.write("define register offset=0x5000 size=8 [ " + " ".join(f"aed{i}" for i in range(16)) + " ];\n")
        out.write("define register offset=0x5100 size=8 [ u0 u1 u2 u3 ];\n")
        out.write("define register offset=0x5140 size=1 [ aep0 aep1 aep2 aep3 ];\n\n")
        out.write("\n\n".join(tokdefs) + "\n\n")
        out.write("".join(f"define pcodeop {n};\n" for n in sorted(g.ops)))
    with open(f"{outdir}/{prefix}.sinc", "w") as out:
        out.write(f"# {desc}\n# Generated by tools/gen_xtensa_hifi.py from the core's xtensa-modules.c; do not edit.\n#\n{note}\n")
        out.write("\n".join(g.subtables) + "\n\n")
        out.write("\n".join(slots) + "\n\n")
        out.write("\n".join(roots) + "\n")
    print(f"{len(slots)} constructors, {len(roots)} FLIX formats, {len(g.subtables)} operand rows; skipped: {g.skipped}")


if __name__ == "__main__":
    main()
