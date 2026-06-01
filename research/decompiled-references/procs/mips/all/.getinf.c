// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19220
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19220 jmp     cs:off_750F8
//
// Resolved target: getinf
// Target address:  0x75948
// GOT/IAT slot:    0x750F8
// Slot symbol:     off_750F8
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

