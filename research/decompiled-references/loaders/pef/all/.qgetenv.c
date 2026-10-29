// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_8078
//
// Resolved target: qgetenv
// Target address:  0x8268
// GOT/IAT slot:    0x8078
// Slot symbol:     off_8078
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

