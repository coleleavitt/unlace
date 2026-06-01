// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B0 jmp     cs:off_8040
//
// Resolved target: setinf
// Target address:  0x82A0
// GOT/IAT slot:    0x8040
// Slot symbol:     off_8040
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

