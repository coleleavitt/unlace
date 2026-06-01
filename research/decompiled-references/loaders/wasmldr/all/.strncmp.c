// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A0 jmp     cs:off_15038
//
// Resolved target: strncmp
// Target address:  0x15228
// GOT/IAT slot:    0x15038
// Slot symbol:     off_15038
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

