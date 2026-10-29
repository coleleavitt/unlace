// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40D0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40D0 jmp     cs:off_23050
//
// Resolved target: setinf
// Target address:  0x23470
// GOT/IAT slot:    0x23050
// Slot symbol:     off_23050
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

