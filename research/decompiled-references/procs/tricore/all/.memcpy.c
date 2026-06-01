// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63D0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63D0 jmp     cs:off_241D0
//
// Resolved target: memcpy
// Target address:  0x25FA0
// GOT/IAT slot:    0x241D0
// Slot symbol:     off_241D0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

