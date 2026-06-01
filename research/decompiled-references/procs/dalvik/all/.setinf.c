// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50C0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x50C0 jmp     cs:off_1A048
//
// Resolved target: setinf
// Target address:  0x1A3C8
// GOT/IAT slot:    0x1A048
// Slot symbol:     off_1A048
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

