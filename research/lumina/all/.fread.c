// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B40
// Name:            .fread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B40 jmp     cs:off_23E588
//
// Resolved target: fread
// Target address:  0x244130
// GOT/IAT slot:    0x23E588
// Slot symbol:     off_23E588
// Target type:     size_t(void *ptr, size_t size, size_t n, FILE *stream)
// ============================================================

/* see target sig */ .fread(/* see target signature */)
{
    // Tail-call to fread via GOT/IAT indirection
    return fread(/* forwarded args */);
}

