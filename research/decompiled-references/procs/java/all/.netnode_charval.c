// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64B0
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64B0 jmp     cs:off_2D240
//
// Resolved target: netnode_charval
// Target address:  0x2D740
// GOT/IAT slot:    0x2D240
// Slot symbol:     off_2D240
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

