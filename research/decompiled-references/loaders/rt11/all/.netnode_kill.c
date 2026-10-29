// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11E0
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11E0 jmp     cs:off_50D8
//
// Resolved target: netnode_kill
// Target address:  0x5260
// GOT/IAT slot:    0x50D8
// Slot symbol:     off_50D8
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}

