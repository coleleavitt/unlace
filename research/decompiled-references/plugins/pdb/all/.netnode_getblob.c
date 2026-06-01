// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D320
// Name:            .netnode_getblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D320 jmp     cs:off_B3178
//
// Resolved target: netnode_getblob
// Target address:  0xB3910
// GOT/IAT slot:    0xB3178
// Slot symbol:     off_B3178
// Target type:     <no type info>
// ============================================================

void .netnode_getblob(/* see target signature */)
{
    // Tail-call to netnode_getblob via GOT/IAT indirection
    return netnode_getblob(/* forwarded args */);
}

