// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3630
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3630 jmp     cs:off_14300
//
// Resolved target: netnode_supdel_all
// Target address:  0x14910
// GOT/IAT slot:    0x14300
// Slot symbol:     off_14300
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

