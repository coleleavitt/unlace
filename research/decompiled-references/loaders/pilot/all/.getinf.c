// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2070
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2070 jmp     cs:off_8020
//
// Resolved target: getinf
// Target address:  0x8200
// GOT/IAT slot:    0x8020
// Slot symbol:     off_8020
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

