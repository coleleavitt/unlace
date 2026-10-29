// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9270
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9270 jmp     cs:off_89120
//
// Resolved target: strncmp
// Target address:  0x8C420
// GOT/IAT slot:    0x89120
// Slot symbol:     off_89120
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

