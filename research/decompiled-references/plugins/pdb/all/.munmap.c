// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D2F0
// Name:            .munmap
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D2F0 jmp     cs:off_B3160
//
// Resolved target: munmap
// Target address:  0xB38F8
// GOT/IAT slot:    0xB3160
// Slot symbol:     off_B3160
// Target type:     int(void *addr, size_t len)
// ============================================================

/* see target sig */ .munmap(/* see target signature */)
{
    // Tail-call to munmap via GOT/IAT indirection
    return munmap(/* forwarded args */);
}

