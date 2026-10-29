// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D250
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D250 jmp     cs:off_B3110
//
// Resolved target: strncmp
// Target address:  0xB3898
// GOT/IAT slot:    0xB3110
// Slot symbol:     off_B3110
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

