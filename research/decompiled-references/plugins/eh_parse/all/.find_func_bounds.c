// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64F0
// Name:            .find_func_bounds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64F0 jmp     cs:off_2F260
//
// Resolved target: find_func_bounds
// Target address:  0x2F8D0
// GOT/IAT slot:    0x2F260
// Slot symbol:     off_2F260
// Target type:     <no type info>
// ============================================================

void .find_func_bounds(/* see target signature */)
{
    // Tail-call to find_func_bounds via GOT/IAT indirection
    return find_func_bounds(/* forwarded args */);
}

