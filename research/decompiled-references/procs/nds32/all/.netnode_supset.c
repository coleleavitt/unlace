// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8730
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8730 jmp     cs:off_2A380
//
// Resolved target: netnode_supset
// Target address:  0x2A908
// GOT/IAT slot:    0x2A380
// Slot symbol:     off_2A380
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

