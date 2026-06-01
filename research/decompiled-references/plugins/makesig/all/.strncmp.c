// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3170
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3170 jmp     cs:off_200A0
//
// Resolved target: strncmp
// Target address:  0x219B0
// GOT/IAT slot:    0x200A0
// Slot symbol:     off_200A0
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

