// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2110
// Name:            .qfseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2110 jmp     cs:off_A070
//
// Resolved target: qfseek
// Target address:  0xA2A0
// GOT/IAT slot:    0xA070
// Slot symbol:     off_A070
// Target type:     <no type info>
// ============================================================

void .qfseek(/* see target signature */)
{
    // Tail-call to qfseek via GOT/IAT indirection
    return qfseek(/* forwarded args */);
}

