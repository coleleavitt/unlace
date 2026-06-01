// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3180
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3180 jmp     cs:off_290A8
//
// Resolved target: qstrtok
// Target address:  0x29458
// GOT/IAT slot:    0x290A8
// Slot symbol:     off_290A8
// Target type:     <no type info>
// ============================================================

void .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}

