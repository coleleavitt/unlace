# Lua 5.1, 5.2, 5.3 and 5.4 bytecode

Written for unlace from the public Lua 5.4 sources (`lopcodes.h`, `lopcodes.c`, `lvm.c`,
MIT licence) and the Lua 5.4 reference manual. No prior SLEIGH module was used.

Language: `Lua:LE:32:5.4`, the PUC-Rio Lua 5.4 VM (5.4.0 to 5.4.8 share the opcode table),
little-endian 32-bit instruction words as `luac` writes them on x86/ARM hosts. The image is
the raw code array of one function prototype (the `code` vector of a `luac` chunk); load
it with `--raw-image --base <addr>`. Jumps count instructions, so a target is
`inst_next + 4 * offset`.

Model: a Lua value is its 8-byte payload (no type tag). Registers `R[0..255]` are
`r0`..`r255`; constants `K[i]` and upvalues `U[i]` are the i-th 8-byte word of the `K`
and `U` spaces, named `K0`..`K255` and `U0`..`U255` in `lua.pspec`. The prototype
takes its parameters in `r0`..`r7` and returns the first result in `RV`.

Modelled directly: `MOVE`, `LOADI`, `LOADF` (int-to-float of sBx), `LOADK`,
`LOADFALSE`/`LOADTRUE` (0/1), `LFALSESKIP`, `GETUPVAL`/`SETUPVAL`, the bitwise
`BAND`/`BOR`/`BXOR`/`BANDK`/`BORK`/`BXORK`/`BNOT` and the shifts `SHL`/`SHR`/
`SHLI`/`SHRI` with Lua's semantics (logical, a negative count shifts the other way, 64 or
more gives 0), `JMP`, the compare-and-skip ops (`EQ`/`LT`/`LE`/`EQK`/`EQI`/`LTI`/
`LEI`/`GTI`/`GEI`/`TEST`/`TESTSET`) as a conditional skip of the following `JMP`,
`FORPREP`/`FORLOOP`/`TFORPREP`/`TFORLOOP` control flow, and the returns.

User-ops (dynamic typing or VM state): `luaAdd`/`luaSub`/`luaMul`/`luaMod`/`luaPow`/
`luaDiv`/`luaIDiv`/`luaUnm` (full Lua arithmetic including the metamethod), `luaNot`,
`luaLen`, `luaConcat`, `luaEq`/`luaLt`/`luaLe`, `luaTruthy`, `luaIsNil`, `luaNil`,
`luaGetTable`/`luaSetTable` (all GET*/SET* and `SELF`), `luaNewTable`, `luaSetList`,
`luaCall` (`CALL`/`TAILCALL`/`TFORCALL`, with `luaCallResult(i)` for the extra
results), `luaCallMulti` (argument list up to the stack top), `luaForPrep`/`luaForStep`/
`luaForLoop`, `luaClosure`, `luaVararg`, `luaVarargPrep`, `luaClose`, `luaToBeClosed`,
`luaLoadKX`.

Gaps: values carry no type tag, so nil and false are not distinguished from other
payloads and the bitwise ops assume integer operands (a string or table operand takes the
metamethod path in the VM). `MMBIN`/`MMBINI`/`MMBINK` and `EXTRAARG` are no-ops,
since the arithmetic user-ops already include the metamethod call and the VM skips them on
the fast path. Only the first return value is modelled; `CALL` argument lists longer than
8 and multi-result `VARARG` go through the generic user-ops. `K` and `U` names stop at
index 255 (higher indexes print as addresses). LuaJIT bytecode is a different instruction set and is not covered.

Oracle: `luac5.4 -l -l` (Lua 5.4.8) on the fixture sources quoted in
`crates/unlace-cli/tests/lua54.rs`, plus a sweep decoding every opcode 0..82.

## Lua 5.1, 5.2 and 5.3: `Lua:LE:32:5.1`, `Lua:LE:32:5.2`, `Lua:LE:32:5.3`

`lua51.slaspec`, `lua52.slaspec` and `lua53.slaspec` decode the older PUC-Rio VMs (5.1.0-5.1.5,
5.2.0-5.2.4, 5.3.0-5.3.6), written from each release's public `lopcodes.h` and `lvm.c` (MIT).
They share the 5.4 module's model (registers, `K`/`U` spaces, compiler spec and user-ops).
Their instruction word is OP(0..5) A(6..13) C(14..22) B(23..31), Bx = bits 14..31, sBx =
Bx - 131071, Ax = bits 6..31; a B or C operand with bit 8 set is the constant `K[x & 0xff]`.

Every opcode of each version decodes. Differences from 5.4 that the specs follow: `LOADBOOL`
with a skip, `LOADNIL` up to register B (5.1) or A+B (5.2+), `GETGLOBAL`/`SETGLOBAL` (5.1, as
`luaGetGlobal`/`luaSetGlobal`), `GETTABUP`/`SETTABUP` on `_ENV` (5.2+), RK operands on the
arithmetic and comparison instructions, `EQ`/`LT`/`LE` with A as the expected result,
`TEST`/`TESTSET` with C, `FORPREP` as an unconditional jump to `FORLOOP`, the 5.1
`TFORLOOP` (call and test in one instruction) and the 5.2+ `TFORCALL`/`TFORLOOP` pair, `JMP`
with an upvalue-closing A (5.2+), and the 5.3 integer division and bitwise instructions
(`IDIV`, `BAND`, `BOR`, `BXOR`, `SHL`, `SHR`, `BNOT`). `CONCAT` passes every register of
R(B)..R(C) for ranges of up to six, `VARARG` with a fixed count assigns each register.

Gaps beyond 5.4's: in 5.1 the pseudo-instructions after `CLOSURE` that describe its upvalues
are decoded as ordinary `MOVE`/`GETUPVAL` instructions (the VM skips them; their count comes
from the prototype), and a `SETLIST` with C = 0 does not read its count from the next word.

Oracle: luac 5.1.5, 5.2.4 and 5.3.6 built from the lua.org sources compiled the fixtures in
`crates/unlace-cli/tests/fixtures/lua5x/` (`luac -l` listings), and a sweep decodes every
opcode of each version. Tests: the `lua51_*`, `lua52_*` and `lua53_*` rows of
`crates/unlace-cli/tests/processors.toml`.
