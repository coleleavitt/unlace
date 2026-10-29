// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1070
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1070 jmp     cs:off_5020
//
// Resolved target: getinf
// Target address:  0x5138
// GOT/IAT slot:    0x5020
// Slot symbol:     off_5020
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

