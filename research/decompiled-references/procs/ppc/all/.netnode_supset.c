// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20DF0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20DF0 jmp     cs:off_956E0
//
// Resolved target: netnode_supset
// Target address:  0x96130
// GOT/IAT slot:    0x956E0
// Slot symbol:     off_956E0
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

