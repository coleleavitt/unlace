// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19990
// Name:            .strncasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19990 jmp     cs:off_23E4B0
//
// Resolved target: strncasecmp
// Target address:  0x244038
// GOT/IAT slot:    0x23E4B0
// Slot symbol:     off_23E4B0
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncasecmp(/* see target signature */)
{
    // Tail-call to strncasecmp via GOT/IAT indirection
    return strncasecmp(/* forwarded args */);
}

