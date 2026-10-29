// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6130
// Name:            .get_func_ranges
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6130 jmp     cs:off_2F080
//
// Resolved target: get_func_ranges
// Target address:  0x2F6F0
// GOT/IAT slot:    0x2F080
// Slot symbol:     off_2F080
// Target type:     <no type info>
// ============================================================

void .get_func_ranges(/* see target signature */)
{
    // Tail-call to get_func_ranges via GOT/IAT indirection
    return get_func_ranges(/* forwarded args */);
}

