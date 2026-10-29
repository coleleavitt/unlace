// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93B0
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93B0 jmp     cs:off_2E1C0
//
// Resolved target: get_ea_name
// Target address:  0x2E830
// GOT/IAT slot:    0x2E1C0
// Slot symbol:     off_2E1C0
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

