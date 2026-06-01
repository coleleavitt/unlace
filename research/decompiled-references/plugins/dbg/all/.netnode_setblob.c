// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3390
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3390 jmp     cs:off_131B0
//
// Resolved target: netnode_setblob
// Target address:  0x13530
// GOT/IAT slot:    0x131B0
// Slot symbol:     off_131B0
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

