// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB10
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAB10 jmp     cs:off_CA570
//
// Resolved target: memmove
// Target address:  0xD0EC0
// GOT/IAT slot:    0xCA570
// Slot symbol:     off_CA570
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

