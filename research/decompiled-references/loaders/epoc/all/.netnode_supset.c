// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3480
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3480 jmp     cs:off_13228
//
// Resolved target: netnode_supset
// Target address:  0x13930
// GOT/IAT slot:    0x13228
// Slot symbol:     off_13228
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

