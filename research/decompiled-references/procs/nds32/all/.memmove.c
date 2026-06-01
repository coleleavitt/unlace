// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86B0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86B0 jmp     cs:off_2A340
//
// Resolved target: memmove
// Target address:  0x2A8C0
// GOT/IAT slot:    0x2A340
// Slot symbol:     off_2A340
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

