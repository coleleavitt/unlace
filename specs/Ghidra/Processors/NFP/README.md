# Netronome NFP-6xxx microengine

Written for unlace from the GNU binutils NFP disassembler (`opcodes/nfp-dis.c` and
`include/opcode/nfp.h`, binutils 2.45), read for the instruction classes and field layouts
only; no text from them is copied. No prior SLEIGH for the NFP was found.

Language: `NFP:LE:32:ME28`, the NFP-6xxx flow-processor microengine (ME version 2.8) in
8-context mode. An instruction is one little-endian 64-bit word with 44 bits used; the
program counter counts instructions, so instruction n is byte address 8 * n and branch
targets display as byte addresses.

Modelled:
- Operands: context-relative GPRs in banks A and B (`a0`-`a15`, `b0`-`b15`), absolute
  GPRs (`abs_a`, `abs_b`, kept separate from the relative names), transfer registers as
  two files (`xfer_r` read by a source operand, `xfer_w` written by a destination, as the
  hardware has separate read and write transfer registers), next-neighbour registers (read
  and write sides), local memory through `*l$index0`-`*l$index3` (the `lmem` space at
  LM_ADDRn, with `[k]` offsets and `++`/`--`) and 8-bit immediates, in both the 10-bit
  and the 8-bit operand encodings. The swap bit exchanges the A and B operand roles.
- `alu` with every arithmetic and logic operator (B, ~B, +, -, B-A, AND, ~AND, AND~, OR,
  XOR, +carry, -carry), setting N/Z/C/V unless `no_cc`; pop_count, ffs, CRC, +8, +16 and
  the CAM operations as user-ops.
- `alu_shf` (rotate, shift right, shift left), `asr`, `dbl_shf`, `immed` (inverted,
  shifted, `immed_bN`, `immed_wN`), `ld_field` and `ld_field_w_clr` with byte masks and
  `load_cc`.
- Branches: the condition-code branches, `br`, `br=byte`/`br!=byte` (mnemonics
  `br_byte_eq`/`br_byte_ne`), `br_bset`/`br_bclr`, `jump` and `rtn` (the target is
  the register value times 8), with `defer[1-3]` as delay slots. Context, signal and
  input-state branches test a `ctx_state` user-op.
- `ctx_arb` (kill ends the flow), `local_csr_rd`/`local_csr_wr`, the multiply steps and the
  CPP memory commands (`cpp_cmd` with target/action, mode, transfer register, address
  operands, length and signal).

Gaps: there is no NFP ABI, so the compiler spec declares no parameters and every input
register shows as a local. Indexed transfer and next-neighbour operands (`*$index`,
`*n$index`) read as 0; the absolute GPRs do not alias the context-relative ones; a CPP
command does not fill or read the transfer registers it names; `predicate_cc`,
`gpr_wrboth` and the indirect shift amounts are not modelled; 4-context mode and the
NFP-32xx (ME 2.7) encodings have no language.

Oracle: `objdump` from binutils 2.45 built with all targets (`elf64-nfp`, machine
NFP-6xxx) decoded both fixtures (wrapped in a minimal ELF) to the instructions the test
comments name; the images are hand-encoded from the field layouts. Tests:
`crates/unlace-cli/tests/nfp_raw.rs`.
