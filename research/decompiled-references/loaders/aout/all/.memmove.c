// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1210
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1210 jmp     cs:off_60F0
//
// Resolved target: memmove
// Target address:  0x6280
// GOT/IAT slot:    0x60F0
// Slot symbol:     off_60F0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

