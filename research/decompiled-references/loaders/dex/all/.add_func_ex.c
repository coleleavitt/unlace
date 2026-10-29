// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3530
// Name:            .add_func_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3530 jmp     cs:off_28280
//
// Resolved target: add_func_ex
// Target address:  0x28730
// GOT/IAT slot:    0x28280
// Slot symbol:     off_28280
// Target type:     <no type info>
// ============================================================

void .add_func_ex(/* see target signature */)
{
    // Tail-call to add_func_ex via GOT/IAT indirection
    return add_func_ex(/* forwarded args */);
}

