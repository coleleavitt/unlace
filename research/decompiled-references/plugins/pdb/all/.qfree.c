// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DC30
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DC30 jmp     cs:off_B3600
//
// Resolved target: qfree
// Target address:  0xB3DD8
// GOT/IAT slot:    0xB3600
// Slot symbol:     off_B3600
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

