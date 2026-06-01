// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19120
// Name:            .reg_finder_find
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19120 jmp     cs:off_75078
//
// Resolved target: reg_finder_find
// Target address:  0x758C8
// GOT/IAT slot:    0x75078
// Slot symbol:     off_75078
// Target type:     <no type info>
// ============================================================

void .reg_finder_find(/* see target signature */)
{
    // Tail-call to reg_finder_find via GOT/IAT indirection
    return reg_finder_find(/* forwarded args */);
}

