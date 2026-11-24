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


def elf(segments, entry, machine, big=False, flags=0, elf64=True, align=PAGE):
    """A static ELF64 (or ELF32) with one PT_LOAD per (vaddr, bytes, prot) segment."""
    e = ">" if big else "<"
    n = len(segments)
    ident = b"\x7fELF" + bytes([2 if elf64 else 1, 2 if big else 1, 1, 0]) + b"\0" * 8
    if elf64:
        hdr = ident + struct.pack(e + "HHIQQQIHHHHHH", 2, machine, 1, entry, 64, 0, flags, 64, 56, n, 64, 0, 0)
    else:
        hdr = ident + struct.pack(e + "HHIIIIIHHHHHH", 2, machine, 1, entry, 52, 0, flags, 52, 32, n, 40, 0, 0)
    off = align
    phs, blobs = b"", b""
    for vaddr, data, prot in segments:
        if elf64:
            phs += struct.pack(e + "IIQQQQQQ", 1, prot, off, vaddr, vaddr, len(data), len(data), align)
        else:
            phs += struct.pack(e + "IIIIIIII", 1, off, vaddr, vaddr, len(data), len(data), prot, align)
        pad = (-len(data)) % align
        blobs += data + b"\0" * pad
        off += len(data) + pad
    img = hdr + phs
    return img + b"\0" * (align - len(img)) + blobs


def coalesce(segs, align, filler):
    """Segments widened to align-sized blocks (hosts whose target page is larger than PAGE); the
    bytes no segment gives come from filler, and blocks of one protection merge."""
    mem, prot = {}, {}
    for lo, data, pr in segs:
        for i, b in enumerate(data):
            mem[lo + i] = b
        for blk in range(lo & ~(align - 1), lo + len(data), align):
            prot[blk] = prot.get(blk, 0) | pr
    out = []
    for blk in sorted(prot):
        data = bytes(mem.get(blk + i, filler(blk + i)) for i in range(align))
        if out and out[-1][0] + len(out[-1][1]) == blk and out[-1][2] == prot[blk]:
            out[-1] = (out[-1][0], out[-1][1] + data, prot[blk])
        else:
            out.append((blk, data, prot[blk]))
    return out


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


def mips_lw(rt, base, off):
    return 0x8C000000 | base << 21 | rt << 16 | (off & 0xFFFF)


