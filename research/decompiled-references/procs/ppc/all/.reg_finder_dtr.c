// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x202D0
// Name:            .reg_finder_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x202D0 jmp     cs:off_95150
//
// Resolved target: reg_finder_dtr
// Target address:  0x95B88
// GOT/IAT slot:    0x95150
// Slot symbol:     off_95150
// Target type:     <no type info>
// ============================================================

void .reg_finder_dtr(/* see target signature */)
{
    // Tail-call to reg_finder_dtr via GOT/IAT indirection
    return reg_finder_dtr(/* forwarded args */);
}

