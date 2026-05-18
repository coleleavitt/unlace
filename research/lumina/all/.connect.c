// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19620
// Name:            .connect
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19620 jmp     cs:off_23E2F8
//
// Resolved target: connect
// Target address:  0x243E78
// GOT/IAT slot:    0x23E2F8
// Slot symbol:     off_23E2F8
// Target type:     int(int fd, const struct sockaddr *addr, socklen_t len)
// ============================================================

/* see target sig */ .connect(/* see target signature */)
{
    // Tail-call to connect via GOT/IAT indirection
    return connect(/* forwarded args */);
}

