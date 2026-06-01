// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6720
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6720 jmp     cs:off_8D378
//
// Resolved target: netnode_supdel_all
// Target address:  0x8D938
// GOT/IAT slot:    0x8D378
// Slot symbol:     off_8D378
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

