// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3280
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3280 jmp     cs:off_13128
//
// Resolved target: netnode_exist
// Target address:  0x134A8
// GOT/IAT slot:    0x13128
// Slot symbol:     off_13128
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

