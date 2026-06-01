// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4F0
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4F0 jmp     cs:off_CA260
//
// Resolved target: get_ea_name
// Target address:  0xD0B98
// GOT/IAT slot:    0xCA260
// Slot symbol:     off_CA260
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

