// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6820
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6820 jmp     cs:off_2D3F8
//
// Resolved target: netnode_supdel_all
// Target address:  0x2D918
// GOT/IAT slot:    0x2D3F8
// Slot symbol:     off_2D3F8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

