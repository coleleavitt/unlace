// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6200
// Name:            .qfseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6200 jmp     cs:off_2D0E8
//
// Resolved target: qfseek
// Target address:  0x2D5E8
// GOT/IAT slot:    0x2D0E8
// Slot symbol:     off_2D0E8
// Target type:     <no type info>
// ============================================================

void .qfseek(/* see target signature */)
{
    // Tail-call to qfseek via GOT/IAT indirection
    return qfseek(/* forwarded args */);
}

