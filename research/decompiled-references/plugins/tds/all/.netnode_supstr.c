// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .netnode_supstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_A078
//
// Resolved target: netnode_supstr
// Target address:  0xA2A8
// GOT/IAT slot:    0xA078
// Slot symbol:     off_A078
// Target type:     <no type info>
// ============================================================

void .netnode_supstr(/* see target signature */)
{
    // Tail-call to netnode_supstr via GOT/IAT indirection
    return netnode_supstr(/* forwarded args */);
}

