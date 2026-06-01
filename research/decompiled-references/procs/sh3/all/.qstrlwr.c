// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5230
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5230 jmp     cs:off_15100
//
// Resolved target: qstrlwr
// Target address:  0x16190
// GOT/IAT slot:    0x15100
// Slot symbol:     off_15100
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

