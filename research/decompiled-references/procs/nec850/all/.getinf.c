// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91A0
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91A0 jmp     cs:off_2E0B8
//
// Resolved target: getinf
// Target address:  0x2E728
// GOT/IAT slot:    0x2E0B8
// Slot symbol:     off_2E0B8
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

