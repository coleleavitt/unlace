// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2210
// Name:            .find_func_bounds
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2210 jmp     cs:off_A0F0
//
// Resolved target: find_func_bounds
// Target address:  0xA320
// GOT/IAT slot:    0xA0F0
// Slot symbol:     off_A0F0
// Target type:     <no type info>
// ============================================================

void .find_func_bounds(/* see target signature */)
{
    // Tail-call to find_func_bounds via GOT/IAT indirection
    return find_func_bounds(/* forwarded args */);
}

