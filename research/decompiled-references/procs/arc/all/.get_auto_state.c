// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8780
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8780 jmp     cs:off_2A3A8
//
// Resolved target: get_auto_state
// Target address:  0x2BDC8
// GOT/IAT slot:    0x2A3A8
// Slot symbol:     off_2A3A8
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

