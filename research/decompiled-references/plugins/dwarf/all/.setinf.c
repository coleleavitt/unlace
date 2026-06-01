// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA100
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA100 jmp     cs:off_CA068
//
// Resolved target: setinf
// Target address:  0xD0988
// GOT/IAT slot:    0xCA068
// Slot symbol:     off_CA068
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

