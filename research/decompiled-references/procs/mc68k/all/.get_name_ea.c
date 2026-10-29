// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65C0
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65C0 jmp     cs:off_1D2C8
//
// Resolved target: get_name_ea
// Target address:  0x1D7C8
// GOT/IAT slot:    0x1D2C8
// Slot symbol:     off_1D2C8
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

