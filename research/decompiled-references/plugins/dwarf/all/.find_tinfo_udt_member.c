// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1D0
// Name:            .find_tinfo_udt_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1D0 jmp     cs:off_CA0D0
//
// Resolved target: find_tinfo_udt_member
// Target address:  0xD0A00
// GOT/IAT slot:    0xCA0D0
// Slot symbol:     off_CA0D0
// Target type:     <no type info>
// ============================================================

void .find_tinfo_udt_member(/* see target signature */)
{
    // Tail-call to find_tinfo_udt_member via GOT/IAT indirection
    return find_tinfo_udt_member(/* forwarded args */);
}

