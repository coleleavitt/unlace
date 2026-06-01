// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAAD0
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAAD0 jmp     cs:off_CA550
//
// Resolved target: netnode_kill
// Target address:  0xD0EA0
// GOT/IAT slot:    0xCA550
// Slot symbol:     off_CA550
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}

