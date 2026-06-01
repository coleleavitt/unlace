// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34D0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34D0 jmp     cs:off_13250
//
// Resolved target: qfree
// Target address:  0x13960
// GOT/IAT slot:    0x13250
// Slot symbol:     off_13250
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

