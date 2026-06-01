// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D240
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D240 jmp     cs:off_B3108
//
// Resolved target: memcmp
// Target address:  0xB3890
// GOT/IAT slot:    0xB3108
// Slot symbol:     off_B3108
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

