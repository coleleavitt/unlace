// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7390
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7390 jmp     cs:off_191B0
//
// Resolved target: memcpy
// Target address:  0x196E0
// GOT/IAT slot:    0x191B0
// Slot symbol:     off_191B0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