def mips_sw(rt, base, off):
    return 0xAC000000 | base << 21 | rt << 16 | (off & 0xFFFF)


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
    them), MSACSR at 1032 (moved with ctcmsa/cfcmsa through a general register the epilogue saves
    at 1040 and restores)."""
    qemu = ("qemu-mips64", ["-cpu", "I6400"])
    flags = 0xA0000406  # EF_MIPS_ARCH_64R6 | EF_MIPS_NAN2008 | EF_MIPS_PIC | EF_MIPS_CPIC
    hilo = False
    vec_at = 512
    table_size = 512 + 512 + 8 + 8 + 8
    marker_at = 512 + 512
    msacsr_at = 512 + 512 + 8
    save_at = 512 + 512 + 16

    def prologue(self, target):
        code = MipsHarness.prologue(self, target)
        # the vector loads go first, while the scratch register still holds the table address
        s = self.scratch
        t = 1 if s != 1 else 2
        head = mips_li32(s, TABLES) + [msa_ldd(i, s, self.vec_at + 16 * i) for i in range(32)]
        head += [mips_lw(t, s, self.msacsr_at), 0x783E0059 | t << 11]          # ctcmsa $1 (MSACSR), t
        rest = code[8:]
        n_extra = 34
        # rebuild with the branch displacement adjusted for the extra instructions
        c = head
        body = [int.from_bytes(rest[i:i + 4], "big") for i in range(0, len(rest), 4)]
        br = body[-2]
        off = (br & 0xFFFF) - n_extra
        body[-2] = (br & 0xFFFF0000) | (off & 0xFFFF)
        return words(c + body, True)

    def epilogue(self, dumps, marker):
        s = self.scratch
        t = 1 if s != 1 else 2
        c = mips_li32(s, OUT) + [msa_std(i, s, self.vec_at + 16 * i) for i in range(32)]
        c += [mips_sd(t, s, self.save_at), 0x787E0019 | 1 << 11 | t << 6,       # cfcmsa t, $1 (MSACSR)
              mips_sw(t, s, self.msacsr_at), mips_ld(t, s, self.save_at)]
        return words(c, True) + MipsHarness.epilogue(self, dumps, marker)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(MipsHarness.table(self, arch, init, init_vec, flagword))
        for i, (n, _) in enumerate(arch.vecs):
            v = init_vec.get(n, 0)
            struct.pack_into(">QQ", t, self.vec_at + 16 * i, v & (2 ** 64 - 1), v >> 64)
        struct.pack_into(">I", t, self.msacsr_at, flagword & 0xFFFFFFFF)
        return bytes(t)

    def parse(self, arch, out):
        regs, flags = MipsHarness.parse(self, arch, out)
        for i, (n, _) in enumerate(arch.vecs):
            lo, hi = struct.unpack_from(">QQ", out, self.vec_at + 16 * i)
            regs[n] = lo | hi << 64
        return regs, struct.unpack_from(">I", out, self.msacsr_at)[0]


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


def elf32(segments, entry, machine, big=False, flags=0, align=PAGE):
    """A static ELF32 with one PT_LOAD per (vaddr, bytes, prot) segment."""
    e = ">" if big else "<"
    n = len(segments)
    ident = b"\x7fELF" + bytes([1, 2 if big else 1, 1, 0]) + b"\0" * 8
    hdr = ident + struct.pack(e + "HHIIIIIHHHHHH", 2, machine, 1, entry, 52, 0, flags, 52, 32, n, 40, 0, 0)
    off = align
    phs, blobs = b"", b""
    for vaddr, data, prot in segments:
        phs += struct.pack(e + "IIIIIIII", 1, off, vaddr, vaddr, len(data), len(data), prot, align)
        pad = (-len(data)) % align
        blobs += data + b"\0" * pad
        off += len(data) + pad
    img = hdr + phs
    return img + b"\0" * (align - len(img)) + blobs


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


# ---------------------------------------------------------------- Motorola 68040 (big endian, ELF32)

class M68kHarness:
    """D0..D7 at 4*i, A0..A7 at 32 + 4*i, CCR word in at 64 and out at 68, marker at 72. Data
    registers load first (MOVE.L sets flags), then the address registers with MOVEA, then CCR,
    then the table register; JMP (absolute) reaches the instruction."""
    qemu = ("qemu-m68k", ["-cpu", "m68040"])
    machine = 4
    big = True
    elf32 = True
    table_size = 80
    marker_at = 72

    def __init__(self):
        self.s = 6
        self.scratch_names = ["A6"]

    def choose_scratch(self, arch, regs, written):
        names = [f"A{i}" for i in (6, 5, 4, 3, 2, 1, 0)]
        for n in names:
            if n in regs and not written & set(range(regs[n][0], regs[n][0] + regs[n][1])):
                self.s = int(n[1:])
                self.scratch_names = [n]
                return True
        return False

    @staticmethod
    def l32(v):
        return [(v >> 16) & 0xFFFF, v & 0xFFFF]

    def prologue(self, target):
        s = self.s
        c = [0x207C | s << 9] + self.l32(TABLES)                                     # movea.l #TABLES,As
        for i in range(8):
            c += [0x2028 | i << 9 | s, 4 * i]                                       # move.l (4i,As),Di
        for i in range(8):
            if i != s:
                c += [0x2068 | i << 9 | s, 32 + 4 * i]                              # movea.l (32+4i,As),Ai
        c += [0x44E8 | s, 64]                                                        # move.w (64,As),ccr
        c += [0x2068 | s << 9 | s, 32 + 4 * s]                                      # movea.l (..,As),As
        c += [0x4EF9] + self.l32(target)                                             # jmp target
        return halfwords(c, big=True)

    def epilogue(self, dumps, marker):
        s = self.s
        c = [0x207C | s << 9] + self.l32(OUT)                                        # movea.l #OUT,As
        c += [0x42E8 | s, 68]                                                        # move.w ccr,(68,As)
        for i in range(8):
            c += [0x2140 | s << 9 | i, 4 * i]                                       # move.l Di,(4i,As)
        for i in range(8):
            if i != s:
                c += [0x2148 | s << 9 | i, 32 + 4 * i]                              # move.l Ai,(32+4i,As)
        c += [0x217C | s << 9] + self.l32(marker) + [self.marker_at + 4]            # move.l #marker,(76,As)
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [0x203C] + self.l32(4) + [0x223C] + self.l32(1) + [0x243C] + self.l32(base) + [0x263C] + self.l32(size) + [0x4E40]
        c += [0x203C] + self.l32(1) + [0x223C] + self.l32(0) + [0x4E40]             # exit(0)
        return halfwords(c, big=True)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i in range(8):
            struct.pack_into(">I", t, 4 * i, init.get(f"D{i}", 0) & 0xFFFFFFFF)
        for i in range(8):
            struct.pack_into(">I", t, 32 + 4 * i, init.get("SP" if i == 7 else f"A{i}", 0) & 0xFFFFFFFF)
        struct.pack_into(">H", t, 64, flagword & 0x1F)
        return bytes(t)

    def parse(self, arch, out):
        regs = {f"D{i}": struct.unpack_from(">I", out, 4 * i)[0] for i in range(8)}
        for i in range(8):
            regs["SP" if i == 7 else f"A{i}"] = struct.unpack_from(">I", out, 32 + 4 * i)[0]
        return regs, struct.unpack_from(">H", out, 68)[0] & 0x1F
# ---------------------------------------------------------------- s390x

def sz_llilf(r, v):
    return bytes([0xC0, r << 4 | 0xF]) + struct.pack(">I", v & 0xFFFFFFFF)


def sz_rxy(op, r, base, disp):
    return bytes([0xE3, r << 4, base << 4 | (disp >> 8) & 0xF, disp & 0xFF, (disp >> 12) & 0xFF, op])


class S390xHarness:
    """r0..r15 at 8*i, the condition code (IPM layout) at 128, v0..v31 at 144 + 16*i (f0..f15 are
    the leftmost doublewords of v0..v15). A scratch register the instruction does not write holds
    the table address; SPM/IPM move the condition code, VL/VST the vector registers."""
    qemu = ("qemu-s390x", ["-cpu", "max"])
    machine = 22
    big = True
    table_size = 144 + 512
    marker_at = 136

    def __init__(self):
        self.scratch = 15
        self.scratch_names = ["r15"]

    def choose_scratch(self, arch, regs, written):
        for r in range(15, 0, -1):
            n = f"r{r}"
            if n in regs and not written & set(range(regs[n][0], regs[n][0] + regs[n][1])):
                self.scratch, self.scratch_names = r, [n]
                return True
        return False

    def _temp(self):
        return 1 if self.scratch != 1 else 2

    def prologue(self, target):
        s, t = self.scratch, self._temp()
        c = sz_llilf(s, TABLES) + sz_rxy(0x04, t, s, 128) + bytes([0x04, t << 4])    # lg t; spm t
        for i in range(32):
            c += bytes([0xE7, (i & 15) << 4, s << 4 | (144 + 16 * i) >> 8, (144 + 16 * i) & 0xFF, 0x08 if i >= 16 else 0, 0x06])  # vl vi
        for i in range(16):
            if i != s:
                c += sz_rxy(0x04, i, s, 8 * i)
        c += sz_rxy(0x04, s, s, 8 * s)
        here = PROLOGUE + len(c)
        c += bytes([0xC0, 0xF4]) + struct.pack(">i", (target - here) // 2)          # brcl 15,target
        return c

    def epilogue(self, dumps, marker):
        s, t = self.scratch, self._temp()
        c = sz_llilf(s, OUT)
        for i in range(16):
            if i != s:
                c += sz_rxy(0x24, i, s, 8 * i)                                          # stg
        c += bytes([0xB2, 0x22, 0x00, t << 4]) + sz_rxy(0x24, t, s, 128)               # ipm t
        for i in range(32):
            c += bytes([0xE7, (i & 15) << 4, s << 4 | (144 + 16 * i) >> 8, (144 + 16 * i) & 0xFF, 0x08 if i >= 16 else 0, 0x0E])  # vst vi
        c += sz_llilf(t, marker) + sz_rxy(0x24, t, s, self.marker_at)
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += bytes([0xA7, 0x29, 0x00, 0x01]) + sz_llilf(3, base) + sz_llilf(4, size) + bytes([0x0A, 0x04])  # write
        c += bytes([0xA7, 0x29, 0x00, 0x00, 0x0A, 0x01])                                                   # exit(0)
        return c

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i in range(16):
            struct.pack_into(">Q", t, 8 * i, init.get(f"r{i}", 0) & (2 ** 64 - 1))
        cc = next((k for k in range(4) if init.get(f"CC{k}")), 0)
        struct.pack_into(">Q", t, 128, cc << 28)
        for i in range(32):
            t[144 + 16 * i:160 + 16 * i] = (init_vec.get(f"v{i}", 0) & (2 ** 128 - 1)).to_bytes(16, "big")
        return bytes(t)

    def parse(self, arch, out):
        regs = {f"r{i}": struct.unpack_from(">Q", out, 8 * i)[0] for i in range(16)}
        cc = (struct.unpack_from(">Q", out, 128)[0] >> 28) & 3
        for k in range(4):
            regs[f"CC{k}"] = int(cc == k)
        regs["CCA"], regs["CCB"] = int(cc >= 2), cc & 1
        for i in range(32):
            regs[f"v{i}"] = int.from_bytes(out[144 + 16 * i:160 + 16 * i], "big")
        return regs, 0


# ---------------------------------------------------------------- SPARC V9 (64-bit; 32-bit on sparc32plus)

def sp_li32(r, v):
    return [0x01000000 | r << 25 | ((v >> 10) & 0x3FFFFF), 0x80102000 | r << 25 | r << 14 | (v & 0x3FF)]


def sp_mem(op3, rd, rs1, off):
    return 0xC0002000 | rd << 25 | op3 << 19 | rs1 << 14 | (off & 0x1FFF)


class SparcHarness:
    """g1..i7 at 8*i (SLEIGH order g0..i7), Y at 256, CCR at 264, marker at 272. A register the
    instruction does not write holds the table address; the BA's delay slot restores it."""
    qemu = ("qemu-sparc64", [])
    machine = 43
    big = True
    trap = 0x6D
    seg_align = 0x2000       # 8 KiB target pages
    table_size = 280
    marker_at = 272

    def __init__(self):
        self.s = 23
        self.scratch_names = []

    def choose_scratch(self, arch, regs, written):
        for i in list(range(23, 15, -1)) + list(range(7, 0, -1)):
            n = arch.gprs[i - 1][0]
            if n in regs and not written & set(range(regs[n][0], regs[n][0] + regs[n][1])):
                self.s = i
                self.scratch_names = [n]
                return True
        return False

    def _t(self):
        return 1 if self.s != 1 else 2

    def prologue(self, target):
        s, t = self.s, self._t()
        c = sp_li32(s, TABLES)
        c += [sp_mem(0x0B, t, s, 256), 0x81802000 | t << 14]               # ldx; wr t,0,%y
        c += [sp_mem(0x0B, t, s, 264), 0x85802000 | t << 14]               # ldx; wr t,0,%ccr
        for i in range(1, 32):
            if i != s:
                c.append(sp_mem(0x0B, i, s, 8 * i))
        here = PROLOGUE + 4 * len(c)
        c += [0x10800000 | (((target - here) >> 2) & 0x3FFFFF), sp_mem(0x0B, s, s, 8 * s)]  # ba target; ldx (delay)
        return words(c, True)

    def epilogue(self, dumps, marker):
        s, t = self.s, self._t()
        c = sp_li32(s, OUT)
        for i in range(1, 32):
            if i != s:
                c.append(sp_mem(0x0E, i, s, 8 * i))
        c += [0x81400000 | t << 25, sp_mem(0x0E, t, s, 256)]               # rd %y,t
        c += [0x81408000 | t << 25, sp_mem(0x0E, t, s, 264)]               # rd %ccr,t
        c += sp_li32(t, marker) + [sp_mem(0x0E, t, s, self.marker_at)]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [0x82102004, 0x90102001] + sp_li32(9, base) + sp_li32(10, size) + [0x91D02000 | self.trap]
        c += [0x82102001, 0x90102000, 0x91D02000 | self.trap]               # exit(0)
        return words(c, True)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        mask = (1 << (64 if arch.elf64 else 32)) - 1
        for i, (n, _) in enumerate(arch.gprs[:31], start=1):
            struct.pack_into(">Q", t, 8 * i, init.get(n, 0) & mask)
        struct.pack_into(">Q", t, 256, init.get("Y", 0) & 0xFFFFFFFF)
        struct.pack_into(">Q", t, 264, flagword & 0xFF)
        return bytes(t)

    def parse(self, arch, out):
        regs = {n: struct.unpack_from(">Q", out, 8 * i)[0] for i, (n, _) in enumerate(arch.gprs[:31], start=1)}
        regs["Y"] = struct.unpack_from(">Q", out, 256)[0]
        return regs, struct.unpack_from(">Q", out, 264)[0] & 0xFF


