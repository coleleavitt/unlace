// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_A0B8
//
// Resolved target: netnode_exist
// Target address:  0xA2E8
// GOT/IAT slot:    0xA0B8
// Slot symbol:     off_A0B8
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

