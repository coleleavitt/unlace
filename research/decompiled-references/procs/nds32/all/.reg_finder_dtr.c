// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8180
// Name:            .reg_finder_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8180 jmp     cs:off_2A0A8
//
// Resolved target: reg_finder_dtr
// Target address:  0x2A618
// GOT/IAT slot:    0x2A0A8
// Slot symbol:     off_2A0A8
// Target type:     <no type info>
// ============================================================

void .reg_finder_dtr(/* see target signature */)
{
    // Tail-call to reg_finder_dtr via GOT/IAT indirection
    return reg_finder_dtr(/* forwarded args */);
}

