// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191F0
// Name:            .recv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191F0 jmp     cs:off_23E0E0
//
// Resolved target: recv
// Target address:  0x243C18
// GOT/IAT slot:    0x23E0E0
// Slot symbol:     off_23E0E0
// Target type:     ssize_t(int fd, void *buf, size_t n, int flags)
// ============================================================

/* see target sig */ .recv(/* see target signature */)
{
    // Tail-call to recv via GOT/IAT indirection
    return recv(/* forwarded args */);
}

