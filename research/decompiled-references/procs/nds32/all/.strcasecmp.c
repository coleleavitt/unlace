// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8480
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8480 jmp     cs:off_2A228
//
// Resolved target: strcasecmp
// Target address:  0x2A798
// GOT/IAT slot:    0x2A228
// Slot symbol:     off_2A228
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

