// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6390
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6390 jmp     cs:off_2F1B0
//
// Resolved target: get_ea_name
// Target address:  0x2F820
// GOT/IAT slot:    0x2F1B0
// Slot symbol:     off_2F1B0
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

