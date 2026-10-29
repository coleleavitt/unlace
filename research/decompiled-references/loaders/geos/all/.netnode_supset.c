// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2390
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2390 jmp     cs:off_81B0
//
// Resolved target: netnode_supset
// Target address:  0x8428
// GOT/IAT slot:    0x81B0
// Slot symbol:     off_81B0
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

