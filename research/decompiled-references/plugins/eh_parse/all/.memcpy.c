// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6450
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6450 jmp     cs:off_2F210
//
// Resolved target: memcpy
// Target address:  0x2F880
// GOT/IAT slot:    0x2F210
// Slot symbol:     off_2F210
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

