// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86E0
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86E0 jmp     cs:off_2A358
//
// Resolved target: netnode_qgetblob
// Target address:  0x2A8E0
// GOT/IAT slot:    0x2A358
// Slot symbol:     off_2A358
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

