// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_80A8
//
// Resolved target: memcpy
// Target address:  0x8270
// GOT/IAT slot:    0x80A8
// Slot symbol:     off_80A8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

