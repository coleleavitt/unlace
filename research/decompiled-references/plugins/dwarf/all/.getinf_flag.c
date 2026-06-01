// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9A0
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9A0 jmp     cs:off_CA4B8
//
// Resolved target: getinf_flag
// Target address:  0xD0E00
// GOT/IAT slot:    0xCA4B8
// Slot symbol:     off_CA4B8
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

