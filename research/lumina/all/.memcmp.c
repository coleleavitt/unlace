// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192B0
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192B0 jmp     cs:off_23E140
//
// Resolved target: memcmp
// Target address:  0x243C80
// GOT/IAT slot:    0x23E140
// Slot symbol:     off_23E140
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

