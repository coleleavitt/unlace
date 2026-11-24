"""Per-architecture wiring: the SLEIGH language, the Unicorn mode, the registers compared, and the
instruction generator.

Each Arch names the registers it compares as (sleigh name, unicorn constant) pairs, plus a flag word
split into the single-bit flag registers SLEIGH keeps, and a filter for the mnemonics whose result a
reference cannot be compared on (privileged, trapping, timing, randomness).
"""
import os
import random
import re
import subprocess
import tempfile

import capstone as cs
import unicorn as uc
from unicorn import arm64_const as a64
from unicorn import riscv_const as rv
from unicorn import s390x_const as sz
from unicorn import x86_const as x86


class Arch:
    name = ""
    lang = ""
    elf_machine = 0
    elf64 = True
    big = False
    base = 0x400000
    pc = ""
    gprs: list = []
    vecs: list = []
    flags_reg = None
    flag_bits: dict = {}
    deny = re.compile(r"$^")
    max_len = 4
    lift_args: list = []
    until = (1 << 64) - 1

    def unicorn(self):
        raise NotImplementedError

    def capstone(self):
        raise NotImplementedError

    def gen(self, rng: random.Random) -> bytes:
        return rng.getrandbits(32).to_bytes(4, "big" if self.big else "little")

    def setup(self, emu):
        pass

    def normalize(self, name, ours, ref):
        return ours, ref

    def flag_words(self):
        """[(unicorn register, {sleigh flag: (shift, width)}, fix)]: each flag register of the
        reference and the SLEIGH registers that hold its fields; fix() adjusts the word read
        back before the random fields are written into it."""
        if self.flags_reg is None:
            return []
        return [(self.flags_reg, {n: (b, 1) for n, b in self.flag_bits.items()}, self.fix_flags)]

    def fix_flags(self, word):
        return word

    def read_flags(self, emu, reg):
        return emu.reg_read(reg)

    def write_flags(self, emu, reg, word):
        emu.reg_write(reg, word)

    def sleigh_field(self, name, shift, width):
        """(sleigh register, bit offset in it) holding a flag field; most SLEIGH specs keep each
        flag in its own register."""
        return name, 0

    def fix_inputs(self, init, rng):
        pass

    def start_addr(self, addr):
        return addr

    def operand_mismatch(self, cap_ops: str, sleigh_ops: str):
        """A disagreement between the immediates Capstone and SLEIGH print, or None."""
        return None

    def ignored(self, mnemonic: str, operands: str, state) -> set:
        """Registers whose value the architecture leaves undefined after this instruction."""
        return set()

    def canonical(self, cand) -> bool:
        """False for an encoding the reference decoder accepts but the architecture reserves."""
        return True

    def ignored(self, mnemonic, operands, state):
        # QEMU 8.2 tests the 64-bit sign of a narrow ,TSV/,O overflow, so it misses the 32-bit
        # overflow the architecture traps on; SLEIGH stops at the trap
        if state.skipped_callother and ("tsv" in mnemonic or re.match(r"(add|sub|sh\dadd)\w*o\b", mnemonic)):
            return {"*"}
        return set()

    def skip(self, cand) -> bool:
        """An encoding whose architected result the reference is known not to follow."""
        return False

    def classify_decode(self, raw: bytes, kind: str) -> str:
        """Names a decode failure that is a known, deliberate SLEIGH limitation."""
        return kind

    def addr_ok(self, a):
        """Unicorn runs without an MMU and truncates physical addresses, so a reference result for an
        access above the low 47 bits is not the architecture's."""
        return a < (1 << 47)

    def rand_reg(self, rng, bits):
        k = rng.random()
        if k < 0.35:
            return rng.randrange(0x600000, 0x700000) & ~7
        if k < 0.5:
            return rng.choice([0, 1, 2, 0x7F, 0x80, 0xFF, (1 << bits) - 1, 1 << (bits - 1), (1 << (bits - 1)) - 1])
        if k < 0.7:
            return rng.getrandbits(8)
        return rng.getrandbits(bits)


X86_UNDEF = {
    "mul": {"SF", "ZF", "AF", "PF"}, "imul": {"SF", "ZF", "AF", "PF"},
    "div": {"CF", "OF", "SF", "ZF", "AF", "PF"}, "idiv": {"CF", "OF", "SF", "ZF", "AF", "PF"},
    "and": {"AF"}, "or": {"AF"}, "xor": {"AF"}, "test": {"AF"},
    "bt": {"OF", "SF", "AF", "PF"}, "bts": {"OF", "SF", "AF", "PF"}, "btr": {"OF", "SF", "AF", "PF"},
    "btc": {"OF", "SF", "AF", "PF"},
    "bsf": {"CF", "OF", "SF", "AF", "PF"}, "bsr": {"CF", "OF", "SF", "AF", "PF"},
    "aaa": {"OF", "SF", "ZF", "PF"}, "aas": {"OF", "SF", "ZF", "PF"}, "daa": {"OF"}, "das": {"OF"},
    "lzcnt": {"OF", "SF", "PF", "AF"}, "tzcnt": {"OF", "SF", "PF", "AF"}, "popcnt": set(),
    "andn": {"AF", "PF"}, "bextr": {"AF", "SF", "PF"}, "blsi": {"AF", "PF"}, "blsmsk": {"AF", "PF"},
    "blsr": {"AF", "PF"}, "bzhi": {"AF", "PF"},
}
X86_SHIFTS = {"shl", "sal", "shr", "sar", "rol", "ror", "rcl", "rcr", "shld", "shrd"}
X86_DENY = re.compile(
    r"^(int\d?|into|int1|hlt|in|ins[bwd]?|out|outs[bwd]?|cli|sti|syscall|sysenter|sysexit|sysret|iret[dq]?|"
    r"cpuid|rdtsc|rdtscp|rdrand|rdseed|rdpid|rdpmc|rdmsr|wrmsr|lgdt|lidt|sgdt|sidt|lldt|sldt|ltr|str|"
    r"lmsw|smsw|clts|invd|wbinvd|invlpg|ud\d?|ud2|lock.*|xgetbv|xsetbv|xsave.*|xrstor.*|fxsave.*|fxrstor.*|"
    r"mov\s*cr|swapgs|wait|fwait|pause|lfence|sfence|mfence|clflush.*|prefetch.*|monitor|mwait|enter|leave|"
    r"retf|ljmp|lcall|call|push.*|pop.*|vzeroall|vzeroupper|emms|femms|f.*|.*bound.*|arpl|lar|lsl|verr|verw|"
    r"lds|les|lfs|lgs|lss|xlatb|cmpxchg16b|cmpxchg8b|.*rep.*|ins|outs|stos.*|lods.*|movs[bwdq]|cmps.*|scas.*|"
    r"vmcall|vmlaunch|vmresume|vmxoff|vmxon|vmread|vmwrite|vmptrld|vmptrst|vmclear|getsec|"
    r"encls|enclu|enclv|tpause|umwait|umonitor|clac|stac|incssp.*|rdssp.*|endbr.*|saveprevssp|"
    r"ldmxcsr|stmxcsr|vldmxcsr|vstmxcsr|.*mxcsr.*|ptwrite|wrfsbase|wrgsbase|rdfsbase|rdgsbase|xabort|xbegin|xend|xtest|"
    r"sahf|lahf|ret|jmp|loop.*|jrcxz|jecxz|j.*)$"
)


class X86_64(Arch):
    name = "x86-64"
    lang = "x86:LE:64:default"
    elf_machine = 62
    pc = "RIP"
    max_len = 15
    gprs = [(n, getattr(x86, "UC_X86_REG_" + n)) for n in
            "RAX RCX RDX RBX RSP RBP RSI RDI R8 R9 R10 R11 R12 R13 R14 R15".split()]
    vecs = [(f"XMM{i}", getattr(x86, f"UC_X86_REG_XMM{i}")) for i in range(16)]
    flags_reg = x86.UC_X86_REG_EFLAGS
    flag_bits = {"CF": 0, "PF": 2, "AF": 4, "ZF": 6, "SF": 7, "DF": 10, "OF": 11}
    pc_const = x86.UC_X86_REG_RIP
    deny = X86_DENY

    def unicorn(self):
        return uc.Uc(uc.UC_ARCH_X86, uc.UC_MODE_64)

    def fix_flags(self, word):
        return (word & ~0xFFF) | 2

    def fix_inputs(self, init, rng):
        init["RSP"] = rng.randrange(0x680000, 0x6F0000) & ~0xF

    def addr_ok(self, a):
        return a < (1 << 47)

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_X86, cs.CS_MODE_64)

    def gen(self, rng):
        if rng.random() < 0.5:
            pre = bytes(rng.choice([[], [], [0x66], [0x48], [0x49], [0x4C], [0x4D], [0xF2], [0xF3], [0x66, 0x48], [0x41], [0x44]]))
            op = bytes([rng.choice([0x0F, 0x0F, 0x0F]), rng.getrandbits(8)]) if rng.random() < 0.4 else bytes([rng.getrandbits(8)])
            return pre + op + rng.getrandbits(64).to_bytes(8, "little") + rng.getrandbits(32).to_bytes(4, "little")
        return rng.getrandbits(120).to_bytes(15, "little")

    def skip(self, cand):
        mn, ops = cand["mnemonic"], cand["op_str"]
        # 66-prefixed near branches: Intel ignores the prefix in 64-bit mode, Unicorn truncates RIP
        # to 16 bits as AMD does; SLEIGH follows Intel.
        if mn.startswith(("j", "bnd j", "call", "ret", "bnd")) and 0x66 in cand["bytes"][:4]:
            return True
        # Unicorn sign-extends RET's imm16 (hardware zero-extends it, checked natively), and
        # addresses a RIP-relative SHLD/SHRD with an imm8 one byte short.
        if mn in ("ret", "bnd ret", "retf") and ops:
            return True
        if mn in ("shld", "shrd") and "rip" in ops:
            return True
        return mn.startswith("bnd")

    def classify_decode(self, raw, kind):
        if kind != "decode":
            return kind
        legacy = (0x66, 0x67, 0xF2, 0xF3, 0xF0, 0x2E, 0x36, 0x3E, 0x26, 0x64, 0x65)
        i = 0
        while i < len(raw) and (raw[i] in legacy or 0x40 <= raw[i] <= 0x4F):
            i += 1
        if any(0x40 <= raw[k] <= 0x4F for k in range(i - 1)):
            return "decode-rex-not-last"
        return kind

    def ignored(self, mnemonic, operands, state):
        if mnemonic == "mov" and re.search(r"\b(dr|cr)\d", operands):
            return {"*"}
        if mnemonic == "bswap" and (not re.match(r"^[re]", operands) or re.match(r"^r\d+w$", operands)):
            return {"*"}
        if mnemonic in ("shld", "shrd") and operands.endswith("cl") and ("word" in operands or re.match(r"^[a-ds][xip]\b|^r\d+w", operands)):
            return {"*"}
        m = re.search(r",\s*(0x[0-9a-f]+|\d+)$", operands)
        if mnemonic in ("shld", "shrd") and m and ("word ptr" in operands or re.match(r"^[a-ds][xip]\b|^r\d+w", operands)) \
                and int(m.group(1), 0) & 31 > 16:
            # a 16-bit SHLD/SHRD by more than 16 leaves the destination undefined (SDM)
            return {"*"}
        if mnemonic in ("extrq", "insertq"):
            # Unicorn's INSERTQ inserts the wrong field and its EXTRQ keeps bits 127:64, which the
            # APM leaves undefined; SLEIGH was checked against the APM by hand.
            return {"*"}
        if mnemonic == "cmpxchg" and not operands.startswith(("byte", "word", "dword", "qword")):
            # Unicorn zero-extends a 32-bit register destination when the compare fails; hardware
            # leaves it unchanged (checked natively), as SLEIGH does.
            return {"*"}
        ign = {"AF"} | X86_UNDEF.get(mnemonic, set())
        if mnemonic in X86_SHIFTS:
            ign |= {"OF", "AF"}
            if mnemonic in ("shld", "shrd"):
                ign |= {"CF", "SF", "ZF", "PF"} if "," in operands else set()
        return ign


