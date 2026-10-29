// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190 jmp     cs:off_40B0
//
// Resolved target: netnode_supset
// Target address:  0x5200
// GOT/IAT slot:    0x40B0
// Slot symbol:     off_40B0
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

