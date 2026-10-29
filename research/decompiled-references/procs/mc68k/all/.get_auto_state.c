// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65B0
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65B0 jmp     cs:off_1D2C0
//
// Resolved target: get_auto_state
// Target address:  0x1D7C0
// GOT/IAT slot:    0x1D2C0
// Slot symbol:     off_1D2C0
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

