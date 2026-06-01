// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4780
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4780 jmp     cs:off_233A8
//
// Resolved target: qfree
// Target address:  0x237F0
// GOT/IAT slot:    0x233A8
// Slot symbol:     off_233A8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

