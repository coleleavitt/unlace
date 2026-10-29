// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A0 jmp     cs:off_8038
//
// Resolved target: getinf
// Target address:  0x8228
// GOT/IAT slot:    0x8038
// Slot symbol:     off_8038
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

