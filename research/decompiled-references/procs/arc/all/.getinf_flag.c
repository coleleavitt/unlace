// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8670
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8670 jmp     cs:off_2A320
//
// Resolved target: getinf_flag
// Target address:  0x2BD38
// GOT/IAT slot:    0x2A320
// Slot symbol:     off_2A320
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

