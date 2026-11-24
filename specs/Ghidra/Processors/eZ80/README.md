# Zilog eZ80

A clean-room SLEIGH module for the Zilog eZ80 CPU core (eZ80Acclaim! eZ80F91, eZ80F92,
eZ80F93, eZ80L92, eZ80190), written in this repository for issue #98. No existing
community module was consulted or copied. The layout (`.slaspec` + `.sinc` +
`.ldefs`/`.pspec`/`.cspec`) follows the in-repo Ghidra Z80 module (Apache-2.0); the
decode tables and p-code are new.

Languages (one `.sla`, the `.pspec` sets the `adl` context bit):

- `eZ80:LE:24:ADL`: ADL mode, 24-bit registers, addresses and immediates.
- `eZ80:LE:24:Z80`: Z80 mode, 16-bit registers and immediates; memory addresses are
  `{MB, addr16}`.

## Sources

- Zilog, *eZ80 CPU User Manual* (UM0077), opcode maps, instruction descriptions and
  the memory-mode suffix rules: https://www.zilog.com/docs/um0077.pdf
- Zilog, *Z80 CPU User Manual* (UM0080) for the base Z80 set:
  https://www.zilog.com/docs/z80/um0080.pdf
- MAME `src/devices/cpu/z80/z80dasm.cpp`, `z80.lst`, `ez80.cpp` (BSD-3-Clause), read for
  the decode tree and flag behaviour: https://github.com/mamedev/mame/tree/master/src/devices/cpu/z80
- tgtakaoka/libasm `src/table_z80.cpp`/`.hpp` (Apache-2.0), opcode tables:
  https://github.com/tgtakaoka/libasm
- GNU binutils `opcodes/z80-dis.c` (GPL; read only to cross-check the eZ80 ED-page
  encodings, no text taken): https://sourceware.org/git/?p=binutils-gdb.git;a=blob;f=opcodes/z80-dis.c

## Design

Decoding runs in three phases (context field `phase`): an optional memory-mode suffix
byte (`.SIS` 40, `.LIS` 49, `.SIL` 52, `.LIL` 5B) sets the data width `lm` and the
immediate width `im` for one instruction; then an optional DD/FD prefix sets `xy`
(HL/IX/IY); then the opcode decodes. Width-free instructions are in `ez80_common.sinc`;
the width-dependent ones are in `ez80_adl.sinc` (24-bit) and `ez80_z80.sinc` (16-bit),
generated from one template by textual substitution (the slacomp in this repo does not
paste `$(X)` into identifiers).

## What is modelled

- The full Z80 set: main page, CB, ED, DD/FD (IX/IY, IXH/IXL/IYH/IYL), DDCB/FDCB.
- eZ80 additions: LEA, PEA, LD rr,(HL) / LD (HL),rr, LD rr,(IX/IY+d) / LD (IX/IY+d),rr,
  LD IX/IY,(HL), LD I,HL / LD HL,I, LD A,MB / LD MB,A, MLT, TST, TSTIO, IN0/OUT0,
  IN r,(BC)/OUT (BC),r, INIM/INDM/OTIM/OTDM and repeats, INI2/IND2/OUTI2/OUTD2 and
  repeats, INIRX/INDRX/OTIRX/OTDRX, STMIX/RSMIX, SLP, and the four suffixes.
- Flags S Z H PV N C as separate bytes, packed into F for PUSH/POP AF and EX AF,AF';
  carry, half carry, overflow and parity are computed for the ALU, INC/DEC, shifts and
  16/24-bit ADD/ADC/SBC.
- I/O space `io` (16-bit port addresses), JR/DJNZ relative to the next instruction,
  3-byte return addresses in ADL mode, 2-byte in Z80 mode.
- Calling convention (`.cspec`): register based, HL/A results, arguments on the stack
  (Zilog ZDS II style).

## Gaps

- DAA, HALT, SLP, DI/EI, IM n, RETN/RETI interrupt state and the MADL/ADL mixed-mode
  call frames (CALL.IS/.IL pushing an extra mode byte, STMIX/RSMIX effect on
  interrupts) are user-ops or simplified: a suffixed CALL/RET pushes/pops only the
  address in the selected width.
- The undocumented X/Y flag bits (3 and 5) are not modelled.
- Block I/O instructions set only Z and N.
- Mixing an `.LIL`-style suffix with an instruction that has no memory or immediate
  operand decodes but has no effect.

## Test vectors

No eZ80 assembler is installed, so the vectors were assembled by hand from the UM0077
opcode maps and checked with `decomp_dbg` (`load raw eZ80:LE:24:ADL 0 0 FILE`,
`disassemble`) and `unlace decompile`:

| Bytes | Instruction |
|---|---|
| `5B 21 34 12 00` | `LD.LIL HL,0x001234` |
| `ED 22 05` | `LEA HL,IX+5` |
| `ED 65 10` | `PEA IX+0x10` |
| `ED 4C` | `MLT BC` |
| `ED 07` / `ED 0F` | `LD BC,(HL)` / `LD (HL),BC` |
| `DD 07 05` | `LD BC,(IX+5)` |
| `ED 6D` | `LD MB,A` |
| `ED 64 0F` | `TST A,0x0F` |
| `ED 38 10` / `ED 39 10` | `IN0 A,(0x10)` / `OUT0 (0x10),A` |
| `ED 7D` / `ED 7E` / `ED 76` | `STMIX` / `RSMIX` / `SLP` |
| `DD CB 03 46` | `BIT 0,(IX+3)` |
| `DD 7E FE` | `LD A,(IX-2)` |
| `FD 21 00 00 01` | `LD IY,0x010000` |
| `40 2A 00 90` | `LD.SIS HL,(0x9000)` |
| `ED 82` | `INIM` |
| `10 FE` | `DJNZ $` |

The `crates/unlace-cli/tests/processors.toml` row `ez80` decompiles
`crates/unlace-cli/tests/fixtures/ez80/add_store.bin` (listing in `add_store.s`, ADL
mode, base 0) to

```c
undefined3 sub_0(void)
{
  if ((unsigned char)(dat_c000 + 3U) <= 0xf) {
    dat_8000 = dat_c000 + 3U;
    return 5;
  }
  return 0;
}
```
