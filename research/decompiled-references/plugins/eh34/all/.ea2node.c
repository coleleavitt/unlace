// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65C0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65C0 jmp     cs:off_8D2C8
//
// Resolved target: ea2node
// Target address:  0x8D878
// GOT/IAT slot:    0x8D2C8
// Slot symbol:     off_8D2C8
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

