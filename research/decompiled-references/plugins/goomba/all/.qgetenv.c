// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4350
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4350 jmp     cs:off_4E190
//
// Resolved target: qgetenv
// Target address:  0x4F798
// GOT/IAT slot:    0x4E190
// Slot symbol:     off_4E190
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

