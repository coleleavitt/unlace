// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92F0
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92F0 jmp     cs:off_89160
//
// Resolved target: qstrtok
// Target address:  0x8C460
// GOT/IAT slot:    0x89160
// Slot symbol:     off_89160
// Target type:     <no type info>
// ============================================================

void .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}

