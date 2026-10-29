// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2110
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2110 jmp     cs:off_A070
//
// Resolved target: memset
// Target address:  0xB340
// GOT/IAT slot:    0xA070
// Slot symbol:     off_A070
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

