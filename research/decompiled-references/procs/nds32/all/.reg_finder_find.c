// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8110
// Name:            .reg_finder_find
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8110 jmp     cs:off_2A070
//
// Resolved target: reg_finder_find
// Target address:  0x2A5E0
// GOT/IAT slot:    0x2A070
// Slot symbol:     off_2A070
// Target type:     <no type info>
// ============================================================

void .reg_finder_find(/* see target signature */)
{
    // Tail-call to reg_finder_find via GOT/IAT indirection
    return reg_finder_find(/* forwarded args */);
}

