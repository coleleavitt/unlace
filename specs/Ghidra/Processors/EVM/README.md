# Ethereum Virtual Machine

Written for unlace from the Ethereum Yellow Paper (appendix H, the instruction set) and the
evm.codes opcode reference, with the Cancun additions from their EIPs. No prior SLEIGH for
the EVM was found.

Language: `EVM:BE:32:Cancun`, every opcode through Cancun: arithmetic and comparison,
bitwise and shift (EIP-145), `PUSH0` (EIP-3855), `PUSH1`-`PUSH32`, `DUP1`-`DUP16`,
`SWAP1`-`SWAP16`, `MLOAD`/`MSTORE`/`MSTORE8`, `JUMP`/`JUMPI`/`JUMPDEST`/`PC`,
`TLOAD`/`TSTORE` (EIP-1153), `MCOPY` (EIP-5656), `BLOBHASH` (EIP-4844),
`BLOBBASEFEE` (EIP-7516), `LOG0`-`LOG4`, the call and create family, `RETURN`,
`REVERT`, `INVALID` and `SELFDESTRUCT`.

Model: the operand stack is the `evmstack` space. `SP` addresses the top 32-byte word and
a push moves it down by 32, so a `PUSH` followed by `JUMP` is a store and a load of one
slot, which heritage folds into a constant branch target. Words are 32-byte varnodes.
Memory and call data are the `mem` and `calldata` spaces, addressed by the low 32 bits of
the offset. `DIV`, `SDIV`, `MOD`, `SMOD`, `ADDMOD` and `MULMOD` return 0 for a zero
divisor as the Yellow Paper says; `ADDMOD`/`MULMOD` compute in 512 bits. `BYTE` and
`SIGNEXTEND` follow their definitions. Storage, transient storage, the environment and
block opcodes, `KECCAK256`, `EXP`, logs, calls, copies and the halting opcodes are user-ops
named after the opcode (`evm_call`, `evm_return` avoid C keywords). `STOP`, `RETURN`,
`REVERT`, `INVALID` and `SELFDESTRUCT` end the flow.

`PUSH16`-`PUSH32` are longer than SLEIGH's 16-byte instruction limit, so each decodes as a
head (opcode plus 15 immediate bytes) followed by one or two `PUSHDATA` continuations; the
`pushrest` context counts the immediate bytes still to come, and each continuation shifts
its bytes into the word on top of the stack.

Gaps: a constant wider than 64 bits (a `PUSH9`-`PUSH32` immediate) is not folded into one
literal, because constant folding works on 64-bit values; it prints as the shifts and ORs of
its pieces. Gas is not modelled. Dynamic jumps (a `JUMP` whose target comes from a
computed value, the usual Solidity return-address pattern) stay indirect. The dispatcher of
a Solidity contract is not split into functions, and EOF (EIP-3540) containers are not
decoded.

Oracle: hand-assembled vectors checked against the evm.codes opcode table (immediate
lengths and stack effects). Tests: `crates/unlace-cli/tests/evm.rs`.
