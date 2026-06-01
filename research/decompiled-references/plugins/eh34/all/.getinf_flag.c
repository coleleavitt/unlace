// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6580
// Name:            .getinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6580 jmp     cs:off_8D2A8
//
// Resolved target: getinf_flag
// Target address:  0x8D850
// GOT/IAT slot:    0x8D2A8
// Slot symbol:     off_8D2A8
// Target type:     <no type info>
// ============================================================

void .getinf_flag(/* see target signature */)
{
    // Tail-call to getinf_flag via GOT/IAT indirection
    return getinf_flag(/* forwarded args */);
}