class Sparc32Harness(SparcHarness):
    """The 32-bit SPARC V9 language on qemu-sparc32plus (V8+ ABI: 32-bit ELF, V9 CPU)."""
    qemu = ("qemu-sparc32plus", [])
    machine = 18
    flags = 0x100            # EF_SPARC_32PLUS
    elf32 = True
    trap = 0x10
# ---------------------------------------------------------------- LoongArch64

def la_li(rd, v):
    return [0x14000000 | ((v >> 12) & 0xFFFFF) << 5 | rd, 0x03800000 | (v & 0xFFF) << 10 | rd << 5 | rd]


def la_ld(rd, rj, off):
    return 0x28C00000 | (off & 0xFFF) << 10 | rj << 5 | rd


def la_st(rd, rj, off):
    return 0x29C00000 | (off & 0xFFF) << 10 | rj << 5 | rd


def la_addi(rd, rj, v):
    return 0x02C00000 | (v & 0xFFF) << 10 | rj << 5 | rd                                 # addi.d


class LaHarness:
    """r1..r31 at 8*i, f0..f31 at 264 + 8*i. A scratch register the instruction does not write
    holds the table address and reads back as its input."""
    qemu = ("qemu-loongarch64", ["-cpu", "max"])
    machine = 258
    big = False
    flags = 0x43  # EF_LOONGARCH_ABI_DOUBLE_FLOAT | EF_LOONGARCH_OBJABI_V1
    table_size = 264 + 256
    marker_at = 256

    def __init__(self):
        self.scratch = 31
        self.scratch_names = ["s8"]

    def choose_scratch(self, arch, regs, written):
        for r in range(31, 1, -1):
            n = arch.gprs[r - 1][0]
            if n in regs and not written & set(range(regs[n][0], regs[n][0] + regs[n][1])):
                self.scratch, self.scratch_names = r, [n]
                return True
        return False

    def prologue(self, target):
        s = self.scratch
        c = la_li(s, TABLES)
        for i in range(32):
            c.append(0x2B800000 | (264 + 8 * i) << 10 | s << 5 | i)                     # fld.d fi
        for i in range(1, 32):
            if i != s:
                c.append(la_ld(i, s, 8 * i))
        c.append(la_ld(s, s, 8 * s))
        off = (target - (PROLOGUE + 4 * len(c))) >> 2
        c.append(0x50000000 | (off & 0xFFFF) << 10 | (off >> 16) & 0x3FF)               # b target
        return words(c)

    def epilogue(self, dumps, marker):
        s = self.scratch
        t = 1 if s != 1 else 2
        c = la_li(s, OUT)
        for i in range(1, 32):
            if i != s:
                c.append(la_st(i, s, 8 * i))
        for i in range(32):
            c.append(0x2BC00000 | (264 + 8 * i) << 10 | s << 5 | i)                     # fst.d fi
        c += la_li(t, marker) + [la_st(t, s, self.marker_at)]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [la_addi(4, 0, 1)] + la_li(5, base) + la_li(6, size) + [la_addi(11, 0, 64), 0x002B0000]  # write
        c += [la_addi(4, 0, 0), la_addi(11, 0, 93), 0x002B0000]                                        # exit(0)
        return words(c)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i, (n, _) in enumerate(arch.gprs, start=1):
            struct.pack_into("<Q", t, 8 * i, init.get(n, 0) & (2 ** 64 - 1))
        for i, (n, _) in enumerate(arch.vecs):
            struct.pack_into("<Q", t, 264 + 8 * i, init_vec.get(n, 0) & (2 ** 64 - 1))
        return bytes(t)

    def parse(self, arch, out):
        regs = {n: struct.unpack_from("<Q", out, 8 * i)[0] for i, (n, _) in enumerate(arch.gprs, start=1)}
        for i, (n, _) in enumerate(arch.vecs):
            regs[n] = struct.unpack_from("<Q", out, 264 + 8 * i)[0]
        return regs, 0


# ---------------------------------------------------------------- PA-RISC 1.1 (32-bit, big endian)

def hp_assemble21(v):
    a = (v >> 11) & 0x1FFFFF
    return (a & 3) << 12 | (a & 0x7C) << 14 | (a & 0x180) << 7 | (a & 0xFFE00) >> 8 | (a & 0x100000) >> 20


