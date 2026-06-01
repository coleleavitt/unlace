// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2390
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2390 jmp     cs:off_B1B0
//
// Resolved target: netnode_supdel
// Target address:  0xB468
// GOT/IAT slot:    0xB1B0
// Slot symbol:     off_B1B0
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

