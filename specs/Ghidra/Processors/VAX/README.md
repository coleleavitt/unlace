# DEC VAX

Written for unlace from the VAX Architecture Reference Manual (instruction formats, the
operand specifier modes, the condition codes, CALLS/CALLG/RET frames). The vendored
Apache-2.0 module that #318 added was dropped in #400, because its 99 PC-relative forms
used an undefined `operand_offset` symbol. This module shares no text with it.
Instruction lengths and mnemonics were checked against MAME's `vax` disassembler
(BSD-3-Clause), run as an oracle: across 16,000 random encodings (109 of them longer
than 16 bytes) decode to the same length and mnemonic, apart from one reserved
indexed-immediate encoding.

Language: `VAX:LE:32:default`, the VAX base instruction set plus the G/H floating
point and vector instruction encodings (`FD`-prefixed).

`gen_vax.py` writes `data/languages/vax.slaspec` from `vaxops.json`
(`python3 gen_vax.py vaxops.json > data/languages/vax.slaspec`). `vaxops.json` is the
opcode-to-operand table: one entry per opcode with its mnemonic and the access type and
size of each operand (`rl`, `mw`, `ab`, `bb`, ...). It was extracted from MAME's
`src/devices/cpu/vax/vaxdasm.cpp`, copyright AJR, under the BSD-3-Clause licence below.

How the decoder works:
- Every general operand is an operand specifier: a mode byte, an optional index
  prefix, and up to 16 bytes of displacement or immediate. A PC-relative specifier is
  relative to the end of the specifier itself, so the decoder tracks each specifier's
  byte offset in the context fields `o1`..`o7`: specifier k starts at `o<k>` and its
  constructor sets `o<k+1>`. The operand tables are generated per slot, access type
  (`R` read, `F` floating read, `V` modify/write, `A` address, `VB` bit-field base,
  `BR` branch displacement) and size.
- Short literals, register (pairs and quads for quad and octa data), register
  deferred, autodecrement, autoincrement (immediate with PC), autoincrement deferred
  (absolute with PC), byte/word/long displacement and their deferred forms
  (PC-relative with PC), and the index prefix (index scaled by the operand size) are
  all modelled.
- Procedures: `CALLS` pushes the argument count and calls; when the call returns, the
  caller pops the count and the arguments. A PC-relative or absolute `CALLS`/`CALLG`
  target is a direct call and is marked as a procedure entry (context `entry`), so its
  first word decodes as the register-save mask (`ENTRY`). `ENTRY` sets AP to the
  entry SP and lays out the frame below it, and `RET` restores SP from AP. Arguments
  are therefore the stack words at 4, 8, ... above the entry SP, as the default
  prototype describes (result in R0 or R1:R0, R2-R11/AP/FP preserved).
- `JSB`/`BSBB`/`BSBW` push the return address and call, and pop it when the call
  returns. `RSB` returns without moving SP, so the same prototype fits both kinds of
  callee.

Modelled: the integer moves, converts, arithmetic, logic, compare/test (N, Z, V, C per
the manual), `ADWC`/`SBWC`, `ASHL`/`ASHQ`, `ROTL`, `EMUL`/`EDIV`, `MOVA`/`PUSHA`,
`PUSHL`, `PUSHR`/`POPR` (the mask unrolled), `MOVPSL`, `BISPSW`/`BICPSW`, every branch
including `ACB`, `AOBLSS`/`AOBLEQ`, `SOBGEQ`/`SOBGTR`, `BLBS`/`BLBC`, the `BB*`
bit branches, `CASEB`/`CASEW`/`CASEL` (an indirect jump through the displacement
table that follows the instruction), `EXTV`/`EXTZV`/`CMPV`/`CMPZV`/`INSV`, `INDEX`,
and F, D and G floating arithmetic, moves, compares and converts. Short floating
literals become their values (0.5 to 120.0).

User-ops: the character string, decimal string, `EDITPC`, `CRC`, queue, `FFS`/`FFC`,
`EMOD`/`POLY`, H-floating and octaword arithmetic, vector, `PROBE`, `CHM*`, `REI`,
`MTPR`/`MFPR`, `LDPCTX`/`SVPCTX`, `BPT`, `HALT`, `XFC` and `BUG` instructions, with
their operands.

Gaps:
- F, D and G data are lifted with IEEE single and double operations. The VAX
  in-memory formats (bias, word order) are not IEEE, so constants loaded from memory
  or immediates do not show their real values.
- Bit-field and bit-branch bases act as one longword window: fields with
  pos + size > 32, including bit arrays indexed past the first longword, are not exact.
- A `CALLG` callee reads its arguments through the argument list AP points at, but
  `ENTRY` assumes the `CALLS` layout. A procedure reached only through an indirect
  call is not marked, so its entry mask decodes as instructions. Decompile such a
  procedure from the address after the mask.
- RET does not restore the registers the mask saved. The prototype treats R2-R11 as
  preserved instead.
- Exceptions, the PSL beyond N/Z/V/C, the per-mode stack pointers and the memory
  management registers are not modelled.

Oracle: MAME `vax` disassembler (run for lengths and mnemonics). The
`vax_*` families in `crates/unlace-cli/tests/processors.toml` carry three hand-assembled images.

MAME licence for `vaxops.json`:

    Copyright (c) AJR
    Redistribution and use in source and binary forms, with or without modification,
    are permitted provided that the following conditions are met:
    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice, this
       list of conditions and the following disclaimer in the documentation and/or
       other materials provided with the distribution.
    3. Neither the name of the copyright holder nor the names of its contributors may
       be used to endorse or promote products derived from this software without
       specific prior written permission.
    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
    OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
    SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
    TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
    BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
    CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
    ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
    DAMAGE.
