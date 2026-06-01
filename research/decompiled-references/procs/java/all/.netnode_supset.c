// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6780
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6780 jmp     cs:off_2D3A8
//
// Resolved target: netnode_supset
// Target address:  0x2D8C8
// GOT/IAT slot:    0x2D3A8
// Slot symbol:     off_2D3A8
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

