// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66F0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66F0 jmp     cs:off_2D360
//
// Resolved target: memmove
// Target address:  0x2D870
// GOT/IAT slot:    0x2D360
// Slot symbol:     off_2D360
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

