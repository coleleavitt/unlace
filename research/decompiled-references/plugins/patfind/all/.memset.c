// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_13078
//
// Resolved target: memset
// Target address:  0x13310
// GOT/IAT slot:    0x13078
// Slot symbol:     off_13078
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

