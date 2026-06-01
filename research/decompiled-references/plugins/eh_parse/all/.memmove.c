// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6840
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6840 jmp     cs:off_2F408
//
// Resolved target: memmove
// Target address:  0x2FA88
// GOT/IAT slot:    0x2F408
// Slot symbol:     off_2F408
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

