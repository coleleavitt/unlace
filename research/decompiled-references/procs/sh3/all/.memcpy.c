// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5370
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5370 jmp     cs:off_151A0
//
// Resolved target: memcpy
// Target address:  0x16230
// GOT/IAT slot:    0x151A0
// Slot symbol:     off_151A0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

