// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3350
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3350 jmp     cs:off_1A190
//
// Resolved target: netnode_qgetblob
// Target address:  0x1A460
// GOT/IAT slot:    0x1A190
// Slot symbol:     off_1A190
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

