// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9110
// Name:            .netnode_getblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9110 jmp     cs:off_26070
//
// Resolved target: netnode_getblob
// Target address:  0x26380
// GOT/IAT slot:    0x26070
// Slot symbol:     off_26070
// Target type:     <no type info>
// ============================================================

void .netnode_getblob(/* see target signature */)
{
    // Tail-call to netnode_getblob via GOT/IAT indirection
    return netnode_getblob(/* forwarded args */);
}

