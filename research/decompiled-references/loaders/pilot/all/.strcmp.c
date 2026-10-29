// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2260
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2260 jmp     cs:off_8118
//
// Resolved target: strcmp
// Target address:  0x82F8
// GOT/IAT slot:    0x8118
// Slot symbol:     off_8118
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

