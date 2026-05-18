// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193A0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193A0 jmp     cs:off_23E1B8
//
// Resolved target: memset
// Target address:  0x243D08
// GOT/IAT slot:    0x23E1B8
// Slot symbol:     off_23E1B8
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

