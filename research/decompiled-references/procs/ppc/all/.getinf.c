// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x202A0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x202A0 jmp     cs:off_95138
//
// Resolved target: getinf
// Target address:  0x95B70
// GOT/IAT slot:    0x95138
// Slot symbol:     off_95138
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

