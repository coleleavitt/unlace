// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x24E0
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x24E0 jmp     cs:off_B258
//
// Resolved target: netnode_kill
// Target address:  0xB700
// GOT/IAT slot:    0xB258
// Slot symbol:     off_B258
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}

