// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .netnode_getblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_A0A8
//
// Resolved target: netnode_getblob
// Target address:  0xA2D8
// GOT/IAT slot:    0xA0A8
// Slot symbol:     off_A0A8
// Target type:     <no type info>
// ============================================================

void .netnode_getblob(/* see target signature */)
{
    // Tail-call to netnode_getblob via GOT/IAT indirection
    return netnode_getblob(/* forwarded args */);
}