def hp_im14(x):
    return ((x & 0x1FFF) << 1) | (1 if x < 0 else 0)


def hp_li32(r, v):
    """ldil L%v,r; ldo R%v(r),r."""
    return [0x20000000 | r << 21 | hp_assemble21(v), 0x34000000 | r << 21 | r << 16 | hp_im14(v & 0x7FF)]


def hp_ldw(t, b, off):
    return 0x48000000 | b << 21 | t << 16 | hp_im14(off)


def hp_stw(r, b, off):
    return 0x68000000 | b << 21 | r << 16 | hp_im14(off)


def hp_bl(here, target):
    d = ((target - (here + 8)) >> 2) & 0x1FFFF
    return 0xE8000000 | (d & 0x10000) >> 16 | (d & 0xF800) << 5 | (d & 0x400) >> 8 | (d & 0x3FF) << 3


class HppaHarness:
    """r1..r31 at 4*i, SAR at 128, carry (PSW CB) at 132, marker at 144. One free register holds
    the table address (the BL's delay slot restores it); a second one detects nullification: the
    epilogue's first instruction complements it, so it keeps its input value only when the
    instruction under test nullified that slot."""
    qemu = ("qemu-hppa", [])
    machine = 15
    big = True
    elf32 = True
    table_size = 152
    marker_at = 144

    def __init__(self):
        self.s, self.n = 3, 4
        self.scratch_names = []
        self.n_init = 0

    def choose_scratch(self, arch, regs, written):
        free = []
        for i in list(range(3, 20)) + [21, 22, 23, 28, 29]:
            name = arch.gprs[i - 1][0]
            if name in regs and not written & set(range(regs[name][0], regs[name][0] + regs[name][1])):
                free.append(i)
        if len(free) < 2:
            return False
        self.s, self.n = free[0], free[1]
        self.scratch_names = [arch.gprs[self.s - 1][0], arch.gprs[self.n - 1][0]]
        return True

    def _t(self):
        return next(r for r in (1, 2, 5, 6) if r not in (self.s, self.n))

    def prologue(self, target):
        s, t = self.s, self._t()
        c = hp_li32(s, TABLES)
        c += [hp_ldw(t, s, 128), 0x01601840 | t << 16]                    # mtsar t
        c += [hp_ldw(t, s, 132), 0xB4000000 | t << 21 | 0x7FF]            # addi -1,t,r0: carry = (t != 0)
        for i in range(1, 32):
            if i != s:
                c.append(hp_ldw(i, s, 4 * i))
        here = PROLOGUE + 4 * len(c)
        c += [hp_bl(here, target), hp_ldw(s, s, 4 * s)]                    # b target; ldw (delay slot)
        return words(c, True)

    def epilogue(self, dumps, marker):
        s, n, t = self.s, self.n, self._t()
        c = [0x08000980 | n << 21 | n]                                     # uaddcm r0,n,n (nullifiable)
        c += hp_li32(s, OUT)
        for i in range(1, 32):
            if i != s:
                c.append(hp_stw(i, s, 4 * i))
        c += [0x016008A0 | t, hp_stw(t, s, 128)]                           # mfctl sar,t
        c += [0x08000700 | t, hp_stw(t, s, 132)]                           # add,c r0,r0,t
        c += hp_li32(t, marker) + [hp_stw(t, s, self.marker_at + 4)]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [0x341A0002] + hp_li32(25, base) + hp_li32(24, size) + [0xE4008200, 0x34140008]  # be,l 0x100(sr2,r0); ldi 4,r20
        c += [0x341A0000, 0xE4008200, 0x34140002]                          # exit(0)
        return words(c, True)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i, (name, _) in enumerate(arch.gprs[:31], start=1):
            struct.pack_into(">I", t, 4 * i, init.get(name, 0) & 0xFFFFFFFF)
        struct.pack_into(">I", t, 128, init.get("sar", 0) & 0x1F)
        struct.pack_into(">I", t, 132, flagword & 1)
        self.n_init = init.get(arch.gprs[self.n - 1][0], 0) & 0xFFFFFFFF
        return bytes(t)

    def parse(self, arch, out):
        regs = {name: struct.unpack_from(">I", out, 4 * i)[0] for i, (name, _) in enumerate(arch.gprs[:31], start=1)}
        regs["sar"] = struct.unpack_from(">I", out, 128)[0]
        nullified = regs[arch.gprs[self.n - 1][0]] == self.n_init
        return regs, (struct.unpack_from(">I", out, 132)[0] & 1) | (2 if nullified else 0)



# ---------------------------------------------------------------- ARM / Thumb (AArch32, ELF32)

def arm_movw(rd, v):
    return 0xE3000000 | ((v >> 12) & 0xF) << 16 | rd << 12 | (v & 0xFFF)


def arm_movt(rd, v):
    return 0xE3400000 | ((v >> 28) & 0xF) << 16 | rd << 12 | ((v >> 16) & 0xFFF)


def arm_li32(rd, v):
    return [arm_movw(rd, v & 0xFFFF), arm_movt(rd, v)]


def arm_ldr(rt, rn, off):
    return 0xE5900000 | rn << 16 | rt << 12 | (off & 0xFFF)


def arm_str(rt, rn, off):
    return 0xE5800000 | rn << 16 | rt << 12 | (off & 0xFFF)


class ArmHarness:
    """A32 code on qemu-arm -cpu max. r0..r14 at 4*i, APSR (NZCVQ, GE) at 64, read back at 64.
    The prologue is A32: it sets the flags with MSR APSR_nzcvqg, loads every register but a
    scratch one, restores the scratch register last and jumps with LDR pc from a literal, which
    interworks, so a Thumb target (bit 0 set) runs as Thumb. An epilogue at a Thumb exit starts
    with BX pc from a word-aligned address (a NOP first when it is not) and a NOP, to get back to A32."""
    qemu = ("qemu-arm", ["-cpu", "max"])
    machine = 40
    big = False
    elf32 = True
    flags = 0x05000000          # EF_ARM_EABI_VER5
    table_size = 80
    marker_at = 72
    thumb = False

    def __init__(self):
        self.scratch, self.scratch_names = 12, ["r12"]

    def choose_scratch(self, arch, regs, written):
        names = [f"r{i}" for i in range(12, -1, -1)] + ["lr"]
        got = _pick_free(arch, regs, written, names, 1)
        if not got:
            return False
        self.scratch_names = got
        self.scratch = 14 if got[0] == "lr" else int(got[0][1:])
        return True

    def prologue(self, target):
        s = self.scratch
        t = 0 if s != 0 else 1
        c = arm_li32(s, TABLES)
        c += [arm_ldr(t, s, 64), 0xE12CF000 | t]                                    # msr APSR_nzcvqg, t
        for i in range(15):
            if i != s:
                c.append(arm_ldr(i, s, 4 * i))
        c.append(arm_ldr(s, s, 4 * s))
        c += [0xE51FF004, target | (1 if self.thumb else 0)]                         # ldr pc, [pc, #-4]
        return words(c)

    def epilogue_at(self, dumps, marker, at):
        head = b""
        if self.thumb:
            head = halfwords(([] if at % 4 == 0 else [0x46C0]) + [0x4778, 0x46C0])   # bx pc from a word address
        return head + self._epilogue(dumps, marker)

    def epilogue(self, dumps, marker):
        return self.epilogue_at(dumps, marker, 0)

    def _epilogue(self, dumps, marker):
        s = self.scratch
        t = 0 if s != 0 else 1
        c = arm_li32(s, OUT)
        for i in range(15):
            if i != s:
                c.append(arm_str(i, s, 4 * i))
        c += [0xE10F0000 | t << 12, arm_str(t, s, 64)]                               # mrs t, APSR
        c += arm_li32(t, marker) + [arm_str(t, s, self.marker_at)]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += arm_li32(7, 4) + arm_li32(0, 1) + arm_li32(1, base) + arm_li32(2, size) + [0xEF000000]   # write
        c += arm_li32(7, 1) + arm_li32(0, 0) + [0xEF000000]                                             # exit
        return words(c)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i, (n, _) in enumerate(arch.gprs[:15]):
            struct.pack_into("<I", t, 4 * i, init.get(n, 0) & 0xFFFFFFFF)
        struct.pack_into("<I", t, 64, flagword & 0xF80F0000)
        return bytes(t)

    def parse(self, arch, out):
        regs = {n: struct.unpack_from("<I", out, 4 * i)[0] for i, (n, _) in enumerate(arch.gprs[:15])}
        return regs, struct.unpack_from("<I", out, 64)[0]


