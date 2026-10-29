// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31D0
// Name:            .netnode_altshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31D0 jmp     cs:off_130D0
//
// Resolved target: netnode_altshift
// Target address:  0x137C0
// GOT/IAT slot:    0x130D0
// Slot symbol:     off_130D0
// Target type:     <no type info>
// ============================================================

void .netnode_altshift(/* see target signature */)
{
    // Tail-call to netnode_altshift via GOT/IAT indirection
    return netnode_altshift(/* forwarded args */);
}

