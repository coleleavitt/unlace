// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8170
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8170 jmp     cs:off_2A0A0
//
// Resolved target: getinf
// Target address:  0x2A610
// GOT/IAT slot:    0x2A0A0
// Slot symbol:     off_2A0A0
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

