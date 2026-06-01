// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9370
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9370 jmp     cs:off_261A0
//
// Resolved target: memmove
// Target address:  0x264C0
// GOT/IAT slot:    0x261A0
// Slot symbol:     off_261A0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

