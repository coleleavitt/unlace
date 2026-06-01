// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4690
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4690 jmp     cs:off_23330
//
// Resolved target: memmove
// Target address:  0x23760
// GOT/IAT slot:    0x23330
// Slot symbol:     off_23330
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

