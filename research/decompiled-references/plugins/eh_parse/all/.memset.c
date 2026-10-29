// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6280
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6280 jmp     cs:off_2F128
//
// Resolved target: memset
// Target address:  0x2F798
// GOT/IAT slot:    0x2F128
// Slot symbol:     off_2F128
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

