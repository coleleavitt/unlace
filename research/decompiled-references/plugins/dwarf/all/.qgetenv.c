// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA390
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA390 jmp     cs:off_CA1B0
//
// Resolved target: qgetenv
// Target address:  0xD0AE0
// GOT/IAT slot:    0xCA1B0
// Slot symbol:     off_CA1B0
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

