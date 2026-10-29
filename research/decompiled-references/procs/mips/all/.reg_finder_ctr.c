// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19210
// Name:            .reg_finder_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19210 jmp     cs:off_750F0
//
// Resolved target: reg_finder_ctr
// Target address:  0x75940
// GOT/IAT slot:    0x750F0
// Slot symbol:     off_750F0
// Target type:     <no type info>
// ============================================================

void .reg_finder_ctr(/* see target signature */)
{
    // Tail-call to reg_finder_ctr via GOT/IAT indirection
    return reg_finder_ctr(/* forwarded args */);
}

