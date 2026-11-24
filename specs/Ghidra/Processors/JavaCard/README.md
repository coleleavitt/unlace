# Java Card virtual machine bytecode

Written for unlace from the Java Card Platform Virtual Machine Specification v3.1, Classic
Edition (Oracle, publicly available): chapter 7 (each instruction's format, operands and
stack effect) and chapter 8 (opcode values). No text is copied. No prior SLEIGH for Java
Card was found.

Language: `JavaCard:BE:16:3.1`, one method's bytecode (the bytes of a method in the CAP
file's Method component, after its header) decompiled as a raw image at base 0.

Model:
- The operand stack and the locals are 16-bit words. A short, byte (widened) or reference
  is one word and an int two, big endian. The stack is the `jstack` space (SP addresses the
  top word, a push moves it down by 2 or 4); local word n is the register `Ln` and the int
  held in words n and n+1 is `In`. The compiler spec passes `L0`-`L7` as parameters (the
  receiver is `L0` for an instance method) and returns `RVs` (short or reference) or `RV`
  (int).
- Every opcode of the 3.1 table decodes: constants, local loads/stores, the short and int
  arithmetic, shifts, conversions and `icmp`, `sinc`/`iinc` (and `_w`), the conditional
  branches with 8-bit and 16-bit offsets relative to the opcode, `goto`, `jsr`/`ret`, the
  returns and `athrow`.
- Array loads and stores, static and instance fields (including the `_this` and `_w`
  forms), object and array creation, `checkcast`/`instanceof`, `dup_x`/`swap_x` and
  `impdep1`/`impdep2` are user-ops; the table and lookup switches jump through a user-op
  that gets the switch's address, key and bounds.

Gaps: the constant pool is not read, so an invoke cannot know its argument count or result
type: `invokevirtual`, `invokespecial`, `invokestatic` and `invokeinterface` call a
user-op that returns the new stack pointer, and stack values after a call are not tracked
across it. Switch tables after the header are not decoded as data. MULTOS MEL, the other
half of this #98 row, has no language.

Oracle: no Java Card toolchain was available; the fixtures are hand-assembled from the
specification's tables (the test names each fixture's source and instructions), and a
coverage image holds every non-branching opcode with its operands. Tests:
`crates/unlace-cli/tests/javacard_raw.rs`.
