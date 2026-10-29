// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6220
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6220 jmp     cs:off_2F0F8
//
// Resolved target: strncmp
// Target address:  0x2F768
// GOT/IAT slot:    0x2F0F8
// Slot symbol:     off_2F0F8
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

