// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5240
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5240 jmp     cs:off_1A108
//
// Resolved target: get_ea_name
// Target address:  0x1A490
// GOT/IAT slot:    0x1A108
// Slot symbol:     off_1A108
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

