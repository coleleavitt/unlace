// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33E0
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33E0 jmp     cs:off_141D8
//
// Resolved target: netnode_charval
// Target address:  0x147C8
// GOT/IAT slot:    0x141D8
// Slot symbol:     off_141D8
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

