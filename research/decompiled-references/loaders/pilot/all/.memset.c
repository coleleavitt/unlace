// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D0 jmp     cs:off_8050
//
// Resolved target: memset
// Target address:  0x8230
// GOT/IAT slot:    0x8050
// Slot symbol:     off_8050
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