class X86_64Native(X86_64):
    """x86-64 against this CPU (qemu_backend.X86NativeHarness, --oracle native): YMM0..YMM15 compared
    at full width, and encodings drawn mostly from the SSE, VEX (AVX/AVX2/FMA/BMI/AES/SHA/GFNI/VNNI)
    and x87 opcode spaces that Unicorn's QEMU core leaves out."""
    name = "x86-64-native"
    vecs = [(f"YMM{i}", None) for i in range(16)]

    def ignored(self, mnemonic, operands, state):
        # a segment register's value is the process's selector natively and 0 in the p-code state
        if re.search(r"\b[cdefgs]s\b(?!:)", operands):
            return {"*"}
        return super().ignored(mnemonic, operands, state)

    def gen(self, rng):
        tail = rng.getrandbits(64).to_bytes(8, "little") + rng.getrandbits(32).to_bytes(4, "little")
        modrm = bytes([rng.choice([rng.getrandbits(8) | 0xC0, rng.getrandbits(8)])])
        k = rng.random()
        if k < 0.3:
            pre = bytes(rng.choice([[], [0x66], [0xF2], [0xF3]])) + bytes(rng.choice([[], [], [0x40 | rng.getrandbits(4)]]))
            esc = rng.choice([[0x0F], [0x0F], [0x0F, 0x38], [0x0F, 0x3A]])
            return pre + bytes(esc) + bytes([rng.getrandbits(8)]) + modrm + tail
        if k < 0.8:
            if rng.random() < 0.4:
                vex = bytes([0xC5, rng.getrandbits(8)])
            else:
                b1 = (rng.getrandbits(3) << 5) | rng.choice([1, 2, 3])
                vex = bytes([0xC4, b1, rng.getrandbits(8)])
            return vex + bytes([rng.getrandbits(8)]) + modrm + tail
        if k < 0.9:
            return bytes([0xD8 + rng.getrandbits(3)]) + modrm + tail
        return super().gen(rng)



def x87_value(rng):
    """An 80-bit extended value: mostly normal numbers near 1 and small integers, some zeros,
    infinities, large and tiny exponents and denormals; never a NaN or unnormal."""
    k = rng.random()
    s = rng.getrandbits(1) << 79
    if k < 0.05:
        return s
    if k < 0.08:
        return s | (0x7FFF << 64) | (1 << 63)
    if k < 0.1:
        return s | rng.getrandbits(63)                                  # denormal
    if k < 0.3:
        n = rng.randrange(1, 1 << rng.choice([4, 16, 32, 63]))
        e = n.bit_length() - 1
        return s | ((16383 + e) << 64) | (n << (63 - e))                # an integer
    if k < 0.9:
        e = 16383 + rng.randrange(-70, 70)
    else:
        e = rng.randrange(1, 0x7FFF)
    m = (1 << 63) | rng.getrandbits(63)
    if rng.random() < 0.3:
        m &= ~((1 << rng.randrange(20, 63)) - 1)                         # few significant bits
    return s | (e << 64) | m


# the x86 deny list with x87 allowed, except the environment/state loads and stores and FLDCW (the
# oracle runs at the default control word: 64-bit precision, round to nearest, exceptions masked)
X87_DENY = re.compile(
    X86_DENY.pattern.replace("|f.*|", "|fx.*|f?wait|fn?stenv|fldenv|fn?save|frstor|fldcw|")
)


# x87 ops whose C1 is the round-up indicator (not expressible in p-code), and the compares whose
# C1 the SDM clears but this CPU leaves unchanged
X87_C1_FREE = re.compile(
    r"^(f(i?(add|sub|subr|mul|div|divr))p?|fsqrt|fscale|frndint|fistp?|f(u)?comp?i|fcmov.*)$"
)


class X86_64X87(X86_64Native):
    """x86-64-native restricted to the x87 escape opcodes D8..DF (with prefixes now and then)."""
    name = "x86-64-x87"
    deny = X87_DENY

    def extra_init(self, rng):
        """ST0..ST6 hold x87 values (ST7 is empty, so one push does not overflow) and C0..C3 random."""
        init = {f"C{i}": rng.getrandbits(1) for i in range(4)}
        for i in range(7):
            init[f"ST{i}"] = x87_value(rng)
        init["ST7"] = 0
        # the harness's FXRSTOR image: control word 0x37F, TOP = 0, the condition bits
        init["FPUControlWord"] = 0x37F
        init["FPUStatusWord"] = init["C0"] << 8 | init["C1"] << 9 | init["C2"] << 10 | init["C3"] << 14
        return init

    def canonical(self, cand):
        # Capstone's FSTPNCE (D9 D8+i) is an undocumented FSTP alias that LLVM and SLEIGH leave undecoded
        return cand["mnemonic"] != "fstpnce"

    def ignored(self, mnemonic, operands, state):
        out = super().ignored(mnemonic, operands, state)
        if X87_C1_FREE.match(mnemonic) or (mnemonic in ("fst", "fstp") and re.search(r"\b[dq]word ptr", operands)):
            out = out | {"C1"}
        # the partial remainder comes from a rounded divide and multiply: exact for small quotients only
        # and the constants are the double values widened (a decompiler constant is at most 8 bytes)
        if mnemonic in ("fprem", "fprem1", "fldpi", "fldl2e", "fldl2t", "fldlg2", "fldln2"):
            out = out | {"ST0"}
        return out

    def gen(self, rng):
        tail = rng.getrandbits(64).to_bytes(8, "little") + rng.getrandbits(32).to_bytes(4, "little")
        modrm = bytes([rng.choice([rng.getrandbits(8) | 0xC0, rng.getrandbits(8)])])
        pre = bytes(rng.choice([[], [], [], [0x66], [0x48], [0x9B]]))
        return pre + bytes([0xD8 + rng.getrandbits(3)]) + modrm + tail


A64_DENY = re.compile(
    r"^(svc|hvc|smc|brk|hlt|dcps\d|eret.*|drps|msr|mrs|sys|sysl|tlbi|dc|ic|at|isb|dsb|dmb|sb|ssbb|pssbb|"
    r"wf[ei].*|yield|sev.*|hint|clrex|ld.*xr.*|st.*xr.*|ldar.*|stlr.*|ldapr.*|stlur.*|ldaxp|stlxp|"
    r"cas.*|swp.*|ldadd.*|ldclr.*|ldeor.*|ldset.*|ldsmax.*|ldsmin.*|ldumax.*|ldumin.*|st(add|clr|eor|set|smax|smin|umax|umin).*|"
    r"bti|pac.*|aut.*|xpac.*|retaa|retab|braa.*|brab.*|blraa.*|blrab.*|eretaa|eretab|ldraa|ldrab|"
    r"irg|gmi|subp.*|addg|subg|stg|stzg|st2g|stz2g|ldg|stgp|ldgm|stgm|stzgm|"
    r"prfm|prfum|prfb|prfh|prfw|prfd|udf|.*sme.*|smstart|smstop|.*za.*|rdvl|addvl|addpl)$"
)


class AArch64(Arch):
    name = "aarch64"
    lang = "AARCH64:LE:64:v8A"
    elf_machine = 183
    pc = "pc"
    gprs = [(f"x{i}", getattr(a64, f"UC_ARM64_REG_X{i}")) for i in range(31)] + [("sp", a64.UC_ARM64_REG_SP)]
    vecs = [(f"q{i}", getattr(a64, f"UC_ARM64_REG_Q{i}")) for i in range(32)]
    flags_reg = a64.UC_ARM64_REG_NZCV
    flag_bits = {"NG": 31, "ZR": 30, "CY": 29, "OV": 28}
    pc_const = a64.UC_ARM64_REG_PC
    deny = A64_DENY

    def unicorn(self):
        return uc.Uc(uc.UC_ARCH_ARM64, uc.UC_MODE_ARM)

    def operand_mismatch(self, cap_ops, sleigh_ops):
        imm = re.compile(r"#(-?(?:0x[0-9a-fA-F]+|\d+))(?![.\d])")
        num = re.compile(r"(?<![\w.])(-?(?:0x[0-9a-fA-F]+|\d+))(?![\w.])")
        forms = lambda v: {v & ((1 << 64) - 1), v & 0xFFFFFFFF, v & 0xFFFF}
        ours = set()
        for x in num.findall(sleigh_ops):
            ours |= forms(int(x, 0))
        missing = [x for x in imm.findall(cap_ops) if not forms(int(x, 0)) & ours]
        if missing:
            return f"capstone immediates {missing} not in SLEIGH's operands"
        return None

    def ignored(self, mnemonic, operands, state):
        # p-code has no fused multiply-add: SLEIGH rounds the product and the sum separately.
        if mnemonic in ("fmadd", "fmsub", "fnmadd", "fnmsub", "fmla", "fmls"):
            return {"*"}
        # A writeback load or store whose transfer register is its base is CONSTRAINED UNPREDICTABLE.
        m = re.match(r"^[wx](\d+|zr), (?:[wx](\d+), )?\[x(\d+|sp)", operands)
        if m and ("]!" in operands or re.search(r"\], #", operands)) and m.group(3) in (m.group(1), m.group(2)):
            return {"*"}
        return set()

    def skip(self, cand):
        # Unicorn's AArch64 CPU has no SVE: every z/p-register instruction traps.
        return bool(re.search(r"\b[zp]\d+\b|\bzt0\b|\bpn\d+\b", cand["op_str"]))

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_ARM64 if hasattr(cs, "CS_ARCH_ARM64") else cs.CS_ARCH_AARCH64, cs.CS_MODE_ARM)

    def setup(self, emu):
        emu.reg_write(a64.UC_ARM64_REG_CPACR_EL1, 3 << 20)


RV_DENY = re.compile(
    r"^(ecall|ebreak|c\.ebreak|mret|sret|uret|wfi|sfence.*|hfence.*|fence.*|csr.*|frcsr|fscsr|frrm|fsrm|frflags|fsflags|"
    r"fsrmi|fsflagsi|lr\..*|sc\..*|amo.*|rdcycle.*|rdtime.*|rdinstret.*|unimp|c\.unimp|.*\.v.*|v.*|"
    r"vset.*|cbo\..*|prefetch.*|pause|wrs.*)$"
)


class RiscV64(Arch):
    name = "riscv64"
    lang = "RISCV:LE:64:default"
    elf_machine = 243
    pc = "pc"
    gprs = [(n, getattr(rv, f"UC_RISCV_REG_X{i}")) for i, n in enumerate(
        "zero ra sp gp tp t0 t1 t2 s0 s1 a0 a1 a2 a3 a4 a5 a6 a7 s2 s3 s4 s5 s6 s7 s8 s9 s10 s11 t3 t4 t5 t6".split())][1:]
    vecs = [(n, getattr(rv, f"UC_RISCV_REG_F{i}")) for i, n in enumerate(
        "ft0 ft1 ft2 ft3 ft4 ft5 ft6 ft7 fs0 fs1 fa0 fa1 fa2 fa3 fa4 fa5 fa6 fa7 fs2 fs3 fs4 fs5 fs6 fs7 fs8 fs9 fs10 fs11 ft8 ft9 ft10 ft11".split())]
    deny = RV_DENY
    pc_const = rv.UC_RISCV_REG_PC

    def unicorn(self):
        return uc.Uc(uc.UC_ARCH_RISCV, uc.UC_MODE_RISCV64)

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_RISCV, cs.CS_MODE_RISCV64 | cs.CS_MODE_RISCVC)

    def gen(self, rng):
        if rng.random() < 0.25:
            w = rng.getrandbits(16)
            if w & 3 == 3:
                w &= ~1
            return w.to_bytes(2, "little")
        return (rng.getrandbits(32) | 3).to_bytes(4, "little")

    def ignored(self, mnemonic, operands, state):
        # p-code has no fused multiply-add and no static rounding modes.
        if mnemonic.startswith(("fmadd", "fmsub", "fnmadd", "fnmsub")):
            return {"*"}
        if re.search(r",\s*(rtz|rdn|rup|rmm)$", operands):
            return {"*"}
        return set()

    def normalize(self, name, ours, ref):
        """Unicorn's QEMU predates NaN-boxing for most single-precision writes (it boxes loads and
        fmv.w.x only, and fsgnj.s keeps the upper word of rs1); the ISA boxes every one, so a boxed
        result of ours is compared on its low 32 bits."""
        if name.startswith("f") and ours >> 32 == 0xFFFFFFFF and (ours ^ ref) & 0xFFFFFFFF == 0:
            return ref, ref
        return ours, ref

    def setup(self, emu):
        emu.reg_write(rv.UC_RISCV_REG_MSTATUS, emu.reg_read(rv.UC_RISCV_REG_MSTATUS) | 0x6000)


from unicorn import arm_const as arm  # noqa: E402
from unicorn import mips_const as mips  # noqa: E402
from unicorn import ppc_const as ppc  # noqa: E402
from unicorn import tricore_const as tc  # noqa: E402


