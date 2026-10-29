// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19440
// Name:            .netnode_altshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19440 jmp     cs:off_75208
//
// Resolved target: netnode_altshift
// Target address:  0x75A58
// GOT/IAT slot:    0x75208
// Slot symbol:     off_75208
// Target type:     <no type info>
// ============================================================

void .netnode_altshift(/* see target signature */)
{
    // Tail-call to netnode_altshift via GOT/IAT indirection
    return netnode_altshift(/* forwarded args */);
}

