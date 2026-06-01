// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52C0
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52C0 jmp     cs:off_15148
//
// Resolved target: get_ea_name
// Target address:  0x161D8
// GOT/IAT slot:    0x15148
// Slot symbol:     off_15148
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

