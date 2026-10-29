// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F0 jmp     cs:off_8060
//
// Resolved target: getinf
// Target address:  0x82C0
// GOT/IAT slot:    0x8060
// Slot symbol:     off_8060
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

