// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x94E0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x94E0 jmp     cs:off_89258
//
// Resolved target: memcpy
// Target address:  0x8C560
// GOT/IAT slot:    0x89258
// Slot symbol:     off_89258
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

