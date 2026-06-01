// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2210
// Name:            .strncasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2210 jmp     cs:off_80F0
//
// Resolved target: strncasecmp
// Target address:  0x82D0
// GOT/IAT slot:    0x80F0
// Slot symbol:     off_80F0
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncasecmp(/* see target signature */)
{
    // Tail-call to strncasecmp via GOT/IAT indirection
    return strncasecmp(/* forwarded args */);
}

