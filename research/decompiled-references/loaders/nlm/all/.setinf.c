// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2060
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2060 jmp     cs:off_8018
//
// Resolved target: setinf
// Target address:  0x86F8
// GOT/IAT slot:    0x8018
// Slot symbol:     off_8018
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

