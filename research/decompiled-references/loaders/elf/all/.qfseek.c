// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9290
// Name:            .qfseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9290 jmp     cs:off_89130
//
// Resolved target: qfseek
// Target address:  0x8C430
// GOT/IAT slot:    0x89130
// Slot symbol:     off_89130
// Target type:     <no type info>
// ============================================================

void .qfseek(/* see target signature */)
{
    // Tail-call to qfseek via GOT/IAT indirection
    return qfseek(/* forwarded args */);
}

