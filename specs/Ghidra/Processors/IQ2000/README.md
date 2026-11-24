# IQ2000

Vitesse IQ2000, the 32-bit MIPS-I-like core of Vitesse's network processors (`iq2000-elf`
GCC and binutils). Written for unlace (#98); no prior SLEIGH module existed.

Language: `iq2000:BE:32:default`.

Sources: the IQ2000 CGEN description in binutils (`cpu/iq2000.cpu`, `cpu/iq2000m.cpu`), whose
field layout and register-transfer semantics define each instruction (read, not copied), and
GCC `config/iq2000` for the register conventions.

Modelled:
- The MIPS-style R/I/J formats; `r0` reads as zero.
- Arithmetic, logic, shifts, `slt*`, `lui`, the IQ2000 additions `andoi`, `andoui`, `orui`,
  `ado16` (two 16-bit adds), `mrgb` (byte merge by mask), `ram` (rotate and mask),
  `slmv`/`srmv` (shift and mask), and `ldw`/`sdw` (register pair, `rt+1` at the lower
  word).
- One branch delay slot on every jump and branch; the "likely" forms annul the slot when not
  taken; the byte-lane (`bmb0`-`bmb3`, `bmb`) and bit (`bbi`, `bbin`, `bbv`, `bbvn`) branches;
  `bltzal`/`bgezal` and their likely forms as conditional calls. `j`/`jal` reach the 18-bit
  word address inside the current 256 MiB segment.
- Calling convention (GCC): arguments in `r4`-`r11`, result in `r2` (`r2:r3` for 64 bits),
  `r16`-`r23` and `r30` preserved, `r29` the stack pointer, `r31` the return address.

Gaps:
- The load delay slot is not modelled (code from the assembler never reads a loaded register
  in the next instruction).
- Coprocessor instructions (DMA, lookup, SRAM, context switch; opcodes 16-19) decode only as
  one opaque user-op per coprocessor, without operands; `jcr`, `bctxt`, `syscall`, `break`
  and `sleep` are user-ops. The IQ10 variant's extra opcodes are not covered.

Checked: the CLI test image was assembled with binutils 2.45 `iq2000-elf-as` and disassembled
with `objdump`; branch and jump targets match.
