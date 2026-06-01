// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6190
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6190 jmp     cs:off_2F0B0
//
// Resolved target: getinf
// Target address:  0x2F720
// GOT/IAT slot:    0x2F0B0
// Slot symbol:     off_2F0B0
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

