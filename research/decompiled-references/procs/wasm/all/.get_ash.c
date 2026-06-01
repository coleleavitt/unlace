// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93A0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93A0 jmp     cs:off_261B8
//
// Resolved target: get_ash
// Target address:  0x264E0
// GOT/IAT slot:    0x261B8
// Slot symbol:     off_261B8
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

