// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66E0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66E0 jmp     cs:off_2D358
//
// Resolved target: netnode_supdel
// Target address:  0x2D868
// GOT/IAT slot:    0x2D358
// Slot symbol:     off_2D358
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