class Arch32(Arch):
    elf64 = False
    until = 0xFFFFFFFF

    def addr_ok(self, a):
        return a < (1 << 32)


ARM_DENY = re.compile(
    r"^(svc|swi|bkpt|udf|smc|hvc|eret|rfe.*|srs.*|cps.*|setend|wfi|wfe|sev.*|yield|nop|dbg|dmb|dsb|isb|pld.*|pli|"
    r"mrc.*|mcr.*|cdp.*|ldc.*|stc.*|mrrc.*|mcrr.*|mrs|msr|vmrs|vmsr|ldrex.*|strex.*|clrex|ldaex.*|stlex.*|lda.*|stl.*|"
    r"b|bl|blx|bx|bxj|b\w\w|bl\w\w|bx\w\w|blx\w\w|cb.*|tb[bh]|it.*|ldm.*|stm.*|pop.*|push.*|v.*|"
    r"subs|movs)$"
)


class Arm32(Arch32):
    name = "arm"
    lang = "ARM:LE:32:v8"
    elf_machine = 40
    pc = "pc"
    gprs = [(f"r{i}", getattr(arm, f"UC_ARM_REG_R{i}")) for i in range(13)] + [
        ("sp", arm.UC_ARM_REG_SP), ("lr", arm.UC_ARM_REG_LR)]
    flags_reg = arm.UC_ARM_REG_CPSR
    flag_bits = {"NG": 31, "ZR": 30, "CY": 29, "OV": 28, "Q": 27}
    pc_const = arm.UC_ARM_REG_PC
    deny = ARM_DENY
    thumb = False

    def unicorn(self):
        emu = uc.Uc(uc.UC_ARCH_ARM, uc.UC_MODE_THUMB if self.thumb else uc.UC_MODE_ARM)
        emu.ctl_set_cpu_model(arm.UC_CPU_ARM_CORTEX_A15)
        return emu

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_ARM, cs.CS_MODE_THUMB if self.thumb else cs.CS_MODE_ARM)

    def fix_flags(self, word):
        return (word & 0xF8000000) | 0x10 | (0x20 if self.thumb else 0)

    def skip(self, cand):
        # Writes to pc are left to flow tests; a supervisor call would run a system call.
        return bool(re.search(r"\bpc\b", cand["op_str"])) or cand["mnemonic"].startswith("svc")

    def canonical(self, cand):
        """Capstone decodes A32 encodings whose should-be-zero fields are set; SLEIGH rejects them.
        Keep an encoding only when Keystone assembles Capstone's text back to the same bytes, and an
        LDRD/STRD only with an even first register below lr. T32: a shifted-register data-processing
        op with bit 15 of its second halfword set, or a saturate/bit-field op with bit 10 of its
        first, is UNPREDICTABLE."""
        b = cand["bytes"]
        if self.thumb:
            if len(b) != 4:
                return True
            hw1 = b[1] << 8 | b[0]
            if (hw1 & 0xFE00) == 0xEA00 and b[3] & 0x80:
                return False
            return not ((hw1 & 0xFA00) == 0xF200 and not b[3] & 0x80 and (hw1 >> 4) & 0x10 and hw1 & 0x400)
        m = re.match(r"^(?:ld|st)rd\w*$", cand["mnemonic"]) and re.match(r"(\w+),", cand["op_str"])
        if m:
            n = {"sb": 9, "sl": 10, "fp": 11, "ip": 12, "sp": 13, "lr": 14}.get(m.group(1))
            n = n if n is not None else int(m.group(1)[1:]) if re.fullmatch(r"r\d+", m.group(1)) else 0
            if n % 2 or n == 14:
                return False
        try:
            import keystone
        except ImportError:
            return True
        ks = Arm32._ks = getattr(Arm32, "_ks", None) or keystone.Ks(keystone.KS_ARCH_ARM, keystone.KS_MODE_ARM)
        try:
            enc, _ = ks.asm(f"{cand['mnemonic']} {cand['op_str']}", 0x400000)
        except keystone.KsError:
            return False
        return enc is not None and bytes(enc) == cand["bytes"]

    def ignored(self, mnemonic, operands, state):
        # A writeback transfer whose register is its base is UNPREDICTABLE.
        m = re.match(r"^(\w+), (?:(\w+), )?\[(\w+)", operands)
        if m and m.group(3) in (m.group(1), m.group(2)) and ("]!" in operands or re.search(r"\], ", operands)):
            return {"*"}
        # Q is sticky: only the saturating instructions set it, and SLEIGH does not track it elsewhere.
        if not re.match(r"^(q|ssat|usat|smla|smul|smlaw|smulw)", mnemonic):
            return {"Q"}
        return set()


class Thumb(Arm32):
    name = "thumb"
    thumb = True
    lift_args = ["--isa", "thumb"]

    def start_addr(self, addr):
        return addr | 1

    def gen(self, rng):
        w = rng.getrandbits(16)
        if (w >> 11) in (0b11101, 0b11110, 0b11111):
            return (w | (rng.getrandbits(16) << 16)).to_bytes(4, "little")
        return w.to_bytes(2, "little")


MIPS_NAMES = ("zero at v0 v1 a0 a1 a2 a3 t0 t1 t2 t3 t4 t5 t6 t7 "
              "s0 s1 s2 s3 s4 s5 s6 s7 t8 t9 k0 k1 gp sp s8 ra").split()
MIPS_DENY = re.compile(
    r"^(l[bhwd].*|s[bhwd].*|b.*|j.*|syscall|break|sdbbp|eret|deret|wait|ssnop|ehb|pause|sync.*|cache|pref.*|ll|sc|lld|scd|"
    r"tlb.*|mf[ch]0|mt[ch]0|di|ei|rdhwr|rdpgpr|wrpgpr|t(eq|ge|geu|lt|ltu|ne)i?|"
    r"c\..*|cfc1|ctc1|mf[ch]1|mt[ch]1|ldc.*|sdc.*|lwc.*|swc.*|.*\.(s|d|ps|w|l)|cop.*|mfhc.*|mthc.*|lwxc1|swxc1|ldxc1|sdxc1|luxc1|suxc1)$"
)


class Mips32(Arch32):
    name = "mips"
    lang = "MIPS:BE:32:default"
    elf_machine = 8
    big = True
    pc = "pc"
    gprs = [(n, getattr(mips, f"UC_MIPS_REG_{i}")) for i, n in enumerate(MIPS_NAMES)][1:] + [
        ("hi", mips.UC_MIPS_REG_HI), ("lo", mips.UC_MIPS_REG_LO)]
    pc_const = mips.UC_MIPS_REG_PC
    deny = MIPS_DENY
    until = 0x7FFFFFFF

    def unicorn(self):
        emu = uc.Uc(uc.UC_ARCH_MIPS, uc.UC_MODE_MIPS32 | uc.UC_MODE_BIG_ENDIAN)
        emu.ctl_set_cpu_model(mips.UC_CPU_MIPS32_24KF)
        return emu

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_MIPS, cs.CS_MODE_MIPS32 | cs.CS_MODE_BIG_ENDIAN)

    def ignored(self, mnemonic, operands, state):
        # HI and LO after a DIV by zero are UNPREDICTABLE.
        if mnemonic in ("div", "divu"):
            return {"hi", "lo"}
        return set()


MIPS64_DENY = re.compile(
    r"^(b.*|j.*|syscall|break|sdbbp|eret.*|deret|wait|ssnop|ehb|pause|sync.*|cache.*|pref.*|ll.*|sc.*|lld|scd|"
    r"[ls][wd][lr]|tlb.*|[dm]f[ch]0|[dm]t[ch]0|di|ei|rdhwr|rdpgpr|wrpgpr|t(eq|ge|geu|lt|ltu|ne)i?|sigrie|"
    r"c\..*|cfc1|ctc1|[dm]f[ch]1|[dm]t[ch]1|ldc.*|sdc.*|lwc.*|swc.*|.*\.(s|d|ps|w|l|b|h|v)|cop.*|mfhc.*|mthc.*|"
    r"[ls][wdu]xc1|bc.*|bal.*|nal|auipc|aluipc|addiupc|lwpc|lwupc|ldpc|crc32.*|ginvi|ginvt|evp|dvp)$"
)


class Mips64(Arch):
    """MIPS64 big-endian (n64 registers). Use --oracle qemu: Unicorn maps kuseg differently, so
    its loads and stores are not comparable."""
    name = "mips64"
    lang = "MIPS:BE:64:default"
    elf_machine = 8
    big = True
    pc = "pc"
    gprs = [(n, getattr(mips, f"UC_MIPS_REG_{i}")) for i, n in enumerate(MIPS_NAMES)][1:] + [
        ("hi", mips.UC_MIPS_REG_HI), ("lo", mips.UC_MIPS_REG_LO)]
    pc_const = mips.UC_MIPS_REG_PC
    deny = MIPS64_DENY
    until = 0x7FFFFFFFFFFFFFFF
    cs_mode = cs.CS_MODE_MIPS64

    def unicorn(self):
        emu = uc.Uc(uc.UC_ARCH_MIPS, uc.UC_MODE_MIPS64 | uc.UC_MODE_BIG_ENDIAN)
        return emu

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_MIPS, self.cs_mode | cs.CS_MODE_BIG_ENDIAN)

    def ignored(self, mnemonic, operands, state):
        # HI/LO after a divide by zero, and any division-by-zero result, are UNPREDICTABLE.
        if mnemonic in ("div", "divu", "ddiv", "ddivu"):
            return {"hi", "lo"}
        return set()


# Release 6 compact branches (no delay slot) are compared; delay-slot branches are not.
MIPSR6_DENY = re.compile(MIPS64_DENY.pattern.replace("^(b.*|j.*|", "^(b(?!\\w*c$).*|j(?!\\w*c$).*|").replace("|bc.*|bal.*|", "|")
                         .replace(".*\\.(s|d|ps|w|l|b|h|v)", ".*\\.(s|ps|l)"))
# MSA: w0..w31 and MSACSR are compared; FPU operations (on $f registers, outside the harness state)
# are skipped.
MSA_VECS = [(f"w{i}", None) for i in range(32)]


class MsaCsr:
    """MSACSR as a flag word: random sticky Flags (bits 6:2), round-to-nearest, no enables, no
    cause, so no FP operation traps and the rounding mode is the one p-code uses."""

    def flag_words(self):
        return [(None, {"MSACSR": (0, 32)}, lambda w: w & 0x7C)]


class Mips64R6(MsaCsr, Mips64):
    """MIPS64 Release 6 (MIPS:BE:64:R6): no HI/LO, new compact branches and multiply/divide."""
    name = "mips64r6"
    lang = "MIPS:BE:64:R6"
    gprs = Mips64.gprs[:31]
    vecs = MSA_VECS
    cs_mode = cs.CS_MODE_MIPS64 | cs.CS_MODE_MIPS32R6
    deny = MIPSR6_DENY

    def skip(self, cand):
        return "$f" in cand["op_str"]

    def ignored(self, mnemonic, operands, state):
        if re.match(r"^d?(div|mod)u?$", mnemonic):
            return {"*"} if re.search(r"\$zero$", operands) else set()
        return set()


class Mips32R6(MsaCsr, Mips32):
    """MIPS32 Release 6 (MIPS:BE:32:R6) on a MIPS64R6 core."""
    name = "mipsr6"
    lang = "MIPS:BE:32:R6"
    gprs = Mips32.gprs[:31]
    vecs = MSA_VECS
    deny = MIPSR6_DENY

    def skip(self, cand):
        return "$f" in cand["op_str"]

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_MIPS, cs.CS_MODE_MIPS32 | cs.CS_MODE_MIPS32R6 | cs.CS_MODE_BIG_ENDIAN)

    def ignored(self, mnemonic, operands, state):
        return Mips64R6.ignored(self, mnemonic, operands, state)

    def addr_ok(self, a):
        # The MIPS64 core sign-extends a 32-bit address, so only the low half of kuseg is the same.
        return a < 0x80000000


PPC_DENY = re.compile(
    r"^(sc|t[wd]i?.*|rfi|rfci|rfmci|mtmsr.*|mfmsr|mtspr|mfspr|mfsr.*|mtsr.*|mftb.*|wrtee.*|isync|sync|lwsync|eieio|"
    r"mbar|msync|dcb.*|icb.*|tlb.*|lwarx|stwcx\.|ldarx|stdcx\.|lbarx|stbcx\.|lharx|sthcx\.|b.*|"
    r"mfdcr|mtdcr|attn|wait|f.*|lf.*|stf.*|mffs.*|mtfs.*|v.*|ev.*|lv.*|stv.*|dss.*|dst.*|xs.*|xv.*|"
    r"lmw|stmw|lswi|lswx|stswi|stswx|mcrxr|mtocrf|mfocrf|mtcrf|mfcr|mcrf)$"
)


