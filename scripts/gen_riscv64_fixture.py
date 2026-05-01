#!/usr/bin/env python3
"""Generate a minimal RISC-V RV64I little-endian ELF64 fixture.

Produces fixtures/riscv64_features.elf with two functions:
  - rv_add_check (0x10000100): ADDI, ADD, LW, SW, BEQ, RET
  - rv_branch_loop (0x10000130): ADDI, LW, SW, BEQ, JAL, JALR, RET

Instructions use RV64I base integer ISA (all 32-bit fixed-width).
"""

import struct
import sys
from pathlib import Path

# ── Constants ──────────────────────────────────────────────────────────────
ELFCLASS64 = 2
ELFDATA2LSB = 1  # Little-endian
ET_EXEC = 2
EM_RISCV = 0xF3
EV_CURRENT = 1
PT_LOAD = 1
PF_R = 4
PF_X = 1
SHT_NULL = 0
SHT_PROGBITS = 1
SHT_SYMTAB = 2
SHT_STRTAB = 3
SHF_ALLOC = 2
SHF_EXECINSTR = 4

BASE_ADDR = 0x10000000
TEXT_VADDR = 0x10000100
FUNC1_ADDR = TEXT_VADDR          # rv_add_check
FUNC2_ADDR = TEXT_VADDR + 0x40   # rv_branch_loop

# ── RV64I instruction encoding helpers ─────────────────────────────────────

