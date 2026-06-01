// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7580
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7580 jmp     cs:off_192A8
//
// Resolved target: strcmp
// Target address:  0x197E0
// GOT/IAT slot:    0x192A8
// Slot symbol:     off_192A8
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

