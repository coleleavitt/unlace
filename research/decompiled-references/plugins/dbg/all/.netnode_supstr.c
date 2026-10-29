// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31A0
// Name:            .netnode_supstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31A0 jmp     cs:off_130B8
//
// Resolved target: netnode_supstr
// Target address:  0x13430
// GOT/IAT slot:    0x130B8
// Slot symbol:     off_130B8
// Target type:     <no type info>
// ============================================================

void .netnode_supstr(/* see target signature */)
{
    // Tail-call to netnode_supstr via GOT/IAT indirection
    return netnode_supstr(/* forwarded args */);
}

