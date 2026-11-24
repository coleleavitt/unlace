# NEC V810

Written for unlace from the public NEC V810 family description (the uPD70732 user's
manual instruction-set chapter) and, for the Nintendo additions, the Virtual Boy
development manual. An unlicensed community module exists (ghidra-v810); it was not
opened or consulted. Semantics (flag rules, the r30 high word of `mul`/`div`, `caxi`,
the floating-point flags) were checked against MAME's `v810` core, read for reference.

Language: `V810:LE:32:default`, the V810 with the Virtual Boy NVC instructions
(`cli`, `sei`, `xb`, `xh`, `rev`, `mpyhw`), which sit in opcode slots the plain
V810 leaves undefined, so one language serves both the Virtual Boy and the PC-FX.

Modelled:
- All format I-VII instructions: register and 5-bit immediate ALU forms, `setf`, the
  shifts (CY = last bit out), `mul`/`mulu` (high word to r30), `div`/`divu`
  (remainder to r30, the 0x80000000 / -1 overflow), the 16 branch conditions,
  `jr`/`jal` (26-bit displacement; `jal` writes lp), `jmp [reg]` (`jmp [lp]` is a
  return), `movea`/`movhi`/`addi`/`ori`/`andi`/`xori`, sign-extending `ld.b`/`ld.h`,
  `ld.w`, the stores, `in.*`/`out.*` on a separate `io` space, `caxi`, `ldsr`/`stsr`
  (PSW is packed from and unpacked into the Z/S/OV/CY flags), `reti` (via EIPC/EIPSW).
- Single-precision floating point in the general registers: `cmpf.s`, `cvt.ws`,
  `cvt.sw`, `trnc.sw`, `addf.s`, `subf.s`, `mulf.s`, `divf.s`, with Z/S/CY/OV set as
  the manual describes.
- r0 reads as zero.
- Compiler spec: the V810 GCC convention (arguments r6-r9 then the stack, result r10
  and r11:r10, link lp = r31, sp = r3, gp = r4, tp = r5, r20-r29 callee-saved).

User-ops: `trap`, `halt`, `setInterruptDisable` (NVC `cli`/`sei`), and the bit-string
instructions (`sch0bsu` ... `notbsu`) as `bitStringSearch` / `bitStringMove` over
r26-r30.

Gaps: misaligned halfword/word addresses are not forced to alignment; floating-point
exceptions and the PSW FP status bits are not modelled; `reti` always returns through
EIPC (the duplexed-exception FEPC path is not chosen); the bit-string user-ops do not
describe their register updates beyond r28.

Oracle: MAME (`v810`), by reading; the CLI test `crates/unlace-cli/tests/v810.rs` carries
two hand-assembled vectors.
