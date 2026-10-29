// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42E0
// Name:            .qfseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42E0 jmp     cs:off_4E158
//
// Resolved target: qfseek
// Target address:  0x4F760
// GOT/IAT slot:    0x4E158
// Slot symbol:     off_4E158
// Target type:     <no type info>
// ============================================================

void .qfseek(/* see target signature */)
{
    // Tail-call to qfseek via GOT/IAT indirection
    return qfseek(/* forwarded args */);
}

