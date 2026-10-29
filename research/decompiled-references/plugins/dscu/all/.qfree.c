// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44D0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44D0 jmp     cs:off_1F250
//
// Resolved target: qfree
// Target address:  0x1F528
// GOT/IAT slot:    0x1F250
// Slot symbol:     off_1F250
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

