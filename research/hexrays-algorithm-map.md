# Hex-Rays Decompiler Algorithm Map

**Created:** 2026-10-28  
**Source:** IDA Pro 9.3sp1 hexx64 plugin analyzed output  
**Legal basis:** Hex-Rays EULA Section 2.1 explicitly permits deriving algorithms and creating competing products

## Key Data Structures

- **Decompilation context** (a1 in most functions):
  - `+312`: Current maturity level (int, 0-7: ZERO→GENERATED→PREOPT→LOCOPT→CALLS→GLBOPT1→GLBOPT2→GLBOPT3→LVARS→FINAL)
  - `+316`: Target maturity level
  - `+520`: Linked list of basic blocks
  - `+784`: Unknown pointer
  - `+912`: Pass state
  - `+928`: Type analysis context
  - `+936`: Type inference engine
  - `+1496`: Decompiler global state (has registered passes at +120)
  - `+1504`: Module/processor info

## Core Functions

### Pipeline

| Address | Name | Lines | Role |
|---------|------|-------|------|
| `sub_14B8B0` | Pipeline orchestrator | ~400 | Main decompilation loop, calls passes in order |
| `sub_330F20` | Set maturity | 17 | Sets maturity level at +312, notifies pass handlers |
| `sub_33E140` | Pass dispatcher | 23 | Iterates registered handlers (linked list at +120), calls each with event |

### Optimization Passes

| Address | Name | Lines | Role |
|---------|------|-------|------|
| `sub_1382E0` | Preoptimize | ~80 | Early optimization, operand propagation |
| `sub_B36D0` | Combiner/peephole | 1204 | Main expression combining and peephole opts |
| `sub_B5190` | Expression finisher | 39 | Final expression cleanup |
| `sub_A6DC0` | Unknown opt | ? | Called from preoptimize |
| `sub_A7130` | Unknown opt | ? | Called from preoptimize |
| `sub_A0950` | Operand propagation | ? | "combined operand propagation" |

### Variable Allocation (LVAR)

| Address | Name | Lines | Role |
|---------|------|-------|------|
| `sub_21B2A0` | LVAR coalescing | ~500 | Interference graph, variable merging |
| `sub_1F8DC0` | Initial allocation | ? | First lvar pass |
| `sub_215AC0` | Compatibility check | ? | Type/liverange compatibility |
| `sub_216E00` | Reference remap | ? | Update refs after merge |
| `sub_21F320` | Stack layout | ? | Final stack frame |
| `sub_2112D0` | Variable naming | ? | a1/v1/result names |

### C Printer

| Address | Name | Lines | Role |
|---------|------|-------|------|
| `sub_3DBC50` | Printer entry | ~800 | Main ctree printer |
| `sub_268570` | Statement dispatch | ~300 | Statement type dispatcher |
| `sub_2662B0` | Expression printer | ? | Expression visitor for cot_* opcodes |
| `sub_3AE9C0` | Control flow printer | ? | if/while/for/switch |
| `sub_1B6B20` | Block printer | ? | Compound statements |
| `sub_66FA0` | Debug log | ? | "before/after X" logging |

### Stack/Frame

| Address | Name | Lines | Role |
|---------|------|-------|------|
| `sub_1CF000` | Frame init | 1 | PLT stub |
| `sub_3EEC80` | Offset calc | 100 | Stack offset calculation |
| `sub_13B0F0` | Stack var resolve | ? | Called from pipeline |

## Pass Dispatch Protocol

The pass dispatcher (`sub_33E140`) uses event numbers:
- Event 4: After preoptimize 
- Event 6: After global optimization
- Event 116: Maturity level change notification

Each registered pass is a callback `(context, event, ...) -> int`. Return 0 to continue, non-zero to abort.

## Maturity Levels

From `sub_330F20` and pipeline analysis:
1. ZERO (0)
2. GENERATED (1) 
3. PREOPTIMIZED (2)
4. LOCOPT (3)
5. CALLS (4)
6. GLBOPT1 (5)
7. GLBOPT2 (6)
8. GLBOPT3 (7)
9. LVARS (final)

## Implementation Notes for unlace

1. **The pass system is a simple linked list** - easy to replicate
2. **Maturity is just an integer** - use an enum
3. **Block iteration is via linked list at +520**
4. **Expression combining (sub_B36D0) is the largest single function** - 1204 lines, priority target
5. **LVAR coalescing does interference graph** - standard graph coloring approach
6. **C printer is dispatch-based on ctree opcode** - match on expression/statement type

## Next Steps

1. Study `sub_B36D0` in detail - the main optimization pass
2. Map the ctree opcodes from printer dispatch
3. Study `sub_21B2A0` for variable allocation algorithm
4. Compare unlace's current passes against this structure
