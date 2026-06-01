// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9720
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9720 jmp     cs:off_2E378
//
// Resolved target: ea2node
// Target address:  0x2E9F0
// GOT/IAT slot:    0x2E378
// Slot symbol:     off_2E378
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

