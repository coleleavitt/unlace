// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41A0
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41A0 jmp     cs:off_1F0B8
//
// Resolved target: netnode_supnext
// Target address:  0x1F368
// GOT/IAT slot:    0x1F0B8
// Slot symbol:     off_1F0B8
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

