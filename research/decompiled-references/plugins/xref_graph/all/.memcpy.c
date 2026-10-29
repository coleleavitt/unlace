// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16C90
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16C90 jmp     cs:off_4F630
//
// Resolved target: memcpy
// Target address:  0x508E8
// GOT/IAT slot:    0x4F630
// Slot symbol:     off_4F630
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

