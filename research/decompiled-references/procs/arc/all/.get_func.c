// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83E0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83E0 jmp     cs:off_2A1D8
//
// Resolved target: get_func
// Target address:  0x2BBE8
// GOT/IAT slot:    0x2A1D8
// Slot symbol:     off_2A1D8
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

