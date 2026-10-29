// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5180
// Name:            .netnode_supstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5180 jmp     cs:off_1A0A8
//
// Resolved target: netnode_supstr
// Target address:  0x1A430
// GOT/IAT slot:    0x1A0A8
// Slot symbol:     off_1A0A8
// Target type:     <no type info>
// ============================================================

void .netnode_supstr(/* see target signature */)
{
    // Tail-call to netnode_supstr via GOT/IAT indirection
    return netnode_supstr(/* forwarded args */);
}

