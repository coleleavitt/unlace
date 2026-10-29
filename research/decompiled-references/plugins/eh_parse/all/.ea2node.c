// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67B0
// Name:            .ea2node
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67B0 jmp     cs:off_2F3C0
//
// Resolved target: ea2node
// Target address:  0x2FA38
// GOT/IAT slot:    0x2F3C0
// Slot symbol:     off_2F3C0
// Target type:     <no type info>
// ============================================================

void .ea2node(/* see target signature */)
{
    // Tail-call to ea2node via GOT/IAT indirection
    return ea2node(/* forwarded args */);
}

