// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4140
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4140 jmp     cs:off_1F088
//
// Resolved target: memset
// Target address:  0x1F338
// GOT/IAT slot:    0x1F088
// Slot symbol:     off_1F088
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

