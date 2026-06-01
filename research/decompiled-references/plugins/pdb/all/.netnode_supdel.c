// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D9F0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D9F0 jmp     cs:off_B34E0
//
// Resolved target: netnode_supdel
// Target address:  0xB3C98
// GOT/IAT slot:    0xB34E0
// Slot symbol:     off_B34E0
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

