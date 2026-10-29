// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3330
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3330 jmp     cs:off_13180
//
// Resolved target: strcasecmp
// Target address:  0x13870
// GOT/IAT slot:    0x13180
// Slot symbol:     off_13180
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

