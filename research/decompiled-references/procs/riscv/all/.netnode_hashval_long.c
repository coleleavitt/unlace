// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA950
// Name:            .netnode_hashval_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA950 jmp     cs:off_35490
//
// Resolved target: netnode_hashval_long
// Target address:  0x35AF8
// GOT/IAT slot:    0x35490
// Slot symbol:     off_35490
// Target type:     <no type info>
// ============================================================

void .netnode_hashval_long(/* see target signature */)
{
    // Tail-call to netnode_hashval_long via GOT/IAT indirection
    return netnode_hashval_long(/* forwarded args */);
}

