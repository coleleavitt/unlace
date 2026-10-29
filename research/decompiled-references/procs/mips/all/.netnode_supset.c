// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C40
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C40 jmp     cs:off_75608
//
// Resolved target: netnode_supset
// Target address:  0x75E70
// GOT/IAT slot:    0x75608
// Slot symbol:     off_75608
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

