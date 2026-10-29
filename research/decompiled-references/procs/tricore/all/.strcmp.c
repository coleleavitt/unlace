// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6630
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6630 jmp     cs:off_24300
//
// Resolved target: strcmp
// Target address:  0x260D8
// GOT/IAT slot:    0x24300
// Slot symbol:     off_24300
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

