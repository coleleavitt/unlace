// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20630
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20630 jmp     cs:off_95300
//
// Resolved target: netnode_supnext
// Target address:  0x95D38
// GOT/IAT slot:    0x95300
// Slot symbol:     off_95300
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

