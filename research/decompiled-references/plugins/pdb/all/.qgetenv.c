// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D300
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D300 jmp     cs:off_B3168
//
// Resolved target: qgetenv
// Target address:  0xB3900
// GOT/IAT slot:    0xB3168
// Slot symbol:     off_B3168
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

