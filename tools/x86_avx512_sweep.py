#!/usr/bin/env python3
"""Compare the x86-64 SLEIGH disassembly of AVX-512 instructions with llvm-objdump.

Usage:
  llvm-tblgen --dump-json -I <llvm>/include -I <llvm>/lib/Target/X86 <llvm>/lib/Target/X86/X86.td -o x86.json
  tools/x86_avx512_sweep.py x86.json --unlace <unlace> --specs specs [--base-specs OLD/specs] [--forms mem,reg]
      [--predicates HasAVX512,HasBWI,...] [--work DIR] [--list N]

Every non-pseudo EVEX record carrying one of the predicates (default: the AVX-512 families,
FP16, BF16, GFNI/VAES/VPCLMULQDQ; never AVX10.2 or APX, which have their own probes) becomes one
Intel-syntax line with fixed operands (zmm1/zmm18/zmm3/zmm4, k1, [rax + 8*r9 + 2N] for a memory
operand of compressed displacement N, imm 3). llvm-mc assembles them (lines it rejects are
dropped), each padded to 16 bytes so a wrong length cannot shift the rest; llvm-objdump and
unlace (with UNLACE_SPECS/SLEIGHHOME at --specs) disassemble the image, and every instruction whose
bytes or text (case, spacing and LLVM's decimal displacements normalised) differ is a finding.
With --base-specs the same image is also disassembled with another spec tree, and the findings
are split into fixed, regressed and unchanged. Exit status 1 when a finding regressed.
"""
import argparse, collections, json, os, re, subprocess, sys, tempfile

VR = {"VR128X": "xmm", "VR256X": "ymm", "VR512": "zmm", "FR16X": "xmm", "FR32X": "xmm", "FR64X": "xmm",
      "VR128": "xmm", "VR256": "ymm"}
PTR = {8: "byte", 16: "word", 32: "dword", 64: "qword", 128: "xmmword", 256: "ymmword", 512: "zmmword"}
MEM = {"f16mem": 16, "i16mem": 16, "shmem": 16, "f32mem": 32, "ssmem": 32, "i32mem": 32, "f64mem": 64,
       "sdmem": 64, "i64mem": 64, "f128mem": 128, "i128mem": 128, "f256mem": 256, "i256mem": 256,
       "f512mem": 512, "i512mem": 512, "i8mem": 8}
PREDICATES = ("HasAVX512,HasBWI,HasDQI,HasVLX,HasFP16,HasVBMI,HasVBMI2,HasIFMA,HasVNNI,HasBITALG,"
              "HasVPOPCNTDQ,HasBF16,HasCDI,HasGFNI,HasVAES,HasVPCLMULQDQ")
MATTR = ("+avx512f,+avx512bw,+avx512dq,+avx512vl,+avx512fp16,+avx512vbmi,+avx512vbmi2,+avx512ifma,"
         "+avx512vnni,+avx512bitalg,+avx512vpopcntdq,+avx512bf16,+avx512cd,+gfni,+vaes,+vpclmulqdq")
SKIP = ("HasEGPR", "HasNDD", "HasNF", "HasCCMP", "HasCF", "HasZU")


def bits(lst):
    return sum(b << i for i, b in enumerate(lst))


def lines(path, want, forms, enc="EncEVEX"):
    J = json.load(open(path))
    for n in sorted(J["!instanceof"]["X86Inst"]):
        r = J[n]
        if r.get("isPseudo") or r.get("isCodeGenOnly") or r.get("isAsmParserOnly"):
            continue
        if r["OpEnc"]["def"] != enc:
            continue
        ps = [p["def"] for p in r.get("Predicates", [])]
        if not set(ps) & want or any(p.startswith("HasAVX10_2") or p in SKIP for p in ps):
            continue
        mem = "Mem" in r["Form"]["def"]
        if ("mem" if mem else "reg") not in forms:
            continue
        asm = r["AsmString"]
        if "|" not in asm:
            continue
        intel = asm.split("|", 1)[1].rsplit("}", 1)[0]
        names = dict((a[1], a[0]["def"]) for a in r["OutOperandList"]["args"] + r["InOperandList"]["args"])
        cd8 = bits(r["CD8_Scale"]) or 1
        hi = 18 if enc == "EncEVEX" else 10
        regno = {"dst": 1, "src1": hi, "src2": 3, "src3": 4, "src": hi}
        ok = [True]

        def sub(m):
            nm = m.group(1)
            c = names.get(nm)
            if c is None:
                return m.group(0)
            if c in VR:
                return "%s%d" % (VR[c], regno.get(nm, 5))
            if c.endswith("WM"):
                return "k1"
            if c.startswith("VK"):
                return "k%d" % (2 if nm == "dst" else 3)
            if c in MEM:
                return "%s ptr [rax + 8*r9 + %d]" % (PTR[MEM[c]], 2 * cd8)
            if c[:2] in ("vx", "vy", "vz"):
                ix = {"vx": "xmm", "vy": "ymm", "vz": "zmm"}[c[:2]]
                return "%s ptr [rax + 4*%s20 + %d]" % ("dword" if "32" in c else "qword", ix, 2 * cd8)
            if "imm" in c:
                return "3"
            if c in ("GR32", "GR32orGR64"):
                return "ecx"
            if c == "GR64":
                return "rcx"
            if c == "AVX512RC":
                return "{rz-sae}"
            ok[0] = False
            return m.group(0)

        s = re.sub(r"\$\{?(\w+)\}?", sub, intel)
        if ok[0]:
            yield n, asm.split()[0] + " " + s.strip()


