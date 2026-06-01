// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6600
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6600 jmp     cs:off_242E8
//
// Resolved target: getinf_flag
// Target address:  0x260C0
// GOT/IAT slot:    0x242E8
// Slot symbol:     off_242E8
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

