// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5590
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5590 jmp     cs:off_1A2B0
//
// Resolved target: qfree
// Target address:  0x1A658
// GOT/IAT slot:    0x1A2B0
// Slot symbol:     off_1A2B0
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