class ThumbHarness(ArmHarness):
    """T32 code: the same harness, entered with bit 0 of the target set."""
    thumb = True


# ---------------------------------------------------------------- Alpha (64-bit, little endian)

def al_mem(op, ra, rb, disp):
    return op << 26 | ra << 21 | rb << 16 | (disp & 0xFFFF)


def al_li(r, v):
    """ldah r,hi(zero); lda r,lo(r) for v below 2^31."""
    hi = ((v + 0x8000) >> 16) & 0xFFFF
    lo = (v - (hi << 16)) & 0xFFFF
    return [al_mem(0x09, r, 31, hi), al_mem(0x08, r, r, lo)]


class AlphaHarness:
    """r0..r30 at 8*i, marker at 248. A free register holds the table address and is loaded last,
    then BR reaches the instruction (Alpha has no delay slots). qemu-alpha maps 8 KiB pages."""
    qemu = ("qemu-alpha", ["-cpu", "ev67"])
    machine = 0x9026
    big = False
    seg_align = 0x2000
    table_size = 256
    marker_at = 248

    def __init__(self):
        self.s = 28
        self.scratch_names = []

    def choose_scratch(self, arch, regs, written):
        for i in list(range(28, 0, -1)):
            n = arch.gprs[i][0]
            if n in regs and not written & set(range(regs[n][0], regs[n][0] + regs[n][1])):
                self.s = i
                self.scratch_names = [n]
                return True
        return False

    def prologue(self, target):
        s = self.s
        c = al_li(s, TABLES)
        for i in range(31):
            if i != s:
                c.append(al_mem(0x29, i, s, 8 * i))                      # ldq
        c.append(al_mem(0x29, s, s, 8 * s))
        here = PROLOGUE + 4 * len(c)
        c.append(0x30 << 26 | 31 << 21 | (((target - (here + 4)) >> 2) & 0x1FFFFF))   # br zero,target
        return words(c, False)

    def epilogue(self, dumps, marker):
        s = self.s
        t = 1 if s != 1 else 2
        c = al_li(s, OUT)
        for i in range(31):
            if i != s:
                c.append(al_mem(0x2D, i, s, 8 * i))                      # stq
        c += al_li(t, marker) + [al_mem(0x2D, t, s, self.marker_at)]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [al_mem(0x08, 0, 31, 4), al_mem(0x08, 16, 31, 1)] + al_li(17, base) + al_li(18, size) + [0x83]  # write; callsys
        c += [al_mem(0x08, 0, 31, 1), al_mem(0x08, 16, 31, 0), 0x83]                                      # exit(0)
        return words(c, False)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i, (n, _) in enumerate(arch.gprs):
            struct.pack_into("<Q", t, 8 * i, init.get(n, 0) & 0xFFFFFFFFFFFFFFFF)
        return bytes(t)

    def parse(self, arch, out):
        return {n: struct.unpack_from("<Q", out, 8 * i)[0] for i, (n, _) in enumerate(arch.gprs)}, 0


# ---------------------------------------------------------------- OpenRISC 1000 (32-bit, big endian)

def or_li32(r, v):
    """l.movhi r,hi; l.ori r,r,lo."""
    return [0x18000000 | r << 21 | (v >> 16) & 0xFFFF, 0xA8000000 | r << 21 | r << 16 | (v & 0xFFFF)]


def or_lwz(d, a, off):
    return 0x84000000 | d << 21 | a << 16 | (off & 0xFFFF)


def or_sw(b, a, off):
    return 0xD4000000 | ((off >> 11) & 0x1F) << 21 | a << 16 | b << 11 | (off & 0x7FF)


class Or1kHarness:
    """r1..r31 at 4*i; F and CY in at 128/132 and back at 136/140; marker at 144. F is set with
    l.sfne, CY with l.addi -1 (which leaves OV clear); CY reads back with l.addc and F with
    l.cmov. OV cannot be read from user mode. The l.j delay slot restores the table register.
    qemu-or1k does not hold r0 at zero, so the epilogue clears it first; r0 is not compared."""
    qemu = ("qemu-or1k", [])
    machine = 92
    big = True
    elf32 = True
    seg_align = 0x2000
    table_size = 152
    marker_at = 144

    def __init__(self):
        self.s = 30
        self.scratch_names = []

    def choose_scratch(self, arch, regs, written):
        for i in range(30, 0, -1):
            n = arch.gprs[i - 1][0]
            if n in regs and not written & set(range(regs[n][0], regs[n][0] + regs[n][1])):
                self.s = i
                self.scratch_names = [n]
                return True
        return False

    def _t(self):
        return 3 if self.s != 3 else 4

    def prologue(self, target):
        s, t = self.s, self._t()
        c = or_li32(s, TABLES)
        c += [or_lwz(t, s, 128), 0xE4200000 | t << 16]                        # l.sfne t,r0
        c += [or_lwz(t, s, 132), 0x9C000000 | t << 21 | t << 16 | 0xFFFF]     # l.addi t,t,-1
        for i in range(1, 32):
            if i != s:
                c.append(or_lwz(i, s, 4 * i))
        here = PROLOGUE + 4 * len(c)
        c += [((target - here) >> 2) & 0x3FFFFFF, or_lwz(s, s, 4 * s)]          # l.j target; l.lwz (delay slot)
        return words(c, True)

    def epilogue(self, dumps, marker):
        s, t = self.s, self._t()
        u = 5 if 5 not in (s, t) else 6
        c = [0x18000000]                                                       # l.movhi r0,0: qemu-or1k lets r0 be written
        c += or_li32(s, OUT)
        for i in range(1, 32):
            if i != s:
                c.append(or_sw(i, s, 4 * i))
        c += [0xE0000001 | t << 21, or_sw(t, s, 140)]                           # l.addc t,r0,r0
        c += [0x9C000000 | u << 21 | 1, 0xE000000E | t << 21 | u << 16, or_sw(t, s, 136)]  # l.addi u,r0,1; l.cmov t,u,r0
        c += or_li32(t, marker) + [or_sw(t, s, self.marker_at + 4)]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [0x9C000000 | 11 << 21 | 64, 0x9C000000 | 3 << 21 | 1] + or_li32(4, base) + or_li32(5, size) + [0x20000001]
        c += [0x9C000000 | 11 << 21 | 93, 0x9C000000 | 3 << 21, 0x20000001]     # exit(0)
        return words(c, True)

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i, (n, _) in enumerate(arch.gprs[:31], start=1):
            struct.pack_into(">I", t, 4 * i, init.get(n, 0) & 0xFFFFFFFF)
        struct.pack_into(">II", t, 128, flagword & 1, (flagword >> 1) & 1)
        return bytes(t)

    def parse(self, arch, out):
        regs = {n: struct.unpack_from(">I", out, 4 * i)[0] for i, (n, _) in enumerate(arch.gprs[:31], start=1)}
        f, cy = struct.unpack_from(">II", out, 136)
        return regs, (f & 1) | (cy & 1) << 1


