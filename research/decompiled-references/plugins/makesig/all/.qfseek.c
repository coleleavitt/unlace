// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3190
// Name:            .qfseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3190 jmp     cs:off_200B0
//
// Resolved target: qfseek
// Target address:  0x219C0
// GOT/IAT slot:    0x200B0
// Slot symbol:     off_200B0
// Target type:     <no type info>
// ============================================================

void .qfseek(/* see target signature */)
{
    // Tail-call to qfseek via GOT/IAT indirection
    return qfseek(/* forwarded args */);
}

