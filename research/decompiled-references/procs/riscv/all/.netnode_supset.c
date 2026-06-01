// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA960
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA960 jmp     cs:off_35498
//
// Resolved target: netnode_supset
// Target address:  0x35B00
// GOT/IAT slot:    0x35498
// Slot symbol:     off_35498
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

