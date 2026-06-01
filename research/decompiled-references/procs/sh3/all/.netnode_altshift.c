// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5240
// Name:            .netnode_altshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5240 jmp     cs:off_15108
//
// Resolved target: netnode_altshift
// Target address:  0x16198
// GOT/IAT slot:    0x15108
// Slot symbol:     off_15108
// Target type:     <no type info>
// ============================================================

void .netnode_altshift(/* see target signature */)
{
    // Tail-call to netnode_altshift via GOT/IAT indirection
    return netnode_altshift(/* forwarded args */);
}

