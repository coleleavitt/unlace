// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3160
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3160 jmp     cs:off_1A098
//
// Resolved target: get_ea_name
// Target address:  0x1A350
// GOT/IAT slot:    0x1A098
// Slot symbol:     off_1A098
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

