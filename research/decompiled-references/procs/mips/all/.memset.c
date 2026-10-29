// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19350
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19350 jmp     cs:off_75190
//
// Resolved target: memset
// Target address:  0x759E0
// GOT/IAT slot:    0x75190
// Slot symbol:     off_75190
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

