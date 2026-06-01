// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6220
// Name:            .netnode_supstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6220 jmp     cs:off_240F8
//
// Resolved target: netnode_supstr
// Target address:  0x25EC8
// GOT/IAT slot:    0x240F8
// Slot symbol:     off_240F8
// Target type:     <no type info>
// ============================================================

void .netnode_supstr(/* see target signature */)
{
    // Tail-call to netnode_supstr via GOT/IAT indirection
    return netnode_supstr(/* forwarded args */);
}

