// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9E0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9E0 jmp     cs:off_CA4D8
//
// Resolved target: strcmp
// Target address:  0xD0E20
// GOT/IAT slot:    0xCA4D8
// Slot symbol:     off_CA4D8
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

