// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5040
// Name:            .netnode_hashval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5040 jmp     cs:off_1A008
//
// Resolved target: netnode_hashval
// Target address:  0x1A388
// GOT/IAT slot:    0x1A008
// Slot symbol:     off_1A008
// Target type:     <no type info>
// ============================================================

void .netnode_hashval(/* see target signature */)
{
    // Tail-call to netnode_hashval via GOT/IAT indirection
    return netnode_hashval(/* forwarded args */);
}

