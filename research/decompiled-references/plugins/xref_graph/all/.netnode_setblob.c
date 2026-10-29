// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16E10
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16E10 jmp     cs:off_4F6F0
//
// Resolved target: netnode_setblob
// Target address:  0x50A28
// GOT/IAT slot:    0x4F6F0
// Slot symbol:     off_4F6F0
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

