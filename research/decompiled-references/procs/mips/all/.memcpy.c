// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x195C0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x195C0 jmp     cs:off_752C8
//
// Resolved target: memcpy
// Target address:  0x75B18
// GOT/IAT slot:    0x752C8
// Slot symbol:     off_752C8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