# ---------------------------------------------------------------- MicroBlaze (32-bit, either endianness)

def mb_li32(r, v):
    """imm hi; addik r,r0,lo."""
    return [0xB0000000 | (v >> 16) & 0xFFFF, 0x30000000 | r << 21 | (v & 0xFFFF)]


class MicroBlazeHarness:
    """r1..r31 at 4*i, carry in at 128 and back at 132, marker at 136. The carry goes in with
    addi -1 and comes back with addc; imm + braid reaches the instruction and its delay slot
    restores the table register."""
    qemu = ("qemu-microblaze", [])
    machine = 189
    big = True
    elf32 = True
    table_size = 144
    marker_at = 136

    def __init__(self):
        self.s = 30
        self.scratch_names = []

    def choose_scratch(self, arch, regs, written):
        for i in [30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 13, 11, 10, 9, 8, 4, 3, 2]:
            n = arch.gprs[i - 1][0]
            if n in regs and not written & set(range(regs[n][0], regs[n][0] + regs[n][1])):
                self.s = i
                self.scratch_names = [n]
                return True
        return False

    def _t(self):
        return 3 if self.s != 3 else 4

    def prologue(self, target):
        s, t = self.s, self._t()
        c = mb_li32(s, TABLES)
        c += [0xE8000000 | t << 21 | s << 16 | 128, 0x20000000 | t << 21 | t << 16 | 0xFFFF]   # lwi; addi t,t,-1
        for i in range(1, 32):
            if i != s:
                c.append(0xE8000000 | i << 21 | s << 16 | 4 * i)
        c += [0xB0000000 | (target >> 16) & 0xFFFF, 0xB8180000 | (target & 0xFFFF),       # imm; braid
              0xE8000000 | s << 21 | s << 16 | 4 * s]                                     # lwi (delay slot)
        return words(c, self.big)

    def epilogue(self, dumps, marker):
        s, t = self.s, self._t()
        c = mb_li32(s, OUT)
        for i in range(1, 32):
            if i != s:
                c.append(0xF8000000 | i << 21 | s << 16 | 4 * i)
        c += [0x08000000 | t << 21, 0xF8000000 | t << 21 | s << 16 | 132]                 # addc t,r0,r0
        c += mb_li32(t, marker) + [0xF8000000 | t << 21 | s << 16 | (self.marker_at + (4 if self.big else 0))]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [0x30000000 | 12 << 21 | 4, 0x30000000 | 5 << 21 | 1] + mb_li32(6, base) + mb_li32(7, size) + [0xB9CC0008]
        c += [0x30000000 | 12 << 21 | 1, 0x30000000 | 5 << 21, 0xB9CC0008]              # exit(0)
        return words(c, self.big)

    def table(self, arch, init, init_vec, flagword):
        e = ">" if self.big else "<"
        t = bytearray(self.table_size)
        for i, (n, _) in enumerate(arch.gprs[:31], start=1):
            struct.pack_into(e + "I", t, 4 * i, init.get(n, 0) & 0xFFFFFFFF)
        struct.pack_into(e + "I", t, 128, flagword & 1)
        return bytes(t)

    def parse(self, arch, out):
        e = ">" if self.big else "<"
        regs = {n: struct.unpack_from(e + "I", out, 4 * i)[0] for i, (n, _) in enumerate(arch.gprs[:31], start=1)}
        return regs, struct.unpack_from(e + "I", out, 132)[0] & 1


class MicroBlazeElHarness(MicroBlazeHarness):
    qemu = ("qemu-microblazeel", [])
    big = False


HARNESSES = {"arm": ArmHarness, "thumb": ThumbHarness, "aarch64": A64Harness, "riscv64": RvHarness, "mips": MipsHarness, "mips64": Mips64Harness,
             "mipsr6": MipsR6Harness, "mips64r6": Mips64R6Harness, "nios2": Nios2Harness, "sh4": Sh4Harness,
             "ppc": lambda: PpcHarness(("qemu-ppc", ["-cpu", "7457"]), 20, True, False),
             "ppc64": lambda: PpcHarness(("qemu-ppc64", ["-cpu", "power10"]), 21, True, True, 2),
             "ppc64le": lambda: PpcHarness(("qemu-ppc64le", ["-cpu", "power10"]), 21, False, True, 2),
             "ppc64-isa": lambda: PpcHarness(("qemu-ppc64", ["-cpu", "power10"]), 21, True, True, 2),
             "ppc64le-isa": lambda: PpcHarness(("qemu-ppc64le", ["-cpu", "power10"]), 21, False, True, 2),
             "s390x": S390xHarness, "s390x-vec": S390xHarness, "m68k": M68kHarness, "loongarch64": LaHarness, "sparc64": SparcHarness, "sparc": Sparc32Harness, "hppa": HppaHarness, "alpha": AlphaHarness, "or1k": Or1kHarness, "microblaze": MicroBlazeHarness, "microblazeel": MicroBlazeElHarness}


def qemu_path(name):
    """A QEMU user binary: from the directories in $DIFFFUZZ_QEMU_DIR (separated by ':') when set,
    else from PATH."""
    for d in os.environ.get("DIFFFUZZ_QEMU_DIR", "").split(os.pathsep):
        if d and os.access(os.path.join(os.path.expanduser(d), name), os.X_OK):
            return os.path.join(os.path.expanduser(d), name)
    return shutil.which(name)

# ---------------------------------------------------------------- PowerPC (32, 64 big- and little-endian)

def ppc_li(rt, v):
    """lis rt,v>>16; ori rt,rt,v (v below 2^31)."""
    return [0x3C000000 | rt << 21 | ((v >> 16) & 0xFFFF), 0x60000000 | rt << 21 | rt << 16 | (v & 0xFFFF)]


def ppc_spr(base, rt, spr):
    return base | rt << 21 | (spr & 0x1F) << 16 | (spr >> 5) << 11


