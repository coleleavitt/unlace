// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9100
// Name:            .reg_finder_find
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9100 jmp     cs:off_2E068
//
// Resolved target: reg_finder_find
// Target address:  0x2E6D8
// GOT/IAT slot:    0x2E068
// Slot symbol:     off_2E068
// Target type:     <no type info>
// ============================================================

void .reg_finder_find(/* see target signature */)
{
    // Tail-call to reg_finder_find via GOT/IAT indirection
    return reg_finder_find(/* forwarded args */);
}

