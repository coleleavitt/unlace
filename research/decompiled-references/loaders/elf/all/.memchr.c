// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9640
// Name:            .memchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9640 jmp     cs:off_89308
//
// Resolved target: memchr
// Target address:  0x8C610
// GOT/IAT slot:    0x89308
// Slot symbol:     off_89308
// Target type:     void *(const void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memchr(/* see target signature */)
{
    // Tail-call to memchr via GOT/IAT indirection
    return memchr(/* forwarded args */);
}

