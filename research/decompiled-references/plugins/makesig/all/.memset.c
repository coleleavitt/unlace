// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31D0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31D0 jmp     cs:off_200D0
//
// Resolved target: memset
// Target address:  0x219E0
// GOT/IAT slot:    0x200D0
// Slot symbol:     off_200D0
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

