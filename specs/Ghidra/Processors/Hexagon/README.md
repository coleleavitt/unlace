# Hexagon

## HMX (#98)

`data/languages/hexagon_hmx.sinc`, included by `hexagon.slaspec`, decodes the
Hexagon Matrix Extension instructions that are publicly documented.

Sources: the Qualcomm Hexagon V81 HMX Programmer's Reference Manual
(80-N2040-62 Rev AA) for the operand fields and behaviour, and the `M8_*`
records of LLVM's `HexagonDepInstrInfo.td` (LLVM commit 34f2fb6b56, "Hexagon
hmx") for the encodings. LLVM's MC test `HexagonTestWriter/v73_hmx.s` lists
one checked word per instruction; all ten decode to LLVM's syntax. No released
LLVM disassembles HMX yet, so there is no objdump oracle.

Modelled: decode and display of all ten instructions in the existing
`Hexagon:LE:32:default` language (no encoding collides with an existing
constructor). Each lifts to a named pcodeop over the operand fields the manual
defines:

| Instruction | pcodeop arguments |
|---|---|
| `activation.hf = mxmem(Rs,Rt)` (`:deep`, `:single`) | `Rs & ~0x7ff` (crouton address), `Rs & 0x7ff` (offset, channel start), `Rt` |
| `weight.hf = mxmem(Rs,Rt)` (`:deep`) | `Rs & ~0x7f` (address), `Rs[5]` (negate), `Rt & ~0x7f` (dW) |
| `bias = mxmem2(Rs)`, `mxmem2(Rs) = bias` | `Rs & ~0xff` (address), `Rs & 3` (bias set) |
| `cvt.hf = acc(Rs)` | `Rs[13:12]` (bias select), `Rs & 0xfff` (rounding, feedback, accumulator) |
| `mxmem(Rs,Rt) = cvt` | `Rs & ~0x7ff` (address), `Rt` (spatial mask) |
| `mxclracc.hf` | none |

Gaps: the accumulators, convert state, bias registers and VTCM reads/writes
are not modelled (the pcodeops carry no memory effects). Only the FP16 subset
is public; integer HMX forms are not documented and not decoded. Decompiling
a multi-instruction packet (which an activation/weight pair always is) fails
in the crossbuild step for every Hexagon packet, not only HMX; disassembly is
unaffected.

## Local changes (unlace)

Vendored from Ghidra; besides HMX above, unlace changes `hexagon.slaspec` and
`hexagon.sinc` to give hardware loops a direct back edge (#98). `loop0` and `loop1`
(every immediate and register form, `spNloop0` included) record the loop start in two
new flowing context fields, `lp0sa` and `lp1sa` (the context register grows from 12 to 20
bytes). The `:endloop0` and `:endloop1` packets branch to that recorded start; without one
they keep Ghidra's indirect branch through `SA0`/`SA1`, as does the packet that ends both
loops. Decode and listing are unchanged.
