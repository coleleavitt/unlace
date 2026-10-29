// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3200
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3200 jmp     cs:off_280E8
//
// Resolved target: strncmp
// Target address:  0x28598
// GOT/IAT slot:    0x280E8
// Slot symbol:     off_280E8
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

