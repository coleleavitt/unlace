// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9440
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9440 jmp     cs:off_89208
//
// Resolved target: netnode_exist
// Target address:  0x8C510
// GOT/IAT slot:    0x89208
// Slot symbol:     off_89208
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

