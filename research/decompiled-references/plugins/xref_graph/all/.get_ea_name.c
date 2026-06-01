// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17510
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17510 jmp     cs:off_4FA70
//
// Resolved target: get_ea_name
// Target address:  0x510A8
// GOT/IAT slot:    0x4FA70
// Slot symbol:     off_4FA70
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

