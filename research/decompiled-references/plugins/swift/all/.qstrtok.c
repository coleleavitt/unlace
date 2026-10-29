// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4260
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4260 jmp     cs:off_28118
//
// Resolved target: qstrtok
// Target address:  0x29AB0
// GOT/IAT slot:    0x28118
// Slot symbol:     off_28118
// Target type:     <no type info>
// ============================================================

void .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}

