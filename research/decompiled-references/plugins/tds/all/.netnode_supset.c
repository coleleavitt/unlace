// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2370
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2370 jmp     cs:off_A1A0
//
// Resolved target: netnode_supset
// Target address:  0xA3F0
// GOT/IAT slot:    0xA1A0
// Slot symbol:     off_A1A0
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

