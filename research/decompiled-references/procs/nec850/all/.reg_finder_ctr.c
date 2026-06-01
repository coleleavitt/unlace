// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9190
// Name:            .reg_finder_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9190 jmp     cs:off_2E0B0
//
// Resolved target: reg_finder_ctr
// Target address:  0x2E720
// GOT/IAT slot:    0x2E0B0
// Slot symbol:     off_2E0B0
// Target type:     <no type info>
// ============================================================

void .reg_finder_ctr(/* see target signature */)
{
    // Tail-call to reg_finder_ctr via GOT/IAT indirection
    return reg_finder_ctr(/* forwarded args */);
}

