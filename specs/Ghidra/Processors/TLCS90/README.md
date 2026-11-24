# Toshiba TLCS-90

A clean-room SLEIGH module for the Toshiba TLCS-90 8-bit microcontroller core
(TMP90C840, TMP90C841, TMP90C844, TMP90C845, TMP90CM40 and relatives), written in
this repository for issue #98. No prior SLEIGH module existed for this family; none
was copied. The structure (one `.slaspec` plus `.ldefs`/`.pspec`/`.cspec`) follows the
in-repo Ghidra Z80 module (Apache-2.0), but the encoding tables and p-code are new.

Language: `TLCS90:LE:16:default` (little-endian, 64 KiB address space).

## Sources

- Toshiba, *TLCS-48/90 8-Bit Microcontroller* data book (1988), TLCS-90 data sheet and
  instruction-table appendix:
  https://www.bitsavers.org/components/toshiba/_dataBook/1988_Toshiba_TLCS-48_90_8_Bit_Microcontroller.pdf
- MAME `src/devices/cpu/tlcs90/tlcs90.cpp` and `tlcs90d.cpp` (BSD-3-Clause), read for the
  decode tree and the flag behaviour only: https://github.com/mamedev/mame/tree/master/src/devices/cpu/tlcs90

## What is modelled

- Registers A F B C D E H L, the pairs BC DE HL AF, the alternate set (EX AF,AF' and
  EXX), IX IY SP PC. The flags S Z I H X V N C are separate one-byte registers
  (`fS`..`fC`) and are packed into F only where software can read F (PUSH/POP AF,
  EX AF,AF', RETI).
- The whole base instruction set: the one-byte page (including the `(FF00+n)` direct
  short forms), the source-memory prefixes E0-E7 / F0-F3 (`(gg)`, `(mn)`, `(FF00+n)`,
  `(IX/IY/SP+d)`, `(HL+A)`), the destination prefixes E8-EF / F4-F7 and the register
  prefixes F8-FE; LD/LDW/LDA/LDAR, EX/EXX, PUSH/POP, the eight ALU operations in 8 and
  16 bits, INC/DEC/INCW/DECW, INCX/DECX (conditional on X), the eight shifts and
  rotates, RLD/RRD, BIT/SET/RES/TSET, MUL/DIV, LDI/LDIR/LDD/LDDR/CPI/CPIR/CPD/CPDR,
  JP/JR/JRL/CALL/CALR/RET/RETI with all sixteen conditions, DJNZ (B and BC), DAA, CPL,
  NEG, RCF/SCF/CCF, DI/EI.
- Flags: carry, half carry (bit 3 for bytes, bit 11 for words), overflow, parity for the
  logic and shift operations, and the X (extension carry) flag, set from carry by the
  arithmetic and from a zero result by INC/DEC.
- Relative branches (JR, DJNZ, JRL, CALR, LDAR) are relative to the next instruction.
- Calling convention (`tlcs90.cspec`): no public C ABI is documented, so the default
  model is register based: A, BC, DE, HL in, A (byte) or HL (word) out, a 2-byte return
  address on the stack.

## Gaps

- DAA is two user-ops (`decimalAdjust`, `decimalAdjustCarry`); HALT and SWI are user-ops
  (SWI does not model the push of PC and AF or the jump to 0010).
- DIV by zero leaves `HL = divideByZero(HL)` and sets V; the chip's exact result is not modelled.
- The BX/BY bank registers of the 1 MiB parts (TMP90C841A and others) are memory-mapped
  I/O registers; IX/IY-relative addressing stays 16-bit, so code above 64 KiB is not
  modelled.
- The TMP90C051 LDC instruction for its DMA registers is not decoded.

## Test vectors

No TLCS-90 assembler or emulator is installed, so the vectors were assembled by hand
from the data book's instruction tables and checked with the decompiler's
`decomp_dbg` (`load raw TLCS90:LE:16:default ...`, `disassemble`) and `unlace decompile`:

| Bytes | Instruction | Semantics checked |
|---|---|---|
| `68 03` | `ADD A,0x3` | A = A + 3; S Z H V N=0 C X |
| `EB 00 80 26` | `LD (0x8000),A` | byte store to 8000 |
| `6F 0A` | `CP A,0xa` | flags of A - 10, A unchanged |
| `CE 03` | `JR NZ,$+5` | branch on !Z to next + 3 |
| `36 05` / `1E` | `LD A,0x5` / `RET` | return value 5 in A |
| `F1 FB 48` | `LD BC,(IY-0x5)` | 16-bit load, signed displacement |
| `F7 3A` | `LDA HL,HL+A` | HL = HL + zero-extended A |
| `FE 59` | `LDIR` | (DE) = (HL), DE++, HL++, BC--, repeat while BC != 0 |
| `EB 00 90 D6` | `CALL Z,0x9000` | conditional call |
| `FE DE` | `RET NZ` | conditional return |

The CLI test `crates/unlace-cli/tests/tlcs90_raw.rs` decompiles
`crates/unlace-cli/tests/fixtures/tlcs90/add_store.bin` (listing in `add_store.s`) to

```c
char sub_1000(char a0)
{
  dat_8000 = a0 + '\x03';
  if ((char)(a0 + '\x03') == '\n')
    return 5;
  return 0;
}
```
