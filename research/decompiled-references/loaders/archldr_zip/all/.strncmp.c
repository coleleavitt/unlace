// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_8068
//
// Resolved target: strncmp
// Target address:  0x8228
// GOT/IAT slot:    0x8068
// Slot symbol:     off_8068
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

