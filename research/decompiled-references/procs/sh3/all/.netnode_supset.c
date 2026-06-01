// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5670
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5670 jmp     cs:off_15320
//
// Resolved target: netnode_supset
// Target address:  0x163C8
// GOT/IAT slot:    0x15320
// Slot symbol:     off_15320
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

