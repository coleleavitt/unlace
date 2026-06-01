// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1070
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1070 jmp     cs:off_5020
//
// Resolved target: setinf
// Target address:  0x5158
// GOT/IAT slot:    0x5020
// Slot symbol:     off_5020
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

