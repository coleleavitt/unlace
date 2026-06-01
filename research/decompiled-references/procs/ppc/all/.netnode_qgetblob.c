// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D60
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D60 jmp     cs:off_95698
//
// Resolved target: netnode_qgetblob
// Target address:  0x960E8
// GOT/IAT slot:    0x95698
// Slot symbol:     off_95698
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

