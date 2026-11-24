# Zilog Z380

A clean-room SLEIGH module for the Zilog Z380 (Z80-compatible superset with a 32-bit
Extended mode), written in this repository for issue #98. No other SLEIGH module for
the Z380 was consulted. The structure (one `.slaspec` plus `.ldefs`/`.pspec`/`.cspec`)
follows the in-repo Ghidra Z80 and Rabbit modules (Apache-2.0); the 8-bit flag
computations are adapted from `../Z80/data/languages/z80.slaspec` (Apache-2.0,
Ghidra contributors), the Z380 encodings and modes are new.

Language: `Z380:LE:32:default` (little-endian, 32-bit linear address space, 4 GiB).

## Sources

- Zilog, *Z380 Microprocessor User's Manual* (DC-8297-03): register file, Native/Extended
  and Word/Long Word modes, decoder directives (chapter 5), instruction descriptions
  (chapter 6) and the opcode lists of Appendices B-E: https://zilog.com/docs/serial/z380um.pdf
- MAME, binutils and tgtakaoka/libasm were checked; none of them has a Z380 decoder, so
  every encoding here comes from the manual's Appendix C (numeric opcode order) and
  Appendix E (DDIR IB/IW forms).

## What is modelled

- Registers: the 32-bit BCX DEX HLX IXX IYX SPX and PC, with the Z80 16-bit pairs BC DE
  HL IX IY SP as their low halves and the 8-bit A F B C D E H L IXH IXL IYH IYL; the
  alternate set (EX AF,AF', EXX); SR, I, R. Flags S Z H P/V N C are one-byte registers
  packed into F by PUSH/POP AF and EX AF,AF'.
- Modes as context: `xm` (SR.XM, Extended mode: 32-bit PC; set by SETC XM, no way back
  except reset) and `lw` (SR.LW, Long Word mode; SETC LW / RESC LW), committed with
  `globalset` to the following code. The pspec starts in Native, Word mode.
- Decoder directives `DD C0` (W), `DD C1` (IB,W), `DD C2` (IW,W), `DD C3` (IB),
  `FD C0` (LW), `FD C1` (IB,LW), `FD C2` (IW,LW), `FD C3` (IW): they apply to the
  next instruction only; IB widens a 16-bit immediate/address to 24 bits, IW to 32 bits;
  W/LW override SR.LW for word loads and stack ops (LD dd,nn, LD HL,(nn), LD (nn),HL,
  LDW, PUSH/POP BC/DE/HL/IX/IY, EX (SP),HL, EXTS).
- Z80 base page: 8-bit loads, LD (BC)/(DE)/(nn), 16-bit loads, PUSH/POP, EX, EXX, the
  eight ALU operations on A (register, (HL), immediate), INC/DEC, ADD HL,dd, the
  accumulator rotates, DAA (user-op), CPL, SCF, CCF, JP/JR/DJNZ/CALL/RET/RST with
  conditions, DI/EI/HALT, IN A,(n)/OUT (n),A; IX/IY forms for loads, ALU (IX+d) and
  INC/DEC; ED page: NEG, IM, RETI, RETN, LD dd,(nn), LD (nn),dd, ADC/SBC HL,dd, LDIR;
  CB page: RLC, RRC, RL, RR, SLA, SRA, SRL, BIT, RES, SET, and CB 30-37 EX r,r'; Z380 SETC/RESC LW, SETC XM, SETC/RESC LCK.
- ED page additions: EX A,r / EX A,(HL) (ED 07-3F), IN r,(C), OUT (C),r, OUT (C),n,
  LDI/LDD/LDDR, CPI/CPD/CPIR/CPDR, INI/IND/INIR/INDR, OUTI/OUTD/OTIR/OTDR, RLD/RRD,
  LD A,I / LD A,R / LD I,A / LD R,A.
- Z380-only: SWAP BC/DE/HL/IX/IY, EXTS A, EXTSW HL, MULTW/MULTUW/DIVUW (register, IX/IY,
  immediate and (IX/IY+d)), the word ALU ADDW/SUBW/ANDW/XORW/ORW/CPW on HL with BC/DE/HL,
  an immediate, IX/IY and (IX/IY+d), CALR and CALR cc with 8/16/24-bit displacements
  (ED/DD/FD CD, C4-FC), JR/JR cc/DJNZ with 16-bit (DD) and 24-bit (FD) displacements,
  LDW (BC)/(DE)/(HL),nn, EXALL, EXXX, EXXY, LDCTL HL,SR / SR,HL / SR,A / SR,n, PUSH/POP SR,
  BTEST and MTEST (user-ops).
- DDCB/FDCB rotates, shifts, BIT/RES/SET and MULTW/MULTUW/DIVUW on (IX/IY+d), with the
  displacement widened to 16 bits by DDIR IB and 24 bits by DDIR IW.
- Flags: carry, half carry, overflow/parity and sign/zero for the 8-bit ALU (Z80 rules),
  carry/half carry for ADD HL, full flags for ADC/SBC HL.
- Calling convention (`z380.cspec`): register based (HL/BC/DE in, A or HL out), 2-byte
  return address (Native mode). CALL/CALR/RST push, and RET pops, a 4-byte return
  address when `xm` is set.

## Gaps

- Not decoded yet: JP/CALL (IX+d), IN0/OUT0/TST/TSTIO, the (SP+d) and DDCB word loads
  (LD rr,(IX+d), LD (SP+d),rr), the word rotates/shifts (RLCW..SRLW), the LDIW/LDIRW/INIW
  word block forms, EX BC,BC' (ED CB 30-35), LDW I,HL / LDW HL,I, LD with IXU/IYU, SELECT
  and the DI/EI mask forms.
- The Long Word mode bit makes the word loads, LDW, PUSH/POP and EX (SP),HL 32-bit; the
  block instructions keep a 16-bit BC count and the word ALU stays 16-bit, as Appendix C
  marks them. LDCTL to SR does not update the `xm`/`lw` context (only SETC/RESC do).
  RETI/RETN are decoded in Native mode only. In Extended mode a 16-bit JP/CALL target keeps
  the upper 16 bits of the current PC.
- HALT, DI/EI, IM and DAA are user-ops.

## Test vectors

No Z380 assembler or emulator is installed, so the vectors were assembled by hand from
Appendix C and checked with `unlace decompile --raw-image --target Z380:LE:32:default`:

| Bytes | Instruction | Semantics checked |
|---|---|---|
| `3A 00 80` / `32 01 80` | `LD A,(8000H)` / `LD (8001H),A` | byte load and store |
| `C6 05` / `FE 10` / `38 04` | `ADD A,05H` / `CP 10H` / `JR C` | carry from the compare |
| `21 00 90` .. `ED B0` | `LD HL/DE/BC,nn`, `LDIR` | copy loop |
| `DD 21 00 80` / `DD 7E 05` | `LD IX,8000H` / `LD A,(IX+5)` | indexed load |
| `CB 27` / `ED 44` | `SLA A` / `NEG` | A = -(2A), carry = A != 0 |
| `CB 0F` `CB 17` `CB 1F` `CB 2F` | `RRC A`, `RL A`, `RR A`, `SRA A` | rotate chain through carry |
| `ED 4B 00 70` / `ED 4A` | `LD BC,(7000H)` / `ADC HL,BC` | carry into HL |
| `FD C3 21 78 56 34 12` | `DDIR IW` + `LD HL,12345678H` | 32-bit immediate |
| `DD C1 32 00 00 01` | `DDIR IB,W` + `LD (010000H),A` | 24-bit address |
| `DD F7` .. `2A`/`22` .. `DD FF` | `SETC LW`, `LD HL,(nn)`, `RESC LW` | 32-bit word move |
| `CB 46` / `28 03` / `CD 00 20` / `10 F6` / `C0` | `BIT`, `JR Z`, `CALL`, `DJNZ`, `RET NZ` | branches |
| `ED 84` / `ED CB 90` / `ED 86 34 12` | `ADDW HL,BC` / `MULTW HL,BC` / `ADDW HL,1234H` | (HL+BC)*BC signed, +1234H |
| `ED 07` / `DD CB 05 06` / `ED A0` / `ED 6F` | `EX A,B` / `RLC (IX+5)` / `LDI` / `RLD` | swap, rotate, copy, digit rotate |
| `DD CD 02 00` | `CALR` (16-bit) | call to inst_next+2 |
| `CB 30` / `ED 78` / `ED 79` / `ED 3E` / `ED 75` / `DD 18 00 00` | `EX B,B'`, `IN A,(C)`, `OUT (C),A`, `SWAP HL`, `EXTSW`, `JR` (16-bit) | decode and data flow |
| `DD F7` / `C5` | `SETC LW` / `PUSH BC` | 4-byte push in Long Word mode |

The `crates/unlace-cli/tests/processors.toml` row `z380` decompiles
`crates/unlace-cli/tests/fixtures/z380/add_store.bin` (listing in `add_store.s`) to

```c
void sub_100(void)
{
  if (0x10 <= (unsigned char)(dat_8000 + 5U)) {
    dat_8001 = dat_8000 + 5U;
    return;
  }
}
```
