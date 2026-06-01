// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6730
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6730 jmp     cs:off_24380
//
// Resolved target: memmove
// Target address:  0x26160
// GOT/IAT slot:    0x24380
// Slot symbol:     off_24380
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

