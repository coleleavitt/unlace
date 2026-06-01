// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D6B0
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D6B0 jmp     cs:off_B3340
//
// Resolved target: strcasecmp
// Target address:  0xB3AE0
// GOT/IAT slot:    0xB3340
// Slot symbol:     off_B3340
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

