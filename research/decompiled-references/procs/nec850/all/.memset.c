// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9290
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9290 jmp     cs:off_2E130
//
// Resolved target: memset
// Target address:  0x2E7A0
// GOT/IAT slot:    0x2E130
// Slot symbol:     off_2E130
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

