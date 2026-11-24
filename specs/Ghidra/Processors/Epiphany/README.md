# Epiphany

Adapteva Epiphany (E16G301 / E64G401 cores of the Parallella board; `epiphany-elf` GCC and
binutils). Written for unlace (#98); no prior SLEIGH module existed.

Language: `epiphany:LE:32:default`.

Sources: the Epiphany Architecture Reference (register file, instruction set, flags, ABI) and
the binutils Epiphany CGEN description `cpu/epiphany.cpu` with its generated opcode table
(field layout and register-transfer semantics; read, not copied); GCC `config/epiphany` for
the register conventions.

Modelled:
- Mixed 16/32-bit decode: opcode groups 0-7, A, E are 16 bits (`r0`-`r7`); groups 8, 9, B, C,
  D, F are 32 bits and widen each register field to six bits (`r0`-`r63`).
- Integer ALU (`add`, `sub`, `and`, `orr`, `eor`, `lsl`, `lsr`, `asr`, immediate forms) with
  the AZ/AN/AC/AV flags (AC on subtraction is "no borrow"); `mov` immediate, `movt`.
- All fourteen conditions on branches (`b<cond>`, `bl`, short and long) and conditional moves;
  `jr`, `jalr`, `rts` (`jr lr`).
- Loads and stores of byte, half, word and double (register pair) in the indexed, post-modify,
  displacement (scaled by size) and displacement post-modify forms; loads zero-extend;
  `testset`.
- Floating point `fadd`, `fsub`, `fmul`, `fmadd`, `fmsub`, `float`, `fix`, `fabs`, `fsqrt` with
  the BZ/BN flags.
- `movts`/`movfs` name the special registers as binutils prints them (16-bit forms use bits
  10-12 for the register number). LC, LS and LE are registers; the other special registers go
  through `write_special`/`read_special`.
- Hardware loops: `mov`/`movt` of a constant record it in flowing context; `movts ls` keeps
  it as the loop start, and `movts le` marks the instruction at that address, the last of the
  loop. After it, LC counts down and, while it is not zero, control returns to the loop start
  (the semantics of binutils' CGEN model), so the loop has a direct back edge.
- Calling convention (GCC): arguments in `r0`-`r3`, result in `r0` (`r0:r1`), `r4`-`r11`, `r15`,
  `r32`-`r43` preserved, `sp` = `r13`, return address in `lr` = `r14`.

Gaps:
- The integer mode of the FPU (`iadd`, `imul`, ... selected by a CONFIG bit) decodes as the
  floating-point operation it shares an encoding with.
- `movts`/`movfs` of special registers other than LC/LS/LE, `bitr`, `fext`, `fdep`, `lfsr`,
  `frecip`, `swi`, `trap`, `idle`, `bkpt`, `rti`, `gie`/`gid`, `sync`, `wand` are user-ops.
- A hardware loop is found only when LS and LE are each written from a register that the
  instructions before it built with `mov` (and `movt`) of a constant, LS first; a write to that
  register by any other instruction in between is not seen. A loop whose last instruction is a
  branch is not modelled.

Checked: the CLI test image was assembled with binutils 2.45 `epiphany-elf-as` and disassembled
with `objdump`; it exercises 16- and 32-bit forms (r32, movt, displacement loads/stores).
