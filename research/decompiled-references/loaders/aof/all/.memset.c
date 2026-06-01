// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_7078
//
// Resolved target: memset
// Target address:  0x7230
// GOT/IAT slot:    0x7078
// Slot symbol:     off_7078
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

