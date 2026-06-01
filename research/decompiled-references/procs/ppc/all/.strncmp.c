// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20350
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20350 jmp     cs:off_95190
//
// Resolved target: strncmp
// Target address:  0x95BC8
// GOT/IAT slot:    0x95190
// Slot symbol:     off_95190
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

