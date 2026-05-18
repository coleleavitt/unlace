// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192D0
// Name:            .ftruncate64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192D0 jmp     cs:off_23E150
//
// Resolved target: ftruncate64
// Target address:  0x243C90
// GOT/IAT slot:    0x23E150
// Slot symbol:     off_23E150
// Target type:     int(int fd, __off64_t length)
// ============================================================

/* see target sig */ .ftruncate64(/* see target signature */)
{
    // Tail-call to ftruncate64 via GOT/IAT indirection
    return ftruncate64(/* forwarded args */);
}

