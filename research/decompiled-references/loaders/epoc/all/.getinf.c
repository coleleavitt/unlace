// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30E0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30E0 jmp     cs:off_13058
//
// Resolved target: getinf
// Target address:  0x13740
// GOT/IAT slot:    0x13058
// Slot symbol:     off_13058
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

