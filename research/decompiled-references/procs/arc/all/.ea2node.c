// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86C0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86C0 jmp     cs:off_2A348
//
// Resolved target: ea2node
// Target address:  0x2BD60
// GOT/IAT slot:    0x2A348
// Slot symbol:     off_2A348
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

