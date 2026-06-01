// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA860
// Name:            .strncasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA860 jmp     cs:off_CA418
//
// Resolved target: strncasecmp
// Target address:  0xD0D50
// GOT/IAT slot:    0xCA418
// Slot symbol:     off_CA418
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncasecmp(/* see target signature */)
{
    // Tail-call to strncasecmp via GOT/IAT indirection
    return strncasecmp(/* forwarded args */);
}

