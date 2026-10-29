// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5300
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5300 jmp     cs:off_1A168
//
// Resolved target: netnode_setblob
// Target address:  0x1A4F0
// GOT/IAT slot:    0x1A168
// Slot symbol:     off_1A168
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

