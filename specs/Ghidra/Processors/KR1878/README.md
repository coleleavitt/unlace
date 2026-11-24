# Angstrem KR1878VE1 (TESEY core)

SLEIGH written for unlace from public documentation of the KR1878VE1; no
prior SLEIGH existed and none was copied. The PIC16 and 8048 modules in this
repository (Apache-2.0) were used only as a structural template for a
word-addressed Harvard core with a hardware return stack.

## Sources

- S. Shisharin, B. Malashevich, "KR1878VE1 8-bit microcontroller", ChipNews
  2000 no. 1 (https://chipnews.ru/html.cgi/arhiv/00_01/stat-11.htm): the
  addressing model and table 3, the complete instruction set with encodings
  and flag effects. This is the primary source.
- Angstrem / Elektronika i Svyaz KR1878VE1 datasheet
  (https://eandc.ru/pdf/mikroskhema/kr1878ve1.pdf): memory sizes, segment and
  service registers, interrupt sources.
- nedoPC forum thread on the KR1878VE1
  (http://www.nedopc.org/forum/viewtopic.php?f=84&t=10901): segment bases are
  multiples of eight; IR0/IR1 mode encodings in SR5/SR7 bits 7:6.
- Egorich-print/kr1878 (MIT, https://github.com/Egorich-print/kr1878),
  docs/ISA_REFERENCE.md and its simulator, and the KR1878 processor module of
  the public IDA SDK: read to cross-check encodings and the status-register
  bit layout only.

## Language

`KR1878:LE:16:default` (`kr1878.slaspec`). Program memory is the default
space `code`, word addressed (16-bit words, 10-bit addresses, little-endian
bytes in an image). Data memory is the 256-byte space `ram` (peripheral
registers 0x00-0x3F, RAM from 0x40). The return stack (`hwstack`, pointer
ISP, 2 bytes per entry) and the data stack (`dstack`, pointer DSP) are
separate spaces. The pspec names the interrupt vectors (`code:0x000`,
0x001, 0x003, 0x006, 0x007, 0x00F) and the peripheral registers.

## What the p-code models

- All 52 instructions of table 3: `mov cmp add sub and or xor`,
  `movl cmpl addl subl bic bis btg btt` (tetrad constants, `p` selects the
  high nibble), `swap neg not shl shr shra rlc rrc adc sbc`,
  `ldr mtpr mfpr push pop sst cst tof tdc`,
  `jmp jsr jz jnz jns js jnc jc ijmp ijsr rts rtsc rti`,
  `nop wait stop reset sksp`.
- Operands: `%a0`-`%d7` address `(SRn & 0xF8) | index` with SR0-SR3 the
  bases of windows A-D, so an `ldr` earlier in the function folds to a
  constant address. `%d6` is IR0: SR5 bits 7:6 = 00 plain `%d6`, 01
  post-increment, 10 post-decrement, 11 fixed address SR4. `%d7` is IR1 the
  same way with SR6/SR7, and in mode 00 reads the program-memory byte at the
  11-bit address SR7[2:0]:SR6 (even address = low byte of the word),
  post-incrementing it.
- Flags C, Z, S, IE, OF, DC as separate registers with the effects of table 3:
  C is the borrow after a subtraction or compare (so `sbc` subtracts the
  borrow), OF is signed overflow, DC the nibble carry/borrow. `rti` reloads
  them from the data stack using the RS layout C=0, Z=1, S=2, IE=3, OF=4,
  DC=5; `sst`/`cst` set and clear bits 0-3.
- `jsr`/`ijsr` push the return word address on `hwstack`; `rts`, `rtsc`
  and `rti` pop it. `ijmp`/`ijsr` jump to SR7[1:0]:SR6.
- `wait` and `stop` set IE and call the user ops `wait_for_interrupt` and
  `stop_oscillator`.

## Gaps

- The status register is also readable at data address 0x00; the flags are
  separate registers here, so a data access to 0x00 does not see them.
- OF and DC are documented as one-shot (cleared by the next instruction);
  they keep their value until the next instruction that writes them.
- Which of the IR modes 01/10 increments and which decrements is not stated
  in the sources found; 01 = increment follows the simulator. A write through
  `%d7` in program-memory mode goes to data memory at SR6.
- The C carry polarity after subtraction (borrow) is inferred from `sbc`
  ("dst - C"); the sources do not state it outright.
- The KR1878VE2 and other TESEY-core parts with larger memories are not
  covered; no vendor C ABI exists, so the prototype has no parameters or
  return value.

## Test vectors

No KR1878 assembler, simulator or emulator is installed, so the CLI test
`crates/unlace-cli/tests/kr1878_raw.rs` decompiles a hand-assembled image
(`crates/unlace-cli/tests/fixtures/kr1878/add_store.bin`, listing in
`add_store.s`) whose words were encoded by hand from table 3:

| Word | Instruction | Expected effect |
|---|---|---|
| `0x2200` | `ldr SR0, 0x40` | window A at 0x40 |
| `0x40A0` | `movl %a0, 0x5` | ram[0x40] = 5, OF = 0 |
| `0x1020` | `add %a0, %a1` | ram[0x40] += ram[0x41], C/OF/DC/Z/S set |
| `0x3060` | `addl %a0, 0x3` | ram[0x40] += 3 |
| `0x6200` | `cmpl %a0, 0x10` | C = ram[0x40] < 0x10 (borrow) |
| `0xF007` | `jc 0x007` | skip the store when C |
| `0x40E2` | `movl %a2, 0x7` | ram[0x42] = 7 |
| `0x000C` | `rts` | return |

It decompiles to `dat_40 = dat_41 + 8U; if (0x10 <= dat_41 + 8U) dat_42 = 7;`.
Further hand-checked words: `0x0013` = `push SR3`, `0x001B` = `pop SR3`,
`0x018F` = `sst 0xf`, `0x000E`/`0x000F` = `rtsc 0`/`rtsc 1`,
`0x0003` = `ijmp`, `0x07DF` = `mov %d7, %d6`.
