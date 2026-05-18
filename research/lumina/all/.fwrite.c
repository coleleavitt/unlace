// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19EB0
// Name:            .fwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19EB0 jmp     cs:off_23E740
//
// Resolved target: fwrite
// Target address:  0x244320
// GOT/IAT slot:    0x23E740
// Slot symbol:     off_23E740
// Target type:     size_t(const void *ptr, size_t size, size_t n, FILE *s)
// ============================================================

/* see target sig */ .fwrite(/* see target signature */)
{
    // Tail-call to fwrite via GOT/IAT indirection
    return fwrite(/* forwarded args */);
}

