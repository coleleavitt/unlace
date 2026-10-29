// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D6E0
// Name:            .memchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D6E0 jmp     cs:off_B3358
//
// Resolved target: memchr
// Target address:  0xB3AF8
// GOT/IAT slot:    0xB3358
// Slot symbol:     off_B3358
// Target type:     void *(const void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memchr(/* see target signature */)
{
    // Tail-call to memchr via GOT/IAT indirection
    return memchr(/* forwarded args */);
}

