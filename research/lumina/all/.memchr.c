// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19820
// Name:            .memchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19820 jmp     cs:off_23E3F8
//
// Resolved target: memchr
// Target address:  0x243F80
// GOT/IAT slot:    0x23E3F8
// Slot symbol:     off_23E3F8
// Target type:     void *(const void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memchr(/* see target signature */)
{
    // Tail-call to memchr via GOT/IAT indirection
    return memchr(/* forwarded args */);
}

