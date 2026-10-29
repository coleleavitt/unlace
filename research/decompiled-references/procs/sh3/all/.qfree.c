// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5750
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5750 jmp     cs:off_15390
//
// Resolved target: qfree
// Target address:  0x16440
// GOT/IAT slot:    0x15390
// Slot symbol:     off_15390
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

