// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5530
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5530 jmp     cs:off_15280
//
// Resolved target: strcmp
// Target address:  0x16318
// GOT/IAT slot:    0x15280
// Slot symbol:     off_15280
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

