// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9300
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9300 jmp     cs:off_89168
//
// Resolved target: memset
// Target address:  0x8C468
// GOT/IAT slot:    0x89168
// Slot symbol:     off_89168
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

