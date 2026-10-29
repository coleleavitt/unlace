// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4330
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4330 jmp     cs:off_23180
//
// Resolved target: netnode_supnext
// Target address:  0x235A0
// GOT/IAT slot:    0x23180
// Slot symbol:     off_23180
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

