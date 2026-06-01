// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20380
// Name:            .netnode_supdel_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20380 jmp     cs:off_951A8
//
// Resolved target: netnode_supdel_range
// Target address:  0x95BE0
// GOT/IAT slot:    0x951A8
// Slot symbol:     off_951A8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_range(/* see target signature */)
{
    // Tail-call to netnode_supdel_range via GOT/IAT indirection
    return netnode_supdel_range(/* forwarded args */);
}

