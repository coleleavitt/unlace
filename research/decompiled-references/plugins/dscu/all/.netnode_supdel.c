// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4390
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4390 jmp     cs:off_1F1B0
//
// Resolved target: netnode_supdel
// Target address:  0x1F470
// GOT/IAT slot:    0x1F1B0
// Slot symbol:     off_1F1B0
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

