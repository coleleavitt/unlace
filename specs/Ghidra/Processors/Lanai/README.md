# Lanai

Lanai v11, the 32-bit network-processor core of Myricom and Google (the LLVM `lanai` target).
Written for unlace (#98); no prior SLEIGH module existed.

Language: `lanai:BE:32:default`.

Sources: the LLVM Lanai backend (Apache-2.0 with LLVM exception; read, not copied):
`LanaiInstrFormats.td`, whose comments carry the ISA manual's description of each format
(RI, RR, RM, RRM, BR, BRR, SCC, SLS, SLI, SPLS, special), `LanaiInstrInfo.td` (mnemonics,
fixed fields), `LanaiCallingConv.td`, `LanaiRegisterInfo.td` and `LanaiAsmPrinter.cpp` (the
call sequence).

Modelled:
- 32 registers: `r0` reads 0, `r1` reads all ones, `r2` is `pc` (reads as the address of the
  instruction, as the `add %pc, 0x10, %rca` call sequence needs), `sp` (`r4`), `fp` (`r5`),
  `rv` (`r8`), `rr1`/`rr2` (`r10`/`r11`), `rca` (`r15`).
- RI and RR ALU operations (`add`, `addc`, `sub`, `subb`, `and`, `or`, `xor`, logical and
  arithmetic shifts whose sign picks the direction) with the RI constant in the low or high
  half (`and` fills the other half with ones). The `.f` forms set Z, N, V and C as the format
  descriptions give them; RR operations run only when their DDDI condition holds; `sel.cc`.
- RM, RRM (Rs1 op Rs2 address, word, half and byte, zero or sign extension), SLS, SLI and SPLS
  loads and stores with the four PQ address modes (plain, post-modify, offset, pre-modify).
- `popc`, `leadz`, `trailz`; `scc` (set from condition).
- Absolute `bcc` and relative `bcc.r` branches with one delay slot; an ALU write to `pc` is a
  jump with one delay slot, a load into `pc` one with two. `ld -4[%fp], %pc` is the return.
  The call sequence `add %pc, 0x10, %rca; st %rca, [--%sp]; bt f` (or `add %rX, %r0, %pc`)
  marks the branch two words on as a call through a context bit.
- Calling convention (clang): arguments in `r6`, `r7`, `r18`, `r19`, then the stack above
  the pushed return address; result in `rv`; the callee pops the return address.

Gaps:
- The offset base of `bcc.r` is not given beyond "PC relative" (LLVM never emits it): modelled
  as the branch's own address, and its Rs1 field is ignored.
- Right shifts clear C on the `.f` forms; an RRM with the shift operation (BBB = 111) takes its
  access size from YL as written, where the manual says such accesses are full words.
- A 64-bit result split over `rv` and `r9` is not described in the cspec.

Checked: the CLI test image is clang's (zig 0.15.2, LLVM) `-target lanai` output for small C
routines, linked by applying its R_LANAI_25 relocations by hand; the decompiled C matches the
source.
