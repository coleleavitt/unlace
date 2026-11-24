# Epson S1C17 and S1C33

Written for unlace (issue #98) from Epson's public core manuals; no third-party
SLEIGH module exists for either core.

Languages:

- `S1C17:LE:24:default`: the S1C17 core (S1C17xxx 16-bit microcontrollers).
- `S1C33:LE:32:default`: the S1C33000 core (S1C33xxx 32-bit microcontrollers).

## Sources

- Epson *S1C17 Family S1C17 Core Manual*, Rev. 1.2: register set, PSR,
  addressing modes, `ext` extension rules (section 5.3), the per-instruction
  pages and the instruction list in the appendix (encodings and flags).
- Epson *S1C33000 Core CPU Manual* (MF1097-03): instruction classes 0-7
  (section 4.2), per-instruction pages, and the quick reference with its two
  immediate-extension tables.
- Calling conventions: the *S1C17 Family Startup Manual* (GNU17 register
  usage) and the *S1C33 Family Application Note* (S5U1C33001C register usage).
- No assembler or disassembler for either core ships in binutils or LLVM, so
  the test images are hand-assembled from the manual's code tables.

## What is modelled

- S1C17: every core instruction: byte/word/24-bit loads and stores with
  `[%rb]`, `[%rb]+`, `[%rb]-`, `-[%rb]`, `[%sp+imm7]`, `[imm7]` and the
  `[%sp]` forms; 16-bit `add`/`adc`/`sub`/`sbc`/`cmp`/`cmc`/logic with
  their `/c` and `/nc` conditional forms, 24-bit `.a` arithmetic and compare,
  `cv.*` conversions, shifts (counts 0-3, 4 or 8 as the manual specifies),
  `swap`, the coprocessor transfers, and every branch with its delayed
  (`.d`) form. Registers are 24 bits wide; 16-bit results clear bits 23-16.
- S1C33: classes 0-6: loads and stores (`[%rb]`, `[%rb]+`, `[%sp+imm6]`
  scaled by size), class 1/3 arithmetic and logic, `adc`/`sbc`, shifts and
  rotates (counts clamped to 8), `swap`, bit operations on memory, special
  registers (`psr`, `sp`, `alr`, `ahr`), `mlt.h`/`mltu.h`/`mlt.w`/`mltu.w`,
  `pushn`/`popn`, and every branch with its delayed form.
- The `ext` prefix: each `ext` commits the noflow context fields `extc`
  (count), `eL` (last immediate) and `eH` (the one before) to the next
  instruction, which folds them into its immediate, displacement or
  branch offset exactly as the manuals' extension tables specify (including
  the three-operand `rd = rs op imm` form of extended register-register
  arithmetic). With more than two, the last two count.
- Flags C, V, Z, N (and S1C33 DS, MO) are separate registers; `psr` is packed
  and unpacked where it is read or written (`int`, `reti`, `ld.w %psr`).
- Calling conventions: S1C17 GNU17 (arguments r0-r3, result r0, r4-r7
  preserved); S1C33 gnu33 (arguments r6-r9, result r4/r5, r0-r3 preserved).
  Both cores push a 4-byte return address.

## Gaps

- S1C17 `int`/`intl` and S1C33 `int` push the frame and call the user op
  `software_interrupt`/`software_exception`; they do not branch through the
  vector table (TTBR or the trap table base is a run-time value).
- `brk`/`retd` (debug), `halt`/`slp` are user ops.
- S1C33 step division (`div0s`, `div0u`, `div1`, `div2s`, `div3s`), `mac`,
  `scan0`/`scan1` and `mirror` are user ops; `alr`/`ahr` are not updated by
  the division steps.
- The S1C17 coprocessor (`ld.cw`/`ld.ca`/`ld.cf`) is the user ops
  `coproc_write`, `coproc_read` and `coproc_flags`.
- A branch into the instruction after an `ext` decodes that instruction with
  the extension applied, as it would on the fall-through path.
- The S1C17 shift instructions' carry out is modelled as the last bit shifted
  out; the manual does not define it for a zero count (C is then cleared).
