// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3220
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3220 jmp     cs:off_130F8
//
// Resolved target: netnode_supnext
// Target address:  0x137E8
// GOT/IAT slot:    0x130F8
// Slot symbol:     off_130F8
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

