# CPython 3.12 bytecode

Written for unlace from the CPython 3.12 `dis` and `opcode` modules (opcode numbers, inline
cache counts, which opcodes jump and how their targets are encoded, read with python3.12),
the `dis` documentation and the instruction definitions in `Python/bytecodes.c` (PSF
licence, read for semantics only; no text copied). No prior SLEIGH for Python bytecode was
found.

Language: `CPython:LE:32:3.12`. The input is one code object's `co_code` (for example
`f.__code__.co_code` written to a file) decompiled as a raw image at base 0; the constants,
names and exception table of the code object are not read.

Model:
- An instruction is an opcode byte and an argument byte. `EXTENDED_ARG` is a prefix that
  shifts its byte into the next instruction's argument. The inline `CACHE` words that
  follow some instructions decode as `CACHE` no-ops (`LOAD_ATTR` with nine of them would
  exceed SLEIGH's 16-byte instruction limit); jump targets count them as CPython does.
- The value stack is the `pystack` space (SP addresses the top entry, a push moves it down
  by 8), so stack traffic folds into expressions. Fast locals are the registers
  `fast0`-`fast255` (wider indices use the `fastx` space); the compiler spec passes the
  first eight as parameters and returns `RV`.
- Every opcode of 3.12 except the `INSTRUMENTED_*` forms decodes. Constants, globals,
  names, attributes, subscripts, calls (`CALL` with up to six arguments passes them as
  values), the `BINARY_OP` and `COMPARE_OP` operators (one user-op per operator, such as
  `py_add` and `py_lt`), truth tests, iteration (`FOR_ITER` exhaustion pops the iterator
  and skips `END_FOR`), builders, unpacking, imports, closures and the rest are user-ops on
  8-byte object references. `RETURN_VALUE`/`RETURN_CONST` return, `RAISE_VARARGS` and
  `RERAISE` end the flow.

Gaps: exception handlers are reached only through the code object's exception table, which
is not read, so handler code shows as unreachable; `KW_NAMES` is recorded but not passed to
the next `CALL`; generators and coroutines (`YIELD_VALUE`, `SEND`) are user-ops without
their suspension semantics; other Python versions change opcode numbers and have no
language.

Oracle: python3.12 `dis` (offsets, arguments and jump targets) for the fixtures
(`fixtures/cpython/source.py`) and for all 71 code objects of the stdlib modules textwrap,
json.decoder, json.encoder, fnmatch and shlex, each of which decompiles with no bad
instruction. Tests: `crates/unlace-cli/tests/cpython_raw.rs`.
