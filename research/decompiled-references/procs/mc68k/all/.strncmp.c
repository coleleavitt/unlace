// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61A0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61A0 jmp     cs:off_1D0B8
//
// Resolved target: strncmp
// Target address:  0x1D5A8
// GOT/IAT slot:    0x1D0B8
// Slot symbol:     off_1D0B8
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

