// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA290
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA290 jmp     cs:off_CA130
//
// Resolved target: memcmp
// Target address:  0xD0A60
// GOT/IAT slot:    0xCA130
// Slot symbol:     off_CA130
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

