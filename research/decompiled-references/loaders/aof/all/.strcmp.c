// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_7120
//
// Resolved target: strcmp
// Target address:  0x72D8
// GOT/IAT slot:    0x7120
// Slot symbol:     off_7120
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

