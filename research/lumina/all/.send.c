// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19340
// Name:            .send
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19340 jmp     cs:off_23E188
//
// Resolved target: send
// Target address:  0x243CD0
// GOT/IAT slot:    0x23E188
// Slot symbol:     off_23E188
// Target type:     ssize_t(int fd, const void *buf, size_t n, int flags)
// ============================================================

/* see target sig */ .send(/* see target signature */)
{
    // Tail-call to send via GOT/IAT indirection
    return send(/* forwarded args */);
}

