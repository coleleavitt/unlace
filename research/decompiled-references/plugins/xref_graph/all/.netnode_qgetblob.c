// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16CB0
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16CB0 jmp     cs:off_4F640
//
// Resolved target: netnode_qgetblob
// Target address:  0x508F8
// GOT/IAT slot:    0x4F640
// Slot symbol:     off_4F640
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

