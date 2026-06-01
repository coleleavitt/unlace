// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D0 jmp     cs:off_7050
//
// Resolved target: strncmp
// Target address:  0x7208
// GOT/IAT slot:    0x7050
// Slot symbol:     off_7050
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

