// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x203F0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x203F0 jmp     cs:off_951E0
//
// Resolved target: memset
// Target address:  0x95C18
// GOT/IAT slot:    0x951E0
// Slot symbol:     off_951E0
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

