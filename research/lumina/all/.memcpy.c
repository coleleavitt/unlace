// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19600
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19600 jmp     cs:off_23E2E8
//
// Resolved target: memcpy
// Target address:  0x243E68
// GOT/IAT slot:    0x23E2E8
// Slot symbol:     off_23E2E8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

