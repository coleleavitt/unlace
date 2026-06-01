// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x68D0
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x68D0 jmp     cs:off_2F450
//
// Resolved target: netnode_qgetblob
// Target address:  0x2FAD8
// GOT/IAT slot:    0x2F450
// Slot symbol:     off_2F450
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

