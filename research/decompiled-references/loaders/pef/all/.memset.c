// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2110
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2110 jmp     cs:off_8070
//
// Resolved target: memset
// Target address:  0x8260
// GOT/IAT slot:    0x8070
// Slot symbol:     off_8070
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

