// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2330
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2330 jmp     cs:off_B180
//
// Resolved target: ea2node
// Target address:  0xB420
// GOT/IAT slot:    0xB180
// Slot symbol:     off_B180
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

