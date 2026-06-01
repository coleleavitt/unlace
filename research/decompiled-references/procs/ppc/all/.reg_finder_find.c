// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x201C0
// Name:            .reg_finder_find
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x201C0 jmp     cs:off_950C8
//
// Resolved target: reg_finder_find
// Target address:  0x95AF8
// GOT/IAT slot:    0x950C8
// Slot symbol:     off_950C8
// Target type:     <no type info>
// ============================================================

void .reg_finder_find(/* see target signature */)
{
    // Tail-call to reg_finder_find via GOT/IAT indirection
    return reg_finder_find(/* forwarded args */);
}

