// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA30
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA30 jmp     cs:off_CA500
//
// Resolved target: ea2node
// Target address:  0xD0E48
// GOT/IAT slot:    0xCA500
// Slot symbol:     off_CA500
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

