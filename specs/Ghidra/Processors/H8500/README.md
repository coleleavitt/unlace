# Hitachi H8/500

A clean-room SLEIGH module for the Hitachi H8/500 16-bit microcontroller family (H8/510,
H8/520, H8/532, H8/534, H8/536, H8/570), written in this repository for issue #98. It is
unrelated to the H8/300 module in `../H8` (a different instruction set). No community
SLEIGH module was consulted. The file layout (`.slaspec` + shared `.sinc`, `.ldefs`,
`.pspec`, `.cspec`) follows the in-repo Ghidra modules (Apache-2.0); the encoding tables and
p-code are new.

## Languages

- `H8500:BE:16:minimum` (`h8500_min.slaspec`): minimum mode, one 64 KiB space; the page
  registers are ignored when forming addresses.
- `H8500:BE:24:maximum` (`h8500_max.slaspec`): maximum mode, 16 MiB; data addresses are
  `page << 16 | offset` with DP (via R0-R3), EP (R4, R5), TP (R6, R7, stack) and `@aa:16`
  through DP; `@aa:8` goes through BR. PJMP/PJSR/PRTS/PRTD and the 24-bit forms are decoded
  only here.

## Sources

- Hitachi, *H8/500 Series Programming Manual* (instruction formats, effective-address byte,
  operation tables), e.g. https://www.bitsavers.org/components/hitachi/h8/ and Renesas'
  archived H8/500 documentation.
- MAME `src/devices/cpu/h8500/h8500dasm.cpp` and `h8500.cpp` (BSD-3-Clause, AJR), read for
  the decode tree (EA byte classes 0xA0-0xFF and 0x05/0x0D/0x15/0x1D, the 0x04/0x0C immediate
  prefixes, the short-format MOV:E/I/L/S/F and CMP:E/I pages, the control page 0x00-0x1F):
  https://github.com/mamedev/mame/tree/master/src/devices/cpu/h8500
- No GPL text entered the repository.

## What is modelled

- R0-R7 (R7 = SP) with byte views R0L-R7L, register pairs RR0-RR6 (MULXU/DIVXU), SR with
  CCR, the page registers CP DP EP TP BR; the flags N Z V C are separate one-byte registers
  packed into CCR only when software reads or writes it (LDC/STC/ORC/ANDC/XORC, RTE).
- General format (EA byte first): every addressing mode (Rn, @Rn, @-Rn, @Rn+, @(d8,Rn),
  @(d16,Rn), @aa:8, @aa:16, #imm) for ADD SUB CMP OR AND XOR MOV ADDS SUBS ADDX SUBX MULXU
  DIVXU LDC STC XCH, the unary group (CLR NEG NOT TST EXTS EXTU SWAP and the shifts/rotates),
  ADD:Q, BSET/BCLR/BNOT/BTST by register and by immediate, MOVFPE/MOVTPE, DADD/DSUB.
- Short format: CMP:E/CMP:I, MOV:E/MOV:I, MOV:L/MOV:S (@aa:8 via BR), MOV:F (@(d8,R6)).
- Control: Bcc (16 conditions, 8- and 16-bit displacement), BSR, JMP/JSR (aa16 and @EA),
  RTS, RTD, RTE, LINK, UNLK, SCB/F/NE/EQ, LDM/STM, TRAPA, TRAP/VS, SLEEP, NOP; in maximum mode
  PJMP/PJSR (aa24 and @RRn), PRTS, PRTD.
- Flags: carry, overflow, negative and zero for arithmetic; V cleared by logic/moves. The
  H8/500 has no half-carry flag; there are no delay slots.
- Calling convention (`h8500_min.cspec`/`h8500_max.cspec`): no public C ABI is documented;
  R0-R3 in, R0 out, SP = R7.

## Gaps

- DADD/DSUB are user-ops (`dadd`, `dsub`); MOVFPE/MOVTPE (E-clock synchronous moves) are
  user-ops; TRAPA, TRAP/VS and SLEEP are user-ops (no vector fetch modelled).
- RTE does not model the exception-frame layout differences between minimum and maximum mode
  beyond popping SR and PC.
- In maximum mode BSR/JSR push only the 16-bit return offset (CP is not pushed; that is the
  P-form instructions' job), as in the manual.

## Test vector

`crates/unlace-cli/tests/fixtures/h8500/add_cmp_store.bin` (listing `add_cmp_store.s`), run
from `crates/unlace-cli/tests/processors.toml`. Expected minimum-mode output:

```c
  if (a0 + 3U <= 0xf) {
    dat_f000 = a0 + 3U;
    return 5;
  }
  return 0;
```
