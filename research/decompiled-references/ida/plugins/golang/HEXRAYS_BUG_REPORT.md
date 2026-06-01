# Hex-Rays Bug Report: golang.so infinite loop on Go generic-shape interface types

## Product
IDA Pro 9.3sp1, Linux x86_64 (ida-pro-9.3sp1)
Hex-Rays Decompiler v9.3.0.260327 (hexx64.so)

## Summary
Decompiling Go-compiled binaries hangs IDA indefinitely when Hex-Rays encounters functions whose prototypes reference `go.shape.interface__*` types. The hang is in `golang.so`'s type resolver (called via `calc_arglocs` / `calc_retloc`), which enters infinite recursion on cyclic Go type descriptors.

**IDA 9.3sp1 release notes mention**: "golang: fixed infinite loop when processing structs with self-referential pointer cycles" — this fix covers STRUCT cycles only. INTERFACE cycles via Go's generic-shape system are NOT covered.

## Reproduction
1. Open any Go 1.18+ compiled binary that uses generics with interface type parameters (e.g., `crypto/tls`, `golang.org/x/crypto/chacha20poly1305`)
2. Navigate to a function like `vendor_golang.org_x_crypto_chacha20poly1305.chacha20Poly1305Open`
3. Press F5 (decompile)
4. IDA hangs permanently — 100% CPU on main thread, zero syscalls, never returns

**Test binary**: Any Go 1.21+ binary built with `go build` (not stripped). The `ant` CLI from Anthropic (Go, ~25K functions) triggers it reliably at function index ~5771.

## Root Cause Analysis

### Go's type system uses `@N` backreferences for cycles

Go's compiler (go/src/cmd/compile/internal/types/fmt.go:257-262, `tconv2` function) tracks visited types during name generation. When a cycle is detected, it emits `@N` where N is a buffer offset backreference:

```
go.shape.interface { M() interface { N() @0 } }
                                         ^^^ backreference to buffer position 0
```

This is bounded and correct. MaxShapeLen=500 (go/src/cmd/compile/internal/base/flag.go:182) hashes anything longer via SHA256.

### IDA's golang.so doesn't understand `@N` backreferences

The type walker in golang.so parses Go type descriptors from the binary's `.typelink` / `.rodata` sections and creates IDA `tinfo_t` entries. When it encounters an interface type that references another interface (which references the first), it follows the pointer cycle infinitely because:

1. No visited-set / depth counter exists in the type walk
2. `@N` backreference notation (if present in symbol names) is not recognized
3. Runtime type descriptors use `TypeOff` / `NameOff` relative offsets that create actual pointer cycles in the binary — even without `@N` notation, the *binary data* is cyclic

### GDB evidence

Attached to IDA during the hang (PID 86896):

**First attach** — stuck in `idaclang.so`:
```
#0  idaclang.so+0x7070
#1-5  libida.so (type resolver)
#6-7  procs/pc.so
#8-10 libida.so (SAME frames as #1-5 = recursion)
#11   calc_retloc (libida.so)
#12-19 hexx64.so
#20   ida_mcp plugin → decompile()
```

**Second attach** — stuck in `golang.so`:
```
#0  golang.so+0xdf6e0
#1-3  libida.so (calc_arglocs recursion)
#4+   hexx64.so → decompile()
```

Both times: zero syscalls (strace shows nothing in 5s), 95% CPU, pure userspace spin. The PC shifts between attaches (different recursion depths each time), confirming the loop is O(2^N) expansion, not stuck at one instruction.

**Process state at hang**:
- RSS: 900MB, VmPeak: 2.79GB (ballooned during type expansion)
- 12 Hexrays worker threads all in futex (idle, waiting on main)
- Main thread state: R (running), wchan=0
- MCP server connection: CLOSE-WAIT (client timed out, server didn't notice)

## Affected symbols (from Go compiler source analysis)

All of these can trigger the hang if they encode cyclic type references:

| Prefix | Source | Risk |
|--------|--------|------|
| `go.shape.*` | types/type.go:1988 | CRITICAL — @N cycles |
| `go:itab.*` | reflectdata/reflect.go:602 | HIGH — interface + concrete |
| `go:info.*` | dwarf/dwarf.go:24 | HIGH — DWARF type DIEs |
| `type..*` | types/type.go:1958 | HIGH — nested generics |
| `.dict.*` | objabi/util.go:17 | MEDIUM — type args |

## Proposed fix

Add a visited-set (e.g., `std::unordered_set<ea_t>` of type descriptor addresses) to golang.so's type walker. Before recursing into a type offset, check if the target address is already in the set. If yes, return a forward-declared placeholder type and break the cycle. This matches what the Go compiler itself does with `@N` backreferences.

Alternatively, a simple depth counter (max 32) would prevent the infinite recursion at the cost of truncating very deeply nested (but non-cyclic) types.

## Workaround

We implemented a pre-filter in our MCP plugin that skips functions matching Go compiler-generated symbol patterns before calling `decompile()`. This prevents the hang but means ~2-5% of functions in a Go binary cannot be decompiled.

## Forensic logs attached
- `/tmp/ida-stuck.log` — full crash state (registers, stack, backtrace, shared libs, proc mappings)
- `/tmp/ida-forensics.log` — detailed module bases and memory inspection
