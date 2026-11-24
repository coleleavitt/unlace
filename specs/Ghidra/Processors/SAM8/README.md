# Samsung SAM8 / SAM88RCRI

SLEIGH written for unlace from Samsung's public user's manuals; no prior SLEIGH
existed for these cores and none was copied. The Zilog Z8 module in this
repository was read only to see how a Z8-like register file can be laid out in
SLEIGH; every constructor here was written fresh from the Samsung opcode map.

## Sources

- Samsung S3C8-series (SAM8 core) user's manual, chapter 2 "Address spaces",
  chapter 3 "Addressing modes", chapter 5 "Interrupt structure" and chapter 6
  "Instruction set": opcode map (table 6-5), condition codes (table 6-6) and the
  per-instruction formats and flag effects. Copies are on datasheet archives,
  e.g. https://www.alldatasheet.com (search "S3C8 user's manual").
- Samsung S3C9454B/F9454B user's manual (SAM88RCRI core): register
  architecture (working registers fixed at C0h-CFh, no register pointers) and
  the reduced opcode map.

## Languages

- `SAM8:BE:16:default` (`sam8.slaspec`): S3C8/S3F8 parts.
- `SAM88RCRI:BE:16:default` (`sam88rcri.slaspec`): S3C9/S3F9 parts.

Both include `sam8.sinc`; defining `SAM88RCRI` selects the reduced core.

Spaces: `code` (64K program memory, default; LDC), `data` (64K external data
memory; LDE), `rf` (register file page 0: 00h-BFh plus set 2 C0h-FFh) and, on
SAM8 only, `sr` (set 1: D0h-DFh common, E0h-FFh in bank 0 at sr:00E0 and bank
1 at sr:01E0). FLAGS (D5h), RP0/RP1 (D6h/D7h), SPH/SPL (D8h/D9h) and IPH/IPL
(DAh/DBh) are registers. The pspec sets RP0 = C0h, RP1 = C8h at the reset
entry 0100h and marks the peripheral control registers volatile.

## What the p-code models

- SAM8: the whole opcode map of chapter 6 (78 mnemonics): `ADD ADC SUB SBC OR
  AND XOR CP TCM TM` in all r/r, r/Ir, R/R, IR/R and R/#IM forms; `INC DEC
  INCW DECW COM CLR DA SWAP RL RLC RR RRC SRA`; `LD LDW LDB`, `LDC/LDE` with
  the indexed, short- and long-offset forms and the auto-increment/decrement
  variants `LDCD LDCI LDCPD LDCPI LDED LDEI LDEPD LDEPI`; `PUSH POP PUSHUD PUSHUI
  POPUD POPUI`; `JP JR CALL RET IRET DJNZ CPIJE CPIJNE`; the bit operations
  `BAND BOR BXOR BCP BITC BITR BITS BTJRF BTJRT`; `MULT DIV` (16/8 with the
  documented V/C overflow encoding); `SRP SRP0 SRP1 SB0 SB1`; the threaded-code
  instructions `NEXT ENTER EXIT` through IP; `DI EI RCF SCF CCF NOP IDLE STOP
  WFI`.
- Flags C, Z, S, V, D, H are separate registers, set per the per-instruction
  tables (add/sub carry, half-carry, signed overflow, the decimal-adjust
  flag), and are packed into FLAGS whenever FLAGS is read as an operand;
  `IRET` pops FLAGS and unpacks it.
- Working registers R0-R7 / R8-R15 are the 8-byte slices at RP0 & F8h and
  RP1 & F8h. The context tracks RP0/RP1 after `SRP/SRP0/SRP1` and at reset, so
  working registers fold to constant register-file addresses; where they are
  unknown the address is computed from RP0/RP1 at run time. `SB0/SB1` set the
  set-1 bank in the context.
- `CALL #IA` calls through the 16-bit vector at code address IA.
- SAM88RCRI: the 41-instruction subset of the S3C9 opcode map (no word
  operations, bit operations, MULT/DIV, LDC/LDE with pre-increment, register
  pointers, banks or threaded-code instructions); working registers are fixed
  at C0h-CFh.
- User ops: `disableInterrupts`, `enableInterrupts`, `stop`, `idle`,
  `waitForInterrupt`.

## Gaps

- A direct register write to RP0/RP1 (`LD RP0, #x`) or to FLAGS bit 0 (BA)
  is executed but not followed into the decode context; only SRP/SRP0/SRP1 and
  SB0/SB1 are. Writes to FLAGS as a register are not unpacked into C/Z/S/V/D/H.
- Register pages (the PP register, parts with more than one 256-byte page) and
  the set 1 / set 2 split of indirect accesses above C0h are not modelled:
  indirect and working-register accesses always reach `rf`.
- Interrupt mask/priority registers (IMR, IPR, SYM) are memory only; DI/EI are
  user ops.
- Samsung publishes no C calling convention for these cores, so the prototype
  has no parameter or return registers (assembly model, SPL stack, 2-byte
  return address).

## Test vectors

No SAM8 assembler, simulator or emulator is installed, so the CLI test
`crates/unlace-cli/tests/sam8_raw.rs` decompiles a hand-assembled image
(`crates/unlace-cli/tests/fixtures/sam8/add_store.bin`, listing in
`add_store.s`), encoded by hand from the chapter 6 opcode map, base 0100h:

| Bytes | Instruction | Expected effect |
|---|---|---|
| `31 C0` | `SRP #C0h` | RP0 = C0h, RP1 = C8h |
| `1C 07` | `LD R1, #07h` | reg C1h = 7 |
| `08 30` | `LD R0, 30h` | reg C0h = reg 30h |
| `06 C0 05` | `ADD C0h, #05h` | reg C0h += 5, flags set |
| `A6 C0 0A` | `CP C0h, #0Ah` | C = reg C0h < 0Ah |
| `7B 04` | `JR ULT, 0112h` | skip the stores when C |
| `09 40` | `LD 40h, R0` | reg 40h = R0 |
| `19 41` | `LD 41h, R1` | reg 41h = R1 |
| `AF` | `RET` | return |

SAM8 decompiles it to `dat_c1 = 7; dat_c0 = dat_30 + 5; if (10 <= dat_c0)
{ dat_41 = 7; dat_40 = dat_c0; }`. SAM88RCRI decodes the same bytes from 0102h
(its working registers are C0h-CFh without an SRP) to the same C.
