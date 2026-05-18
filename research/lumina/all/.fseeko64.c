// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19CA0
// Name:            .fseeko64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19CA0 jmp     cs:off_23E638
//
// Resolved target: fseeko64
// Target address:  0x2441E8
// GOT/IAT slot:    0x23E638
// Slot symbol:     off_23E638
// Target type:     int(FILE *stream, __off64_t off, int whence)
// ============================================================

/* see target sig */ .fseeko64(/* see target signature */)
{
    // Tail-call to fseeko64 via GOT/IAT indirection
    return fseeko64(/* forwarded args */);
}

