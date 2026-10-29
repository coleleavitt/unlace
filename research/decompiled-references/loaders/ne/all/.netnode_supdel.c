// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23A0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23A0 jmp     cs:off_B1B8
//
// Resolved target: netnode_supdel
// Target address:  0xB460
// GOT/IAT slot:    0xB1B8
// Slot symbol:     off_B1B8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

