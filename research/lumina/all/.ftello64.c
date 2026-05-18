// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B80
// Name:            .ftello64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B80 jmp     cs:off_23E5A8
//
// Resolved target: ftello64
// Target address:  0x244158
// GOT/IAT slot:    0x23E5A8
// Slot symbol:     off_23E5A8
// Target type:     __off64_t(FILE *stream)
// ============================================================

/* see target sig */ .ftello64(/* see target signature */)
{
    // Tail-call to ftello64 via GOT/IAT indirection
    return ftello64(/* forwarded args */);
}

