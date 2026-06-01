// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A0 jmp     cs:off_A038
//
// Resolved target: getinf
// Target address:  0xB308
// GOT/IAT slot:    0xA038
// Slot symbol:     off_A038
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

