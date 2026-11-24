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
  W/LW override SR.LW for word loads (LD dd,nn, LD HL,(nn), LD (nn),HL).
- Z80 base page: 8-bit loads, LD (BC)/(DE)/(nn), 16-bit loads, PUSH/POP, EX, EXX, the
  eight ALU operations on A (register, (HL), immediate), INC/DEC, ADD HL,dd, the
  accumulator rotates, DAA (user-op), CPL, SCF, CCF, JP/JR/DJNZ/CALL/RET/RST with
  conditions, DI/EI/HALT, IN A,(n)/OUT (n),A; IX/IY forms for loads, ALU (IX+d) and
  INC/DEC; ED page: NEG, IM, RETI, RETN, LD dd,(nn), LD (nn),dd, ADC/SBC HL,dd, LDIR;
  CB page: RLC, RRC, RL, RR, SLA, SRA, SRL, BIT, RES, SET; Z380 SETC/RESC LW, SETC XM, SETC/RESC LCK.
- Flags: carry, half carry, overflow/parity and sign/zero for the 8-bit ALU (Z80 rules),
  carry/half carry for ADD HL, full flags for ADC/SBC HL.
- Calling convention (`z380.cspec`): register based (HL/BC/DE in, A or HL out), 2-byte
  return address (Native mode).

## Gaps

- Not decoded yet: CB 30-37 (EX A,r on the Z380, not SLL), IN r,(C)/OUT (C),r,
  LDI/LDD/LDDR/CPI/CPIR/CPD/CPDR/INI/OUTI blocks, RLD/RRD, LD A,I/R, and the Z380-only
  instructions (SWAP, EXTS, MULTW/MULTUW, DIVUW, CALR, JP/CALL (IX+d), LDW (IR),nn,
  EXALL/EXXX/EXXY, IN0/OUT0, the (SP+d) and 16-bit displacement DDCB/FDCB forms, the
  CPW/ADDW/SUBW word ALU, BTEST, register bank selection SELECT/SETC/RESC beyond LW/XM/LCK).
- Long Word mode is applied to the word loads listed above only; PUSH/POP, CALL/RET
  and EX are always 16-bit (Extended-mode 32-bit stack frames are not modelled), and
  in Extended mode a 16-bit JP/CALL target keeps the upper 16 bits of the current PC.
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

The CLI test `crates/unlace-cli/tests/z380_raw.rs` decompiles
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
