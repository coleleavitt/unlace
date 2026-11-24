"""Per-architecture wiring: the SLEIGH language, the Unicorn mode, the registers compared, and the
instruction generator.

Each Arch names the registers it compares as (sleigh name, unicorn constant) pairs, plus a flag word
split into the single-bit flag registers SLEIGH keeps, and a filter for the mnemonics whose result a
reference cannot be compared on (privileged, trapping, timing, randomness).
"""
import random
import re

import capstone as cs
import unicorn as uc
from unicorn import arm64_const as a64
from unicorn import riscv_const as rv
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
        if mnemonic == "bswap" and not re.match(r"^[re]", operands):
            return {"*"}
        if mnemonic in ("shld", "shrd") and operands.endswith("cl") and ("word" in operands or re.match(r"^[a-ds][xip]\b|^r\d+w", operands)):
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
        # Writes to pc are left to flow tests.
        return bool(re.search(r"\bpc\b", cand["op_str"]))

    def canonical(self, cand):
        """Capstone decodes A32 encodings whose should-be-zero fields are set; SLEIGH rejects them.
        Keep an encoding only when Keystone assembles Capstone's text back to the same bytes."""
        if self.thumb:
            return True
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


TC_DENY = re.compile(
    r"^(j.*|call.*|ret|rfe|rfm|syscall|debug|trap.*|isync|dsync|svlcx|rslcx|bisr|ldlcx|lducx|stlcx|stucx|"
    r"mfcr|mtcr|enable|disable|wait|nop|cachea.*|cachei.*|loop.*|fcall.*|fret|cmpswap.*|swap.*|ldmst|.*\.f|q.*|madd.*|msub.*)$"
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

    def ignored(self, mnemonic, operands, state):
        m = re.match(r"^([ad]\d+), \[(a\d+)[+]?\]?", operands)
        if m and m.group(1) == m.group(2):
            return {"*"}
        return set()

    def gen(self, rng):
        w = rng.getrandbits(32)
        return w.to_bytes(4, "little") if w & 1 else (w & 0xFFFF).to_bytes(2, "little")

    def flag_words(self):
        return [(tc.UC_TRICORE_REG_PSW, {"PSW": (27, 5)}, lambda w: (w & 0xF8000000) | 0xB80)]

    def write_flags(self, emu, reg, word):
        emu.reg_write(reg, word)
        w = lambda n, v: emu.reg_write(getattr(tc, "UC_TRICORE_REG_PSW_USB_" + n), v)
        w("C", (word >> 31) & 1)
        for n, b in (("V", 30), ("SV", 29), ("AV", 28), ("SAV", 27)):
            w(n, ((word >> b) & 1) << 31)

    def read_flags(self, emu, reg):
        # Unicorn keeps the PSW user status bits apart (QEMU's lazy PSW_USB_*): C as 0/1, the
        # others in bit 31, and its PSW read does not fold them back in.
        r = lambda n: emu.reg_read(getattr(tc, "UC_TRICORE_REG_PSW_USB_" + n))
        return ((r("C") & 1) << 31 | (r("V") >> 31) << 30 | (r("SV") >> 31) << 29
                | (r("AV") >> 31) << 28 | (r("SAV") >> 31) << 27)


# m68k and SPARC are left out: Unicorn 2.1.4 segfaults within a few hundred cases on both, and its
# m68k SR read does not fold in the lazily computed condition codes.
ARCHES = {a.name: a for a in (X86_64(), AArch64(), RiscV64(), Arm32(), Thumb(), Mips32(), Ppc32(), TriCore())}
