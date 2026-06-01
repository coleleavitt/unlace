// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44A0
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44A0 jmp     cs:off_23238
//
// Resolved target: strcasecmp
// Target address:  0x23658
// GOT/IAT slot:    0x23238
// Slot symbol:     off_23238
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