class Ppc32(Arch32):
    name = "ppc"
    lang = "PowerPC:BE:32:default"
    elf_machine = 20
    big = True
    pc = "pc"
    gprs = [(f"r{i}", getattr(ppc, f"UC_PPC_REG_{i}")) for i in range(32)] + [
        ("LR", ppc.UC_PPC_REG_LR), ("CTR", ppc.UC_PPC_REG_CTR)]
    pc_const = ppc.UC_PPC_REG_PC
    deny = PPC_DENY
    # the QEMU harness seeds and compares these XER bits (Unicorn's XER accessors cannot)
    qemu_bits = ("xer_so", "xer_ov", "xer_ca")

    def unicorn(self):
        emu = uc.Uc(uc.UC_ARCH_PPC, uc.UC_MODE_PPC32 | uc.UC_MODE_BIG_ENDIAN)
        emu.ctl_set_cpu_model(ppc.UC_CPU_PPC32_7457_V1_2 if hasattr(ppc, "UC_CPU_PPC32_7457_V1_2") else ppc.UC_CPU_PPC32_603)
        return emu

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_PPC, cs.CS_MODE_32 | cs.CS_MODE_BIG_ENDIAN)

    def flag_words(self):
        # Unicorn's XER register reads and writes do not reach QEMU's split SO/OV/CA fields, so XER
        # is neither seeded nor compared; SO starts clear on both sides.
        return [(ppc.UC_PPC_REG_CR, {f"cr{i}": (28 - 4 * i, 4) for i in range(8)}, lambda w: w)]

    def fix_inputs(self, init, rng):
        pass

    def canonical(self, cand):
        # an update-form load/store with RA=0, or a load with update into RA (invalid forms)
        w = int.from_bytes(cand["bytes"], "big" if self.big else "little")
        op, rt, ra = w >> 26, (w >> 21) & 31, (w >> 16) & 31
        xo = (w >> 1) & 0x3FF
        upd_d = op in (33, 35, 41, 43, 37, 39, 45, 47, 49, 51, 53, 55) or (op == 58 and w & 3 == 1) or (op == 62 and w & 3 == 1)
        upd_x = op == 31 and xo in (55, 119, 311, 375, 183, 247, 439, 503, 53, 181, 373, 567, 599, 631, 695, 759, 727)
        if (upd_d or upd_x) and ra == 0:
            return False
        loads = op in (33, 35, 41, 43, 49, 51, 58) or (op == 31 and xo in (55, 119, 311, 375, 53, 373))
        if (upd_d or upd_x) and loads and ra == rt:
            return False
        return True


# QEMU seeds and compares LR, CTR, CR, XER and the FPRs, and runs both branch outcomes, so the
# 64-bit QEMU-only architectures leave out only what touches state the harness does not hold
PPC_DENY_QEMU = re.compile(
    r"^(sc|scv|t[wd]i?.*|rfi.*|rfci|rfmci|hrfid|mtmsr.*|mfmsr|mfsr.*|mtsr.*|mftb.*|wrtee.*|"
    r"mbar|msync|dcb.*|icb.*|tlb.*|slb.*|[lst][bhwdq]arx|st[bhwdq]cx\.|mfdcr|mtdcr|attn|wait.*|"
    r"mffs.*|mtfs.*|mcrfs|v.*|ev.*|lv.*|stv.*|dss.*|dst.*|xs.*|xv.*|xx.*|lx.*|stx.*|"
    r"m[ft]vsr.*|darn|copy|paste.*|cp_abort|msgsnd.*|msgclr.*|lq|stq|ldat|lwat|stdat|stwat|"
    r"mfbhrbe|clrbhrb|rfebb|bctar.*|.*ep[xX]|ld[bc]ix|st[bc]ix|lwzcix|lhzcix|stwcix|sthcix)$"
)


class Ppc64(Ppc32):
    """64-bit PowerPC (QEMU oracle only: qemu-ppc64 -cpu power10, 64-bit mode)."""
    name = "ppc64"
    deny = PPC_DENY_QEMU
    vecs = [(f"f{i}", getattr(ppc, f"UC_PPC_REG_FPR{i}")) for i in range(32)]
    lang = "PowerPC:BE:64:default"
    elf_machine = 21
    elf64 = True
    until = (1 << 64) - 1

    def addr_ok(self, a):
        return a < (1 << 47)

    def unicorn(self):
        return uc.Uc(uc.UC_ARCH_PPC, uc.UC_MODE_PPC64 | uc.UC_MODE_BIG_ENDIAN)

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_PPC, cs.CS_MODE_64 | cs.CS_MODE_BIG_ENDIAN)

    def partial(self, mnemonic, operands):
        """Bits of a destination the architecture defines (the rest are undefined)."""
        if re.match(r"^(divwu?|divwu?o|divweu?|divweu?o|mulhwu?)\.?$", mnemonic):
            # 64-bit mode: RT[0:31] (the high word) is undefined
            return {operands.split(",")[0].strip(): 0xFFFFFFFF}
        return {}

    def ignored(self, mnemonic, operands, state):
        out = set()
        if re.match(r"^(divwu?|divwu?o|divweu?|divweu?o|mulhwu?)\.$", mnemonic):
            out.add("cr0")  # LT/GT/EQ undefined in 64-bit mode; SO is still compared via xer_so
        if mnemonic.startswith("f") and mnemonic.endswith("."):
            out.add("cr1")  # copies FPSCR[FX,FEX,VX,OX]; the FPSCR exception bits are not modelled
            if re.match(r"^f(n?m(add|sub)s?|sel|(add|sub|mul|div|sqrt)s?|res|rsqrtes?)\.$", mnemonic):
                out.add("cr3")  # QEMU 10.2 also sets CR bit 14 for the A-form record forms
        if re.match(r"^f(n?m(add|sub))s?\.?$", mnemonic):
            out.add(operands.split(",")[0].strip())  # fused multiply-add: p-code rounds twice
        if re.match(r"^stfsu?x?$", mnemonic):
            import struct
            frs = operands.split(",")[0].strip()
            v = state.get(frs)
            d = struct.unpack("<d", struct.pack("<Q", v))[0]
            try:
                exact = struct.unpack("<f", struct.pack("<f", d))[0] == d
            except OverflowError:
                exact = False
            if not exact:
                # a double outside single precision: the ISA stores truncated bits, p-code rounds
                return {"*"}
        if re.match(r"^lfsu?x?$", mnemonic):
            frt = operands.split(",")[0].strip()
            v = state.get(frt)
            if (v >> 52) & 0x7FF == 0x7FF and v & ((1 << 52) - 1):
                out.add(frt)  # a single sNaN is widened without quieting; p-code quiets it
        return out

    def canonical(self, cand):
        if not super().canonical(cand):
            return False
        w = int.from_bytes(cand["bytes"], "big" if self.big else "little")
        if not self.big and (w >> 26 in (46, 47) or (w >> 26 == 31 and ((w >> 1) & 0x3FF) in (533, 597, 661, 725))):
            return False  # lmw/stmw and the string ops raise an alignment interrupt in little-endian mode
        if w >> 26 == 31 and ((w >> 1) & 0x3FF) in (339, 467):  # mfspr / mtspr: only XER, LR, CTR
            spr = ((w >> 16) & 0x1F) | ((w >> 11) & 0x1F) << 5
            return spr in (1, 8, 9)
        return True


class Ppc64le(Ppc64):
    name = "ppc64le"
    lang = "PowerPC:LE:64:default"
    big = False

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_PPC, cs.CS_MODE_64 | cs.CS_MODE_LITTLE_ENDIAN)


class Ppc64Isa(Ppc64):
    """Power ISA 3.0 with AltiVec (the language a POWER7+ image needs)."""
    name = "ppc64-isa"
    lang = "PowerPC:BE:64:A2ALT"


class Ppc64leIsa(Ppc64le):
    name = "ppc64le-isa"
    lang = "PowerPC:LE:64:A2ALT"


PPC_DENY_P10 = re.compile(
    r"^(sc|scv|t[wd]i?.*|rfi.*|rfci|rfmci|hrfid|rfscv|mtmsr.*|mfmsr|mfsr.*|mtsr.*|mftb.*|wrtee.*|"
    r"mbar|msync|dcb.*|icb.*|tlb.*|slb.*|[lst][bhwdq]arx|st[bhwdq]cx\.|mfdcr|mtdcr|attn|wait.*|"
    r"mffs.*|mtfs.*|mcrfs|ev.*|dss.*|dst.*|mfvscr|mtvscr|darn|copy|paste.*|cp_abort|cpabort|msgsnd.*|msgclr.*|"
    r"lq|stq|ldat|lwat|stdat|stwat|mfbhrbe|clrbhrb|rfebb|bctar.*|.*ep[xX]|ld[bc]ix|st[bc]ix|lwzcix|lhzcix|"
    r"stwcix|sthcix|hashst.*|hashchk.*|sync|lwsync|ptesync|phwsync|plwsync|stbcx.*|isync|eieio|"
    r"lvsl|lvsr|lve[bhw]x|stve[bhw]x|lvxl?|stvxl?|xscvdpspn|xscvspdpn|dcffixqq|dctfixqq|bcd.*|"
    r"xs.*qp.*|xs.*qpo|xsrqpi.*|xsxsigqp|xsxexpqp|xsiexpqp|xsabsqp|xsnabsqp|xsnegqp|xscpsgnqp|"
    # instructions LLVM decodes for a future ISA (IsISAFuture), which QEMU's power10 lacks
    r"dm.*|pmdm.*|lxvp?rll?|stxvp?rll?|lxvpb32x|stxvpb32x|mtlpl|paddis|ptesyncio|subfus\.?|tlb.*io|tlbiep|"
    r"vucmpr.*|vupk.*to.*|xsadd(add|sub)s?uqm|xsmerge.*|xsrebase.*|xv(add|sub|mul)u[hw]m|xvmulh[su][hw]|xvrlw|"
    r"xxaes.*|xxgfmul128.*|xxmulmul.*|xxssumudm.*)$"
)


class LlvmPpcDis:
    """A Capstone stand-in that knows the Power ISA 3.1 prefixed instructions: llvm-objdump
    -mcpu=pwr10 ($DIFFFUZZ_PPC_OBJDUMP, or llvm-objdump on PATH, with the PowerPC target)
    decodes 8-byte slots in batches, cached by encoding."""

    def __init__(self, big):
        import os
        import shutil
        self.big, self.cache = big, {}
        self.tool = os.environ.get("DIFFFUZZ_PPC_OBJDUMP") or shutil.which("llvm-objdump")
        self.objcopy = os.path.join(os.path.dirname(self.tool), "llvm-objcopy")

    def prime(self, encs):
        import os
        import subprocess
        import tempfile
        todo = sorted({self._key(e) for e in encs} - set(self.cache))
        if not todo:
            return
        with tempfile.TemporaryDirectory() as d:
            raw, obj = os.path.join(d, "t.bin"), os.path.join(d, "t.o")
            open(raw, "wb").write(b"".join(todo))
            fmt = "elf64-powerpc" if self.big else "elf64-powerpcle"
            subprocess.run([self.objcopy, "-I", "binary", "-O", fmt, raw, obj], check=True)
            out = subprocess.run([self.tool, "-d", "-D", "-j", ".data", "--mcpu=pwr10", "--no-show-raw-insn", obj],
                                 capture_output=True, text=True, check=True).stdout
        got = {}
        for line in out.splitlines():
            m = re.match(r"\s*([0-9a-f]+):\s+(\S+)\s*(.*)$", line)
            if m:
                got[int(m.group(1), 16)] = (m.group(2), m.group(3).strip())
        for i, e in enumerate(todo):
            hit = got.get(8 * i)
            if hit is None or hit[0].startswith(("<", ".")):
                self.cache[e] = None
                continue
            size = 8 if (8 * i + 4) not in got else 4
            self.cache[e] = (e[:size], hit[0], hit[1])

    def _key(self, raw):
        e = bytes(raw[:8])
        return e if len(e) == 8 else e + (0x60000000).to_bytes(4, "big" if self.big else "little")

    def disasm(self, raw, addr):
        e = self._key(raw)
        if e not in self.cache:
            self.prime([e])
        hit = self.cache[e]
        if hit and len(raw) >= len(hit[0]):
            yield _ObjdumpIns(hit[0], hit[1], hit[2])


