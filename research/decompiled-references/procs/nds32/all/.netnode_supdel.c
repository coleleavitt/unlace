// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86A0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86A0 jmp     cs:off_2A338
//
// Resolved target: netnode_supdel
// Target address:  0x2A8B8
// GOT/IAT slot:    0x2A338
// Slot symbol:     off_2A338
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

