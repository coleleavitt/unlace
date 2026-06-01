// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1080
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1080 jmp     cs:off_4028
//
// Resolved target: memset
// Target address:  0x4100
// GOT/IAT slot:    0x4028
// Slot symbol:     off_4028
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

