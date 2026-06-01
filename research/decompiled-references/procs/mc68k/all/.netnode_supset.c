// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6650
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6650 jmp     cs:off_1D310
//
// Resolved target: netnode_supset
// Target address:  0x1D818
// GOT/IAT slot:    0x1D310
// Slot symbol:     off_1D310
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

