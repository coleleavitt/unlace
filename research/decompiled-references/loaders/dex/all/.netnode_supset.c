// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36D0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x36D0 jmp     cs:off_28350
//
// Resolved target: netnode_supset
// Target address:  0x28818
// GOT/IAT slot:    0x28350
// Slot symbol:     off_28350
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

