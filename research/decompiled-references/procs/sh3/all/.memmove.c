// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55F0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x55F0 jmp     cs:off_152E0
//
// Resolved target: memmove
// Target address:  0x16380
// GOT/IAT slot:    0x152E0
// Slot symbol:     off_152E0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

