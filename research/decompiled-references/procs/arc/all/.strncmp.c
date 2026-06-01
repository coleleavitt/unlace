// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x81E0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x81E0 jmp     cs:off_2A0D8
//
// Resolved target: strncmp
// Target address:  0x2BAE8
// GOT/IAT slot:    0x2A0D8
// Slot symbol:     off_2A0D8
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

