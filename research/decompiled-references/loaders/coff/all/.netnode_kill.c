// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4640
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4640 jmp     cs:off_23308
//
// Resolved target: netnode_kill
// Target address:  0x23738
// GOT/IAT slot:    0x23308
// Slot symbol:     off_23308
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}

