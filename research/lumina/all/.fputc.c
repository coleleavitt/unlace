// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19940
// Name:            .fputc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19940 jmp     cs:off_23E488
//
// Resolved target: fputc
// Target address:  0x244010
// GOT/IAT slot:    0x23E488
// Slot symbol:     off_23E488
// Target type:     int(int c, FILE *stream)
// ============================================================

/* see target sig */ .fputc(/* see target signature */)
{
    // Tail-call to fputc via GOT/IAT indirection
    return fputc(/* forwarded args */);
}

