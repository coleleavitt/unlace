// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5230
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5230 jmp     cs:off_1A100
//
// Resolved target: netnode_supnext
// Target address:  0x1A488
// GOT/IAT slot:    0x1A100
// Slot symbol:     off_1A100
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

