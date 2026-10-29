// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5220
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5220 jmp     cs:off_1A0F8
//
// Resolved target: netnode_exist
// Target address:  0x1A480
// GOT/IAT slot:    0x1A0F8
// Slot symbol:     off_1A0F8
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

