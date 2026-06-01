// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11E0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11E0 jmp     cs:off_50D8
//
// Resolved target: netnode_supset
// Target address:  0x5240
// GOT/IAT slot:    0x50D8
// Slot symbol:     off_50D8
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

