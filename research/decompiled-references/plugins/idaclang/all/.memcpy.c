// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32A0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32A0 jmp     cs:off_29138
//
// Resolved target: memcpy
// Target address:  0x294E8
// GOT/IAT slot:    0x29138
// Slot symbol:     off_29138
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

