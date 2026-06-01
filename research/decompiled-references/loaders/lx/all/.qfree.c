// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2460
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2460 jmp     cs:off_B218
//
// Resolved target: qfree
// Target address:  0xB4D8
// GOT/IAT slot:    0xB218
// Slot symbol:     off_B218
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

