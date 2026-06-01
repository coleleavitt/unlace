// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19250
// Name:            .reg_finder_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19250 jmp     cs:off_75110
//
// Resolved target: reg_finder_dtr
// Target address:  0x75960
// GOT/IAT slot:    0x75110
// Slot symbol:     off_75110
// Target type:     <no type info>
// ============================================================

void .reg_finder_dtr(/* see target signature */)
{
    // Tail-call to reg_finder_dtr via GOT/IAT indirection
    return reg_finder_dtr(/* forwarded args */);
}

