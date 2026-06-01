// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16710
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16710 jmp     cs:off_4F370
//
// Resolved target: netnode_supdel_all
// Target address:  0x503C0
// GOT/IAT slot:    0x4F370
// Slot symbol:     off_4F370
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

