// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62F0
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62F0 jmp     cs:off_2D160
//
// Resolved target: netnode_supnext
// Target address:  0x2D660
// GOT/IAT slot:    0x2D160
// Slot symbol:     off_2D160
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