def r_type(opcode, rd, funct3, rs1, rs2, funct7):
    """Encode R-type: funct7[6:0] | rs2[4:0] | rs1[4:0] | funct3[2:0] | rd[4:0] | opcode[6:0]"""
    return (funct7 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | opcode

def i_type(opcode, rd, funct3, rs1, imm12):
    """Encode I-type: imm[11:0] | rs1[4:0] | funct3[2:0] | rd[4:0] | opcode[6:0]"""
    return ((imm12 & 0xFFF) << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | opcode

def s_type(opcode, funct3, rs1, rs2, imm12):
    """Encode S-type: imm[11:5] | rs2[4:0] | rs1[4:0] | funct3[2:0] | imm[4:0] | opcode[6:0]"""
    imm_lo = imm12 & 0x1F
    imm_hi = (imm12 >> 5) & 0x7F
    return (imm_hi << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (imm_lo << 7) | opcode

def b_type(opcode, funct3, rs1, rs2, imm13):
    """Encode B-type: imm[12|10:5] | rs2 | rs1 | funct3 | imm[4:1|11] | opcode
    imm13 is the signed offset (must be even)."""
    imm = imm13 & 0x1FFE  # bits [12:1], bit 0 is always 0
    bit12 = (imm >> 12) & 1
    bit11 = (imm >> 11) & 1
    bits10_5 = (imm >> 5) & 0x3F
    bits4_1 = (imm >> 1) & 0xF
    return (bit12 << 31) | (bits10_5 << 25) | (rs2 << 20) | (rs1 << 15) | \
           (funct3 << 12) | (bits4_1 << 8) | (bit11 << 7) | opcode

def j_type(opcode, rd, imm21):
    """Encode J-type (JAL): imm[20|10:1|11|19:12] | rd | opcode
    imm21 is the signed offset (must be even)."""
    imm = imm21 & 0x1FFFFF
    bit20 = (imm >> 20) & 1
    bits10_1 = (imm >> 1) & 0x3FF
    bit11 = (imm >> 11) & 1
    bits19_12 = (imm >> 12) & 0xFF
    return (bit20 << 31) | (bits10_1 << 21) | (bit11 << 20) | (bits19_12 << 12) | (rd << 7) | opcode

# Register aliases
X0, X1, X2, X3, X4, X5 = 0, 1, 2, 3, 4, 5
X8, X10, X11, X12 = 8, 10, 11, 12
RA, SP = X1, X2

# Opcodes
OP_IMM  = 0x13  # I-type ALU
OP_REG  = 0x33  # R-type ALU
OP_LOAD = 0x03  # Loads
OP_STORE= 0x23  # Stores
OP_BRANCH=0x63  # Branches
OP_JAL  = 0x6F  # JAL
OP_JALR = 0x67  # JALR

def addi(rd, rs1, imm):  return i_type(OP_IMM, rd, 0, rs1, imm)
def add(rd, rs1, rs2):   return r_type(OP_REG, rd, 0, rs1, rs2, 0)
def sub(rd, rs1, rs2):   return r_type(OP_REG, rd, 0, rs1, rs2, 0x20)
def lw(rd, rs1, imm):    return i_type(OP_LOAD, rd, 2, rs1, imm)
def sw(rs2, rs1, imm):   return s_type(OP_STORE, 2, rs1, rs2, imm)
def beq(rs1, rs2, off):  return b_type(OP_BRANCH, 0, rs1, rs2, off)
def bne(rs1, rs2, off):  return b_type(OP_BRANCH, 1, rs1, rs2, off)
def jal(rd, off):         return j_type(OP_JAL, rd, off)
def jalr(rd, rs1, imm):  return i_type(OP_JALR, rd, 0, rs1, imm)
def ret():                return jalr(X0, RA, 0)  # jalr x0, 0(x1)

# ── Function 1: rv_add_check ──────────────────────────────────────────────
# int rv_add_check(int a, int b) {
#     int sum = a + b;
#     if (sum == 0) return -1;
#     return sum;
# }
func1_insns = [
    addi(SP, SP, -16),       # addi sp, sp, -16   (allocate frame)
    sw(RA, SP, 8),           # sw ra, 8(sp)       (save return addr)
    sw(X10, SP, 0),          # sw a0, 0(sp)       (save arg a)
    sw(X11, SP, 4),          # sw a1, 4(sp)       (save arg b)
    lw(X10, SP, 0),          # lw a0, 0(sp)       (reload a)
    lw(X11, SP, 4),          # lw a1, 4(sp)       (reload b)
    add(X10, X10, X11),      # add a0, a0, a1     (sum = a + b)
    beq(X10, X0, 8),         # beq a0, x0, +8     (if sum==0 goto ret_neg)
    jal(X0, 12),             # j +12              (skip to epilogue)
    addi(X10, X0, -1),       # addi a0, x0, -1    (a0 = -1)  [ret_neg]
    lw(RA, SP, 8),           # lw ra, 8(sp)       (restore ra)
    addi(SP, SP, 16),        # addi sp, sp, 16    (deallocate frame)
    ret(),                   # ret
]

# ── Function 2: rv_branch_loop ────────────────────────────────────────────
# int rv_branch_loop(int n) {
#     int i = 0;
#     while (i < n) i++;
#     return i;
# }
func2_insns = [
    addi(SP, SP, -16),       # addi sp, sp, -16
    sw(RA, SP, 8),           # sw ra, 8(sp)
    sw(X10, SP, 0),          # sw a0, 0(sp)       (save n)
    addi(X11, X0, 0),        # addi a1, x0, 0     (i = 0)
    # loop:
    lw(X10, SP, 0),          # lw a0, 0(sp)       (reload n)
    beq(X11, X10, 12),       # beq a1, a0, +12    (if i==n goto done)
    addi(X11, X11, 1),       # addi a1, a1, 1     (i++)
    jal(X0, -12),            # j -12              (goto loop)
    # done:
    add(X10, X11, X0),       # add a0, a1, x0     (return i)  [mv a0, a1]
    lw(RA, SP, 8),           # lw ra, 8(sp)
    addi(SP, SP, 16),        # addi sp, sp, 16
    ret(),                   # ret
]

# ── Encode instructions ───────────────────────────────────────────────────
func1_bytes = b''.join(struct.pack('<I', insn) for insn in func1_insns)
func2_bytes = b''.join(struct.pack('<I', insn) for insn in func2_insns)

# Pad func1 to align func2 at 0x40 offset
FUNC1_PAD = 0x40
assert len(func1_bytes) <= FUNC1_PAD, f"func1 too large: {len(func1_bytes)}"
func1_bytes = func1_bytes.ljust(FUNC1_PAD, b'\x00')

text_bytes = func1_bytes + func2_bytes
text_size = len(text_bytes)

# ── Symbol table ──────────────────────────────────────────────────────────
# .strtab: \0 rv_add_check \0 rv_branch_loop \0
strtab = b'\x00rv_add_check\x00rv_branch_loop\x00'

# ELF64 Sym: st_name(4) st_info(1) st_other(1) st_shndx(2) st_value(8) st_size(8) = 24 bytes
def elf64_sym(name_off, info, shndx, value, size):
    return struct.pack('<IBBHQQ', name_off, info, 0, shndx, value, size)

STB_GLOBAL = 1
STT_FUNC = 2
sym_info = (STB_GLOBAL << 4) | STT_FUNC

symtab = b''
symtab += elf64_sym(0, 0, 0, 0, 0)  # STN_UNDEF
symtab += elf64_sym(1, sym_info, 1, FUNC1_ADDR, len(func1_insns) * 4)   # rv_add_check
symtab += elf64_sym(14, sym_info, 1, FUNC2_ADDR, len(func2_insns) * 4)  # rv_branch_loop

# ── Section name string table (.shstrtab) ─────────────────────────────────
shstrtab = b'\x00.text\x00.symtab\x00.strtab\x00.shstrtab\x00'
# offsets:  0     1       7         15        23

# ── Layout ────────────────────────────────────────────────────────────────
# ELF header:     0x000 - 0x03F  (64 bytes)
# Program header: 0x040 - 0x077  (56 bytes)
# Padding:        0x078 - 0x0FF
# .text:          0x100 - 0x100+text_size
# .symtab:        0x200
# .strtab:        0x400
# .shstrtab:      0x500
# Section hdrs:   0x600

TEXT_OFF = 0x100
SYMTAB_OFF = 0x200
STRTAB_OFF = 0x400
SHSTRTAB_OFF = 0x500
SHDR_OFF = 0x600

# ── ELF64 Header ──────────────────────────────────────────────────────────
e_ident = bytes([
    0x7F, 0x45, 0x4C, 0x46,  # magic
    ELFCLASS64,               # 64-bit
    ELFDATA2LSB,              # little-endian
    EV_CURRENT,               # version
    0,                        # OS/ABI
    0, 0, 0, 0, 0, 0, 0, 0,  # padding
])

ehdr = e_ident + struct.pack('<HHIQQQIHHHHHH',
    ET_EXEC,        # e_type
    EM_RISCV,       # e_machine
    EV_CURRENT,     # e_version
    FUNC1_ADDR,     # e_entry
    0x40,           # e_phoff (program header offset)
    SHDR_OFF,       # e_shoff (section header offset)
    0x0005,         # e_flags (RVC + float ABI double = 0x0005 for RV64GC, 0 for RV64I)
    64,             # e_ehsize
    56,             # e_phentsize
    1,              # e_phnum
    64,             # e_shentsize
    5,              # e_shnum
    4,              # e_shstrndx
)

# ── Program Header (PT_LOAD, R+X) ────────────────────────────────────────
phdr = struct.pack('<IIQQQQQQ',
    PT_LOAD,                    # p_type
    PF_R | PF_X,                # p_flags
    0,                          # p_offset
    BASE_ADDR,                  # p_vaddr
    BASE_ADDR,                  # p_paddr
    TEXT_OFF + text_size,       # p_filesz
    TEXT_OFF + text_size,       # p_memsz
    0x10000,                    # p_align
)

# ── Section Headers ───────────────────────────────────────────────────────
def shdr(name, sh_type, flags, addr, offset, size, link=0, info=0, addralign=1, entsize=0):
    return struct.pack('<IIQQQQIIQQ',
        name, sh_type, flags, addr, offset, size, link, info, addralign, entsize)

shdrs = b''
shdrs += shdr(0, SHT_NULL, 0, 0, 0, 0)                                          # [0] NULL
shdrs += shdr(1, SHT_PROGBITS, SHF_ALLOC|SHF_EXECINSTR, TEXT_VADDR, TEXT_OFF, text_size, addralign=4)  # [1] .text
shdrs += shdr(7, SHT_SYMTAB, 0, 0, SYMTAB_OFF, len(symtab), link=3, info=1, addralign=8, entsize=24)  # [2] .symtab
shdrs += shdr(15, SHT_STRTAB, 0, 0, STRTAB_OFF, len(strtab))                    # [3] .strtab
shdrs += shdr(23, SHT_STRTAB, 0, 0, SHSTRTAB_OFF, len(shstrtab))                # [4] .shstrtab

# ── Assemble ──────────────────────────────────────────────────────────────
elf = bytearray(SHDR_OFF + len(shdrs))

# Write ELF header
elf[0:len(ehdr)] = ehdr
# Write program header
elf[0x40:0x40+len(phdr)] = phdr
# Write .text
elf[TEXT_OFF:TEXT_OFF+len(text_bytes)] = text_bytes
# Write .symtab
elf[SYMTAB_OFF:SYMTAB_OFF+len(symtab)] = symtab
# Write .strtab
elf[STRTAB_OFF:STRTAB_OFF+len(strtab)] = strtab
# Write .shstrtab
elf[SHSTRTAB_OFF:SHSTRTAB_OFF+len(shstrtab)] = shstrtab
# Write section headers
elf[SHDR_OFF:SHDR_OFF+len(shdrs)] = shdrs

# ── Write output ──────────────────────────────────────────────────────────
out_path = Path(__file__).resolve().parent.parent / 'fixtures' / 'riscv64_features.elf'
out_path.write_bytes(bytes(elf))
print(f'Wrote {len(elf)} bytes to {out_path}')
print(f'  .text: {text_size} bytes ({text_size // 4} instructions)')
print(f'  func1 (rv_add_check):   {FUNC1_ADDR:#x}, {len(func1_insns)} insns')
print(f'  func2 (rv_branch_loop): {FUNC2_ADDR:#x}, {len(func2_insns)} insns')
