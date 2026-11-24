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

    def operand_mismatch(self, cap_ops: str, sleigh_ops: str):
        """A disagreement between the immediates Capstone and SLEIGH print, or None."""
        return None

    def ignored(self, mnemonic: str, operands: str, state) -> set:
        """Registers whose value the architecture leaves undefined after this instruction."""
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
        """A single-precision result in a 64-bit f register is NaN-boxed by hardware."""
        if name.startswith("f") and ref >> 32 == 0xFFFFFFFF and ours >> 32 == 0:
            return ours | (0xFFFFFFFF << 32), ref
        return ours, ref

    def setup(self, emu):
        emu.reg_write(rv.UC_RISCV_REG_MSTATUS, emu.reg_read(rv.UC_RISCV_REG_MSTATUS) | 0x6000)


ARCHES = {a.name: a for a in (X86_64(), AArch64(), RiscV64())}