class PpcHarness:
    """r0..r31 at 8*i, LR at 256, CTR at 264, CR at 272, XER at 280, f0..f31 at 296 + 8*i. A
    scratch register the instruction does not write holds the table address (it reads back as
    its input). The 64-bit cores run in 64-bit mode, so their CR0 and CA/OV come from the
    64-bit result."""
    table_size = 296 + 256
    marker_at = 288
    xer_bits = {"xer_so": 31, "xer_ov": 30, "xer_ca": 29}

    def __init__(self, qemu, machine, big, elf64, flags=0):
        self.qemu, self.machine, self.big, self.elf64, self.flags = qemu, machine, big, elf64, flags
        self.elf32 = not elf64
        self.scratch = 31
        self.scratch_names = ["r31"]

    def choose_scratch(self, arch, regs, written):
        for r in range(31, 2, -1):
            n = f"r{r}"
            if n in regs and not written & set(range(regs[n][0], regs[n][0] + regs[n][1])):
                self.scratch, self.scratch_names = r, [n]
                return True
        return False

    def _ld(self, rt, base, off):
        return (0xE8000000 if self.elf64 else 0x80000000) | rt << 21 | base << 16 | (off & 0xFFFF)

    def _st(self, rt, base, off):
        return (0xF8000000 if self.elf64 else 0x90000000) | rt << 21 | base << 16 | (off & 0xFFFF)

    def _temp(self):
        return 3 if self.scratch != 3 else 4

    def prologue(self, target):
        s, t = self.scratch, self._temp()
        c = ppc_li(s, TABLES)
        c += [self._ld(t, s, 256), ppc_spr(0x7C0003A6, t, 8)]                 # mtlr
        c += [self._ld(t, s, 264), ppc_spr(0x7C0003A6, t, 9)]                 # mtctr
        c += [self._ld(t, s, 272), 0x7C0FF120 | t << 21]                      # mtcrf 0xff
        c += [self._ld(t, s, 280), ppc_spr(0x7C0003A6, t, 1)]                 # mtxer
        for i in range(32):
            c.append(0xC8000000 | i << 21 | s << 16 | (296 + 8 * i))         # lfd fi
        for i in range(32):
            if i != s:
                c.append(self._ld(i, s, 8 * i))
        c.append(self._ld(s, s, 8 * s))
        here = PROLOGUE + 4 * len(c)
        c.append(0x48000000 | ((target - here) & 0x3FFFFFC))                 # b target
        return words(c, self.big)

    def epilogue(self, dumps, marker):
        s, t = self.scratch, self._temp()
        c = ppc_li(s, OUT)
        for i in range(32):
            if i != s:
                c.append(self._st(i, s, 8 * i))
        c += [ppc_spr(0x7C0002A6, t, 8), self._st(t, s, 256)]                # mflr
        c += [ppc_spr(0x7C0002A6, t, 9), self._st(t, s, 264)]                # mfctr
        c += [0x7C000026 | t << 21, self._st(t, s, 272)]                     # mfcr
        c += [ppc_spr(0x7C0002A6, t, 1), self._st(t, s, 280)]                # mfxer
        for i in range(32):
            c.append(0xD8000000 | i << 21 | s << 16 | (296 + 8 * i))         # stfd fi
        mk = self.marker_at if self.elf64 or not self.big else self.marker_at + 4
        c += ppc_li(t, marker) + [self._st(t, s, mk)]
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += [0x38000004, 0x38600001] + ppc_li(4, base) + ppc_li(5, size) + [0x44000002]   # write(1, base, size)
        c += [0x38000001, 0x38600000, 0x44000002]                                            # exit(0)
        return words(c, self.big)

    def _put(self, t, off, v):
        e = ">" if self.big else "<"
        if self.elf64:
            struct.pack_into(e + "Q", t, off, v & (2 ** 64 - 1))
        else:
            struct.pack_into(e + "I", t, off, v & 0xFFFFFFFF)

    def _get(self, out, off):
        e = ">" if self.big else "<"
        return struct.unpack_from(e + ("Q" if self.elf64 else "I"), out, off)[0]

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i in range(32):
            self._put(t, 8 * i, init.get(f"r{i}", 0))
        self._put(t, 256, init.get("LR", 0))
        self._put(t, 264, init.get("CTR", 0))
        self._put(t, 272, flagword)
        xer = sum((init.get(n, 0) & 1) << b for n, b in self.xer_bits.items())
        self._put(t, 280, xer)
        e = ">" if self.big else "<"
        for i in range(32):
            struct.pack_into(e + "Q", t, 296 + 8 * i, init_vec.get(f"f{i}", 0) & (2 ** 64 - 1))
        return bytes(t)

    def parse(self, arch, out):
        regs = {f"r{i}": self._get(out, 8 * i) for i in range(32)}
        regs["LR"] = self._get(out, 256)
        regs["CTR"] = self._get(out, 264)
        xer = self._get(out, 280)
        for n, b in self.xer_bits.items():
            regs[n] = (xer >> b) & 1
        e = ">" if self.big else "<"
        for i in range(32):
            regs[f"f{i}"] = struct.unpack_from(e + "Q", out, 296 + 8 * i)[0]
        return regs, self._get(out, 272) & 0xFFFFFFFF




# ---------------------------------------------------------------- x86-64, run natively

def _x86_mov_load(reg, disp):
    """mov reg64, [rax + disp32]."""
    return bytes([0x48 | (4 if reg >= 8 else 0), 0x8B, 0x80 | ((reg & 7) << 3)]) + struct.pack("<i", disp)


def _x86_mov_store(reg, disp):
    """mov [rax + disp32], reg64."""
    return bytes([0x48 | (4 if reg >= 8 else 0), 0x89, 0x80 | ((reg & 7) << 3)]) + struct.pack("<i", disp)


def _x86_vmovdqu(reg, disp, store):
    """vmovdqu ymm, [rax + disp32] (or the store)."""
    return bytes([0xC5, (0x7E if reg >= 8 else 0xFE), 0x7F if store else 0x6F, 0x80 | ((reg & 7) << 3)]) + struct.pack("<i", disp)


