// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3460
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3460 jmp     cs:off_29218
//
// Resolved target: memmove
// Target address:  0x295D8
// GOT/IAT slot:    0x29218
// Slot symbol:     off_29218
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

