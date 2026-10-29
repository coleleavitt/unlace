// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6330
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6330 jmp     cs:off_2D180
//
// Resolved target: netnode_altval
// Target address:  0x2D680
// GOT/IAT slot:    0x2D180
// Slot symbol:     off_2D180
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

