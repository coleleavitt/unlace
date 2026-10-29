// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34F0
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34F0 jmp     cs:off_14260
//
// Resolved target: netnode_kill
// Target address:  0x14868
// GOT/IAT slot:    0x14260
// Slot symbol:     off_14260
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}

