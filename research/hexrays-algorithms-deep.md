# Hex-Rays Decompiler Algorithms - Deep Analysis

**Created:** 2026-10-28  
**Source:** IDA Pro hexx64 plugin analyzed dumps  
**Legal:** EULA Section 2.1 explicitly permits this analysis

## Executive Summary

The Hex-Rays decompiler is organized as a **pass-based pipeline** with:
- A central dispatcher (`sub_33E140`) that iterates a linked list of pass callbacks
- Maturity levels (0-9) that gate which passes run (`sub_330F20`)
- Expression combining via a large switch on ctree opcode (`sub_B36D0`)
- LVAR allocation via interference graph coloring (`sub_21B2A0`)
- C printing via recursive dispatch on statement/expression type

---

## 1. Pipeline Architecture

### 1.1 Pass Dispatcher (`sub_33E140`, 23 lines)

```c
// Iterates linked list of registered passes at context+120
// Each pass is: callback(context, event_number, va_args) -> int
// Return 0 = continue, non-zero = abort
while (current_pass) {
    next = current_pass->next;
    result = current_pass->callback(current_pass->context, event, va_args);
    if (result) return result;
    current_pass = next;
}
```

**Key insight:** Simple linked-list iteration. Easy to replicate in Rust.

### 1.2 Maturity Setter (`sub_330F20`, 17 lines)

```c
// Sets maturity level at context+312
// Notifies all passes via event 116
if (current_maturity > new_maturity) return 0;  // Can't go backwards
context->maturity = new_maturity;
return dispatch_passes(context, 116, ...);  // Notify maturity change
```

**Maturity levels:**
| Level | Name | Description |
|-------|------|-------------|
| 0 | ZERO | Initial state |
| 1 | GENERATED | Microcode generated |
| 2 | PREOPT | After preoptimization |
| 3 | LOCOPT | After local optimization |
| 4 | CALLS | After call analysis |
| 5 | GLBOPT1 | Global optimization pass 1 |
| 6 | GLBOPT2 | Global optimization pass 2 |
| 7 | GLBOPT3 | Global optimization pass 3 |
| 8 | LVARS | After lvar allocation |
| 9 | FINAL | Ready for output |

### 1.3 Pipeline Orchestrator (`sub_14B8B0`, 358 lines)

**Main loop structure:**
```
while (true) {
    1. Run local passes (sub_1443F0)
    2. Set maturity to 3 (LOCOPT)
    3. Resolve stack variables (sub_13B0F0)
    4. Set maturity to 4 (CALLS)
    5. Run call analysis (sub_14A660)
    6. Set maturity to 5 (GLBOPT1)
    7. Check for user abort
    8. Run global passes via dispatcher (event 6)
    9. Set maturity to 6 (GLBOPT2)
    10. Run LVAR pass (sub_1FAB30)
    11. Run global propagation (sub_181F80)
    12. Build ctree (sub_1CE9E0)
    13. Return
}
```

---

## 2. Expression Optimization

### 2.1 Preoptimize (`sub_1382E0`, 59 lines)

**Algorithm:**
```
if (maturity <= 1) {
    log("before preoptimize");
    for each block in context->blocks:
        sub_B62C0(block);  // Per-block optimization
    sub_A6DC0(context);     // Unknown opt
    sub_A7130(context);     // Unknown opt
    context->flags |= 0x200;
    log("after preoptimize");
    
    if (sub_A0950(context))  // Combined operand propagation
        log("after combined operand propagation");
    
    // Initialize type analysis
    create_type_context();
    dispatch_passes(event=4);
    set_maturity(2);
}
```

### 2.2 Combiner/Peephole (`sub_B36D0`, 1204 lines)

**The largest single function.** Structure:

```c
switch (expr->opcode) {
    case 1:  // cot_comma
        // Pattern: (x, x) where second x == first x
        // -> simplify to just x
        if (match_pattern(...))
            convert_to_cot_empty();
        else
            try sub_9AAF0 or sub_18AD00;
        break;
        
    case 2:  // cot_asg (assignment)
        // Try sub_186F90
        break;
        
    case 4:  // cot_tern (ternary)
        // Complex ternary simplification
        // Analyze condition and branches
        // Try to fold constant conditions
        break;
        
    case 5:  // cot_lor/cot_land (logical)
        // Short-circuit optimization
        break;
        
    case 9:  // cot_eq (equality)
        // Comparison simplification
        break;
        
    default:
        // Generic handling
        break;
}
```

**Key helper functions called:**
- `sub_11D5A0` (13x): Delete/free expression
- `sub_11CDA0` (10x): Clear expression slot
- `sub_125B60` (6x): Type compatibility check
- `sub_A2350` (6x): Operand comparison
- `sub_93B40` (6x): Cleanup temporary

### 2.3 Expression Finisher (`sub_B5190`, 39 lines)

Final cleanup after main combining. Calls back into `sub_B36D0` for remaining patterns.

---

## 3. LVAR (Local Variable) Allocation

### 3.1 Initial Allocation (`sub_1F8DC0`, 1486 lines)

**The largest function overall.** Algorithm:

```
1. Count variables from context->var_count (+440)
2. Initialize var array with identity mapping [0,1,2,...]
3. Get merge_state flags
4. Sort variables by:
   - If merge_state & 3 == 0: by interference order
   - Else: by allocation priority
5. For each variable:
   - Check compatibility with existing allocations
   - Try to merge with compatible variables
   - If can't merge, allocate new slot
6. Call sub_21F320 for stack frame layout
```

