# x86

The SLEIGH specification is Ghidra's (Apache-2.0, see the repository NOTICE).
This file records the extensions added on top of it for #98. Oracle for all of
them: LLVM 22 (`llvm-mc`/`llvm-objdump`).

## Intel APX: REX2 and EVEX map 4 (`apx.sinc`, `apx_map4.sinc`, `apx_rex2map1.sinc`)

Sources: Intel Advanced Performance Extensions (APX) Architecture
Specification 355828-009, sections 3.1.2-3.1.5 (REX2, the extended EVEX of map
4, NDD, NF, ZU, CCMP/CTEST, CFCMOVcc, PUSH2/POP2, PPX, JMPABS). Only
`x86-64.slaspec` includes the files; `x86.sla` and `x86-16.sla` are unchanged.

- Registers: `R16`-`R31` with their `D`, `W` and `B` views at register offset
  0x3000. The fifth register-id bits are decode context (`rexR4`, `rexX4`,
  `rexB4` in `ia.sinc`); `Reg*`, `Rmr*`, `Base*`, `Index*` and the 32-bit
  zero-extension helpers get constructors for them in `apx.sinc`.
- REX2 (`D5`): sets the REX bits and the fifth bits; with M0=0 it decodes the
  legacy map-0 constructors unchanged, with M0=1 it selects legacy map 1
  (`vexMode=3 & vexMMMMM=1`), and `apx_rex2map1.sinc` repeats every 64-bit
  map-1 constructor of the x86 sources under that key (rows 0x3* and 0x8* #UD
  under REX2 and are left out). In 64-bit mode `D5` is no longer AAD; the
  `A1` MOV-from-moffs forms exclude REX2 so that `D5 00 A1` is JMPABS.
- EVEX map 4 (`apx_map4.sinc`): the ALU ops (ADD OR ADC SBB AND SUB XOR),
  INC/DEC/NEG/NOT, the shifts and rotates, SHLD/SHRD, IMUL (two- and
  three-operand, ZU), MUL/IMUL/DIV/IDIV one-operand, POPCNT/TZCNT/LZCNT, ADCX/ADOX,
  MOVBE, CRC32, CMOVcc (NDD), CFCMOVcc, SETcc and SETcc.zu, CCMPscc/CTESTscc,
  PUSH2/POP2 (and the PPX P forms). EVEX.ND writes the result to the V4:vvvv
  register (zero-extending a 32-, 16- or 8-bit result to 64 bits); EVEX.NF
  lifts the same operation without the flag writes (the mnemonic gets `.NF`).
- CCMP/CTEST: a true source condition compares or tests and sets the flags as
  CMP/TEST do; a false one sets OF, SF, ZF and CF from the dfv bits, PF from
  dfv.CF and clears AF. CFCMOVcc with a memory operand reads or writes memory
  only on a true condition; CMOVcc NDD always reads its r/m.
- PUSH2/POP2 push or pop the two registers in order; the PPX hint (PUSHP,
  POPP, PUSH2P, POP2P) has no effect on the p-code. JMPABS is a direct jump to
  its 64-bit immediate.
- `scripts/gen_x86_apx.py` writes `apx_map4.sinc` and `apx_rex2map1.sinc`
  (the map-4 forms from its operation tables and from the legacy constructors
  of `ia.sinc`, `bmi1.sinc` and `lzcnt.sinc`; the REX2 map-1 forms by
  re-keying the legacy map-1 constructors). Edit the generator, not the files.

Checked: the probe of `crates/unlace-cli/tests/fixtures/x86_apx` and an
89-instruction sample of every map-4 family, REX2 EGPR addressing and the PPX
forms print as `llvm-objdump` does (case and the `.NF` suffix aside; `xchg`
lists its operands the other way round). Decompiling all of `/usr/bin/ls`
gives byte-identical C before and after.

Gaps: EGPRs in instructions encoded with EVEX maps other than 4 (the EVEX
forms of the VEX GPR instructions such as ANDN/BEXTR/SHLX/KMOV, CMPccXADD,
MOVDIR64B, INVPCID, and EGPR base/index registers in AVX-512 memory operands)
are not decoded yet; a REX2-prefixed instruction that #UDs (map-1 rows 0x3*
and 0x8*, a REX2 before another prefix) is a bad instruction, not modelled
further; NF on a form the spec gives no NF variant is rejected only where
LLVM's encoding tables leave no constructor.
