// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5490
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5490 jmp     cs:off_1A230
//
// Resolved target: memmove
// Target address:  0x1A5C8
// GOT/IAT slot:    0x1A230
// Slot symbol:     off_1A230
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

