// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA930
// Name:            .netnode_hashset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA930 jmp     cs:off_CA480
//
// Resolved target: netnode_hashset
// Target address:  0xD0DC8
// GOT/IAT slot:    0xCA480
// Slot symbol:     off_CA480
// Target type:     <no type info>
// ============================================================

void .netnode_hashset(/* see target signature */)
{
    // Tail-call to netnode_hashset via GOT/IAT indirection
    return netnode_hashset(/* forwarded args */);
}

