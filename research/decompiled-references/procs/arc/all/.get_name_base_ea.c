// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x80B0
// Name:            .get_name_base_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x80B0 jmp     cs:off_2A040
//
// Resolved target: get_name_base_ea
// Target address:  0x2BA50
// GOT/IAT slot:    0x2A040
// Slot symbol:     off_2A040
// Target type:     <no type info>
// ============================================================

void .get_name_base_ea(/* see target signature */)
{
    // Tail-call to get_name_base_ea via GOT/IAT indirection
    return get_name_base_ea(/* forwarded args */);
}

