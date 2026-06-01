// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6230
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6230 jmp     cs:off_2D100
//
// Resolved target: memset
// Target address:  0x2D600
// GOT/IAT slot:    0x2D100
// Slot symbol:     off_2D100
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

