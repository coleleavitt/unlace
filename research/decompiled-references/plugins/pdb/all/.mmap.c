// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DB20
// Name:            .mmap
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DB20 jmp     cs:off_B3578
//
// Resolved target: mmap
// Target address:  0xB3D48
// GOT/IAT slot:    0xB3578
// Slot symbol:     off_B3578
// Target type:     void *(void *addr, size_t len, int prot, int flags, int fd, __off_t offset)
// ============================================================

/* see target sig */ .mmap(/* see target signature */)
{
    // Tail-call to mmap via GOT/IAT indirection
    return mmap(/* forwarded args */);
}

