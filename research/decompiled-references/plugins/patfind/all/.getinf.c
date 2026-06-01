// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D0 jmp     cs:off_13050
//
// Resolved target: getinf
// Target address:  0x132E8
// GOT/IAT slot:    0x13050
// Slot symbol:     off_13050
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

