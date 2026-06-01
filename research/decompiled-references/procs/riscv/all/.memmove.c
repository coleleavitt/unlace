// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8A0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8A0 jmp     cs:off_35438
//
// Resolved target: memmove
// Target address:  0x35A98
// GOT/IAT slot:    0x35438
// Slot symbol:     off_35438
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

