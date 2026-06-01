// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96E0
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96E0 jmp     cs:off_2E358
//
// Resolved target: getinf_flag
// Target address:  0x2E9D0
// GOT/IAT slot:    0x2E358
// Slot symbol:     off_2E358
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

