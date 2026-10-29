// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x197F0
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x197F0 jmp     cs:off_23E3E0
//
// Resolved target: strcasecmp
// Target address:  0x243F68
// GOT/IAT slot:    0x23E3E0
// Slot symbol:     off_23E3E0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

