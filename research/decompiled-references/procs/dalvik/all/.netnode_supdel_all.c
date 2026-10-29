// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5550
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5550 jmp     cs:off_1A290
//
// Resolved target: netnode_supdel_all
// Target address:  0x1A630
// GOT/IAT slot:    0x1A290
// Slot symbol:     off_1A290
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

