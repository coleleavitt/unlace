// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1A0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1A0 jmp     cs:off_350B8
//
// Resolved target: getinf
// Target address:  0x35708
// GOT/IAT slot:    0x350B8
// Slot symbol:     off_350B8
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

