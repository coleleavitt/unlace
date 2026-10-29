// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1210
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1210 jmp     cs:off_50F0
//
// Resolved target: strcmp
// Target address:  0x5340
// GOT/IAT slot:    0x50F0
// Slot symbol:     off_50F0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

