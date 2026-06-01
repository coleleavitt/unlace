// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2350
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2350 jmp     cs:off_8190
//
// Resolved target: qfree
// Target address:  0x8380
// GOT/IAT slot:    0x8190
// Slot symbol:     off_8190
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

