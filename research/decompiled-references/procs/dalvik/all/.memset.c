// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51B0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x51B0 jmp     cs:off_1A0C0
//
// Resolved target: memset
// Target address:  0x1A448
// GOT/IAT slot:    0x1A0C0
// Slot symbol:     off_1A0C0
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

