// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19210
// Name:            .write
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19210 jmp     cs:off_23E0F0
//
// Resolved target: write
// Target address:  0x243C28
// GOT/IAT slot:    0x23E0F0
// Slot symbol:     off_23E0F0
// Target type:     ssize_t(int fd, const void *buf, size_t n)
// ============================================================

/* see target sig */ .write(/* see target signature */)
{
    // Tail-call to write via GOT/IAT indirection
    return write(/* forwarded args */);
}

