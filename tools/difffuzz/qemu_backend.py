"""Exact reference results from QEMU user mode, for the instructions Unicorn gets wrong or
does not implement (its QEMU core predates BF16, I8MM, MOPS and many RISC-V extensions).

Each case becomes a small static ELF:

- a prologue page loads every compared register (and the flag word) from an input table and
  branches to the instruction;
- the instruction sits at the address the p-code was lifted at, in a page that is otherwise the
  deterministic filler, and falls through into an epilogue that stores the registers to an
  output table and write(2)s it and every data page to stdout;
- each page the p-code read or wrote is mapped, filled with the same filler.

The p-code runs first, so its accesses decide which pages exist. A reference access outside
them, a trap, or a taken branch (it leaves the harness) ends the run with a signal, reported as
ref-exception. Memory is compared byte for byte over the mapped data pages.
"""
import os
import shutil
import struct
import subprocess

from pcode_emu import State, Unmodeled, step

PAGE = 0x1000
PROLOGUE = 0x3F0000
TABLES = 0x3E0000
OUT = TABLES + 0x800


def _mmap_min_addr():
    try:
        with open("/proc/sys/vm/mmap_min_addr") as f:
            return max(int(f.read()), PAGE)
    except (OSError, ValueError):
        return 0x10000


# QEMU user mode maps guest pages one-to-one onto the host's, so it cannot map below this
MIN_ADDR = _mmap_min_addr()


def fill_byte(addr, seed):
    x = (addr * 0x9E3779B97F4A7C15 + seed * 0xC2B2AE3D27D4EB4F) & 0xFFFFFFFFFFFFFFFF
    x ^= x >> 29
    return (x * 0xBF58476D1CE4E5B9 >> 56) & 0xFF


def elf(segments, entry, machine, big=False, flags=0):
    """A static ELF64 with one PT_LOAD per (vaddr, bytes, prot) segment."""
    e = ">" if big else "<"
    n = len(segments)
    ident = b"\x7fELF" + bytes([2, 2 if big else 1, 1, 0]) + b"\0" * 8
    hdr = ident + struct.pack(e + "HHIQQQIHHHHHH", 2, machine, 1, entry, 64, 0, flags, 64, 56, n, 64, 0, 0)
    off = PAGE
    phs, blobs = b"", b""
    for vaddr, data, prot in segments:
        phs += struct.pack(e + "IIQQQQQQ", 1, prot, off, vaddr, vaddr, len(data), len(data), PAGE)
        pad = (-len(data)) % PAGE
        blobs += data + b"\0" * pad
        off += len(data) + pad
    img = hdr + phs
    return img + b"\0" * (PAGE - len(img)) + blobs


def words(ws, big=False):
    return b"".join(struct.pack(">I" if big else "<I", w & 0xFFFFFFFF) for w in ws)


# ---------------------------------------------------------------- AArch64

def a64_movabs(rd, v):
    out = [0xD2800000 | ((v & 0xFFFF) << 5) | rd]
    for hw in (1, 2, 3):
        part = (v >> (16 * hw)) & 0xFFFF
        if part:
            out.append(0xF2800000 | (hw << 21) | (part << 5) | rd)
    return out


