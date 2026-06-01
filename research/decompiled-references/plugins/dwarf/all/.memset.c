// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA360
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA360 jmp     cs:off_CA198
//
// Resolved target: memset
// Target address:  0xD0AC8
// GOT/IAT slot:    0xCA198
// Slot symbol:     off_CA198
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

