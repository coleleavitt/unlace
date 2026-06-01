// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20CE0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20CE0 jmp     cs:off_95658
//
// Resolved target: memmove
// Target address:  0x960A0
// GOT/IAT slot:    0x95658
// Slot symbol:     off_95658
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

