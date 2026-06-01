// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97E0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97E0 jmp     cs:off_893D8
//
// Resolved target: ea2node
// Target address:  0x8C6F0
// GOT/IAT slot:    0x893D8
// Slot symbol:     off_893D8
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

