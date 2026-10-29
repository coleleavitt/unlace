// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6320
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6320 jmp     cs:off_1D178
//
// Resolved target: netnode_altval
// Target address:  0x1D668
// GOT/IAT slot:    0x1D178
// Slot symbol:     off_1D178
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

