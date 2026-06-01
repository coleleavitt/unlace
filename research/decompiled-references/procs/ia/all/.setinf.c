// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7070
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7070 jmp     cs:off_26020
//
// Resolved target: setinf
// Target address:  0x262D8
// GOT/IAT slot:    0x26020
// Slot symbol:     off_26020
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

