# Rabbit 2000 / 3000A / 4000 / 5000 / 6000

A clean-room SLEIGH module for the Rabbit Semiconductor (Digi) Rabbit 2000 and Rabbit
3000A microprocessors, written in this repository for issue #98. No prior SLEIGH module
was consulted. The Rabbit is Z180-derived but re-assigns many opcodes, so the encoding
tables were written from the Rabbit manual, not adapted from the in-repo Z80 module.

Languages:

- `Rabbit2000:LE:16:default` (`rabbit2000.slaspec`): the Rabbit 2000 instruction set,
  which is also the base instruction set of the Rabbit 3000.
- `Rabbit3000:LE:16:default` (`rabbit3000.slaspec`): the same set plus the Rabbit 3000A
  additions (`@define R3000A`).
- `Rabbit4000:LE:16:default` (`rabbit4000.slaspec`, `rabbit4000.sinc`, `@define R4000`): the
  Rabbit 4000 and Rabbit 5000 (identical instruction sets). LD r,g and the 8-bit ALU on a
  register or (HL) move behind the 7F prefix, and the freed opcodes carry the 4000 additions.
- `Rabbit6000:LE:16:default` (`rabbit6000.slaspec`, `rabbit6000.sinc`, `@define R6000`): the
  4000 set plus the Rabbit 6000 additions.

Both share `rabbit.sinc`, `rabbit.pspec` and `rabbit.cspec`.

## Sources

- Rabbit Semiconductor, *Rabbit 2000/3000 Microprocessor Instruction Reference Manual*
  (019-0098): opcode tables, flag effects and the 3000A additions.
- Rabbit Semiconductor, *Rabbit 2000 Microprocessor User's Manual* and *Rabbit 3000
  Microprocessor User's Manual*: the MMU (XPC, segment registers), the I/O prefixes and
  the interrupt priority stack.
- Digi, *Rabbit Family of Microprocessors Instruction Reference Manual* (019-0098 rev. L):
  the Rabbit 4000/5000 opcode tables and operations.
- Rabbit Semiconductor's *Rabbit 6000 Instruction Spreadsheet* (as distributed with z88dk):
  the 6000 opcodes and operations.
- Encodings cross-checked against z88dk's `cpu_test_r4k_ok.asm` and `cpu_test_r6k_ok.asm`
  tables (mnemonic and bytes per line; used as an oracle, nothing copied). Where the manual
  and z88dk disagree (the manual prints `RL 1,BCDE` and `RLC 1,BCDE` both as DD 68, and
  lists unprefixed `OR A`/`XOR A` for the 4000), the z88dk encoding is used.
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

## Rabbit 4000 / 5000 / 6000

- Registers JK and the 32-bit BCDE (BC:DE) and JKHL (JK:HL) with their alternates, the
  32-bit pointer registers PW, PX, PY, PZ (and PW'..PZ'), HTR and the 12-bit LXPC.
- A pointer-register address is physical (the `phys` space) unless its upper 16 bits are
  all ones, which makes it a long logical address into `ram`; LDL loads such an address,
  so a constant pointer folds to the global it names.
- 4000: loads and stores of A, HL, BC, DE, IX, IY, BCDE, JKHL and pointer registers through
  (ps+d), (ps+HL), (ps+BC), (SP+n), (SP+HL), (HTR+HL), (mn) and the 24-bit LDF forms;
  pointer arithmetic (`LD pd,ps+d`, `+DE`, `+HL`, `+IX`, `+IY`); 32-bit ADD/SUB/AND/OR/XOR/CP,
  NEG, TEST, the 1/2/4/8-bit rotates and shifts of BCDE/JKHL and RLB/RRB; ADD/SUB HL,JK,
  SUB/XOR HL,DE, CP HL,d / HL,DE, TEST, NEG, CLR HL, MULU; EX with BC/JK/JKHL; the GT, GTU, LT
  and V conditions on JR/JP/JRE/LLJP and FLAG; JRE, DWJNZ, CALL (HL)/(IX)/(IY), PUSH mn,
  LLJP/LLCALL/LLRET.
- 6000: the 49 page (8-, 16- and 32-bit ALU with pointer-register, (ps+d) and (SP+n)
  operands, INC/DEC (ps+d), the PLDI..PLSDR pointer block moves, the SHA/MD5 round
  functions, the SL/RL/SR/RR n REG chains through JKHL and PW..PZ'), 16/32-bit ALU on
  (IX+d)/(IY+d), ADD IX/IY,d, SWAP (bit reverse on 8-bit registers, byte swap on pairs),
  TSTNULL, INC/DEC pd, ADC/SBC JKHL,BCDE, MUL/MULU HL,DE (into JKHL), TEST DE, EX JKHL,BCDE'.
- Checked: every line of z88dk's r4k table (10,826 entries) and r6k table (15,947) that is a
  single instruction decodes to the same mnemonic, operands and length; the remaining
  entries are z88dk aliases (`mov`, `cmp`, `ret pe`...) and multi-instruction macros.

## Gaps

- The MMU is not modelled: addresses are 16-bit logical, and the XPC window
  (E000-FFFF) and the segment registers do not translate to physical addresses. LJP and
  LCALL set XPC and jump to the 16-bit logical target.
- UMA and UMS (multi-precision multiply-accumulate) are user-ops that return the carry
  and clear BC; their memory effects are not modelled. IDET and SYSCALL are user-ops.
- ALTD on a flag-only instruction does not select an alternate F (the flags are one set).
- 4000/6000: the IOI/IOE prefixes do not redirect the new pointer-register and 32-bit
  memory operands. ALTS (6000) is decoded, but sources still read the main register set
  (ALTSD's destination half is modelled, as ALTD). CONVC/CONVD/CNVC/CNVD, CBM, COPY/COPYR,
  EXP, SBOX/IBOX, the AES steps, PUMA/PUMS, SETSYSP/SETUSRP, SYSRET and FSYSCALL are
  user ops. LXPC holds 12 bits and is not used for address translation.

## Test vectors

No Rabbit assembler or emulator is installed, so the CLI fixture was assembled by hand
from the instruction reference tables (listing in
`crates/unlace-cli/tests/fixtures/rabbit/add_store.s`). The CLI test
`crates/unlace-cli/tests/processors.toml` row `rabbit` decompiles it under both languages to

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

The `rabbit4000` row of `processors.toml` decompiles `fixtures/rabbit4000/funcs.bin`
(listing `funcs.s`, hand-assembled) under the 4000 and 6000 languages: a 32-bit add of
two globals, a load through an LDL pointer, the 7F-prefixed ALU, `CP HL,5` with `JR GT`,
and (6000 only) a 49-page `ADD A,(PX+2)`.
