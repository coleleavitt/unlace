// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9360
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9360 jmp     cs:off_26198
//
// Resolved target: get_auto_state
// Target address:  0x264B8
// GOT/IAT slot:    0x26198
// Slot symbol:     off_26198
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

