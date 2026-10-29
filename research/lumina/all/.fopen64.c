// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19840
// Name:            .fopen64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19840 jmp     cs:off_23E408
//
// Resolved target: fopen64
// Target address:  0x243F90
// GOT/IAT slot:    0x23E408
// Slot symbol:     off_23E408
// Target type:     FILE *(const char *filename, const char *modes)
// ============================================================

/* see target sig */ .fopen64(/* see target signature */)
{
    // Tail-call to fopen64 via GOT/IAT indirection
    return fopen64(/* forwarded args */);
}

