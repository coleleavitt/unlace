// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6370
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6370 jmp     cs:off_2F1A0
//
// Resolved target: netnode_supnext
// Target address:  0x2F810
// GOT/IAT slot:    0x2F1A0
// Slot symbol:     off_2F1A0
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

