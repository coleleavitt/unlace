// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62B0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62B0 jmp     cs:off_2D140
//
// Resolved target: setinf_flag
// Target address:  0x2D640
// GOT/IAT slot:    0x2D140
// Slot symbol:     off_2D140
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

