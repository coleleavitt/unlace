// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6210
// Name:            .netnode_supstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6210 jmp     cs:off_2D0F0
//
// Resolved target: netnode_supstr
// Target address:  0x2D5F0
// GOT/IAT slot:    0x2D0F0
// Slot symbol:     off_2D0F0
// Target type:     <no type info>
// ============================================================

void .netnode_supstr(/* see target signature */)
{
    // Tail-call to netnode_supstr via GOT/IAT indirection
    return netnode_supstr(/* forwarded args */);
}

