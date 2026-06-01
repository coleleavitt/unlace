// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91C0
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91C0 jmp     cs:off_260C8
//
// Resolved target: netnode_altval
// Target address:  0x263D8
// GOT/IAT slot:    0x260C8
// Slot symbol:     off_260C8
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