_PPC_P10_RECORDS = None


def _ppc_p10_records():
    global _PPC_P10_RECORDS
    if _PPC_P10_RECORDS is None:
        import json
        from pathlib import Path
        p = Path(__file__).resolve().parents[2] / "specs/Ghidra/Processors/PowerPC/isa31_insts.json"
        _PPC_P10_RECORDS = json.loads(p.read_text())
    return _PPC_P10_RECORDS


class Ppc64P10(Ppc64Isa):
    """The Power ISA 3.0/3.1 (POWER9/POWER10) instructions against qemu-ppc64 -cpu power10: the
    generator draws the LLVM PowerPC encodings in specs/.../PowerPC/isa31_insts.json (prefixed
    8-byte instructions, MMA, the new VMX/VSX/fixed-point ones) and random VMX/VSX words, and the
    QEMU harness seeds and compares vs0..vs63."""
    name = "ppc64-p10"
    deny = PPC_DENY_P10
    vecs = [(f"vs{i}", None) for i in range(64)]
    max_len = 8
    _dis = None

    def addr_ok(self, a):
        # the harness epilogue builds page addresses with lis/ori (below 2^31)
        return a < (1 << 31)

    def capstone(self):
        if type(self)._dis is None:
            type(self)._dis = LlvmPpcDis(self.big)
        return type(self)._dis

    def _enc(self, rng):
        if rng.random() < 0.75:
            ins = rng.choice(_ppc_p10_records())
            w = 0
            for pos, b in enumerate(ins["bits"]):
                w |= (b if isinstance(b, int) else rng.getrandbits(1)) << (ins["size"] - 1 - pos)
            if ins["size"] == 64 and rng.random() < 0.7:
                w &= ~(0x3FFFF << 32)  # small displacements, so more loads and stores land in mapped pages
            words = [w >> 32, w & 0xFFFFFFFF] if ins["size"] == 64 else [w]
        else:
            words = [rng.choice((4, 60, 60, 61, 31, 57, 61)) << 26 | rng.getrandbits(26)]
        return b"".join(x.to_bytes(4, "big" if self.big else "little") for x in words)

    def gen(self, rng):
        pool = getattr(self, "_pool", None)
        if not pool:
            pool = [self._enc(rng) for _ in range(512)]
            self.capstone().prime(pool)
            self._pool = pool
        return pool.pop()

    @staticmethod
    def _names(mnemonic, operands):
        """llvm-objdump prints bare register numbers: name the first (destination) operand."""
        parts = [p.strip() for p in operands.split(",")]
        if not parts or not parts[0].isdigit():
            return operands
        n = int(parts[0])
        if re.match(r"^(x|lx|stx|plx|pstx|m[tf]vsr)", mnemonic) and not re.match(r"^(lxsd|lxssp|stxsd|stxssp|plxsd|plxssp|pstxsd|pstxssp)$", mnemonic):
            parts[0] = f"vs{n}"
        elif re.match(r"^(lxsd|lxssp|stxsd|stxssp|plxsd|plxssp|pstxsd|pstxssp|v)", mnemonic):
            parts[0] = f"vs{n + 32}"
        elif re.match(r"^(f|lf|stf|plf|pstf)", mnemonic):
            parts[0] = f"vs{n}"
        else:
            parts[0] = f"r{n}"
        return ", ".join(parts)

    def ignored(self, mnemonic, operands, state):
        import struct
        ops = self._names(mnemonic, operands)
        if re.match(r"^(stfsu?x?|stxsspx?|pstfs|pstxssp)$", mnemonic):
            v = state.get(ops.split(",")[0].strip()) >> 64
            d = struct.unpack("<d", struct.pack("<Q", v))[0]
            try:
                exact = struct.unpack("<f", struct.pack("<f", d))[0] == d
            except OverflowError:
                exact = False
            # a double outside single precision: the ISA stores truncated bits, p-code rounds
            return {"*"} if not exact else set()
        if re.match(r"^(lfsu?x?|plfs|lxsspx?|plxssp)$", mnemonic):
            return set()
        parts = [p.strip() for p in operands.split(",")]
        m = re.match(r"^v(div|mod)(e?)(s|u)(w|d|q)$", mnemonic)
        if m and len(parts) == 3 and parts[2].isdigit():
            e = {"w": 4, "d": 8, "q": 16}[m.group(4)]
            a, b = state.get(f"vs{int(parts[1]) + 32}"), state.get(f"vs{int(parts[2]) + 32}")
            for i in range(16 // e):
                x, y = (a >> (8 * e * i)) & ((1 << 8 * e) - 1), (b >> (8 * e * i)) & ((1 << 8 * e) - 1)
                if y == 0 or (m.group(3) == "s" and x == 1 << (8 * e - 1) and y == (1 << 8 * e) - 1) or m.group(2):
                    return {"*"}  # a zero divisor or an overflowing quotient: the lane is undefined
        m = re.match(r"^div([wd])e(u?)o?\.?$", mnemonic)
        if m and len(parts) == 3 and parts[1].isdigit() and parts[2].isdigit():
            bits = 32 if m.group(1) == "w" else 64
            a, b = state.get(f"r{parts[1]}") & ((1 << bits) - 1), state.get(f"r{parts[2]}") & ((1 << bits) - 1)
            if m.group(2):
                bad = b == 0 or a >= b
            else:
                sa, sb = a - (a >> (bits - 1) << bits), b - (b >> (bits - 1) << bits)
                bad = sb == 0 or not -(1 << (bits - 1)) <= int((sa << bits) / sb) < (1 << (bits - 1))
            if bad:
                return {"*"}  # the extended quotient does not fit: the result is undefined
        if re.match(r"^xx(extractuw|insertw)$", mnemonic) and parts[-1].isdigit() and int(parts[-1]) > 12:
            return {"*"}
        out = super().ignored(mnemonic, ops, state)
        if re.match(r"^x[sv]n?m(add|sub)[am][sd]p$", mnemonic):
            out.add(ops.split(",")[0].strip())  # fused multiply-add: p-code rounds twice
        return out

    def partial(self, mnemonic, operands):
        operands = self._names(mnemonic, operands)
        out = super().partial(mnemonic, operands)
        if re.match(r"^xs(?!.*qp)(?!cmp[eu]|cmpo|cmpexp|tst|xexp|xsig)[a-z]*(dp|sp|hp|ws|wz|ds|dz|xs|xd|sxds|uxds)?$", mnemonic)                 or re.match(r"^(lxssp|lxsd|lxsspx|lxsdx|lxsiwax|lxsiwzx|lxsibzx|lxsihzx|plxsd|plxssp|mtvsrd|mtvsrwa|mtvsrwz|xscvdpspn)$", mnemonic) \
                or re.match(r"^(f|lf|plf)", mnemonic):
            # scalar results: doubleword 1 of the target is undefined
            dst = operands.split(",")[0].strip()
            out[dst] = ((1 << 64) - 1) << 64
        return out

    def order(self, cands):
        # a prefixed instruction may not cross a 64-byte boundary: 8-byte ones go first in a batch
        return sorted(cands, key=lambda c: -len(c["bytes"]))

    def canonical(self, cand):
        if len(cand["bytes"]) == 8:
            return True
        return super().canonical(cand)


class Ppc64leP10(Ppc64P10):
    name = "ppc64le-p10"
    lang = "PowerPC:LE:64:A2ALT"
    big = False


S390X_DENY = re.compile(
    r"^(svc|ex|exrl|diag|sigp|lpswe?|ssm|stnsm|stosm|lctlg?|stctlg?|ptlb|ipte|idte|sske|iske|rrbe|rrbm|"
    r"lra[y g]?|lurag?|sturg?|stpx|spx|stap|stidp|sck|sckc|stckc|spt|stpt|stck[ef]?|ecag|ectg|stfle|stfl|"
    r"stsi|stcps|stcrw|tsch|ssch|msch|csch|hsch|rsch|xsch|chsc|rchp|sal|schm|tpi|tpei|siga|"
    r"mc|trap[24]|tbegin.*|tend|tabort|etnd|ntstg|ppa|niai|bpp|bprp|pfd|pfdrl|"
    r"sar|ear|lam|lamy|stam|stamy|cpya|sacf|sac|ipk|spka|pt|pti|pc|pr|bsg|bsa|bakr|ereg|eregg|esea|epar|epair|esar|"
    r"esta|msta|mvcp|mvcs|mvcdk|mvcsk|mvcos|mvpg|mvcl|mvcle|mvclu|clcl|clcle|clclu|"
    r"cu[0-9]+|cu[a-z]+|tre|troo|trot|trto|trtt|srst|srstu|cuse|cmpsc|kmc|km|kimd|klmd|kmac|kmctr|kmf|kmo|pcc|kma|"
    r"prno|kdsa|dfltcc|sortl|nnpa.*|[lst]ctlg?|.*[\._]?fpc|sfasr|srnmb?|srnmt|lfas|efpc|sfpc|lfpc|stfpc|"
    r"[a-z]*dt[a-z]*|[a-z]*xt[a-z]*|v.*|wf.*|lcbb)$"
)


class S390x(Arch):
    """IBM z/Architecture (QEMU oracle: qemu-s390x -cpu max). The condition code is one-hot in
    CC0..CC3 with CCA = cc >= 2 and CCB = cc & 1."""
    name = "s390x"
    lang = "s390x:BE:64:default"
    elf_machine = 22
    big = True
    pc = "PC"
    max_len = 6
    gprs = [(f"r{i}", getattr(sz, f"UC_S390X_REG_R{i}")) for i in range(16)]
    vecs = [(f"v{i}", getattr(sz, f"UC_S390X_REG_V{i}", None)) for i in range(32)]
    pc_const = sz.UC_S390X_REG_PC
    deny = S390X_DENY
    qemu_bits = ("CC0", "CC1", "CC2", "CC3", "CCA", "CCB")

    def qemu_bit_values(self, rng):
        cc = rng.randrange(4)
        out = {f"CC{k}": int(cc == k) for k in range(4)}
        out["CCA"], out["CCB"] = int(cc >= 2), cc & 1
        return out

    def unicorn(self):
        return uc.Uc(uc.UC_ARCH_S390X, uc.UC_MODE_BIG_ENDIAN)

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_SYSZ, cs.CS_MODE_BIG_ENDIAN)

    def gen(self, rng):
        return rng.getrandbits(48).to_bytes(6, "big")

    def skip(self, cand):
        # QEMU 10.2 stores the low word shifted left by 32 (zero) for STMH, not bits 0-31
        return cand["mnemonic"] == "stmh"

    def ignored(self, mnemonic, operands, state):
        dst = "v" + operands.split(",")[0].strip()[2:]
        if re.match(r"^[vw]fn?m[as](sb|db|xb)$", mnemonic):
            return {dst}  # fused: p-code rounds twice
        if re.match(r"^[vw]c(dg|dlg|ef|elf)b?$", mnemonic):
            mode = operands.split(",")[-1].strip()
            if mode not in ("0", "4"):
                return {dst}  # an int-to-float conversion rounds to nearest in p-code, whatever M5 says
        return set()

    partial_uses_sleigh = True

    def partial(self, mnemonic, operands, sleigh=None):
        """A scalar (W) vector instruction defines element 0 of its target; the rest of the
        register is unpredictable. The SLEIGH mnemonic is used when there is one (Capstone 5
        prints the newer W forms as their generic V form)."""
        if sleigh is not None:
            mnemonic = sleigh["mnemonic"]
            dst = sleigh["operands"].split(",")[0].strip()
            dst = "%" + dst.rstrip("s") if dst.startswith(("f", "v")) else dst
        else:
            dst = operands.split(",")[0].strip()
        if not mnemonic.startswith("w") or not dst.startswith(("%f", "%v")) or mnemonic.endswith("xb") and not mnemonic.startswith("wflrx"):
            return {}
        sb = re.search(r"sbs?$", mnemonic) is not None or \
            mnemonic in ("wledb", "wcefb", "wcelfb", "wcfeb", "wclfeb")
        return {"v" + dst[2:]: ((1 << 32) - 1) << 96 if sb else ((1 << 64) - 1) << 64}


class S390xVec(S390x):
    """s390x with the generator drawing vector-facility (E7, E6) encodings."""
    name = "s390x-vec"
    deny = re.compile(r"$^")

    def gen(self, rng):
        return bytes([0xE6 if rng.random() < 0.1 else 0xE7]) + rng.getrandbits(40).to_bytes(5, "big")