class X86NativeHarness:
    """RAX..R15 at 8*i (arch.gprs order), RFLAGS at 128, YMM0..YMM15 at 192 + 32*i. Runs as a
    native process (no QEMU): the case runs on this CPU, so only instructions it implements give
    a reference; any other one ends with SIGILL (ref-exception)."""
    qemu = None
    machine = 62
    big = False
    # an FXSAVE image at 768 (FCW 0x37F, the C0-C3 bits, ST0..ST6 valid, ST7 empty, MXCSR 0x1F80)
    fx_at = 768
    table_size = 768 + 512
    marker_at = 192 + 512

    def prologue(self, target):
        c = b"\x48\xB8" + struct.pack("<Q", TABLES)                      # movabs rax, TABLES
        c += b"\x48\x0F\xAE\x88" + struct.pack("<i", self.fx_at)            # fxrstor64 [rax+fx_at]
        for i in range(16):
            c += _x86_vmovdqu(i, 192 + 32 * i, False)
        c += b"\xFF\xB0" + struct.pack("<i", 128) + b"\x9D"              # push [rax+128]; popfq
        for i in range(1, 16):
            c += _x86_mov_load(i, 8 * i)
        c += _x86_mov_load(0, 0)
        here = PROLOGUE + len(c) + 5
        return c + b"\xE9" + struct.pack("<i", target - here)           # jmp target

    def epilogue(self, dumps, marker):
        c = b"\x48\xA3" + struct.pack("<Q", OUT)                         # mov [OUT], rax
        c += b"\x48\xB8" + struct.pack("<Q", OUT)                        # movabs rax, OUT
        for i in range(1, 16):
            c += _x86_mov_store(i, 8 * i)
        c += b"\x48\xBC" + struct.pack("<Q", TABLES + 0xF00)             # movabs rsp, private stack
        c += b"\x9C\x5B" + _x86_mov_store(3, 128)                        # pushfq; pop rbx; store
        for i in range(16):
            c += _x86_vmovdqu(i, 192 + 32 * i, True)
        c += b"\x48\x0F\xAE\x80" + struct.pack("<i", self.fx_at)            # fxsave64 [rax+fx_at]
        c += b"\x48\xC7\x80" + struct.pack("<iI", self.marker_at, marker)
        for base, size in [(OUT, self.table_size)] + [(p, PAGE) for p in dumps]:
            c += b"\xB8\x01\x00\x00\x00\xBF\x01\x00\x00\x00"              # eax=1 (write); edi=1
            c += b"\x48\xBE" + struct.pack("<Q", base)                   # movabs rsi, base
            c += b"\xBA" + struct.pack("<I", size) + b"\x0F\x05"         # edx=size; syscall
        c += b"\xB8\x3C\x00\x00\x00\x31\xFF\x0F\x05"                     # exit(0)
        return c

    def table(self, arch, init, init_vec, flagword):
        t = bytearray(self.table_size)
        for i, (n, _) in enumerate(arch.gprs):
            struct.pack_into("<Q", t, 8 * i, init.get(n, 0) & (2 ** 64 - 1))
        struct.pack_into("<Q", t, 128, flagword)
        for i in range(16):
            v = init_vec.get(f"YMM{i}", 0)
            t[192 + 32 * i:224 + 32 * i] = (v & (2 ** 256 - 1)).to_bytes(32, "little")
        fx = self.fx_at
        fsw = (init.get("C0", 0) << 8) | (init.get("C1", 0) << 9) | (init.get("C2", 0) << 10) | (init.get("C3", 0) << 14)
        struct.pack_into("<HHB", t, fx, 0x37F, fsw, 0x7F)
        struct.pack_into("<I", t, fx + 24, 0x1F80)
        for i in range(8):
            t[fx + 32 + 16 * i:fx + 42 + 16 * i] = (init.get(f"ST{i}", 0) & (2 ** 80 - 1)).to_bytes(10, "little")
        return bytes(t)

    def parse(self, arch, out):
        regs = {n: struct.unpack_from("<Q", out, 8 * i)[0] for i, (n, _) in enumerate(arch.gprs)}
        for i in range(16):
            regs[f"YMM{i}"] = int.from_bytes(out[192 + 32 * i:224 + 32 * i], "little")
        fx = self.fx_at
        fsw, ftw = struct.unpack_from("<HB", out, fx + 2)
        top = (fsw >> 11) & 7
        for n, b in (("C0", 8), ("C1", 9), ("C2", 10), ("C3", 14)):
            regs[n] = (fsw >> b) & 1
        regs["_invalid"] = set()
        for i in range(8):
            regs[f"ST{i}"] = int.from_bytes(out[fx + 32 + 16 * i:fx + 42 + 16 * i], "little")
            if not (ftw >> ((top + i) & 7)) & 1:
                regs["_invalid"].add(f"ST{i}")        # an empty register holds no value
        # a stack fault (push onto a full stack, pop or read of an empty one): not modelled by SLEIGH
        regs["_undefined"] = bool(fsw & 0x40)
        return regs, struct.unpack_from("<Q", out, 128)[0]


HARNESSES["x86-64-native"] = X86NativeHarness
HARNESSES["x86-64-x87"] = X86NativeHarness


def available(arch):
    """The QEMU user binary for this architecture, or None."""
    h = HARNESSES.get(arch.name)
    if h and h().qemu is None:
        return "native"
    return h and qemu_path(h().qemu[0])


def run_case_qemu(arch, regs, row, cand, rng, seed, tmp):
    """run_case with QEMU user mode as the reference (same inputs, same report shape)."""
    addr, size = cand["addr"], len(cand["bytes"])
    bits = 64 if arch.elf64 else 32
    init = {n: arch.rand_reg(rng, bits) for n, _ in arch.gprs}
    arch.fix_inputs(init, rng)
    init_vec = {n: rng.getrandbits(8 * max(16, regs[n][1] if n in regs else 16)) for n, _ in arch.vecs}
    flags = rng.getrandbits(32)
    if hasattr(arch, "qemu_bit_values"):
        bits_ = arch.qemu_bit_values(rng)
    else:
        bits_ = {n: rng.getrandbits(1) for n in getattr(arch, "qemu_bits", ())}
    init.update(bits_)
    extra = arch.extra_init(rng) if hasattr(arch, "extra_init") else {}
    init.update(extra)
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
    for n in bits_:
        st.set(n, bits_[n])
    for n, v in extra.items():
        if n in regs:
            st.set(n, v)
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
        name = getattr(h, "gpr_name", lambda a, r: a.gprs[r - 1][0])
        for r in range(getattr(h, "max_scratch", 31), getattr(h, "min_scratch", 2) - 1, -1):
            n = name(arch, r)
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
        ep = h.epilogue_at(data_pages, 0x5EA1 + k, x) if hasattr(h, "epilogue_at") else h.epilogue(data_pages, 0x5EA1 + k)
        for i, b in enumerate(ep):
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
    align = getattr(h, "seg_align", PAGE)
    if align > PAGE:
        segs = coalesce(segs, align, lambda a: fill_byte(a, seed))
    path = os.path.join(tmp, "qemu-case.elf")
    with open(path, "wb") as f:
        build = elf32 if getattr(h, "elf32", False) else elf
        f.write(build(segs, PROLOGUE, h.machine, h.big, getattr(h, "flags", 0), align=align))
    os.chmod(path, 0o755)
    try:
        cmd = [path] if h.qemu is None else [qemu_path(h.qemu[0]), *h.qemu[1], path]
        p = subprocess.run(cmd, capture_output=True, timeout=10)
    except subprocess.TimeoutExpired:
        return {"status": "ref-exception", "why": "qemu timeout"}
    want = h.table_size + PAGE * len(data_pages)
    if b"Unable to find" in p.stderr or b"Unable to reserve" in p.stderr or b"Error mapping" in p.stderr or b"requires more than" in p.stderr or b"mmap stack" in p.stderr:
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

    if ref.get("_undefined"):
        return {"status": "undefined"}
    diffs = {}
    if not hasattr(arch, "partial"):
        partial = {}
    elif getattr(arch, "partial_uses_sleigh", False):
        partial = arch.partial(cand["mnemonic"], cand["op_str"], row)
    else:
        partial = arch.partial(cand["mnemonic"], cand["op_str"])
    for n in extra:
        if n in ignore or n not in regs or n not in ref or n in ref.get("_invalid", ()):
            continue
        w = (1 << (8 * regs[n][1])) - 1
        if st.get(n) & w != ref[n] & w:
            diffs[n] = (st.get(n) & w, ref[n] & w)
    for n, _ in arch.gprs + arch.vecs + [(b, None) for b in bits_]:
        if n in ignore or n not in regs:
            continue
        w = ((1 << (8 * regs[n][1])) - 1) & partial.get(n, -1)
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
