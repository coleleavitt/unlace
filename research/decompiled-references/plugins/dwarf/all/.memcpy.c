// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA580
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA580 jmp     cs:off_CA2A8
//
// Resolved target: memcpy
// Target address:  0xD0BE0
// GOT/IAT slot:    0xCA2A8
// Slot symbol:     off_CA2A8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

