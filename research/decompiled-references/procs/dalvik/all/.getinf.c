// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5130
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5130 jmp     cs:off_1A080
//
// Resolved target: getinf
// Target address:  0x1A408
// GOT/IAT slot:    0x1A080
// Slot symbol:     off_1A080
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

