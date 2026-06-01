// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_A068
//
// Resolved target: memset
// Target address:  0xA318
// GOT/IAT slot:    0xA068
// Slot symbol:     off_A068
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

