// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C80
// Name:            .realloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C80 jmp     cs:off_23E628
//
// Resolved target: realloc
// Target address:  0x2441D8
// GOT/IAT slot:    0x23E628
// Slot symbol:     off_23E628
// Target type:     void *(void *ptr, size_t size)
// ============================================================

/* see target sig */ .realloc(/* see target signature */)
{
    // Tail-call to realloc via GOT/IAT indirection
    return realloc(/* forwarded args */);
}

