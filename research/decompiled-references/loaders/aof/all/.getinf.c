// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B0 jmp     cs:off_7040
//
// Resolved target: getinf
// Target address:  0x71F8
// GOT/IAT slot:    0x7040
// Slot symbol:     off_7040
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

