# Visium

Visium, the GR5/GR6 32-bit core of Controls and Data Services (`visium-elf` GCC and
binutils). Written for unlace (#98); no prior SLEIGH module existed.

Language: `visium:BE:32:default`.

Sources: the binutils `include/opcode/visium.h` opcode table and `opcodes/visium-dis.c`
(instruction classes, field layout, condition codes; read, not copied) and GCC
`config/visium` (operation semantics, addressing scale, register conventions).

Modelled:
- The four instruction classes; bit 31 (even parity) is ignored by decode. `r0` reads as zero.
- ALU operations at byte, word and long size (`add`, `adc`, `sub`, `subc`, `and`, `or`,
  `xor`, `not`, `move`, `extb`, `extw`, `asr`, `lsr`, `asl`, `cmp`, `cmpc`); a byte or word
  operation replaces only the low byte or word of the destination. N, Z, C (borrow on
  subtraction, last bit out on shifts) and V are hidden flag bytes; the sixteen conditions of
  `brr` and `bra` read them.
- `addi`, `subi`, `moviq` and the `moviu`/`movil` half-word loads (each keeps the other half).
- `read`/`write` with the displacement scaled by the access size.
- One delay slot on `brr` (word displacement from the branch) and `bra` (register target, link
  register written with the address after the slot); `bra tr,rX,r21` is a call and
  `bra tr,r21,r0` a return.
- The EAM: `mults`/`multu` into the 64-bit `md` (`mdb:mda`), `divs`/`divu`/`divds`/`divdu`
  with the remainder in `mdc`, `readmd*`, `writemd*`, double shifts. The FPU arithmetic,
  conversions, moves and compares on `f0`-`f15`.
- Calling convention (GCC): arguments in `r1`-`r8`, result in `r1`, `r11`-`r19`, `fp` (`r22`),
  `sp` (`r23`), `r29`, `r30` preserved, return address in `r21`.

Gaps:
- `stop`, `trace`, `bmi`/`bmd` block moves, `dsi`/`eni`/`rfi`, `wrtl`/`wrtu`, generic
  `eamread`/`eamwrite`, `fpinst`/`fpuread` are user-ops. FPU compares set Z and N only (C for
  unordered). Whether a byte/word ALU operation preserves the upper destination bits could not
  be confirmed beyond GCC's use of shifts for zero extension.

Checked: the CLI test image was assembled with binutils 2.45 `visium-elf-as` and disassembled
with `objdump`; branch targets and fields match.
