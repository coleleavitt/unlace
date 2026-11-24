# FT32

FTDI FT32, the core of the FT900/FT930 microcontrollers (`ft32-elf` GCC and binutils).
Written for unlace (#98); no prior SLEIGH module existed.

Language: `ft32:LE:32:default`.

Sources: FTDI's FT32 programmer's documentation and the binutils `include/opcode/ft32.h` /
`opcodes/ft32-opc.c` field layout and opcode table (read for encodings; no text copied); the
GCC `config/ft32` register usage for the compiler spec.

Modelled:
- Harvard memory: instructions are fetched from the default `code` space (byte addresses; a
  branch's 18-bit field is a word address), and loads, stores and the stack use the `ram`
  space. `lpm`/`lpmi` read the `code` space.
- Every 32-bit opcode in the binutils table: ALU (`add` ... `flip`, with `ldl`, `bexts`,
  `bextu` computed from the width/position immediate), the function unit (`mul`, `muluh`,
  `div`/`mod` signed and unsigned), `ldk`, the load/store/exchange forms at each width
  (loads zero-extend), `push`/`pop`/`link`/`unlink`, `return`/`reti`, and the direct and
  indirect jumps and calls, conditional or not.
- `cmp`, `addcc`, `tst` and `btst` write the seven `$cc` (`r30`) condition bits and a hidden
  byte per bit, so a `jmpc` on a named condition (`z`, `b`, `lt`, `gt`, `a`, ...) decompiles
  as the comparison. A jump on any other bit of `r28`, `$fp` or `$cc` tests that bit.
- Calls push the return address on the data stack; calling convention from GCC: arguments in
  `r0`-`r5`, result in `r0`, `r13`-`r27` preserved.

Gaps:
- FT32B compressed pairs (two 15-bit short codes in one word, patterns 2-6 and 9) do not decode.
- The string/stream function-unit ops (`strcmp`, `memcpy`, `strlen`, `memset`, `stpcpy`,
  `stream*`), `bins`, `flip`, `halt` and `reti` are user-ops.
- A jump on `$cc` after `$cc` was written by something other than a compare reads the hidden
  bytes, which only compares update.

Checked: the CLI test image was assembled with binutils 2.45 `ft32-elf-as` and disassembled
with `objdump`; every field matches the decode.
