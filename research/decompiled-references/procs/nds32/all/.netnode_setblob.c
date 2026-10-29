// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8420
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8420 jmp     cs:off_2A1F8
//
// Resolved target: netnode_setblob
// Target address:  0x2A768
// GOT/IAT slot:    0x2A1F8
// Slot symbol:     off_2A1F8
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

