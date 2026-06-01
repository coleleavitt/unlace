// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4330
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4330 jmp     cs:off_4E180
//
// Resolved target: memset
// Target address:  0x4F788
// GOT/IAT slot:    0x4E180
// Slot symbol:     off_4E180
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

