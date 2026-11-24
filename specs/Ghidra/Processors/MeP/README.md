# MeP (Toshiba Media embedded Processor)

Written for unlace from the GNU binutils CGEN description of the MeP core ISA
(`cpu/mep-core.cpu`, `cpu/mep-c5.cpu`, the length rules in `opcodes/mep-dis.c`) and the
GCC 6 `config/mep/mep.h` register conventions. Those sources are GPL; they were read for
encodings and semantics only and no text was copied. The MIT-licensed Ghidra-Rare MeP
module was not used.

Languages:
- `MeP:BE:32:default`: big-endian MeP-c4 core (`mep-elf`).
- `MeP:LE:32:default`: little-endian (`mepl`). Instructions are 16-bit halfwords in the
  data byte order; a 32-bit instruction is two halfwords, first halfword first.

Modelled (core operating mode, 16- and 32-bit instructions with majors 12-15 being 32-bit):
register, register+disp16, `$sp`/`$tp`-relative and 24-bit absolute loads and stores
(sign/zero extension), all moves (`mov`, `movu`, `movh`), add/sub/neg, `add3` forms,
`slt3`/`sltu3`, `sl1ad3`/`sl2ad3`, logic (`or`/`and`/`xor`/`nor` and the 16-bit
immediate forms), shifts (register, immediate, `sll3`, `fsft` through `$sar`, `ssarb`),
extension, every branch (`bra`, `beqz`/`bnez`, `beqi`/`bnei`/`blti`/`bgei`, `beq`/`bne`,
`jmp` 24-bit and register), calls (`bsr` 12/24-bit, `jsr`) that set `$lp` to the next
instruction, `ret` through `$lp`, `ldc`/`stc` on all 32 control registers (`ldc $rn,$pc`
reads the next instruction's address), `di`/`ei` on PSW.IEC, the optional multiply and
multiply-accumulate (64-bit result in `$hi`/`$lo`), divide (`$lo` quotient, `$hi`
remainder), the bit-manipulation option (`bsetm`, `bclrm`, `bnotm`, `btstm`, `tas`), and
the optional `ldz`, `abs`, `ave`, `min`/`max`/`minu`/`maxu`, `clip`/`clipu`,
`sadd`/`ssub`/`saddu`/`ssubu`. Coprocessor loads/stores (`lwcp`, `swcp`, `lmcp`,
`smcp`, the post-increment and disp16 forms) move between memory and `$c0`-`$c15`.
`repeat`/`erepeat` set `$rpb`/`$rpe`/`$rpc` only.

User-ops: `syscall`, `softwareInterrupt`, `breakException`, `debugBreak`,
`returnFromInterrupt` (`reti`), `returnFromDebug` (`dret`), `halt`, `sleep`,
`syncMemory`, `syncCoprocessor`, `cacheOp`, `prefetch`, `controlBusStore`/
`controlBusLoad` (`stcb`/`ldcb`), `userCustomInstruction` (`uci`), `dspInstruction`
(`dsp`), `coprocessorBranchCondition` (`bcpeq`/`bcpne`/`bcpat`/`bcpaf`), `enterVliwCall`
(`bsrv`/`jsrv`).

Gaps: VLIW operating mode (the 32/64-bit core+coprocessor bundles, and the mode switch that
an odd `jmp`/`ret` target or `bsrv`/`jsrv` performs) is not decoded; the low address bit
is ignored. Alignment masking of loads/stores and the divide-by-zero trap are not modelled
(the hardware traps on misaligned addresses). The repeat block does not loop in the
p-code. Coprocessor-specific 32-bit operations (major 15, sub 7), the `*cpa`/`*cpm0`/
`*cpm1` modulo-addressing coprocessor transfers, the c5 `casb3`/`cash3`/`casw3` and the
`--syscall--` simulator hook beyond its number are not decoded or are user-ops.

Oracle: hand-checked vectors from the CGEN formats (no installed MeP objdump). Each pair is
the big-endian halfword(s) and the text unlace prints:

| Bytes | Instruction | Bytes | Instruction |
|---|---|---|---|
| `0120` | `mov r1,r2` | `9231` | `add3 r1,r2,r3` |
| `056e` | `lw r5,(r6)` | `a204` | `beqz r2,.+4` |
| `130d` | `extb r3` | `bffe` | `bra .-2` |
| `105f` | `jsr r5` | `b011` | `bsr .+0x10` |
| `611e` | `sll r1,0x3` | `d256 1234` | `movu r2,0x123456` |
| `62fb` | `sra r2,0x1f` | `c121 abcd` | `movh r1,0xabcd` |
| `7002` | `ret` | `c120 fffc` | `add3 r1,r2,-0x4` |
| `7026` | `swi 0x2` | `e121 0004` | `beq r1,r2,.+8` |
| `717a` | `ldc r1,hi` | `e157 1234` | `lw r1,(0x123454)` |
| `7209` | `stc r2,psw` | `f301 1040` | `clip r3,0x8` |
| `8b02` | `lb r3,0x2(tp)` | `8286` | `sh r2,0x6(tp)` |
| `410a` | `sw r1,0x8(sp)` | `420c` | `add3 r2,sp,0xc` |
| `612d` | `sltu3 r0,r1,0x5` | `2320` | `bsetm (r2),0x3` |

The decompiler checks are in `crates/unlace-cli/tests/mep.rs` (fixtures under
`crates/unlace-cli/tests/fixtures/mep`).
