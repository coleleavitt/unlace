// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3180
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3180 jmp     cs:off_130A8
//
// Resolved target: strncmp
// Target address:  0x13420
// GOT/IAT slot:    0x130A8
// Slot symbol:     off_130A8
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

