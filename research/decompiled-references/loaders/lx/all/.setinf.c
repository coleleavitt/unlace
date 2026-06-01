// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_B030
//
// Resolved target: setinf
// Target address:  0xB2D8
// GOT/IAT slot:    0xB030
// Slot symbol:     off_B030
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

