// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23F0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23F0 jmp     cs:off_B1E0
//
// Resolved target: netnode_supset
// Target address:  0xB490
// GOT/IAT slot:    0xB1E0
// Slot symbol:     off_B1E0
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

