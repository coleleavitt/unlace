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

- TLCS-870/C (different encoding) is not modelled.
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
