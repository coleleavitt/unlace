// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x48E0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x48E0 jmp     cs:off_4E458
//
// Resolved target: memmove
// Target address:  0x4FA80
// GOT/IAT slot:    0x4E458
// Slot symbol:     off_4E458
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

