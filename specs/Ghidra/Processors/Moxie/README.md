# Moxie

Moxie (moxielogic.org), the small 32-bit soft core targeted by `moxie-elf` GCC and binutils.
Written for unlace (#98); no prior SLEIGH module existed.

Languages: `moxie:BE:32:default` (the `moxie-elf` default) and `moxie:LE:32:default` (`-EL`).

Sources: the Moxie architecture page on moxielogic.org (register file, instruction forms,
call frame) and the binutils `opcodes/moxie-opc.c` opcode table (read for encodings only;
no text copied).

Modelled:
- All three instruction forms: form 1 (8-bit opcode, A and B registers, an optional 16-bit
  offset or 32-bit immediate in data byte order), form 2 (`inc`, `dec`, `gsr`, `ssr`
  with an 8-bit value) and form 3 (ten conditional branches, 10-bit word offset from the
  next instruction).
- `cmp` latches both operands into the hidden `cmpa`/`cmpb` registers and each branch
  compares them signed or unsigned, so conditions decompile as source comparisons.
- `jsra`/`jsr` build the hardware frame (static-chain slot, return address, saved `$fp`,
  `$fp = $sp`) and `ret` unwinds it from `$fp`; the compiler spec accounts for the 12
  bytes (stack arguments start 12 bytes above the callee's `$sp`).
- Loads are zero-extending; `mul.x`/`umul.x` give the high word of the product.
- Calling convention (GCC `config/moxie`): arguments in `$r0`-`$r5`, result in `$r0`.

Gaps:
- `gsr`/`ssr` special registers, `swi` and `brk` are user-ops.
- A callee's `$fp` equals its entry `$sp` by the call frame, which the decompiler cannot
  know per function, so `$fp`-relative locals print as pointer arithmetic on `$fp`.

Checked: every encoding in the CLI test was assembled with binutils 2.45 `moxie-elf-as`
and disassembled with `objdump`; branch targets match.
