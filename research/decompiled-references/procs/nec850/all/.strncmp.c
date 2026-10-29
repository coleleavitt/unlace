// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9230
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9230 jmp     cs:off_2E100
//
// Resolved target: strncmp
// Target address:  0x2E770
// GOT/IAT slot:    0x2E100
// Slot symbol:     off_2E100
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

