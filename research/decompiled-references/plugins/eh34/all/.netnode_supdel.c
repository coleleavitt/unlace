// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6610
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6610 jmp     cs:off_8D2F0
//
// Resolved target: netnode_supdel
// Target address:  0x8D8A8
// GOT/IAT slot:    0x8D2F0
// Slot symbol:     off_8D2F0
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

