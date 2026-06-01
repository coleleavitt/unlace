// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3160
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3160 jmp     cs:off_29098
//
// Resolved target: strncmp
// Target address:  0x29448
// GOT/IAT slot:    0x29098
// Slot symbol:     off_29098
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

