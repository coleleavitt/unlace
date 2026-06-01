// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40C0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40C0 jmp     cs:off_1F048
//
// Resolved target: getinf
// Target address:  0x1F2F8
// GOT/IAT slot:    0x1F048
// Slot symbol:     off_1F048
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

