// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6300
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6300 jmp     cs:off_2D168
//
// Resolved target: get_ea_name
// Target address:  0x2D668
// GOT/IAT slot:    0x2D168
// Slot symbol:     off_2D168
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

