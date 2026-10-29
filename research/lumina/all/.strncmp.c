// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192F0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192F0 jmp     cs:off_23E160
//
// Resolved target: strncmp
// Target address:  0x243CA8
// GOT/IAT slot:    0x23E160
// Slot symbol:     off_23E160
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

