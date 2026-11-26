# NEC 78K/0 and 78K/0S

Generated for unlace by `tools/gen_78k0.py` from the "Instruction code list" of NEC's
78K/0 Series Instructions user's manual (U12326E) and 78K/0S Series Instructions user's manual
(U11047E). Do not edit the `.slaspec` files by hand: change the generator and rerun it
(`python3 tools/gen_78k0.py specs/Ghidra/Processors/78K0/data/languages`).

Languages:

- `78K0:LE:16:default`: the 78K/0 series (uPD78xx).
- `78K0S:LE:16:default`: the 78K/0S series (uPD78Fxxx, 78K0S/Kx1 and Kx2).

## What is modelled

- Registers `X A C B E D L H` and the pairs `AX BC DE HL` in register space, as the bank that
  `SEL RBn` selects. The bank's alias in internal RAM (FEE0H-FEFFH) is not modelled.
- `PC` and `SP`; `PSW` as IE, Z, AC and CY plus PSWO (RBS1, RBS0, ISP).
- Internal RAM and SFR addressing (`saddr`, `sfr`), absolute `!addr16`, register-indirect
  `[DE]`, `[HL]`, `[HL+byte]`, `[HL+B]`, `[HL+C]`.
- Calls and returns: `CALL`, `CALLF`, `CALLT` and `BRK` push the return address at `SP`;
  `RET`, `RETB` and `RETI` pop it.
- Relative branches are `goto`s to the decoded target; `HALT` and `STOP` are user ops.

## Not modelled

- The register-bank alias in internal RAM (see above).
- Interrupt entry and the vector table beyond the reset symbol.
- Instruction timing.

## Verification

- 78K0 (checked by decompiling hand-assembled bytes with `unlace decompile --raw-image`, the
  `k78` rows of `crates/unlace-cli/tests/processors.toml`): `CALL !addr16` (9AH), `RET` (AFH),
  `MOV A,#byte` (A1H), `ADD A,#byte` (0DH), `MOV !addr16,A` (9EH), `MOV A,saddr` (F0H) and
  `BNZ $addr16` (BDH). The opcode values are the ones the generator encodes from the manual rows.
- Not checked: the rest of the 78K0 table, every 78K0S instruction, and `CALLF`, `CALLT`, `BRK`,
  `RETB`, `RETI` and the bit operations. The 78K0S opcode map differs from the 78K0 map (its
  `NOP` and `RET` bytes differ), so the 78K0 test bytes are not decoded by the 78K0S language.
