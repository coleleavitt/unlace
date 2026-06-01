// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3170
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3170 jmp     cs:off_130A0
//
// Resolved target: memset
// Target address:  0x13788
// GOT/IAT slot:    0x130A0
// Slot symbol:     off_130A0
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

