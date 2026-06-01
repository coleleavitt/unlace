// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E0 jmp     cs:off_A058
//
// Resolved target: strncmp
// Target address:  0xB328
// GOT/IAT slot:    0xA058
// Slot symbol:     off_A058
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

