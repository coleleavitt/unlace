// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9840
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9840 jmp     cs:off_2E408
//
// Resolved target: memmove
// Target address:  0x2EA88
// GOT/IAT slot:    0x2E408
// Slot symbol:     off_2E408
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

