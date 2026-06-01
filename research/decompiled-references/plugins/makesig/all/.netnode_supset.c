// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35C0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35C0 jmp     cs:off_202C8
//
// Resolved target: netnode_supset
// Target address:  0x21C00
// GOT/IAT slot:    0x202C8
// Slot symbol:     off_202C8
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

