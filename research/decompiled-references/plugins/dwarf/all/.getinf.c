// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA200
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA200 jmp     cs:off_CA0E8
//
// Resolved target: getinf
// Target address:  0xD0A18
// GOT/IAT slot:    0xCA0E8
// Slot symbol:     off_CA0E8
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

