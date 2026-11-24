# Rabbit 2000 / Rabbit 3000A

A clean-room SLEIGH module for the Rabbit Semiconductor (Digi) Rabbit 2000 and Rabbit
3000A microprocessors, written in this repository for issue #98. No prior SLEIGH module
was consulted. The Rabbit is Z180-derived but re-assigns many opcodes, so the encoding
tables were written from the Rabbit manual, not adapted from the in-repo Z80 module.

Languages:

- `Rabbit2000:LE:16:default` (`rabbit2000.slaspec`): the Rabbit 2000 instruction set,
  which is also the base instruction set of the Rabbit 3000.
- `Rabbit3000:LE:16:default` (`rabbit3000.slaspec`): the same set plus the Rabbit 3000A
  additions (`@define R3000A`).

Both share `rabbit.sinc`, `rabbit.pspec` and `rabbit.cspec`.

## Sources

- Rabbit Semiconductor, *Rabbit 2000/3000 Microprocessor Instruction Reference Manual*
  (019-0098): opcode tables, flag effects and the 3000A additions.
- Rabbit Semiconductor, *Rabbit 2000 Microprocessor User's Manual* and *Rabbit 3000
  Microprocessor User's Manual*: the MMU (XPC, segment registers), the I/O prefixes and
  the interrupt priority stack.
- Dynamic C documentation for the calling convention (first argument in L/HL, result
  in L/HL, IX as frame pointer).

## What is modelled

- Registers A F B C D E H L, the pairs AF BC DE HL, the alternate set (`A' .. HL'`),
  IX IY SP PC, and XPC, IP, IIR, EIR and (3000A) SU. The flags S Z LV C are separate
  one-byte registers, packed into F only where software reads or writes F (PUSH/POP AF,
  EX AF,AF').
- Prefixes as context: ALTD (0x76) redirects the destination register to the alternate
  set; IOI (0xD3) and IOE (0xDB) redirect a memory operand to the internal (`io`) or
  external (`ioe`) I/O space; DD/FD select IX/IY in place of HL.
- 8- and 16-bit loads, including the Rabbit forms `LD HL,(SP+n)`, `LD HL,(IX+d)`,
  `LD XPC,A`; the eight ALU operations in 8 bits and ADC/SBC/ADD/AND/OR in 16 bits,
  BOOL, MUL (signed 16x16 into HL:BC), INC/DEC, the CB-page shifts, rotates, BIT/SET/RES,
  NEG, CPL, CCF, SCF; EX/EXX; PUSH/POP; JP/JR/DJNZ/CALL/RET/RETI with the Rabbit
  conditions (NZ Z NC C on JR, plus LZ LO P M on JP/RET); RST through IIR; LJP/LCALL/LRET (XPC is
  saved and set, and the 16-bit target is used); IPSET/IPRES on the IP stack; the block
  moves LDI/LDIR/LDD/LDDR; LDP to and from the 20-bit physical space `phys` (A[3:0] is
  the high nibble of the address).
- Rabbit 3000A: IDET, LDISR/LDDSR, LSIR/LSDR/LSIDR/LSDDR, UMA/UMS, RDMODE, SETUSR,
  SURES, PUSH/POP SU, SYSCALL.
- Flags: S, Z, LV (overflow for arithmetic, the logical-overflow nibble test for the
  logic and shift operations) and C, as the manual gives them per instruction.
- Calling convention (`rabbit.cspec`): Dynamic C, first argument in HL (L for a byte),
  the rest on the stack, result in HL, IX and SP preserved.

## Gaps

- The MMU is not modelled: addresses are 16-bit logical, and the XPC window
  (E000-FFFF) and the segment registers do not translate to physical addresses. LJP and
  LCALL set XPC and jump to the 16-bit logical target.
- UMA and UMS (multi-precision multiply-accumulate) are user-ops that return the carry
  and clear BC; their memory effects are not modelled. IDET and SYSCALL are user-ops.
- ALTD on a flag-only instruction does not select an alternate F (the flags are one set).
- The 4000/5000/6000 extensions (32-bit registers JKHL/BCDE, PW..PZ pointer registers)
  are not decoded.

## Test vectors

No Rabbit assembler or emulator is installed, so the CLI fixture was assembled by hand
from the instruction reference tables (listing in
`crates/unlace-cli/tests/fixtures/rabbit/add_store.s`). The CLI test
`crates/unlace-cli/tests/rabbit_raw.rs` decompiles it under both languages to

```c
unsigned short sub_0(char a0)
{
  if ((unsigned char)(a0 + 3U) <= 0xf) {
    dat_8000 = a0 + 3U;
    return 5;
  }
  return 0;
}
```
