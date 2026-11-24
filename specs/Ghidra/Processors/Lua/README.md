# Lua 5.4 bytecode

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
index 255 (higher indexes print as addresses). Lua 5.1/5.2/5.3 and LuaJIT bytecode are
different instruction sets and are not covered.

Oracle: `luac5.4 -l -l` (Lua 5.4.8) on the fixture sources quoted in
`crates/unlace-cli/tests/lua54.rs`, plus a sweep decoding every opcode 0..82.
