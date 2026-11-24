# Toshiba TLCS-870

SLEIGH module for the Toshiba TLCS-870 8-bit microcontroller family (TMP87xx).

## Sources

- Toshiba TLCS-870 Series data books, instruction set chapter (public datasheets).
- MAME `src/devices/cpu/tlcs870` (BSD-3-Clause), <https://github.com/mamedev/mame/tree/master/src/devices/cpu/tlcs870>:
  the disassembler (`tlcs870d.cpp`) for decode and `tlcs870_ops*.cpp` for flag behaviour.

Clean-room: written from the documents above; no existing community SLEIGH module was used.

## Languages

| id | processor |
|---|---|
| `TLCS870:LE:16:default` | TLCS-870 (TMP87xx), 64 KiB |
| `TLCS870C:LE:16:default` | TLCS-870/C (TMP86xx), 64 KiB (`tlcs870c.slaspec`, `tlcs870c.cspec`) |

## Modelled

The primary opcode page: loads, INC/DEC, ALU A,#n / A,(x), 16-bit loads, shifts/rotates of A, bit
set/clear/test of (x), JRS T/F, JR cc, JR, JP, CALL, CALLP, CALLV, SWI, RET, RETI, PUSH/POP PSW, MUL, DIV.
The prefix pages, following MAME's `decode_source`, `decode_dest` and `decode_register_prefix`:

- 0xE0-0xE7 (src) prefix, modes (x), (PC+A), (DE), (HL), (HL+d), (HL+C), (HL+), (-HL): ROLD/RORD, LD rr,
  INC/DEC, LD (x)/(HL),(src), MCMP, SET/CLR/CPL bit, LD bit,CF / LD CF,bit / XOR CF,bit, LD r, XCH r,
  ALU (src),(HL) / (src),#n / A,(src), CALL (src), JP (src).
- 0xF0-0xF7 (dst) prefix: LDW (dst),rr, LD (dst),#n, LD (dst),r.
- 0xE8-0xEF register prefix (g / gg): SWAP, MUL, DIV, RETN (E8 04), PUSH/POP gg, DAA/DAS, XCH/LD rr,gg,
  shifts/rotates, ALU WA,gg / gg,#mn / A,g / g,A / g,#n, bit ops on g and (DE)/(HL) with bit index g,
  LD r,g, XCH r,g, LD SP,gg, LD gg,SP, CALL gg, JP gg.

Flags JF, ZF, CF, HF are separate 1-byte registers; carry and half carry follow MAME's helpers.

## Gaps

- Register banks (LD RBS,n) are a named pcodeop; the registers are plain registers, not bank RAM.
- DAA/DAS are named pcodeops; RETN calls the named pcodeop `retn` before returning.
- (PC+A) uses the address of the byte after the prefix and opcode bytes (inst_start + 2); not checked
  against hardware.
- Invalid encodings MAME leaves empty (for example 0x08, 0x09, 0xF1, 0xF5, 0xF8, 0xF9) decode as bad
  instructions.

## Test vectors

`crates/unlace-cli/tests/fixtures/tlcs870/add_store.bin` (listing `add_store.s`), checked by
`crates/unlace-cli/tests/processors.toml` row `tlcs870`, which expects

```c
char sub_e000(char a0)
{
  if ((char)(a0 + '\x05') == '\x10') {
    dat_80 = a0 + '\x05';
    return 0x10;
  }
  return 0;
}
```

## TLCS-870/C (`tlcs870c.slaspec`)

The TLCS-870/C core of the TMP86 family has the TLCS-870 mnemonics but a different encoding,
seven 16-bit registers (WA BC DE HL IX IY SP) and the SF and VF flags.

Sources:

- Toshiba, *TLCS-870/C Series Instruction Set* (INST-1..INST-23, 1999-08-26, a scanned excerpt):
  addressing modes, register codes, flag rules and the transfer/exchange encodings.
- The opcode tables of the AS macro assembler's TLCS-870/C target (`code870c.c`, its
  `t_870c` test), used as an oracle: its 4,212 test encodings were assembled and compared with
  this module's disassembly; nothing was copied.

Modelled: every prefix page. Source memory (E0 (x), E1 (vw), E2-E7 (DE) (HL) (IX) (IY) (+SP)
(HL+C), D4-D7 (IX+d) (IY+d) (SP+d) (HL+d), 4F (PC+A)), destination memory (F0-F7, 54-57,
F6 (SP-)), and the register prefix E8-EF (g / gg). Loads, LDW, XCH, the eight ALU operations on
8- and 16-bit registers, memory and immediates, INC/DEC, bit operations (SET, CLR, CPL, LD CF /
TEST, LD .b,CF, XOR CF, and the .A register-indirect bit forms), shifts and rotates, MUL, DIV,
NEG, ROLD/RORD, PUSH/POP (registers and PSW), LD PSW,n, JR with the eight basic and the eight
prefixed conditions (M P SLT SGE SLE SGT VS VC), JRS, JP, CALL, CALLV, RET, RETI, RETN, SWI.
PSW packs JF ZF CF HF SF VF from bit 7 down, as LD PSW,n describes.

Where the AS tables and the Toshiba manual disagree, the manual wins:

- `LD rr,gg` is `1110 1ggg : 0100 1rrr` (E8+gg, 48+rr) in the manual; AS emits 18+rr, which
  collides with `ADDC/ADD/... B,g`.
- `LDW (x),mn` is `08 x n m`; AS drops the address byte.

Gaps:

- AS gives `CLR CF`, `SET CF`, `CPL CF` as the single bytes C4, C5, C6, which overlap the short
  `SET (x).b` form (C0+b) for bits 4-6 (EI/DI are `SET/CLR (003A).0`, so the short form is
  real). No manual page covering them was available; this module follows AS for the CF
  instructions, so `SET (x).4`..`.6` decode only in their long (E0-prefixed) form.
- `LD CF,(x).b` and `TEST (x).b` share an encoding (AS); the lift sets CF to the bit and ZF
  and JF to its complement.
- DAA/DAS and SWI are named pcodeops; the register-bank select (LD RBS,n) is a pcodeop.
- The cspec copies the TLCS-870 register-based default (no public C ABI).

Test vectors: `crates/unlace-cli/tests/fixtures/tlcs870c/funcs.bin` (source `funcs.asm`,
assembled with AS), checked by the `tlcs870c` row of `processors.toml`: an add/compare/store,
a 16-bit add of a global, a CALL, a signed-max through `JR SGE` and a word copy.
