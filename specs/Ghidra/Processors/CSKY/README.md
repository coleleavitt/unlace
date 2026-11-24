# C-SKY ABIv2 (CK801, CK802, CK803, CK804, CK805, CK807, CK810, CK860)

Native SLEIGH written for unlace (issue #98). Encodings follow the GNU binutils
C-SKY opcode table (`opcodes/csky-opc.h`, read for encoding facts only; no table
text is in this directory) and were checked against `csky-elf-objdump`;
semantics follow the C-SKY V2 instruction set manual. The calling convention is
the C-SKY ABIv2 one GCC and LLVM use.

Languages: `CSKY:LE:32:v2` and `CSKY:BE:32:v2` (`csky_le.slaspec` and
`csky_be.slaspec` include `csky.sinc`). One language decodes every ABIv2 core:
CK801 code uses the 16-bit set and a few 32-bit instructions, CK802-CK860 add
the rest. ABIv1 cores (CK510, CK610) are not covered.

ABI: arguments in r0-r3 then the stack, result in r0 or r1:r0, sp is r14, the
return address is r15 (lr), r4-r11, r16, r17 and r28 (gb) are callee-saved.

## What is modelled

- Instruction length: a halfword whose top two bits are 11 starts a 32-bit
  instruction, stored high halfword first (both byte orders).
- The 16-bit set: `br`/`bt`/`bf`, `lrw` and the extended `lrw` form, sp-relative
  `addi`/`subi`/`ld.w`/`st.w`, `push`/`pop` (`pop` returns through lr), the
  immediate, register and compare groups, shifts, extends, `jmp`/`jsr`/`rts`,
  `revb`/`revh`, `mult`/`mulsh`, byte/half/word loads and stores.
- The 32-bit integer set: three-register ALU, the C-flag compares, tests and
  `mvc`/`mvcv`, conditional `incf`/`inct`/`decf`/`dect`/`clrf`/`clrt`,
  `decgt`/`declt`/`decne`, shifts with carry (`lslc`, `lsrc`, `asrc`, `xsr`),
  `zext`/`sext`/`ins` bit fields, `ff0`/`ff1`, `brev`, `xtrb0-3`, `bgenr`,
  `bmaski`, `divu`/`divs`, `ixh`/`ixw`/`ixd`; loads and stores with a 12-bit
  offset (including `ld.d`/`st.d` pairs), register-indexed `ldr`/`str`, `ldm`/
  `stm`/`ldq`/`stq`; gb-relative `lrs`/`srs`/`addi rz, r28`, `grs`; `bsr`,
  compare-with-zero branches, `bnezad`, `jmpi`/`jsri` through the literal pool,
  `movi`/`movih`/`ori`/`lrw`; 32-bit `push`/`pop` with r4-r11, lr, r16-r22 and r28;
  `mul.u32`/`mul.s32`/`mula.*` (64-bit results in rz+1:rz), `divul`/`divsl`.
- The C flag is a register; carries, borrows (C is "no borrow"), compares and
  bit tests set it as the manual says.

## Gaps

- 31 named user operations: control registers (`mfcr`/`mtcr` read and write
  `cr<n, bank>` as numbers, not storage), `psrset`/`psrclr`, `trap`, `rte`/`rfi`,
  `stop`/`wait`/`doze`, `sync`/`bar.*`/`idly`, cache and TLB maintenance,
  `ldex`/`stex` monitors, `nie`/`nir`/`ipush`/`ipop`, the coprocessor
  instructions (`cpop`, `cprgr`, ...), `mulsw`, `mulall.s16.s`.
- Not decoded: the FPU (`FLOAT_*` ISA tags), VDSP, the DSP and DSP-enhance
  extensions, Java acceleration and `jmpix`.

## Check

`csky-elf-objdump` (binutils 2.45, `-mcpu=ck860`) is the oracle: every random
16-bit and 32-bit word it decodes (about 70,000 across several seeds, both byte
orders) decodes here to the same mnemonic and operands, apart from a handful the
linear listing prints as data. The test image
`crates/unlace-cli/tests/fixtures/csky/sum_call_cmp.bin` is the `.text` of
`sum_call_cmp.s` assembled with `csky-elf-as -mcpu=ck810` and linked at 0x8000.
