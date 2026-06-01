// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30E0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30E0 jmp     cs:off_29058
//
// Resolved target: getinf
// Target address:  0x29408
// GOT/IAT slot:    0x29058
// Slot symbol:     off_29058
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