def run(cmd, **kw):
    return subprocess.run(cmd, capture_output=True, text=True, **kw)


def assemble(recs, work, mattr):
    keep = list(recs)
    for _ in range(6):
        src = os.path.join(work, "sweep.S")
        with open(src, "w") as f:
            f.write(".intel_syntax noprefix\n.text\n.globl s\ns:\n")
            for _, line in keep:
                f.write(line + "\n.p2align 4, 0xcc\n")
            f.write("ret\n")
        r = run(["llvm-mc", "-triple=x86_64", "-mattr=" + mattr, "-filetype=obj", "-o", os.path.join(work, "sweep.o"), src])
        bad = {int(m.group(1)) for m in re.finditer(r"sweep\.S:(\d+):", r.stderr)}
        if not bad:
            break
        keep = [x for i, x in enumerate(keep) if 5 + 2 * i not in bad]
    elf = os.path.join(work, "sweep.elf")
    run(["ld.lld", "-e", "0", "--image-base=0", "--section-start=.text=0x1000", "-o", elf, os.path.join(work, "sweep.o")]).check_returncode()
    return keep, elf


def llvm_rows(elf, mattr):
    out = {}
    for l in run(["llvm-objdump", "-d", "-M", "intel", "--mattr=" + mattr, elf]).stdout.splitlines():
        m = re.match(r"\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )+)\s*(.*)$", l)
        if m and "int3" not in m.group(3):
            out[int(m.group(1), 16)] = (m.group(2).replace(" ", ""), re.sub(r"\s+", " ", m.group(3)).strip())
    return out


def unlace_rows(unlace, elf, specs, end):
    env = dict(os.environ, UNLACE_SPECS=specs, SLEIGHHOME=specs)
    out = {}
    for l in run([unlace, "disassemble", elf, "0x1000-0x%x" % end], env=env).stdout.splitlines():
        m = re.match(r"^0x([0-9a-f]+)\s+(\S+)\s+(.*)$", l)
        if m:
            out[int(m.group(1), 16)] = (m.group(2), m.group(3))
    return out


def norm(s):
    s = s.lower().replace(" ", "")
    s = re.sub(r"#.*", "", s)
    return s.replace("*0x1]", "]").replace("+-", "-")


def norm_llvm(s):
    s = s.lower()
    s = re.sub(r"(\d+)\*(\w+)", lambda m: "%s*0x%x" % (m.group(2), int(m.group(1))), s)
    s = re.sub(r"([+-]) (\d+)\]", lambda m: "%s 0x%x]" % (m.group(1), int(m.group(2))), s)
    return norm(s)


def findings(L, U, names):
    bad = {}
    for i, a in enumerate(sorted(L)):
        u = U.get(a)
        if u is None or u[0] != L[a][0] or norm(u[1]) != norm_llvm(L[a][1]):
            bad[a] = (names[i] if i < len(names) else "?", L[a][1], u[1] if u else "<no row>")
    return bad


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("json")
    ap.add_argument("--unlace", required=True)
    ap.add_argument("--specs", required=True)
    ap.add_argument("--base-specs")
    ap.add_argument("--predicates", default=PREDICATES)
    ap.add_argument("--forms", default="mem")
    ap.add_argument("--mattr", default=MATTR)
    ap.add_argument("--enc", default="EncEVEX", choices=("EncEVEX", "EncVEX", "EncNormal", "EncXOP"),
                    help="the encoding of the records to sweep (EncVEX/EncNormal/EncXOP with --predicates for the VEX, legacy and AMD XOP forms)")
    ap.add_argument("--work")
    ap.add_argument("--list", type=int, default=40)
    a = ap.parse_args()
    work = a.work or tempfile.mkdtemp(prefix="avx512sweep")
    os.makedirs(work, exist_ok=True)
    recs = list(lines(a.json, set(a.predicates.split(",")), set(a.forms.split(",")), a.enc))
    keep, elf = assemble(recs, work, a.mattr)
    L = llvm_rows(elf, a.mattr)
    end = max(L) + 16
    names = [n for n, _ in keep]
    new = findings(L, unlace_rows(a.unlace, elf, os.path.abspath(a.specs), end), names)
    print("%d records, %d assembled, %d instructions, %d differ from llvm-objdump" % (len(recs), len(keep), len(L), len(new)))
    regressed = []
    if a.base_specs:
        old = findings(L, unlace_rows(a.unlace, elf, os.path.abspath(a.base_specs), end), names)
        fixed = [k for k in old if k not in new]
        regressed = [k for k in new if k not in old]
        print("against --base-specs: %d fixed, %d regressed, %d unchanged" % (len(fixed), len(regressed), len(new) - len(regressed)))
        for k in regressed[:a.list]:
            print("REGRESSED", hex(k), " | ".join(new[k]))
    by = collections.Counter(v[1].split()[0] for v in new.values())
    print("by mnemonic:", ", ".join("%s %d" % kv for kv in by.most_common(40)))
    for k in sorted(new)[:a.list]:
        print(hex(k), " | ".join(new[k]))
    return 1 if regressed else 0


if __name__ == "__main__":
    sys.exit(main())
