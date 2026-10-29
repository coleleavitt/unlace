// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B80
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B80 jmp     cs:off_755A8
//
// Resolved target: memmove
// Target address:  0x75E08
// GOT/IAT slot:    0x755A8
// Slot symbol:     off_755A8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

