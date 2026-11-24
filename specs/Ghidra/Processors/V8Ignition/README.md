# V8 Ignition bytecode

Written for unlace from V8's `src/interpreter/bytecodes.h` and `bytecode-operands.h` at tag
13.6.233.17 (the V8 in Node.js 24; BSD-3-Clause), which give the bytecode order (the opcode
numbers), each bytecode's operand types and its implicit accumulator use; no text is
copied. Checked against `node --print-bytecode` (Node.js 24.22.1). No prior SLEIGH for
Ignition was found (a write-up exists, without a licensed spec).

Language: `V8Ignition:LE:32:13.6`. The input is one function's bytecode array, as the bytes
`node --print-bytecode` lists, decompiled as a raw image at base 0. Ignition opcodes and
operand layouts change between V8 versions, so another V8 needs its own language.

Model:
- Ignition is an accumulator machine. `ACC` is the implicit operand; frame registers
  `r0`.. (operand bytes 0xf9 downward), the receiver `this` (2) and parameters `a0`.. (3
  upward) are explicit 8-byte registers. The compiler spec passes `this` and `a0`-`a7` as
  parameters and returns `RV` (`Return` copies the accumulator there).
- `Wide` and `ExtraWide` are prefixes that scale every scalable operand to 2 or 4 bytes; a
  scaled register operand addresses the `frame` space instead of a named register.
- Every bytecode except the `DebugBreak*` forms and `Illegal` decodes. Loads and stores of the accumulator, `Mov`, the short `Star0`-
  `Star15` forms, `LdaSmi` and the Smi operators' immediates are plain values; jumps (`Jump`,
  `JumpLoop` and the conditional `JumpIf*` forms) are relative to the bytecode;
  `Return`, `Throw`, `ReThrow` and `Abort` end the flow. Operators (`js_add`,
  `js_lessthan`, ...), property access, globals, context slots, calls (`CallProperty0-2` and
  `CallUndefinedReceiver0-2` pass their argument registers), literals, closures, iteration
  and the runtime are user-ops; the remaining bytecodes call a user-op named after the
  bytecode with their operands.

Gaps: the constant pool, feedback vector and handler table are not read (constants show as
`js_const(index)`, try/catch handlers are unreachable); jumps through the constant pool
(`Jump*Constant`) and `SwitchOnSmiNoFeedback` jump tables are indirect; register lists pass
their first register and count rather than the values; generators suspend through a user-op.

Oracle: `node --print-bytecode` for the fixtures (`fixtures/v8ignition/source.js`) and for
84 functions of a coverage script (classes, generators, async/await with try/finally,
switch, for-in/of, destructuring and spread, regular expressions, Wide operands) plus the
Node.js internals it loads; every one decompiles with no bad instruction. Tests:
`crates/unlace-cli/tests/v8ignition_raw.rs`.
