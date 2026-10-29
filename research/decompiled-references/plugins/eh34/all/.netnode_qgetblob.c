// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6650
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6650 jmp     cs:off_8D310
//
// Resolved target: netnode_qgetblob
// Target address:  0x8D8D0
// GOT/IAT slot:    0x8D310
// Slot symbol:     off_8D310
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

