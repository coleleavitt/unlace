// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6500
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6500 jmp     cs:off_1D268
//
// Resolved target: strcmp
// Target address:  0x1D760
// GOT/IAT slot:    0x1D268
// Slot symbol:     off_1D268
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

