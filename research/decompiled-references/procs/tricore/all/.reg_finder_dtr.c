// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6190
// Name:            .reg_finder_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6190 jmp     cs:off_240B0
//
// Resolved target: reg_finder_dtr
// Target address:  0x25E80
// GOT/IAT slot:    0x240B0
// Slot symbol:     off_240B0
// Target type:     <no type info>
// ============================================================

void .reg_finder_dtr(/* see target signature */)
{
    // Tail-call to reg_finder_dtr via GOT/IAT indirection
    return reg_finder_dtr(/* forwarded args */);
}

