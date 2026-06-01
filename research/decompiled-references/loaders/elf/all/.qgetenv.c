// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9330
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9330 jmp     cs:off_89180
//
// Resolved target: qgetenv
// Target address:  0x8C480
// GOT/IAT slot:    0x89180
// Slot symbol:     off_89180
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

