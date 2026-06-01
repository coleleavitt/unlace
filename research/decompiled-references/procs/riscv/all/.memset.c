// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA290
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA290 jmp     cs:off_35130
//
// Resolved target: memset
// Target address:  0x35780
// GOT/IAT slot:    0x35130
// Slot symbol:     off_35130
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

