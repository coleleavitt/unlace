// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x53D0
// Name:            .netnode_hashset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x53D0 jmp     cs:off_1A1D0
//
// Resolved target: netnode_hashset
// Target address:  0x1A560
// GOT/IAT slot:    0x1A1D0
// Slot symbol:     off_1A1D0
// Target type:     <no type info>
// ============================================================

void .netnode_hashset(/* see target signature */)
{
    // Tail-call to netnode_hashset via GOT/IAT indirection
    return netnode_hashset(/* forwarded args */);
}

