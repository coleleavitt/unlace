// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1050
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1050 jmp     cs:off_5010
//
// Resolved target: setinf
// Target address:  0x5258
// GOT/IAT slot:    0x5010
// Slot symbol:     off_5010
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

