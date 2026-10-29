// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2380
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2380 jmp     cs:off_A1A8
//
// Resolved target: netnode_supset
// Target address:  0xB490
// GOT/IAT slot:    0xA1A8
// Slot symbol:     off_A1A8
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

