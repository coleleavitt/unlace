// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3580
// Name:            .netnode_hashset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3580 jmp     cs:off_282A8
//
// Resolved target: netnode_hashset
// Target address:  0x28760
// GOT/IAT slot:    0x282A8
// Slot symbol:     off_282A8
// Target type:     <no type info>
// ============================================================

void .netnode_hashset(/* see target signature */)
{
    // Tail-call to netnode_hashset via GOT/IAT indirection
    return netnode_hashset(/* forwarded args */);
}

