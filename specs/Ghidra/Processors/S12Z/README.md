# S12Z

NXP S12Z processor module for unlace (issue #98).

## Sources

- NXP, *S12Z CPU Reference Manual* (S12ZCPURM), opcode map and addressing-mode tables:
  https://www.nxp.com/docs/en/reference-manual/S12ZCPU_RM_V1.pdf
- NXP MC9S12ZVL / MC9S12ZVC / MC9S12ZVM / S12ZVH reference manuals (memory map, vectors):
  https://www.nxp.com/products/processors-and-microcontrollers/s12-magniv-mixed-signal-mcus:S12MAGNIV

Clean-room: written from the manufacturer documentation; no GPL text and no community
SLEIGH module was used. Structure follows the in-repo TLCS90 and Rabbit modules (Apache-2.0).

## Languages

| id | description |
|---|---|
| `S12Z:BE:24:default` | S12Z CPU, big-endian, 24-bit linear address space |

## Modelled

- Registers D0-D1 (8-bit), D2-D5 (16-bit), D6-D7 (32-bit), X, Y, SP, PC (24-bit), CCR and
  the flags C, V, Z, N (as separate flag registers).
- Page 1: NOP, BGND, SWI, RTS, BRA, BSR and the 14 conditional branches (7-bit and 15-bit
  relative offsets, relative to the opcode address), JMP/JSR with a 24-bit address,
  ADD/SUB/CMP/LD with an immediate of the register width, ADD/SUB/CMP/LD/ST with an OPR
  operand, LD/ST with a 24-bit address. C, V, N and Z are set by ADD/SUB/CMP; LD/ST set N, Z
  and clear V.
- OPR operand subset: 24-bit direct (postbyte FB) and 14-bit direct (postbyte 10xxxxxx).

## Gaps

- The page-2 prefix (1B) instructions, AND/OR/EOR/BIT, INC/DEC/CLR, shifts and rotates,
  MUL/DIV/MOD/MAC, MOV, PSH/PUL, LEA, bit operations, DBcc/TBcc, BRSET/BRCLR, X/Y loads and
  stores are not decoded yet.
- OPR modes other than the two direct ones (short immediate, register, indexed with
  offset, pre/post increment/decrement, indirect) are not decoded.
- The half-carry flag and the CCR bit image are not maintained; RTI is missing.

## Test vectors

`crates/unlace-cli/tests/fixtures/s12z/add_store.{bin,s}`, checked by
`crates/unlace-cli/tests/s12z_raw.rs`. Expected C:

```c
unsigned short sub_0(short a0)
{
  if (a0 + 3U <= 0xf) {
    dat_8000 = a0 + 3U;
    return 5;
  }
  return 0;
}
```


## Encoding check (second round)

The opcode page 1 rows used here, the register field numbering (0-3 D2-D5,
4-5 D0-D1, 6-7 D6-D7), the 7/15-bit branch displacement and the OPR postbyte
modes were re-checked against the GNU binutils S12Z disassembler tables
(sourceware.org binutils-gdb, opcodes/s12z-opc.c, read only for the encoding;
no text taken). Corrections: the 14-bit direct OPR form is 00aaaaaa (not
10aaaaaa) and the 24-bit direct form is postbyte 0xFA (0xFB is -(S)). Added
OPR modes: (u4,xys), (s9,xysp), [s9,xysp], (s24,xysp), [s24,xysp], (Dn,xys),
[Dn,xy], (u18,Dn), (u24,Dn), 18-bit direct and [ext24]. Still missing: the
auto increment/decrement and stack push/pop OPR forms, the register (10111ddd)
and short-immediate (0111nnnn) OPR operands, PC-relative OPR base is taken as
the instruction start.
