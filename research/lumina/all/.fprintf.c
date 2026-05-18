// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19AA0
// Name:            .fprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19AA0 jmp     cs:off_23E538
//
// Resolved target: fprintf
// Target address:  0x2440D8
// GOT/IAT slot:    0x23E538
// Slot symbol:     off_23E538
// Target type:     int(FILE *stream, const char *format, ...)
// ============================================================

/* see target sig */ .fprintf(/* see target signature */)
{
    // Tail-call to fprintf via GOT/IAT indirection
    return fprintf(/* forwarded args */);
}

