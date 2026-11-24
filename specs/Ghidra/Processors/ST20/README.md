# ST20 (ST20-C2 / ST20-C4)

A clean-room SLEIGH module for the Inmos / SGS-THOMSON / STMicroelectronics ST20
integer cores (ST20-C2 and ST20-C4, used in the ST20 set-top-box and GPS SoCs such as
the STi55xx and STi7100 companions), written in this repository for issue #98. No other
SLEIGH module for this processor was consulted.

Language: `ST20:LE:32:default` (little-endian, 32-bit, byte addressed).

## Sources

- SGS-THOMSON Microelectronics, *ST20C2/C4 Core Instruction Set Reference Manual*,
  72-TRN-273-01 (1996), and its errata sheet: per-instruction encodings, stack effects
  and error conditions. Mirrored at http://www.transputer.net/iset/
- Inmos, *Transputer Instruction Set: a compiler writer's guide* (1988), for the prefix
  mechanism and the workspace calling convention.

## What is modelled

- One-byte instruction components (function code in bits 7..4, data in bits 3..0).
  `pfix` and `nfix` build the operand register Oreg in the `oreg` context field, so a
  prefix chain and the component that ends it decode as one instruction
  (`21 2F 4F` is `ldc 0x1ff`, `60 41` is `ldc -0xf`).
- The evaluation stack Areg/Breg/Creg: loads push, binary operations pop, as each
  instruction page gives it. Values the manual calls undefined keep their old contents.
- All 16 primary instructions (j, ldlp, ldnl, ldc, ldnlp, ldl, adc, call, cj, ajw, eqc,
  stl, stnl, opr) and the secondary set: arithmetic (add/sub/mul/div/rem checked,
  sum/diff/prod unchecked), the long arithmetic (ladd, lsub, lsum, ldiff, lmul, ldiv,
  lshl, lshr, norm), saturating satadd/satsub/satmul, slmul/sulmul, logic and shifts,
  byte/half-word/word loads and stores (lb, lbx, sb, ls, lsx, ss, dev*), sign extension
  and range checks (xbword, xsword, cb, cbu, cs, csu, cir, ciru, cword, csngl, ccnt1),
  gt/gtu, rev/dup/pop, wsub/bsub/ssub/wsubdb, ldpi, gcall/gajw, ret, lend, the error and
  halt-on-error flags (seterr, testerr, stoperr, clrhalterr, sethalterr, testhalterr),
  bitcnt and the CRC/bit-reverse operations.
- `call` stores the return address and Areg/Breg/Creg in four new workspace words
  below Wptr; `ret` reloads Iptr and pops them. The cspec places the arguments on the
  stack from offset 4 (the first three words are the evaluation stack at the call) and
  the result in Areg.
- ErrorFlag is set by the checked arithmetic and the range checks; there are no
  condition codes (comparisons push 1/0, which `cj` tests).

## Gaps

- Process scheduling, channels, timers, alternation, traps, interrupts and shadow
  registers (startp, endp, runp, stopp, in, out, alt*, talt*, enb*, dis*, ldtimer,
  tin, signal, wait, swapqueue, trapenb, tret, iret, ...) are named p-code operations.
- The floating-point support instructions (unpacksn, postnormsn, roundsn, fmul) are
  user-ops; the ST20-C4 DSP extensions beyond the listed multiply forms are not decoded
  and fall to the generic `opr` user-op.
- `move` and the 2D block moves are user-ops; their memory effects are not modelled.

## Test vectors

No ST20 toolchain is installed, so the vectors were assembled by hand from the
reference manual and checked with `decomp_dbg` (`load raw ST20:LE:32:default ...`,
`disassemble`) and `unlace decompile`:

| Bytes | Instruction | Checked |
|---|---|---|
| `60 41` | `ldc -0xf` | nfix: Oreg = ~0 << 4 |
| `21 2F 4F` | `ldc 0x1ff` | two pfix components |
| `60 BC` | `ajw -0x4` | negative workspace adjust |
| `F2` | `bsub` | Areg = Areg + Breg |
| `22 F0` | `ret` | opr 0x20 |
| `25 FA` | `dup` | opr 0x5a |

The `crates/unlace-cli/tests/processors.toml` row `st20` decompiles
`crates/unlace-cli/tests/fixtures/st20/add_store.bin` (listing in `add_store.s`) to

```c
unsigned int sub_0(int a0)
{
  dat_8000 = a0 + 3;
  if (0xb <= a0 + 3)
    return 5;
  return 0;
}
```
