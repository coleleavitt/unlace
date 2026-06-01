// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x85F0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x85F0 jmp     cs:off_2A2E0
//
// Resolved target: ea2node
// Target address:  0x2A858
// GOT/IAT slot:    0x2A2E0
// Slot symbol:     off_2A2E0
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

