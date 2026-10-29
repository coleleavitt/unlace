// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3650
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3650 jmp     cs:off_28310
//
// Resolved target: memmove
// Target address:  0x287D0
// GOT/IAT slot:    0x28310
// Slot symbol:     off_28310
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

