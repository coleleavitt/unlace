// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23C0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23C0 jmp     cs:off_A1C8
//
// Resolved target: qfree
// Target address:  0xA420
// GOT/IAT slot:    0xA1C8
// Slot symbol:     off_A1C8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

