// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20500
// Name:            .netnode_altshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20500 jmp     cs:off_95268
//
// Resolved target: netnode_altshift
// Target address:  0x95CA0
// GOT/IAT slot:    0x95268
// Slot symbol:     off_95268
// Target type:     <no type info>
// ============================================================

void .netnode_altshift(/* see target signature */)
{
    // Tail-call to netnode_altshift via GOT/IAT indirection
    return netnode_altshift(/* forwarded args */);
}

