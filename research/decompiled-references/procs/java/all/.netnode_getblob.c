// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6250
// Name:            .netnode_getblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6250 jmp     cs:off_2D110
//
// Resolved target: netnode_getblob
// Target address:  0x2D610
// GOT/IAT slot:    0x2D110
// Slot symbol:     off_2D110
// Target type:     <no type info>
// ============================================================

void .netnode_getblob(/* see target signature */)
{
    // Tail-call to netnode_getblob via GOT/IAT indirection
    return netnode_getblob(/* forwarded args */);
}

