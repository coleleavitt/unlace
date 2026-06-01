// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90F0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90F0 jmp     cs:off_26060
//
// Resolved target: memset
// Target address:  0x26370
// GOT/IAT slot:    0x26060
// Slot symbol:     off_26060
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