class _ObjdumpIns:
    def __init__(self, b, mnemonic, op_str):
        self.bytes, self.mnemonic, self.op_str = b, mnemonic, op_str


class ObjdumpDis:
    """A Capstone stand-in for an architecture Capstone 5 lacks: binutils objdump decodes
    4-byte little-endian words in batches, cached by encoding."""

    def __init__(self, tool, mach):
        self.tool, self.mach, self.cache = tool, mach, {}

    def prime(self, words):
        import os
        import subprocess
        import tempfile
        todo = sorted({w for w in words if w not in self.cache})
        if not todo:
            return
        with tempfile.NamedTemporaryFile(suffix=".bin", delete=False) as f:
            f.write(b"".join(todo))
            path = f.name
        try:
            out = subprocess.run([self.tool, "-D", "-b", "binary", "-m", self.mach, path],
                                 capture_output=True, text=True, check=True).stdout
        finally:
            os.unlink(path)
        got = {}
        for line in out.splitlines():
            m = re.match(r"\s*([0-9a-f]+):\t([0-9a-f]{8})\s*\t(\S+)\s*(.*)$", line)
            if m:
                got[int(m.group(1), 16) // 4] = (m.group(3), m.group(4).split("#")[0].strip())
        for i, w in enumerate(todo):
            mn = got.get(i)
            self.cache[w] = None if mn is None or mn[0].startswith(".") else mn

    def disasm(self, raw, addr):
        b = bytes(raw[:4])
        if len(b) < 4:
            return
        if b not in self.cache:
            self.prime([b])
        hit = self.cache[b]
        if hit:
            yield _ObjdumpIns(b, hit[0], hit[1])


LA_NAMES = ("ra tp sp a0 a1 a2 a3 a4 a5 a6 a7 t0 t1 t2 t3 t4 t5 t6 t7 t8 r21 fp "
            "s0 s1 s2 s3 s4 s5 s6 s7 s8").split()
LA_FNAMES = [f"fa{i}" for i in range(8)] + [f"ft{i}" for i in range(16)] + [f"fs{i}" for i in range(8)]
LA_DENY = re.compile(
    r"^(syscall|break|dbcl|hvcl|ertn|idle|cpucfg|rdtime.*|csr.*|iocsr.*|tlb.*|invtlb|cacop|lddir|ldpte|"
    r"gcsr.*|gtlb.*|preld.*|asrt.*|ll\..*|sc\..*|llacq.*|screl.*|sc\.q|"
    r"movfcsr2gr|movgr2fcsr|frecipe.*|frsqrte.*|f(ld|st)(gt|le)\..*|v.*|xv.*|"
    r"x86.*|arm.*|setx86.*|setarm.*|setj|movgr2scr|movscr2gr|jiscr.*|"
    r"rcr.*|rotr\.[bh]|rotri\.[bh]|addu12i.*|adc\..*|sbc\..*|sra\.?[bh].*|srl\.?[bh].*|sll\.?[bh].*|"
    r"ldl\..*|ldr\..*|stl\..*|str\..*|armmove|armmfflag|armmtflag|x86mfflag|x86mtflag|gcsr.*|lbt.*)$"
)
_LA_DIS = None


class LoongArch64(Arch):
    """LoongArch64 (QEMU oracle only: qemu-loongarch64 -cpu max; Unicorn and Capstone 5 lack it).
    Encodings are decoded with binutils objdump ($DIFFFUZZ_LA_OBJDUMP or
    loongarch64-linux-gnu-objdump on PATH)."""
    name = "loongarch64"
    lang = "Loongarch:LE:64:lp64d"
    elf_machine = 258
    pc = "pc"
    gprs = [(n, 0) for n in LA_NAMES]
    vecs = [(n, 0) for n in LA_FNAMES]
    deny = LA_DENY

    def partial(self, mnemonic, operands):
        """A single-precision or word result in an FPR leaves bits 63:32 undefined (QEMU NaN-boxes
        them); only the low word is compared."""
        dst = operands.split(",")[0].strip().lstrip("$")
        if not dst.startswith("f") or mnemonic.startswith("movgr2frh"):
            return {}
        parts = mnemonic.split(".")
        fmt = parts[1] if parts[0] in ("ftint", "ftintrm", "ftintrp", "ftintrz", "ftintrne", "ffint", "fcvt") and len(parts) > 2 else parts[-1]
        return {dst: 0xFFFFFFFF} if fmt in ("s", "w") else {}

    def ignored(self, mnemonic, operands, state):
        if re.match(r"^fn?m(add|sub)\.[sd]$", mnemonic):
            return {operands.split(",")[0].strip().lstrip("$")}  # fused: p-code rounds twice
        return set()

    def unicorn(self):
        raise NotImplementedError("LoongArch has no Unicorn model; use --oracle qemu")

    def capstone(self):
        global _LA_DIS
        if _LA_DIS is None:
            import os
            import shutil
            tool = os.environ.get("DIFFFUZZ_LA_OBJDUMP") or shutil.which("loongarch64-linux-gnu-objdump")
            if not tool:
                raise SystemExit("loongarch64: set DIFFFUZZ_LA_OBJDUMP to a binutils objdump for LoongArch")
            _LA_DIS = ObjdumpDis(tool, "loongarch")
        return _LA_DIS

    def gen(self, rng):
        pool = getattr(self, "_pool", None)
        if not pool:
            pool = [rng.getrandbits(32).to_bytes(4, "little") for _ in range(8192)]
            self.capstone().prime(pool)
            self._pool = pool
        return pool.pop()


TC_DENY = re.compile(
    r"^(j.*|call.*|ret|rfe|rfm|syscall|debug|trap.*|isync|dsync|svlcx|rslcx|bisr|ldlcx|lducx|stlcx|stucx|"
    r"mfcr|mtcr|enable|disable|wait|nop|cachea.*|cachei.*|loop.*|fcall.*|fret|cmpswap.*|swap.*|ldmst|.*\.f|q.*)$"
)


class TriCore(Arch32):
    name = "tricore"
    lang = "tricore:LE:32:tc29x"
    elf_machine = 44
    pc = "PC"
    gprs = [(f"d{i}", getattr(tc, f"UC_TRICORE_REG_D{i}")) for i in range(16)] + [
        (f"a{i}", getattr(tc, f"UC_TRICORE_REG_A{i}")) for i in range(16)]
    pc_const = tc.UC_TRICORE_REG_PC
    deny = TC_DENY

    def unicorn(self):
        return uc.Uc(uc.UC_ARCH_TRICORE, uc.UC_MODE_LITTLE_ENDIAN)

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_TRICORE, cs.CS_MODE_TRICORE_162)

    def sleigh_field(self, name, shift, width):
        return name, shift

    def gen(self, rng):
        w = rng.getrandbits(32)
        return w.to_bytes(4, "little") if w & 1 else (w & 0xFFFF).to_bytes(2, "little")

    def skip(self, cand):
        # Unicorn's LD.H D[15], A[b], off4 (SRO, 0x8c) adds off4 unscaled; the manual and Capstone
        # scale it by 2, as for every other 16-bit halfword form.
        return cand["bytes"][0] == 0x8C

    def ignored(self, mnemonic, operands, state):
        # A load into its own post-incremented base register is undefined.
        m = re.match(r"^([ad]\d+), \[(a\d+)[+]?\]?", operands)
        if m and m.group(1) == m.group(2):
            return {"*"}
        # INSERT, IMASK and EXTR(.U) are undefined when pos + width > 32 (Unicorn leaves the
        # destination alone).
        if mnemonic in ("insert", "imask", "extr", "extr.u"):
            ops = [o.strip() for o in operands.split(",")]
            imm = lambda o: int(o[1:], 0) if o.startswith("#") else None
            width = imm(ops[-1])
            pos = imm(ops[-2]) if len(ops) >= 2 else None
            if pos is None and len(ops) >= 2 and re.match(r"^d\d+$", ops[-2]):
                pos = state.get(ops[-2]) & 0x1F
            if width is not None and pos is not None and pos + width > 32:
                return {"*"}
        # The q-format multiplies define n = 0 or 1 only; the 2-bit field's values 2 and 3 are reserved.
        if mnemonic.endswith(".q") or (mnemonic.endswith(".h") and mnemonic.startswith(("madd", "msub", "mul"))):
            m = re.search(r"#(\d+)$", operands)
            if m and int(m.group(1)) > 1:
                return {"*"}
        return set()

    def flag_words(self):
        return [(tc.UC_TRICORE_REG_PSW, {"PSW": (27, 5)}, lambda w: (w & 0xF8000000) | 0xB80)]

    def write_flags(self, emu, reg, word):
        emu.reg_write(reg, word)
        w = lambda n, v: emu.reg_write(getattr(tc, "UC_TRICORE_REG_PSW_USB_" + n), v)
        w("C", (word >> 31) & 1)
        for n, b in (("V", 30), ("SV", 29), ("AV", 28), ("SAV", 27)):
            w(n, ((word >> b) & 1) << 31)

    def read_flags(self, emu, reg):
        # Unicorn keeps the PSW user status bits apart (QEMU's lazy PSW_USB_*): C as any nonzero
        # value (SHA leaves the masked shifted-out bits there), the others in bit 31, and its PSW
        # read does not fold them back in.
        r = lambda n: emu.reg_read(getattr(tc, "UC_TRICORE_REG_PSW_USB_" + n))
        return (int(r("C") != 0) << 31 | (r("V") >> 31) << 30 | (r("SV") >> 31) << 29
                | (r("AV") >> 31) << 28 | (r("SAV") >> 31) << 27)


# m68k and SPARC are left out: Unicorn 2.1.4 segfaults within a few hundred cases on both, and its
# m68k SR read does not fold in the lazily computed condition codes.

NIOS2_NAMES = ("zero at r2 r3 r4 r5 r6 r7 r8 r9 r10 r11 r12 r13 r14 r15 "
               "r16 r17 r18 r19 r20 r21 r22 r23 et bt gp sp fp ea sstatus ra").split()

NIOS2_OP = {
    0x00: "call", 0x01: "jmpi", 0x03: "ldbu", 0x04: "addi", 0x05: "stb", 0x06: "br", 0x07: "ldb",
    0x08: "cmpgei", 0x0B: "ldhu", 0x0C: "andi", 0x0D: "sth", 0x0E: "bge", 0x0F: "ldh", 0x10: "cmplti",
    0x13: "initda", 0x14: "ori", 0x15: "stw", 0x16: "blt", 0x17: "ldw", 0x18: "cmpnei", 0x1B: "flushda",
    0x1C: "xori", 0x1E: "bne", 0x20: "cmpeqi", 0x23: "ldbuio", 0x24: "muli", 0x25: "stbio", 0x26: "beq",
    0x27: "ldbio", 0x28: "cmpgeui", 0x2B: "ldhuio", 0x2C: "andhi", 0x2D: "sthio", 0x2E: "bgeu",
    0x2F: "ldhio", 0x30: "cmpltui", 0x32: "custom", 0x33: "initd", 0x34: "orhi", 0x35: "stwio",
    0x36: "bltu", 0x37: "ldwio", 0x38: "rdprs", 0x3B: "flushd", 0x3C: "xorhi",
}
NIOS2_OPX = {
    0x01: "eret", 0x02: "roli", 0x03: "rol", 0x04: "flushp", 0x05: "ret", 0x06: "nor", 0x07: "mulxuu",
    0x08: "cmpge", 0x09: "bret", 0x0B: "ror", 0x0C: "flushi", 0x0D: "jmp", 0x0E: "and", 0x10: "cmplt",
    0x12: "slli", 0x13: "sll", 0x14: "wrprs", 0x16: "or", 0x17: "mulxsu", 0x18: "cmpne", 0x1A: "srli",
    0x1B: "srl", 0x1C: "nextpc", 0x1D: "callr", 0x1E: "xor", 0x1F: "mulxss", 0x20: "cmpeq", 0x24: "divu",
    0x25: "div", 0x26: "rdctl", 0x27: "mul", 0x28: "cmpgeu", 0x29: "initi", 0x2D: "trap", 0x2E: "wrctl",
    0x30: "cmpltu", 0x31: "add", 0x34: "break", 0x36: "sync", 0x39: "sub", 0x3A: "srai", 0x3B: "sra",
}
NIOS2_DENY = re.compile(
    r"^(trap|break|eret|bret|wrctl|rdctl|wrprs|rdprs|initd|initda|initi|flushd|flushda|flushi|flushp|sync|"
    r"custom|.*io)$"
)


