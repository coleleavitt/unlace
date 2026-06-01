// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D7A0
// Name:            .strncasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D7A0 jmp     cs:off_B33B8
//
// Resolved target: strncasecmp
// Target address:  0xB3B58
// GOT/IAT slot:    0xB33B8
// Slot symbol:     off_B33B8
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncasecmp(/* see target signature */)
{
    // Tail-call to strncasecmp via GOT/IAT indirection
    return strncasecmp(/* forwarded args */);
}

