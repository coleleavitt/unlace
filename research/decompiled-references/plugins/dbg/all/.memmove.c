// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3510
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3510 jmp     cs:off_13270
//
// Resolved target: memmove
// Target address:  0x13600
// GOT/IAT slot:    0x13270
// Slot symbol:     off_13270
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

