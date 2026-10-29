// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33D0
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33D0 jmp     cs:off_141D0
//
// Resolved target: strcasecmp
// Target address:  0x147C0
// GOT/IAT slot:    0x141D0
// Slot symbol:     off_141D0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

