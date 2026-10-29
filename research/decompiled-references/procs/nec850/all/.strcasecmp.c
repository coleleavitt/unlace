// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x95B0
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x95B0 jmp     cs:off_2E2C0
//
// Resolved target: strcasecmp
// Target address:  0x2E930
// GOT/IAT slot:    0x2E2C0
// Slot symbol:     off_2E2C0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