class _Ins:
    def __init__(self, raw, mnemonic, op_str):
        self.bytes, self.mnemonic, self.op_str = raw, mnemonic, op_str


class _Nios2Dis:
    """Mnemonic decoder for Nios II R1 (no Capstone support): the opcode tables of the Nios II
    Processor Reference Guide, chapter 8."""

    def __init__(self, big):
        self.big = big

    def disasm(self, raw, addr):
        if len(raw) < 4:
            return iter(())
        w = int.from_bytes(raw[:4], "big" if self.big else "little")
        op = w & 0x3F
        a, b, c = (w >> 27) & 31, (w >> 22) & 31, (w >> 17) & 31
        if op == 0x3A:
            mn = NIOS2_OPX.get((w >> 11) & 0x3F)
            ops = f"{NIOS2_NAMES[c]}, {NIOS2_NAMES[a]}, {NIOS2_NAMES[b]}"
        else:
            mn = NIOS2_OP.get(op)
            ops = f"{NIOS2_NAMES[b]}, {NIOS2_NAMES[a]}, {(w >> 6) & 0xFFFF:#x}"
        if mn is None:
            return iter(())
        return iter([_Ins(raw[:4], mn, ops)])


class Nios2(Arch32):
    """Nios II R1 (little endian). No Unicorn or Capstone support: the reference is QEMU user
    mode (qemu-nios2, removed from QEMU after 8.2; build it from a QEMU 8.2 tree with
    --target-list=nios2-linux-user), run with --oracle qemu."""
    name = "nios2"
    lang = "nios2:LE:32:R1"
    elf_machine = 113
    pc = "pc"
    gprs = [(n, None) for n in NIOS2_NAMES[1:]]
    pc_const = None
    deny = NIOS2_DENY

    def unicorn(self):
        raise NotImplementedError("nios2 has no Unicorn backend; use --oracle qemu")

    def capstone(self):
        return _Nios2Dis(self.big)

    def canonical(self, cand):
        w = int.from_bytes(cand["bytes"], "big" if self.big else "little")
        a, b, op = (w >> 27) & 31, (w >> 22) & 31, w & 0x3F
        if cand["mnemonic"] == "br" and (a or b):
            return False                # A and B are zero in BR
        if cand["mnemonic"] == "ret" and a != 31:
            return False                # RET reads ra
        if op in (0x06, 0x0E, 0x16, 0x1E, 0x26, 0x2E, 0x36) and (w >> 6) & 3:
            return False                # a branch offset off a word boundary traps
        return True

    def addr_ok(self, a):
        # QEMU's nios2 user mode reserves the guest address space below 0x7FFF0000
        return a < 0x7FFF0000

    def ignored(self, mnemonic, operands, state):
        # DIV and DIVU are undefined for a zero divisor and DIV for INT_MIN / -1.
        if mnemonic in ("div", "divu"):
            regs = [r.strip() for r in operands.split(",")]
            try:
                d, n = state.get(regs[2]) & 0xFFFFFFFF, state.get(regs[1]) & 0xFFFFFFFF
            except (KeyError, IndexError):
                return {"*"}
            if d == 0 or (mnemonic == "div" and d == 0xFFFFFFFF and n == 0x80000000):
                return {"*"}
        return set()


SH4_DENY = re.compile(
    r"^(bra|braf|bsr|bsrf|jmp|jsr|rts|rte|bt/s|bf/s|trapa|sleep|ldtlb|ldc.*|stc.*|lds.*fp.*|sts.*fp.*|"
    r"pref|prefi|icbi|ocb.*|movca\.l|movco\.l|movli\.l|synco|f.*|frchg|fschg|tas\.b|mac\.[wl]|setrc|ldrs|ldre|"
    r"clrmac|sets|clrs|ldc|stc|nop)$"
)


SH2A_ONLY = re.compile(
    r"^(movml\.l|movmu\.l|clips\.[bw]|clipu\.[bw]|ldbank|stbank|jsr/n|rts/n|rtv/n|mulr|movrt|nott|divu|divs|"
    r"movi20s?|bclr.*|bset.*|bst.*|bld.*|band.*|bor.*|bxor.*|movu\.[bw]|resbank)$"
)


class Sh4(Arch32):
    """SuperH SH-4 (little endian), against QEMU user mode (--oracle qemu). Delay-slot branches,
    privileged, cache, FPU and MAC instructions are not generated; Q, M and S are not compared
    (user mode cannot read them)."""
    name = "sh4"
    lang = "SuperH4:LE:32:default"
    elf_machine = 42
    base = 0x3F1000
    pc = "PC"
    gprs = [(f"r{i}", None) for i in range(16)] + [("GBR", None), ("MACH", None), ("MACL", None), ("PR", None)]
    pc_const = None
    flags_reg = "sr"
    flag_bits = {"T": 0, "S": 1, "Q": 8, "M": 9}
    deny = SH4_DENY

    def unicorn(self):
        raise NotImplementedError("sh4 runs with --oracle qemu")

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_SH, cs.CS_MODE_SH4)

    def gen(self, rng):
        return rng.getrandbits(16).to_bytes(2, "little")

    def fix_flags(self, word):
        return word & ~0x2              # S starts clear: CLRS is the only user-mode way to set it

    def canonical(self, cand):
        # Capstone's SH4 mode also accepts SH-2A and SH4A-only encodings
        if SH2A_ONLY.match(cand["mnemonic"]):
            return False
        return not re.match(r"mov\.[bwl] (@-r\d+,r0|r0,@r\d+\+)$", cand["mnemonic"] + " " + cand["op_str"])

    def skip(self, cand):
        mn, ops = cand["mnemonic"], cand["op_str"]
        # QEMU 8.2 clears T on ROTL/ROTR (andi with 0); the manual sets it to the bit shifted out
        if mn in ("rotl", "rotr"):
            return True
        # DIV1 Rn,Rn: the manual reads Rm before Rn is shifted; QEMU reads it after
        regs = [r.strip() for r in ops.split(",")]
        return mn == "div1" and len(regs) == 2 and regs[0] == regs[1]

    def ignored(self, mnemonic, operands, state):
        # QEMU's DIV1 computes the carry of a subtraction of 0 wrongly (its 64-bit add of -Rm)
        if mnemonic == "div1":
            rm = operands.split(",")[0].strip()
            try:
                if state.get(rm) & 0xFFFFFFFF == 0:
                    return {"S", "Q", "M", "T"}
            except KeyError:
                pass
        return {"S", "Q", "M"}


M68K_DENY = re.compile(
    r"^(trap.*|illegal|rte|stop|reset|movec|moves.*|move16|bkpt|chk.*|cpush.*|cinv.*|pflush.*|ptest.*|pmove.*|"
    r"f.*|linea|linef|cas2.*|callm|rtm|nop|pack|unpk)$"
)


class M68k(Arch32):
    """Motorola 68040 integer instructions, against QEMU user mode (--oracle qemu, qemu-m68k -cpu
    m68040). FPU, privileged, trap and MMU/cache instructions are not generated."""
    name = "m68k"
    lang = "68000:BE:32:default"
    elf_machine = 4
    big = True
    pc = "PC"
    gprs = [(f"D{i}", None) for i in range(8)] + [(f"A{i}", None) for i in range(7)] + [("SP", None)]
    pc_const = None
    flags_reg = "ccr"
    flag_bits = {"CF": 0, "VF": 1, "ZF": 2, "NF": 3, "XF": 4}
    deny = M68K_DENY

    def unicorn(self):
        raise NotImplementedError("m68k runs with --oracle qemu")

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_M68K, cs.CS_MODE_M68K_040)

    def gen(self, rng):
        return rng.getrandbits(176).to_bytes(22, "big")

    def canonical(self, cand):
        # Capstone accepts reserved extension-word encodings (and prints them as such)
        ops = cand["op_str"]
        if re.search(r"\(\[|\((?:[ad]\d|a7)\.[wl]|invalid|\[\]|\[,", ops):
            return False
        if re.search(r"\bfp\d|\bsr\b", ops) or (cand["mnemonic"] in ("abcd", "sbcd") and "#" in ops):
            return False
        return not cand["mnemonic"].startswith("dc.") and cand["mnemonic"] != "abcd.l"

    def skip(self, cand):
        # QEMU 8.2's memory shifts take arithmetic/logical from EA bit 3 instead of opcode bit 9
        if cand["mnemonic"] in ("asl.w", "asr.w", "lsl.w", "lsr.w") and not re.match(r"(#|d\d), ", cand["op_str"]):
            return True
        # QEMU 8.2's TAS (An)+ always steps by 1, also for A7
        if cand["mnemonic"] == "tas.b" and cand["op_str"] == "(a7)+":
            return True
        # QEMU 8.2 steps A7 by 1 in the byte -(Ay),-(Ax) forms; the manual keeps it word aligned (2)
        if re.match(r"(addx|subx|abcd|sbcd)(\.b)?$", cand["mnemonic"]) and "-(a7)" in cand["op_str"]:
            return True
        # LINK A7: QEMU pushes A7 before the decrement, other references after; the manual leaves it open
        return cand["mnemonic"] == "link.w" and cand["op_str"].startswith("a7,")


SPARC_DENY = re.compile(
    r"^(b.*|fb.*|cb.*|call|jmpl?|ret|retl|rett|return|save|restore|saved|restored|flushw|done|retry|"
    r"t(a|n|ne|e|g|le|ge|l|gu|leu|cc|cs|pos|neg|vc|vs)|taddcctv|tsubcctv|rd.*|wr.*|flush|membar|stbar|"
    r"prefetch.*|f.*|impdep.*|illtrap|unimp|sir|iprefetch|(ld|st)[a-z]*a|swapa|casx?a|ldq.*|stq.*|"
    r"shutdown|sleep|nop)$"
)


class Sparc64(Arch):
    """SPARC V9 integer instructions, against QEMU user mode (--oracle qemu). Branches, calls,
    register-window, trap, privileged, ASI and floating-point instructions are not generated."""
    name = "sparc64"
    lang = "sparc:BE:64:default"
    elf_machine = 43
    big = True
    pc = "PC"
    gprs = [(n, None) for n in ["g1", "g2", "g3", "g4", "g5", "g6", "g7", "o0", "o1", "o2", "o3", "o4", "o5",
                                "sp", "o7", "l0", "l1", "l2", "l3", "l4", "l5", "l6", "l7", "i0", "i1", "i2",
                                "i3", "i4", "i5", "fp", "i7"]] + [("Y", None)]
    pc_const = None
    flags_reg = "ccr"
    flag_bits = {"i_cf": 0, "i_vf": 1, "i_zf": 2, "i_nf": 3, "x_cf": 4, "x_vf": 5, "x_zf": 6, "x_nf": 7}
    deny = SPARC_DENY

    def unicorn(self):
        raise NotImplementedError("sparc runs with --oracle qemu")

    def capstone(self):
        return cs.Cs(cs.CS_ARCH_SPARC, cs.CS_MODE_BIG_ENDIAN | cs.CS_MODE_V9)

    def gen(self, rng):
        k = rng.random()
        w = rng.getrandbits(32)
        if k < 0.05:
            w = (w & 0x3E3FFFFF) | 0x01000000                         # sethi
        else:
            w = (w & 0x3FFFFFFF) | (0x80000000 if k < 0.65 else 0xC0000000)
        return w.to_bytes(4, "big")

    def canonical(self, cand):
        w = int.from_bytes(cand["bytes"][:4], "big")
        op, op3, i = w >> 30, (w >> 19) & 0x3F, (w >> 13) & 1
        if op == 2 and op3 in (0x25, 0x26, 0x27):
            # shift encodings: bits 11:5 (11:6 with x = 1) are reserved
            res = 0xFC0 if (i and (w >> 12) & 1) else 0xFE0
            if w & res:
                return False
        elif op == 2 and op3 < 0x25 and not i and (w >> 5) & 0xFF:
            return False                                     # the unused asi field of a register form
        elif op == 2 and op3 == 0x2C:
            # MOVcc: cc2 = 0 is fcc, cc1:cc0 = 01/11 are reserved, bits 10:5 of the register form too
            if not (w >> 18) & 1 or (w >> 11) & 1 or (not i and (w >> 5) & 0x3F):
                return False
        elif op == 2 and op3 in (0x36, 0x37):
            return False                                     # VIS / IMPDEP
        return not re.search(r"%f|%c\d|%fsr|%fcc|%asi|%q", cand["op_str"])

    def skip(self, cand):
        # QEMU 8.2 zero-extends a 32-bit SLL; V9 shifts all 64 bits
        return self.elf64 and cand["mnemonic"] == "sll"

    def fix_inputs(self, init, rng):
        init["Y"] &= 0xFFFFFFFF


