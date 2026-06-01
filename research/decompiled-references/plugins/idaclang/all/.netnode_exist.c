// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3240
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3240 jmp     cs:off_29108
//
// Resolved target: netnode_exist
// Target address:  0x294B8
// GOT/IAT slot:    0x29108
// Slot symbol:     off_29108
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

