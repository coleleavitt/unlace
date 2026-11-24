# TI TMS320C1x

Written for unlace from TI's public *TMS320C1x User's Guide* (SPRU013D).

Languages:

- `TMS320C1x:BE:16:default`: TMS32010, TMS320C10/C14/C15/C17. 16-bit instruction words are stored
  high byte first, the usual layout of a ROM dump.
- `TMS320C1x:LE:16:default`: the same core, with words stored low byte first.

The C1x is not object-code compatible with the C2x (`TMS320C2x`): it has a 1-bit ARP and DP, two
auxiliary registers and a four-level hardware stack, and its encodings differ (`IN`/`OUT`, for one).

## Sources

- The user's guide: the auxiliary-register and memory chapter (3.3) and the individual instruction
  pages of chapter 4 (operation, encoding, flags). The 9-bit auxiliary-register counter, the
  8-bit indirect address, the page-1 store of `SST`, `BANZ` decrementing whether or not it
  branches, and the stack level that `TBLR`/`TBLW` use come from those pages.
- Checked by decoding every 16-bit first word (each followed by a second word for the two-word
  branches) and comparing mnemonic, length and operands with MAME's BSD-3-Clause TMS320C1x
  disassembler (`tms320c1x_dasm.cpp`), run as an external program. All 65,536 agree, apart from
  three cases:
  - `MPYK` prints its 13-bit constant signed, as the guide defines it.
  - `SST` in direct mode prints the page-1 address it writes.
  - Indirect operands with both the increment and the decrement bit set (MAME's `??`) are not
    decoded: the guide gives them no meaning.

## What is modelled

- **Spaces.** Program memory (`prog`), data memory (`data`) and the eight I/O ports (`io`) are
  separate spaces of 16-bit words.
- **Flow context.** ARP and DP are flow context while they are known: after `LARP`, `LDPK` or an
  indirect `,ARn` operand. A direct operand is then a fixed data address, and an indirect one is a
  fixed auxiliary register. After `LST`/`LDP` both are read from the registers. At reset both are
  unknown.
- **Calls and returns.** `CALL`, `CALA` and interrupts push onto the four-level stack STK0-STK3;
  `RET` pops it. `PUSH`/`POP` move the low 12 bits of the accumulator.
- **Not modelled.** The overflow-mode (OVM) saturation: `OV` is set and the sum wraps. The `BIO`
  pin is a p-code op.