**Control flow:** 157 ifs, 21 whiles, 47 gotos - complex state machine

### 3.2 Interference/Coalescing (`sub_21B2A0`, 448 lines)

**Algorithm:**

```
1. Initialize N variables (from context+440)
2. Create identity mapping array
3. Get merge_state flags
4. Sort by compatibility (sub_21B070, sub_218E40)
   - Uses sub_215AC0 for pairwise compatibility
   - Insertion sort for small arrays
   - Introsort for larger
5. For each pair of compatible variables:
   - Check type compatibility (sub_1C2AD0)
   - Check live range overlap
   - If compatible and non-overlapping: merge
6. Remap all references (sub_216E00)
7. Lay out stack frame (sub_21F320)
```

### 3.3 Compatibility Check (`sub_215AC0`, 120 lines)

Checks if two variables can share the same storage:
- Same base type
- Non-overlapping live ranges
- Compatible address-taken flags
- No aliasing conflicts

### 3.4 Stack Frame Layout (`sub_21F320`, 753 lines)

After coalescing, assigns concrete stack offsets:
- Groups variables by alignment
- Assigns increasing offsets
- Handles spill slots
- Records final frame size

### 3.5 Variable Naming (`sub_2112D0`, 264 lines)

Assigns IDA-style names:
- Arguments: `a1`, `a2`, `a3`, ...
- Locals: `v1`, `v2`, `v3`, ...
- Return value: `result`
- Special: `this`, `exception`, etc.

---

## 4. C Printer

### 4.1 Main Printer (`sub_3DBC50`, 801 lines)

Entry point. Prepares context then dispatches.

### 4.2 Statement Dispatcher (`sub_268570`, 284 lines)

**Algorithm:**

```c
while (true) {
    get_module_data();
    if (stmt->line != -1)
        print_line_directive();
    
    if (stmt->opcode != 71) {  // cit_block
        switch (stmt->opcode) {
            case <if>:
                print_if_header();
                recurse(stmt->then);
                if (stmt->else) {
                    print_else();
                    recurse(stmt->else);
                }
                break;
            case <while>:
                print_while_header();
                recurse(stmt->body);
                break;
            // ... other cases
        }
    }
}
```

**Key sub-printers:**
- `sub_262740`: Generic syntax element (keywords, operators)
- `sub_267810`: Expression with precedence
- `sub_2630C0`: Expression statement
- `sub_2656E0`: Declaration

---

## 5. Data Structures

### 5.1 Decompilation Context

```c
struct mba_t {
    uint32_t flags;           // +0
    uint8_t  flags2;          // +1
    uint8_t  unknown[...];
    int      maturity;        // +312
    int      target_maturity; // +316
    void*    blocks;          // +520 (linked list of mblock_t)
    void*    type_context;    // +928
    void*    type_engine;     // +936
    int      var_count;       // +440
    void*    vars;            // +432
    void*    global_state;    // +1496 (has pass list at +120)
    void*    processor;       // +1504
};
```

### 5.2 Expression Node (cexpr_t)

```c
struct cexpr_t {
    int      opcode;    // +0: cot_* type
    int      flags;     // +4
    int      opcode2;   // +8
    int      line;      // +12
    void*    type;      // +16
    void*    x;         // +24: left operand / first child
    union {
        void*    y;     // +32: right operand
        uint64_t n;     // +32: numeric value
    };
    void*    z;         // +40: third operand (ternary)
    uint8_t  size;      // +48
    // ... more fields
};
```

---

## 6. Implementation Notes for Unlace

### 6.1 What to Copy

1. **Pass architecture**: Simple linked list, easy
2. **Maturity levels**: Just an enum
3. **Combiner switch structure**: Match on HIR opcode
4. **LVAR interference graph**: Standard graph coloring
5. **Printer dispatch**: Match on statement/expression type

### 6.2 What to Improve

1. **The combiner is 1204 lines of switch** - split into per-opcode handlers
2. **Initial allocation is 1486 lines** - extract subroutines
3. **Many gotos** - use Rust's ? and early returns
4. **Raw pointer offsets** - use typed structs

### 6.3 Specific Patterns to Port

From the combiner (`sub_B36D0`):
- Case 1: Comma-expression simplification
- Case 4: Ternary constant folding
- Case 5: Short-circuit optimization

From LVAR (`sub_21B2A0`):
- Interference graph via `sub_215AC0`
- Graph coloring via insertion sort + merge
- Reference remapping via `sub_216E00`

---

## 7. Function Index

| Function | Lines | Role |
|----------|-------|------|
| `sub_1F8DC0` | 1486 | Initial LVAR allocation |
| `sub_B36D0` | 1204 | Expression combiner/peephole |
| `sub_3DBC50` | 801 | C printer entry |
| `sub_21F320` | 753 | Stack frame layout |
| `sub_21B2A0` | 448 | LVAR coalescing |
| `sub_14B8B0` | 358 | Pipeline orchestrator |
| `sub_268570` | 284 | Statement dispatcher |
| `sub_2112D0` | 264 | Variable naming |
| `sub_A6DC0` | 174 | Unknown optimization |
| `sub_215AC0` | 120 | Compatibility check |
| `sub_A7130` | 119 | Unknown optimization |
| `sub_1382E0` | 59 | Preoptimize |
| `sub_B5190` | 39 | Expression finisher |
| `sub_216E00` | 36 | Reference remap |
| `sub_33E140` | 23 | Pass dispatcher |
| `sub_330F20` | 17 | Maturity setter |
| `sub_A0950` | 13 | Operand propagation |
