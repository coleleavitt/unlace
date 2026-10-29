// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6380
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6380 jmp     cs:off_1D1A8
//
// Resolved target: memcpy
// Target address:  0x1D698
// GOT/IAT slot:    0x1D1A8
// Slot symbol:     off_1D1A8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

