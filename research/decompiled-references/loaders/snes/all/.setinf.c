// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1060
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1060 jmp     cs:off_7018
//
// Resolved target: setinf
// Target address:  0x7110
// GOT/IAT slot:    0x7018
// Slot symbol:     off_7018
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

