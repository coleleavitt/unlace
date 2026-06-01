// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BD0
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BD0 jmp     cs:off_755D0
//
// Resolved target: netnode_qgetblob
// Target address:  0x75E38
// GOT/IAT slot:    0x755D0
// Slot symbol:     off_755D0
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

