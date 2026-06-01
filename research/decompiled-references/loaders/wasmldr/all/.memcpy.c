// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_15078
//
// Resolved target: memcpy
// Target address:  0x15268
// GOT/IAT slot:    0x15078
// Slot symbol:     off_15078
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