class Sparc32(Sparc64):
    """The 32-bit SPARC V9 language (32-bit registers) on qemu-sparc32plus. Instructions that only
    exist for 64-bit registers or read xcc are not generated, and xcc is not compared."""
    name = "sparc"
    lang = "sparc:BE:32:default"
    elf_machine = 18
    elf64 = False

    def canonical(self, cand):
        if re.match(r"(ldx|stx|sllx|srlx|srax|mulx|sdivx|udivx|casx|movr.*|popc|ldsw)$", cand["mnemonic"]):
            return False
        return "%xcc" not in cand["op_str"] and Sparc64.canonical(self, cand)

    def ignored(self, mnemonic, operands, state):
        return {"x_cf", "x_vf", "x_zf", "x_nf"}


class _Insn:
    def __init__(self, raw, mnemonic, op_str):
        self.bytes, self.mnemonic, self.op_str = raw, mnemonic, op_str


class ObjdumpDis:
    """A fixed-width decoder over a multi-target binutils objdump ($DIFFFUZZ_OBJDUMP, default
    ~/.local/share/difffuzz-binutils/bin/objdump, built with --enable-targets=all) for the
    architectures Capstone 5 lacks. prime() decodes a batch of encodings in one objdump run."""

    def __init__(self, machine, big, width=4, opts=()):
        self.machine, self.big, self.width, self.opts = machine, big, width, list(opts)
        self.cache = {}

    @staticmethod
    def path():
        return os.environ.get("DIFFFUZZ_OBJDUMP", os.path.expanduser("~/.local/share/difffuzz-binutils/bin/objdump"))

    def prime(self, raws):
        todo = [r for r in dict.fromkeys(raws) if r not in self.cache]
        if not todo:
            return
        with tempfile.NamedTemporaryFile(suffix=".bin", delete=False) as f:
            f.write(b"".join(todo))
            name = f.name
        try:
            cmd = [self.path(), "-D", "-b", "binary", "-m", self.machine, "-EB" if self.big else "-EL", *self.opts, name]
            out = subprocess.run(cmd, capture_output=True, text=True, check=True).stdout
        finally:
            os.unlink(name)
        got = {}
        for line in out.splitlines():
            m = re.match(r"\s*([0-9a-f]+):\t((?:[0-9a-f]{2} )+)\s*\t?(.*)$", line)
            if not m:
                continue
            off = int(m.group(1), 16)
            text = m.group(3).strip()
            if off % self.width or not text or text.startswith(("(bad)", ".word", ".long", ".byte", ".short", "#", "*unknown*")):
                continue
            mn, ops = (re.split(r"\s+", text, maxsplit=1) + [""])[:2]
            got[off // self.width] = (mn, ops.strip())
        for i, r in enumerate(todo):
            self.cache[r] = got.get(i)

    def disasm(self, raw, addr):
        raw = bytes(raw[:self.width])
        if raw not in self.cache:
            self.prime([raw])
        e = self.cache[raw]
        if e is not None:
            yield _Insn(raw, e[0], e[1])


class ObjdumpArch(Arch32):
    """An architecture decoded by ObjdumpDis; gen() draws encodings in batches and primes them."""
    objdump_machine = ""
    objdump_opts = ()
    _dis = None
    _buf: list = []

    def capstone(self):
        if self._dis is None:
            self._dis = ObjdumpDis(self.objdump_machine, self.big, 4, self.objdump_opts)
        return self._dis

    def draw(self, rng):
        return rng.getrandbits(32).to_bytes(4, "big" if self.big else "little")

    def gen(self, rng):
        if not self._buf:
            self._buf = [self.draw(rng) for _ in range(4096)]
            self.capstone().prime(self._buf)
            self._buf.reverse()
        return self._buf.pop()


HPPA_DENY = re.compile(
    r"^(b|bl|b,.*|bl,.*|bv.*|be.*|ble.*|blr.*|bb.*|comb.*|comib.*|cmpb.*|cmpib.*|addb.*|addib.*|movb.*|movib.*|"
    r"gate.*|break|diag|rfi.*|ssm|rsm|mtsm|mtctl|mfctl|mtsp|mfsp|mtsar.*|ldsid|probe.*|lpa.*|lci|pdtlb.*|pitlb.*|"
    r"idtlb.*|iitlb.*|pdc.*|fdc.*|fic.*|sync.*|f.*|c[a-z]*w.*|copr.*|spop.*|cldd.*|cstd.*|ldcw.*|ldcd.*|nop|"
    r"mfia|pushbts|pushnom|popbts|clrbts|ldwa.*|stwa.*|ldda.*|stda.*|idtlbt|iitlbt)$"
)


class Hppa(ObjdumpArch):
    """PA-RISC 1.1 integer instructions against qemu-hppa (--oracle qemu), decoded by binutils.
    Branches, system, cache/TLB, floating-point and coprocessor instructions are not generated.
    The carry bit and the nullification of the next instruction are compared."""
    name = "hppa"
    lang = "pa-risc:BE:32:default"
    elf_machine = 15
    big = True
    pc = "iaoq_front"
    gprs = [(n, None) for n in ["r1", "rp"] + [f"r{i}" for i in range(3, 27)] + ["dp", "r28", "r29", "sp", "r31"]] + [("sar", None)]
    pc_const = None
    flags_reg = "psw"
    flag_bits = {"pswCB": 0, "nullifyCond": 1}
    deny = HPPA_DENY
    objdump_machine = "hppa1.1"

    def unicorn(self):
        raise NotImplementedError("hppa runs with --oracle qemu")

    def fix_flags(self, word):
        return word & ~2                      # the instruction under test is not nullified itself

    def fix_inputs(self, init, rng):
        init["sar"] &= 0x1F

    def canonical(self, cand):
        # binutils decodes PA-RISC 2.0 forms whatever -m says; the language is PA-RISC 1.1
        mn = cand["mnemonic"]
        w = int.from_bytes(cand["bytes"][:4], "big")
        if (w >> 26) in (0x17, 0x1F) or ",bc" in mn or "(null)" in mn:
            return False                                     # PA 2.0 LDW,M / STW,M, cache hints, reserved conditions
        if (w >> 26) == 0x03 and (w >> 10) & 3 == 3:
            return False                                     # reserved cache-control hint
        if re.match(r"uxor,n?(sdc|sbc|shc)|uaddcm.*,n?[sn]w[zc]|stdby", mn):
            return False                                     # carry conditions on UXOR; PA 2.0 word conditions, STDBY
        if "*" in mn or re.match(r"(ldd|std|extrd|depd|depdi|shrpd|permh|hshl|hshr|hshladd|hshradd|havg|hadd|"
                                 r"hsub|mixh|mixw|ldda|stda|ldcd|cmpb|cmpib|addb|addib|bb|popbts|pushbts|"
                                 r"pushnom|clrbts|mfia|dcor|idcor|ds)\b", mn):
            return False
        return True


ALPHA_DENY = re.compile(
    r"^(br|bsr|b[a-z]+|fb[a-z]+|jmp|jsr|ret|jsr_coroutine|call_pal|callsys|halt|imb|bpt|bugchk|rduniq|wruniq|"
    r"pal.*|hw_.*|mb|wmb|trapb|excb|rpcc|rc|rs|fetch.*|ecb|wh64.*|implver|amask|ld[lq]_l|st[lq]_c|"
    r"f.*|cpys.*|mt_fpcr|mf_fpcr|itof.*|ftoi.*|sqrt.*|cvt.*|add[sgtf].*|sub[sgtf].*|mul[sgtf].*|div[sgtf].*|"
    r"cmp[gt].*|ld[sgtf]|st[sgtf]|nop|unop|fnop|.*\.\.\.)$"
)


class Alpha(ObjdumpArch):
    """Alpha (21264, Digital UNIX names) integer instructions against qemu-alpha -cpu ev67
    (--oracle qemu), decoded by binutils. Branches, PALcode, barriers, locked memory and
    floating-point instructions are not generated."""
    name = "alpha"
    lang = "21264:LE:64:unix"
    elf_machine = 0x9026
    elf64 = True
    until = (1 << 64) - 1
    big = False
    pc = "PC"
    gprs = [(n, None) for n in ["v0", "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7", "s0", "s1", "s2", "s3",
                                "s4", "s5", "FP", "a0", "a1", "a2", "a3", "a4", "a5", "t8", "t9", "t10", "t11",
                                "ra", "pv", "at", "GP", "SP"]]
    pc_const = None
    deny = ALPHA_DENY
    objdump_machine = "alpha"

    def unicorn(self):
        raise NotImplementedError("alpha runs with --oracle qemu")

    def draw(self, rng):
        # mostly integer operates (0x10..0x13, 0x1c) and integer loads/stores
        op = rng.choice([0x10] * 40 + [0x11] * 40 + [0x12] * 40 + [0x13] * 20 + [0x1C] * 40 +
                        [0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x28, 0x29, 0x2C, 0x2D])
        return ((op << 26) | rng.getrandbits(26)).to_bytes(4, "little")

    def addr_ok(self, a):
        return Arch.addr_ok(self, a)


OR1K_DENY = re.compile(
    r"^(l\.j|l\.jal|l\.jr|l\.jalr|l\.bf|l\.bnf|l\.sys|l\.trap|l\.rfe|l\.mtspr|l\.mfspr|l\.[cmp]sync|l\.cust\d|"
    r"lf\..*|lv\..*|l\.nop|l\.lwa|l\.swa|l\.mac.*|l\.msb.*|l\.muld.*|l\.extw[sz])$"
)


class Or1k(ObjdumpArch):
    """OpenRISC 1000 (ORBIS32) against qemu-or1k (--oracle qemu), decoded by binutils. F and CY
    are compared; OV is not (user mode cannot read SR). Jumps, branches, system, SPR, MAC,
    atomic and floating-point instructions are not generated."""
    name = "or1k"
    lang = "OpenRISC:BE:32:default"
    elf_machine = 92
    big = True
    pc = "pc"
    gprs = [(f"r{i}", None) for i in range(1, 32)]
    pc_const = None
    flags_reg = "sr"
    flag_bits = {"F": 0, "CY": 1, "OV": 2}
    deny = OR1K_DENY
    objdump_machine = "or1k"

    def unicorn(self):
        raise NotImplementedError("or1k runs with --oracle qemu")

    def fix_flags(self, word):
        return word & ~4                      # the harness leaves OV clear

    ALU = [0x000, 0x001, 0x002, 0x003, 0x004, 0x005, 0x306, 0x30B, 0x309, 0x30A, 0x008, 0x048, 0x088, 0x0C8,
           0x00E, 0x00F, 0x10F, 0x00C, 0x04C, 0x08C, 0x0CC, 0x00D, 0x04D]
    SF = [0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0xA, 0xB, 0xC, 0xD]

    def draw(self, rng):
        k, w = rng.random(), rng.getrandbits(32)
        regs = w & 0x03FFF800
        if k < 0.4:
            w = 0xE0000000 | regs | rng.choice(self.ALU)                       # register ALU (0x38)
        elif k < 0.55:
            w = 0xE4000000 | rng.choice(self.SF) << 21 | (w & 0x1FF800)        # l.sf* (0x39)
        elif k < 0.65:
            w = 0xB8000000 | regs & ~0x7FF | (w & 0xFF)                       # shifts by immediate (0x2e)
        elif k < 0.75:
            w = 0xBC000000 | rng.choice(self.SF) << 21 | (w & 0x1FFFFF)       # l.sf*i (0x2f)
        return w.to_bytes(4, "big")

    def ignored(self, mnemonic, operands, state):
        # QEMU 8.2 takes l.mulu's carry from a signed multiply
        return {"OV", "CY"} if mnemonic == "l.mulu" else {"OV"}


ARCHES = {a.name: a for a in (X86_64(), X86_64Native(), X86_64X87(), AArch64(), RiscV64(), Arm32(), Thumb(), Mips32(), Mips64(), Mips64R6(), Mips32R6(), Ppc32(), Ppc64(), Ppc64le(), Ppc64Isa(), Ppc64leIsa(), Ppc64P10(), Ppc64leP10(), S390x(), S390xVec(), LoongArch64(), TriCore(), Nios2(), Sh4(), M68k(), Sparc64(), Sparc32(), Hppa(), Alpha(), Or1k())}
