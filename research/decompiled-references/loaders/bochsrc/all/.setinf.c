// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1070
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1070 jmp     cs:off_4020
//
// Resolved target: setinf
// Target address:  0x5160
// GOT/IAT slot:    0x4020
// Slot symbol:     off_4020
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

