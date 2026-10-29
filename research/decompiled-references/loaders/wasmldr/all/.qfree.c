// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22C0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22C0 jmp     cs:off_15148
//
// Resolved target: qfree
// Target address:  0x15348
// GOT/IAT slot:    0x15148
// Slot symbol:     off_15148
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

