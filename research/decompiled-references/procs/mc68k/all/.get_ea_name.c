// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62E0
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62E0 jmp     cs:off_1D158
//
// Resolved target: get_ea_name
// Target address:  0x1D648
// GOT/IAT slot:    0x1D158
// Slot symbol:     off_1D158
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

