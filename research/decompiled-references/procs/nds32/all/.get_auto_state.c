// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8690
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8690 jmp     cs:off_2A330
//
// Resolved target: get_auto_state
// Target address:  0x2A8B0
// GOT/IAT slot:    0x2A330
// Slot symbol:     off_2A330
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

