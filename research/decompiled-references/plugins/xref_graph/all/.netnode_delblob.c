// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17400
// Name:            .netnode_delblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17400 jmp     cs:off_4F9E8
//
// Resolved target: netnode_delblob
// Target address:  0x50FB8
// GOT/IAT slot:    0x4F9E8
// Slot symbol:     off_4F9E8
// Target type:     <no type info>
// ============================================================

void .netnode_delblob(/* see target signature */)
{
    // Tail-call to netnode_delblob via GOT/IAT indirection
    return netnode_delblob(/* forwarded args */);
}

