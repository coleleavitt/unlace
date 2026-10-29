# Argument / Parameter Recovery Research

Downloaded to support fixing the 14 phantom-`aN` parameter over-detections
surfaced by `UNLACE_TYPE_TRACE` (all from the `scan=whole-function` fallback in
`crates/unlace-passes/src/calling_convention.rs::infer_params`).

## The bug (verified via `UNLACE_CALLING_TRACE` `param-promote`/`param-fallback`)

`infer_params` first scans the **entry block** for arg registers read before
write. When the entry block has none (`entry_arg_reads=false`, common for
`main` and any function whose prologue spills before touching args), it falls
back to `collect_whole_function_reads`, which flags a register as a parameter if
it is read-before-write **in *any* block**. For `main` this grabs
`rdi,rsi,rdx,rcx,r8,r9,xmm0` because `main` *sets those up as outgoing call
arguments* to `printf`/`f_ackermann`/etc. — they are not incoming parameters.
Result: `int main(void)` is mis-typed as taking `a1..a7`, and the body emits
`_QWORD a3; // edx` style phantom-arg declarations (counted as leaked temps).

The 14 phantom cases: `medium::main` (a1,a2,a3,a4,a5,a6), `stripped::main`
(same 6), `debug_cpp_rtti::main` (a1), `debug_templates::make_array` (a2).

## Papers

| file | what it gives us |
| --- | --- |
| `vanemmerik-2007-ssa-decompilation-thesis.pdf` | **Primary.** Van Emmerik's PhD (Boomerang). Ch. on parameter & return recovery defines the correct test: a location is a **parameter iff it is live on entry** — used along *some path from the entry node before being (re)defined* — computed with proper backward liveness over the SSA/CFG, NOT a per-block read-before-write union. Also covers removing outgoing-call-arg defs from the live-in set, and `main`/`argc`/`argv` special handling. |
| `divine-discovering-variables-2007.pdf` | Balakrishnan & Reps DIVINE — a-loc recovery; frame/region partitioning that underpins distinguishing incoming params from locals/outgoing slots. |
| `tie-type-inference-2011.pdf` | TIE — principled type inference; useful for the *type* half (`a5 = Int(8)` vs `Ptr`) once parameter *count* is correct. |
| `punstrip-probabilistic-naming-2020.pdf` | Punstrip — probabilistic naming in stripped binaries; relevant to confidence-scored arg naming when liveness is ambiguous. |
| `xfl-naming-functions-2021.pdf` | XFL — extreme multi-label function naming; background for naming pipeline. |

## Fix direction (from Van Emmerik Ch. 8)

Replace the whole-function read-before-write fallback with a **live-on-entry**
computation:
1. Backward liveness over the CFG; a register is a parameter candidate only if
   it is live at the function entry node.
2. Exclude registers whose only entry-reachable reads are as **call-argument
   operands** (outgoing-arg setups), which are defs-for-callee, not uses-by-us.
3. Keep the "consecutive ABI register" prefix rule, but seed it from the
   live-on-entry set, not the any-block read set.
4. Special-case `main`: SysV `main(int, char**, char**)` — accept argc/argv/envp
   only if rdi/rsi/rdx are genuinely live-on-entry; otherwise `main(void)`.