class A64Harness:
    """x0..x30 at 8*i, sp at 248, nzcv at 256, q0..q31 at 272 + 16*i."""
    qemu = ("qemu-aarch64", ["-cpu", "max"])
    machine = 183
    big = False
    table_size = 272 + 512 + 16
    marker_at = 272 + 512

    def prologue(self, target):
        c = a64_movabs(0, TABLES)
        for i in range(32):
            c.append(0x3DC00000 | ((272 + 16 * i) // 16) << 10 | 0 << 5 | i)  # ldr qi, [x0, #off]
        c += [0xF9400000 | (256 // 8) << 10 | 0 << 5 | 1, 0xD51B4200 | 1]          # ldr x1,[x0,#256]; msr nzcv,x1
        c += [0xF9400000 | (248 // 8) << 10 | 0 << 5 | 1, 0x91000000 | 1 << 5 | 31]  # ldr x1,[x0,#248]; mov sp,x1
        for i in range(1, 31):
            c.append(0xF9400000 | i << 10 | 0 << 5 | i)                               # ldr xi,[x0,#8i]
        c.append(0xF9400000 | 0 << 10 | 0 << 5 | 0)                                   # ldr x0,[x0]
        here = PROLOGUE + 4 * len(c)
        c.append(0x14000000 | (((target - here) >> 2) & 0x3FFFFFF))                   # b target
        return words(c)

    def epilogue(self, dumps, marker):
        c = [0xD51BD040 | 0]                                                          # msr tpidr_el0, x0
        c += a64_movabs(0, OUT)
        for i in range(1, 31):
            c.append(0xF9000000 | i << 10 | 0 << 5 | i)                               # str xi,[x0,#8i]
        c += [0x91000000 | 31 << 5 | 1, 0xF9000000 | (248 // 8) << 10 | 0 << 5 | 1]  # mov x1,sp; str
        c += [0xD53B4200 | 1, 0xF9000000 | (256 // 8) << 10 | 0 << 5 | 1]            # mrs x1,nzcv; str
        c += [0xD53BD040 | 1, 0xF9000000 | 0 << 10 | 0 << 5 | 1]                      # mrs x1,tpidr_el0; str [x0]
        for i in range(32):
            c.append(0x3D800000 | ((272 + 16 * i) // 16) << 10 | 0 << 5 | i)          # str qi
        c += a64_movabs(1, marker) + [0xF9000000 | (self.marker_at // 8) << 10 | 0 << 5 | 1]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += a64_movabs(1, base) + a64_movabs(2, size)
            c += [0xD2800020, 0xD2800808, 0xD4000001]                                  # x0=1; x8=64; svc
        c += [0xD2800000, 0xD2800BA8, 0xD4000001]                                      # x0=0; x8=93; svc
        return words(c)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i in range(31):
            struct.pack_into("<Q", t, 8 * i, init.get(f"x{i}", 0) & (2 ** 64 - 1))
        struct.pack_into("<Q", t, 248, init.get("sp", 0) & (2 ** 64 - 1))
        struct.pack_into("<Q", t, 256, flagword & 0xF0000000)
        for i in range(32):
            v = init_vec.get(f"q{i}", 0)
            t[272 + 16 * i:272 + 16 * i + 16] = (v & (2 ** 128 - 1)).to_bytes(16, "little")
        return bytes(t)

    def parse(self, arch, out):
        regs = {f"x{i}": struct.unpack_from("<Q", out, 8 * i)[0] for i in range(31)}
        regs["sp"] = struct.unpack_from("<Q", out, 248)[0]
        for i in range(32):
            regs[f"q{i}"] = int.from_bytes(out[272 + 16 * i:288 + 16 * i], "little")
        return regs, struct.unpack_from("<Q", out, 256)[0]


# ---------------------------------------------------------------- RISC-V

def rv_i(op, rd, f3, rs1, imm):
    return ((imm & 0xFFF) << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | op


def rv_s(op, f3, rs1, rs2, imm):
    return (((imm >> 5) & 0x7F) << 25) | (rs2 << 20) | (rs1 << 15) | (f3 << 12) | ((imm & 0x1F) << 7) | op


def rv_li32(rd, v):
    hi = (v + 0x800) & ~0xFFF
    return [(hi & 0xFFFFF000) | (rd << 7) | 0x37, rv_i(0x13, rd, 0, rd, v - hi)]


def rv_j(target, here):
    off = target - here
    return (((off >> 20) & 1) << 31) | (((off >> 1) & 0x3FF) << 21) | (((off >> 11) & 1) << 20) | (((off >> 12) & 0xFF) << 12) | 0x6F


class RvHarness:
    """x1..x31 at 8*i, f0..f31 at 256 + 8*i. A scratch register the instruction does not write
    holds the table address while the others load and store; it reads back as its input."""
    qemu = ("qemu-riscv64", ["-cpu", "max"])
    machine = 243
    big = False
    table_size = 512 + 8
    marker_at = 512

    def __init__(self):
        self.scratch = 31

    def prologue(self, target):
        s = self.scratch
        c = rv_li32(s, TABLES)
        for i in range(32):
            c.append(rv_i(0x07, i, 3, s, 256 + 8 * i))                                 # fld fi
        for i in range(1, 32):
            if i != s:
                c.append(rv_i(0x03, i, 3, s, 8 * i))                                   # ld xi
        c.append(rv_i(0x03, s, 3, s, 8 * s))
        c.append(rv_j(target, PROLOGUE + 4 * len(c)))
        return words(c)

    def epilogue(self, dumps, marker):
        s = self.scratch
        c = rv_li32(s, OUT)
        for i in range(1, 32):
            if i != s:
                c.append(rv_s(0x23, 3, s, i, 8 * i))                                   # sd xi
        for i in range(32):
            c.append(rv_s(0x27, 3, s, i, 256 + 8 * i))                                 # fsd fi
        c += rv_li32(1, marker) + [rv_s(0x23, 3, s, 1, self.marker_at)]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [rv_i(0x13, 10, 0, 0, 1)] + rv_li32(11, base) + rv_li32(12, size) + [rv_i(0x13, 17, 0, 0, 64), 0x73]
        c += [rv_i(0x13, 10, 0, 0, 0), rv_i(0x13, 17, 0, 0, 93), 0x73]
        return words(c)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        names = [n for n, _ in arch.gprs]
        for i, n in enumerate(names, start=1):
            struct.pack_into("<Q", t, 8 * i, init.get(n, 0) & (2 ** 64 - 1))
        for i, (n, _) in enumerate(arch.vecs):
            struct.pack_into("<Q", t, 256 + 8 * i, init_vec.get(n, 0) & (2 ** 64 - 1))
        return bytes(t)

    def parse(self, arch, out):
        regs = {}
        for i, (n, _) in enumerate(arch.gprs, start=1):
            regs[n] = struct.unpack_from("<Q", out, 8 * i)[0]
        for i, (n, _) in enumerate(arch.vecs):
            regs[n] = struct.unpack_from("<Q", out, 256 + 8 * i)[0]
        return regs, 0


# ---------------------------------------------------------------- MIPS (MIPS32 code on a MIPS64 core)

def mips_li32(rt, v):
    return [0x3C000000 | rt << 16 | ((v >> 16) & 0xFFFF), 0x34000000 | rt << 21 | rt << 16 | (v & 0xFFFF)]


def mips_ld(rt, base, off):
    return 0xDC000000 | base << 21 | rt << 16 | (off & 0xFFFF)


def mips_sd(rt, base, off):
    return 0xFC000000 | base << 21 | rt << 16 | (off & 0xFFFF)


class MipsHarness:
    """The installed QEMU has no 32-bit MIPS user binary, so MIPS32 code runs under
    qemu-mips64 (n64). Every register is loaded sign-extended from its 32-bit value, which is
    the state in which MIPS64 runs a MIPS32 instruction exactly as MIPS32 does, and only the
    low 32 bits are compared. $1..$31 at 8*i, HI at 256, LO at 264."""
    qemu = ("qemu-mips64", ["-cpu", "MIPS64R2-generic"])
    machine = 8
    big = True
    flags = 0x80000006  # EF_MIPS_ARCH_64R2 | EF_MIPS_PIC | EF_MIPS_CPIC
    table_size = 280
    marker_at = 272

    def __init__(self):
        self.scratch = 31

    hilo = True

    def prologue(self, target):
        s = self.scratch
        t = 1 if s != 1 else 2
        c = mips_li32(s, TABLES)
        if self.hilo:
            c += [mips_ld(t, s, 256), 0x00000011 | t << 21, mips_ld(t, s, 264), 0x00000013 | t << 21]  # mthi / mtlo
        for i in range(1, 32):
            if i != s:
                c.append(mips_ld(i, s, 8 * i))
        c.append(mips_ld(s, s, 8 * s))
        here = PROLOGUE + 4 * len(c)
        c += [0x10000000 | (((target - (here + 4)) >> 2) & 0xFFFF), 0]                            # b target; nop
        return words(c, True)

    def epilogue(self, dumps, marker):
        s = self.scratch
        t = 1 if s != 1 else 2
        c = mips_li32(s, OUT)
        for i in range(1, 32):
            if i != s:
                c.append(mips_sd(i, s, 8 * i))
        if self.hilo:
            c += [0x00000010 | t << 11, mips_sd(t, s, 256), 0x00000012 | t << 11, mips_sd(t, s, 264)]  # mfhi / mflo
        c += mips_li32(t, marker) + [mips_sd(t, s, self.marker_at)]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [0x24040001] + mips_li32(5, base) + mips_li32(6, size) + [0x24021389, 0x0000000C]  # a0=1; v0=5001 (write)
        c += [0x24040000, 0x240213C2, 0x0000000C]                                                    # a0=0; v0=5058 (exit)
        return words(c, True)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        if arch.elf64:
            sx = lambda v: (v & 0xFFFFFFFFFFFFFFFF) - ((v & (1 << 63)) << 1)
        else:
            sx = lambda v: (v & 0xFFFFFFFF) - ((v & 0x80000000) << 1)
        for i, (n, _) in enumerate(arch.gprs[:31], start=1):
            struct.pack_into(">q", t, 8 * i, sx(init.get(n, 0)))
        struct.pack_into(">q", t, 256, sx(init.get("hi", 0)))
        struct.pack_into(">q", t, 264, sx(init.get("lo", 0)))
        return bytes(t)

    def parse(self, arch, out):
        regs = {n: struct.unpack_from(">Q", out, 8 * i)[0] for i, (n, _) in enumerate(arch.gprs[:31], start=1)}
        regs["hi"] = struct.unpack_from(">Q", out, 256)[0]
        regs["lo"] = struct.unpack_from(">Q", out, 264)[0]
        return regs, 0


class Mips64Harness(MipsHarness):
    """MIPS64 code on qemu-mips64: the registers are loaded and compared at their full 64 bits."""


def msa_ldd(wd, base, off):
    return 0x78000023 | ((off // 8) & 0x3FF) << 16 | base << 11 | wd << 6


def msa_std(wd, base, off):
    return 0x78000027 | ((off // 8) & 0x3FF) << 16 | base << 11 | wd << 6


class MipsR6Harness(MipsHarness):
    """MIPS32 Release 6 code on a MIPS64R6 core (I6400, which has MSA). R6 has no HI/LO. The MSA
    registers w0..w31 are at 512 + 16*i (doubleword 0, then doubleword 1, as ld.d/st.d move
    them)."""
    qemu = ("qemu-mips64", ["-cpu", "I6400"])
    flags = 0xA0000406  # EF_MIPS_ARCH_64R6 | EF_MIPS_NAN2008 | EF_MIPS_PIC | EF_MIPS_CPIC
    hilo = False
    vec_at = 512
    table_size = 512 + 512 + 8
    marker_at = 512 + 512

    def prologue(self, target):
        code = MipsHarness.prologue(self, target)
        # the vector loads go first, while the scratch register still holds the table address
        s = self.scratch
        head = mips_li32(s, TABLES) + [msa_ldd(i, s, self.vec_at + 16 * i) for i in range(32)]
        rest = code[8:]
        n_extra = 32
        # rebuild with the branch displacement adjusted for the extra instructions
        c = head
        body = [int.from_bytes(rest[i:i + 4], "big") for i in range(0, len(rest), 4)]
        br = body[-2]
        off = (br & 0xFFFF) - n_extra
        body[-2] = (br & 0xFFFF0000) | (off & 0xFFFF)
        return words(c + body, True)

    def epilogue(self, dumps, marker):
        s = self.scratch
        c = mips_li32(s, OUT) + [msa_std(i, s, self.vec_at + 16 * i) for i in range(32)]
        return words(c, True) + MipsHarness.epilogue(self, dumps, marker)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(MipsHarness.table(self, arch, init, init_vec, flagword))
        for i, (n, _) in enumerate(arch.vecs):
            v = init_vec.get(n, 0)
            struct.pack_into(">QQ", t, self.vec_at + 16 * i, v & (2 ** 64 - 1), v >> 64)
        return bytes(t)

    def parse(self, arch, out):
        regs, flags = MipsHarness.parse(self, arch, out)
        for i, (n, _) in enumerate(arch.vecs):
            lo, hi = struct.unpack_from(">QQ", out, self.vec_at + 16 * i)
            regs[n] = lo | hi << 64
        return regs, flags


class Mips64R6Harness(MipsR6Harness):
    """MIPS64 Release 6 code on an I6400 core."""



# ---------------------------------------------------------------- Nios II (R1, ELF32)

def n2_i(op, a, b, imm):
    return (a << 27) | (b << 22) | ((imm & 0xFFFF) << 6) | op


def n2_li32(r, v):
    return [n2_i(0x34, 0, r, v >> 16), n2_i(0x14, r, r, v & 0xFFFF)]        # orhi; ori


N2_TRAP = 0x003B683A


class Nios2Harness:
    """r1..r31 at 4*i. A scratch register the instruction does not write holds the table address
    while the others load and store; it reads back as its input."""
    qemu = ("qemu-nios2", [])
    machine = 113
    big = False
    elf32 = True
    table_size = 128 + 8
    marker_at = 128

    def __init__(self):
        self.scratch = 31

    def prologue(self, target):
        s = self.scratch
        c = n2_li32(s, TABLES)
        for i in range(1, 32):
            if i != s:
                c.append(n2_i(0x17, s, i, 4 * i))                                    # ldw ri, 4i(s)
        c.append(n2_i(0x17, s, s, 4 * s))
        c.append(((target >> 2) << 6) | 0x01)                                         # jmpi target
        return words(c)

    def epilogue(self, dumps, marker):
        s = self.scratch
        c = n2_li32(s, OUT)
        for i in range(1, 32):
            if i != s:
                c.append(n2_i(0x15, s, i, 4 * i))                                    # stw ri, 4i(s)
        c += n2_li32(1, marker) + [n2_i(0x15, s, 1, self.marker_at)]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [n2_i(0x04, 0, 4, 1)] + n2_li32(5, base) + n2_li32(6, size)
            c += [n2_i(0x04, 0, 2, 64), N2_TRAP]                                     # write(1, base, size)
        c += [n2_i(0x04, 0, 4, 0), n2_i(0x04, 0, 2, 93), N2_TRAP]                     # exit(0)
        return words(c)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i, (n, _) in enumerate(arch.gprs, start=1):
            struct.pack_into("<I", t, 4 * i, init.get(n, 0) & 0xFFFFFFFF)
        return bytes(t)

    def parse(self, arch, out):
        return {n: struct.unpack_from("<I", out, 4 * i)[0] for i, (n, _) in enumerate(arch.gprs, start=1)}, 0


def elf32(segments, entry, machine, big=False, flags=0):
    """A static ELF32 with one PT_LOAD per (vaddr, bytes, prot) segment."""
    e = ">" if big else "<"
    n = len(segments)
    ident = b"\x7fELF" + bytes([1, 2 if big else 1, 1, 0]) + b"\0" * 8
    hdr = ident + struct.pack(e + "HHIIIIIHHHHHH", 2, machine, 1, entry, 52, 0, flags, 52, 32, n, 40, 0, 0)
    off = PAGE
    phs, blobs = b"", b""
    for vaddr, data, prot in segments:
        phs += struct.pack(e + "IIIIIIII", 1, off, vaddr, vaddr, len(data), len(data), prot, PAGE)
        pad = (-len(data)) % PAGE
        blobs += data + b"\0" * pad
        off += len(data) + pad
    img = hdr + phs
    return img + b"\0" * (PAGE - len(img)) + blobs


# ---------------------------------------------------------------- SuperH SH-4 (16-bit, ELF32)

def _pick_free(arch, regs, written, names, count):
    """count registers from names whose SLEIGH storage the instruction does not write."""
    out = []
    for n in names:
        if n in regs and not written & set(range(regs[n][0], regs[n][0] + regs[n][1])):
            out.append(n)
            if len(out) == count:
                return out
    return None


def halfwords(hs, big=False):
    return b"".join(struct.pack(">H" if big else "<H", h & 0xFFFF) for h in hs)


class Sh4Harness:
    """r0..r15 at 4*i, GBR/MACH/MACL/PR at 64..76, words for Q (bit 31), M (bit 31) and T (bit 0)
    at 80..88, T read back at 92. The instruction sits within a BRA's reach of the prologue
    (Sh4.base), and the BRA's delay slot restores the table register. S starts clear; Q, M and S
    cannot be read from user mode and are not compared."""
    qemu = ("qemu-sh4", [])
    machine = 42
    big = False
    elf32 = True
    table_size = 96 + 8
    marker_at = 96

    def __init__(self):
        self.s, self.x, self.y = 14, 13, 12
        self.scratch_names = []

    def choose_scratch(self, arch, regs, written):
        got = _pick_free(arch, regs, written, [f"r{i}" for i in (14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)], 1)
        if not got:
            return False
        self.s = int(got[0][1:])
        self.x, self.y = [r for r in (1, 2, 3) if r != self.s][:2]
        self.scratch_names = got
        return True

    @staticmethod
    def li32(r, v, t):
        c = [0xE000 | r << 8]                                                       # mov #0, r
        for sh in (24, 16, 8, 0):
            c += [0x4018 | r << 8, 0xE000 | t << 8 | ((v >> sh) & 0xFF), 0x600C | t << 8 | t << 4, 0x200B | r << 8 | t << 4]
        return c                                                                    # shll8; mov #b,t; extu.b t,t; or t,r

    def prologue(self, target):
        s, x, y = self.s, self.x, self.y
        c = [0xE000 | s << 8 | 0x3E, 0x4028 | s << 8]                               # mov #0x3e,s; shll16 s
        c += [0x7000 | s << 8 | 64]                                                 # add #64, s
        c += [0x5000 | x << 8 | s << 4 | 0, 0x401E | x << 8]                        # GBR
        c += [0x5000 | x << 8 | s << 4 | 1, 0x400A | x << 8]                        # MACH
        c += [0x5000 | x << 8 | s << 4 | 2, 0x401A | x << 8]                        # MACL
        c += [0x5000 | x << 8 | s << 4 | 3, 0x402A | x << 8]                        # PR
        c += [0x5000 | x << 8 | s << 4 | 4, 0x5000 | y << 8 | s << 4 | 5, 0x2007 | x << 8 | y << 4]  # div0s y,x: Q, M
        c += [0x5000 | x << 8 | s << 4 | 6, 0x4001 | x << 8]                        # shlr x: T
        c += [0x0048]                                                               # clrs
        c += [0x7000 | s << 8 | 0xC0]                                               # add #-64, s
        for i in range(16):
            if i != s:
                c.append(0x5000 | i << 8 | s << 4 | i)                              # mov.l @(4i,s), ri
        # slide to the end of the page with NOPs so the BRA reaches the next page's instructions
        c += [0x0009] * ((PAGE - 4) // 2 - len(c))
        here = PROLOGUE + 2 * len(c)
        disp = (target - (here + 4)) >> 1
        c += [0xA000 | (disp & 0xFFF), 0x5000 | s << 8 | s << 4 | s]                # bra target; mov.l @(4s,s),s
        return halfwords(c)

    def epilogue(self, dumps, marker):
        s = self.s
        x = next(r for r in (1, 2, 3, 4) if r != s)
        t = next(r for r in (2, 3, 4, 5) if r not in (s, x))
        c = [0xE000 | s << 8 | 0x3E, 0x4018 | s << 8, 0x7000 | s << 8 | 0x08, 0x4018 | s << 8]  # s = OUT
        for i in range(16):
            if i != s:
                c.append(0x1000 | s << 8 | i << 4 | i)                              # mov.l ri,@(4i,s)
        c += [0x7000 | s << 8 | 64]
        c += [0x0012 | x << 8, 0x1000 | s << 8 | x << 4 | 0]                        # stc GBR,x
        c += [0x000A | x << 8, 0x1000 | s << 8 | x << 4 | 1]                        # sts MACH,x
        c += [0x001A | x << 8, 0x1000 | s << 8 | x << 4 | 2]                        # sts MACL,x
        c += [0x002A | x << 8, 0x1000 | s << 8 | x << 4 | 3]                        # sts PR,x
        c += [0x0029 | x << 8, 0x1000 | s << 8 | x << 4 | 7]                        # movt x
        c += self.li32(x, marker, t) + [0x1000 | s << 8 | x << 4 | 8]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [0xE304, 0xE401] + self.li32(5, base, 1) + self.li32(6, size, 1) + [0xC313]   # write(1, base, size)
        c += [0xE301, 0xE400, 0xC311]                                               # exit(0)
        return halfwords(c)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i in range(16):
            struct.pack_into("<I", t, 4 * i, init.get(f"r{i}", 0) & 0xFFFFFFFF)
        for k, n in enumerate(("GBR", "MACH", "MACL", "PR")):
            struct.pack_into("<I", t, 64 + 4 * k, init.get(n, 0) & 0xFFFFFFFF)
        struct.pack_into("<I", t, 80, ((flagword >> 8) & 1) << 31)                  # Q
        struct.pack_into("<I", t, 84, ((flagword >> 9) & 1) << 31)                  # M
        struct.pack_into("<I", t, 88, flagword & 1)                                 # T
        return bytes(t)

    def parse(self, arch, out):
        regs = {f"r{i}": struct.unpack_from("<I", out, 4 * i)[0] for i in range(16)}
        for k, n in enumerate(("GBR", "MACH", "MACL", "PR")):
            regs[n] = struct.unpack_from("<I", out, 64 + 4 * k)[0]
        return regs, struct.unpack_from("<I", out, 92)[0] & 1


HARNESSES = {"aarch64": A64Harness, "riscv64": RvHarness, "mips": MipsHarness, "mips64": Mips64Harness,
             "mipsr6": MipsR6Harness, "mips64r6": Mips64R6Harness, "nios2": Nios2Harness, "sh4": Sh4Harness}


def available(arch):
    """The QEMU user binary for this architecture, or None."""
    h = HARNESSES.get(arch.name)
    return h and shutil.which(h.qemu[0])


def run_case_qemu(arch, regs, row, cand, rng, seed, tmp):
    """run_case with QEMU user mode as the reference (same inputs, same report shape)."""
    addr, size = cand["addr"], len(cand["bytes"])
    bits = 64 if arch.elf64 else 32
    init = {n: arch.rand_reg(rng, bits) for n, _ in arch.gprs}
    arch.fix_inputs(init, rng)
    init_vec = {n: rng.getrandbits(8 * 16) for n, _ in arch.vecs}
    flags = rng.getrandbits(32)
    for n, _ in arch.vecs:
        if n in regs and regs[n][1] < 16:
            init_vec[n] &= (1 << (8 * regs[n][1])) - 1
    flagword = 0
    words_ = []
    for k, fields, fixed in arch.flag_words():
        word = 0
        for n, (sh, wd) in fields.items():
            word |= ((flags >> sh) & ((1 << wd) - 1)) << sh
        word = fixed(word)
        flagword = word
        words_.append((fields, word))

    st = State(arch.big, lambda a: fill_byte(a, seed), regs)
    for i, b in enumerate(cand["bytes"]):
        st.mem[addr + i] = b
    for n, _ in arch.gprs:
        st.set(n, init[n])
    for n, _ in arch.vecs:
        if n in regs:
            st.set(n, init_vec[n])
    for fields, word in words_:
        for n, (sh, wd) in fields.items():
            reg, off = arch.sleigh_field(n, sh, wd)
            cur = st.get(reg) & ~(((1 << wd) - 1) << off)
            st.set(reg, cur | (((word >> sh) & ((1 << wd) - 1)) << off))
    if arch.pc in regs:
        st.set(arch.pc, addr)
    try:
        nxt = step(st, row["ops"], addr, size)
    except Unmodeled as e:
        return {"status": "unmodeled", "why": str(e)}
    if not all(arch.addr_ok(a) and arch.addr_ok(a + s - 1) for a, s in st.accesses):
        return {"status": "bad-address"}
    ignore = arch.ignored(cand["mnemonic"], cand["op_str"], st)
    if "*" in ignore:
        return {"status": "undefined"}

    h = HARNESSES[arch.name]()
    if arch.name in ("riscv64", "nios2") or arch.name.startswith("mips"):
        written = set()
        for o in row["ops"]:
            out = o.get("output")
            if out and out["space"] == "register":
                written.update(range(out["offset"], out["offset"] + out["size"]))
        for r in range(31, 1, -1):
            n = arch.gprs[r - 1][0]
            if n in regs and not written & set(range(regs[n][0], regs[n][0] + regs[n][1])):
                h.scratch = r
                break
        else:
            return {"status": "unmodeled", "why": "no register left for the harness"}
    elif hasattr(h, "choose_scratch"):
        written = set()
        for o in row["ops"]:
            out = o.get("output")
            if out and out["space"] == "register":
                written.update(range(out["offset"], out["offset"] + out["size"]))
        if not h.choose_scratch(arch, regs, written):
            return {"status": "unmodeled", "why": "no register left for the harness"}
    epi_at = addr + size
    target = nxt & ((1 << bits) - 1)
    # a second epilogue where the p-code says control goes, so a taken branch is compared too
    exits = [epi_at] if target == epi_at else [epi_at, target]
    probe = len(h.epilogue([], 0))
    spans = [(x, x + probe + 64) for x in exits]
    code_pages = sorted({p for lo, hi in spans + [(addr, addr + size)] for p in range(lo & ~(PAGE - 1), (hi + PAGE - 1) & ~(PAGE - 1), PAGE)})
    data_pages = sorted({(a + i) & ~(PAGE - 1) for a, s in st.accesses for i in (0, s - 1)} - set(code_pages))
    if any(p in (PROLOGUE, TABLES) or p < MIN_ADDR for p in data_pages + code_pages):
        return {"status": "bad-address"}
    if len(exits) == 2 and (abs(exits[1] - exits[0]) < probe + 64 or addr - probe - 64 < target < addr + size):
        return {"status": "bad-address"}
    if any(lo <= a + i < hi for a, s in st.accesses for i in range(s) for lo, hi in spans):
        return {"status": "bad-address"}
    mem = {}
    for p in code_pages:
        for i in range(PAGE):
            mem[p + i] = fill_byte(p + i, seed)
    for i, b in enumerate(cand["bytes"]):
        mem[addr + i] = b
    for k, x in enumerate(exits):
        for i, b in enumerate(h.epilogue(data_pages, 0x5EA1 + k)):
            mem[x + i] = b
    tables = bytearray(PAGE)
    tables[:h.table_size] = h.table(arch, init, init_vec, flagword)
    segs = [(PROLOGUE, h.prologue(addr), 5), (TABLES, bytes(tables), 6)]
    run = []
    for p in code_pages:
        if run and run[-1][1] == p:
            run[-1][1] = p + PAGE
        else:
            run.append([p, p + PAGE])
    for lo, hi in run:
        segs.append((lo, bytes(mem[a] for a in range(lo, hi)), 7))
    for p in data_pages:
        segs.append((p, bytes(fill_byte(p + i, seed) for i in range(PAGE)), 6))
    segs.sort()
    path = os.path.join(tmp, "qemu-case.elf")
    with open(path, "wb") as f:
        build = elf32 if getattr(h, "elf32", False) else elf
        f.write(build(segs, PROLOGUE, h.machine, h.big, getattr(h, "flags", 0)))
    os.chmod(path, 0o755)
    try:
        p = subprocess.run([h.qemu[0], *h.qemu[1], path], capture_output=True, timeout=10)
    except subprocess.TimeoutExpired:
        return {"status": "ref-exception", "why": "qemu timeout"}
    want = h.table_size + PAGE * len(data_pages)
    if b"Unable to find" in p.stderr or b"Unable to reserve" in p.stderr or b"Error mapping" in p.stderr or b"requires more than" in p.stderr:
        return {"status": "bad-address"}
    if p.returncode != 0 or len(p.stdout) != want:
        why = p.stderr.decode(errors="replace").strip().splitlines()
        return {"status": "ref-exception", "why": "qemu " + (why[0][:60] if why else "exit %s" % p.returncode)}
    ref, ref_flags = h.parse(arch, p.stdout[:h.table_size])
    if arch.name in ("riscv64", "nios2") or arch.name.startswith("mips"):
        ref[arch.gprs[h.scratch - 1][0]] = init[arch.gprs[h.scratch - 1][0]]
    elif hasattr(h, "choose_scratch"):
        for n in h.scratch_names:
            ref[n] = init[n]

    diffs = {}
    for n, _ in arch.gprs + arch.vecs:
        if n in ignore or n not in regs:
            continue
        w = (1 << (8 * regs[n][1])) - 1
        a, b = arch.normalize(n, st.get(n) & w, ref[n] & w)
        if a != b:
            diffs[n] = (a, b)
    for k, fields, _ in arch.flag_words():
        for n, (sh, wd) in fields.items():
            if n in ignore:
                continue
            reg, off = arch.sleigh_field(n, sh, wd)
            a, r = (st.get(reg) >> off) & ((1 << wd) - 1), (ref_flags >> sh) & ((1 << wd) - 1)
            if a != r:
                diffs[n] = (a, r)
    landed = exits[struct.unpack_from(">Q" if h.big else "<Q", p.stdout, h.marker_at)[0] - 0x5EA1]
    if target != landed:
        diffs["pc"] = (target, landed)
    pos = h.table_size
    for pg in data_pages:
        blob = p.stdout[pos:pos + PAGE]
        pos += PAGE
        for i in range(PAGE):
            a = pg + i
            pv = st.mem.get(a, fill_byte(a, seed))
            if pv != blob[i]:
                diffs[f"mem[{a:#x}]"] = (pv, blob[i])
    if not diffs:
        return {"status": "match"}
    if st.skipped_callother and all(k.startswith("mem[") for k in diffs):
        return {"status": "unmodeled", "why": "CALLOTHER side effect"}
    return {"status": "mismatch", "diffs": {k: [hex(x), hex(y)] for k, (x, y) in diffs.items()},
            "input": {k: hex(v) for k, v in init.items()}, "flags_in": hex(flags),
            "vec_in": {k: hex(v) for k, v in init_vec.items()}}
