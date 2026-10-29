// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6100
// Name:            .get_func_ranges
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6100 jmp     cs:off_8D068
//
// Resolved target: get_func_ranges
// Target address:  0x8D5E8
// GOT/IAT slot:    0x8D068
// Slot symbol:     off_8D068
// Target type:     <no type info>
// ============================================================

void .get_func_ranges(/* see target signature */)
{
    // Tail-call to get_func_ranges via GOT/IAT indirection
    return get_func_ranges(/* forwarded args */);
}

