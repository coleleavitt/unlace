// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46E0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46E0 jmp     cs:off_23358
//
// Resolved target: netnode_supset
// Target address:  0x23798
// GOT/IAT slot:    0x23358
// Slot symbol:     off_23358
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

