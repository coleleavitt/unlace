# RCA CDP1802 COSMAC

Native SLEIGH written for unlace (issue #98; no prior SLEIGH existed) from the
RCA CDP1802 data sheet and the RCA User Manual for the CDP1802 COSMAC
Microprocessor (MPM-201). No third-party SLEIGH or emulator source is copied.

Languages (one `.sla`, two processor specs):

- `CDP1802:BE:16:default`: `SEP n` is an indirect call through `Rn`.
- `CDP1802:BE:16:SCRT`: RCA's Standard Call and Return Technique, the usual
  convention of compiled and monitor code: `SEP R4` followed by an inline
  address is a call to that address, `SEP R5` returns through `R6`.

## What is modelled

- `R0`-`RF` (16 bits, with byte halves `RnH`/`RnL` for `GHI`/`GLO`/`PHI`/`PLO`),
  `D`, `DF`, `Q`, `IE`, `T`, `P`. The program counter R(P) is the `PC` register.
- `X` is decode context (`xctx`, default 2, the conventional stack pointer
  register), set by `SEX` and followed along the flow, so every R(X) operand
  (`LDX`, `LDXA`, `STXD`, `OR`/`AND`/`XOR`, `ADD`/`ADC`/`SD`/`SDB`/`SM`/`SMB`,
  `OUT`, `INP`, `IRX`, `SAV`, `RET`, `DIS`) names its register directly.
- All 91 CDP1802 opcodes: `DF` is the carry of adds and the no-borrow flag of
  subtracts (`SD`: M - D, `SM`: D - M), shifts and rotates through `DF`.
- Short branches stay in the page of their address byte, long branches take a
  16-bit address, short and long skips (`SKP`, `LSKP`, `LSNQ` ...) jump over
  one or two bytes; `EF1`-`EF4` are read through the user op `ef_flag(n)`.
- `RET`/`DIS` pop X,P and return to the register P names; `MARK` saves X,P in
  `T` and at `M(R2)`. I/O ports 1-7 are `io:1`-`io:7`.

## Gaps

- `P` is not tracked: an instruction naming the current program-counter
  register as data (`GLO R3` while P = 3) reads the register, not the PC, and
  the default variant's `SEP` cannot tell a call from a return.
- `RET`/`DIS` do not update the X decode context; `SCRT` inline arguments read
  through `R6` are not followed.
- The CDP1804/1805/1806 extended (0x68-prefixed) instructions are not decoded;
  `IDL` is the user op `idle`. Interrupts and DMA are not modelled.

## Check

No assembler or emulator was available, so the test vector is hand-assembled
from the data sheet's opcode table: `crates/unlace-cli/tests/fixtures/cdp1802/`.
