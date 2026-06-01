// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6740
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6740 jmp     cs:off_2D388
//
// Resolved target: netnode_qgetblob
// Target address:  0x2D8A0
// GOT/IAT slot:    0x2D388
// Slot symbol:     off_2D388
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

