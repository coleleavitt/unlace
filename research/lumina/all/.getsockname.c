// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196C0
// Name:            .getsockname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x196C0 jmp     cs:off_23E348
//
// Resolved target: getsockname
// Target address:  0x243EC8
// GOT/IAT slot:    0x23E348
// Slot symbol:     off_23E348
// Target type:     int(int fd, struct sockaddr *addr, socklen_t *len)
// ============================================================

/* see target sig */ .getsockname(/* see target signature */)
{
    // Tail-call to getsockname via GOT/IAT indirection
    return getsockname(/* forwarded args */);
}

