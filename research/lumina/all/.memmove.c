// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C40
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C40 jmp     cs:off_23E608
//
// Resolved target: memmove
// Target address:  0x2441B8
// GOT/IAT slot:    0x23E608
// Slot symbol:     off_23E608
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

