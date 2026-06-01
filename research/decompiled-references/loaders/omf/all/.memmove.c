// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3530
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3530 jmp     cs:off_14280
//
// Resolved target: memmove
// Target address:  0x14888
// GOT/IAT slot:    0x14280
// Slot symbol:     off_14280
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

