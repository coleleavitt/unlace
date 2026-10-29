// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11D0
// Name:            .strncasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11D0 jmp     cs:off_50D0
//
// Resolved target: strncasecmp
// Target address:  0x5318
// GOT/IAT slot:    0x50D0
// Slot symbol:     off_50D0
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncasecmp(/* see target signature */)
{
    // Tail-call to strncasecmp via GOT/IAT indirection
    return strncasecmp(/* forwarded args */);
}

