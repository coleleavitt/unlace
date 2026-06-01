// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_130A8
//
// Resolved target: memcpy
// Target address:  0x13340
// GOT/IAT slot:    0x130A8
// Slot symbol:     off_130A8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

