// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2330
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2330 jmp     cs:off_A180
//
// Resolved target: memmove
// Target address:  0xA440
// GOT/IAT slot:    0xA180
// Slot symbol:     off_A180
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

