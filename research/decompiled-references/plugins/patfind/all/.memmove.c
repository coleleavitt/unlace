// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2300
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2300 jmp     cs:off_13168
//
// Resolved target: memmove
// Target address:  0x13408
// GOT/IAT slot:    0x13168
// Slot symbol:     off_13168
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

