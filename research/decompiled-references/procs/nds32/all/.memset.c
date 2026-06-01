// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8230
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8230 jmp     cs:off_2A100
//
// Resolved target: memset
// Target address:  0x2A670
// GOT/IAT slot:    0x2A100
// Slot symbol:     off_2A100
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

