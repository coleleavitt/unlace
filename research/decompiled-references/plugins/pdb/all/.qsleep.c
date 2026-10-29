// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D610
// Name:            .qsleep
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D610 jmp     cs:off_B32F0
//
// Resolved target: qsleep
// Target address:  0xB3A90
// GOT/IAT slot:    0xB32F0
// Slot symbol:     off_B32F0
// Target type:     <no type info>
// ============================================================

void .qsleep(/* see target signature */)
{
    // Tail-call to qsleep via GOT/IAT indirection
    return qsleep(/* forwarded args */);
}

