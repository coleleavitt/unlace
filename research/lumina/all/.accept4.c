// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19300
// Name:            .accept4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19300 jmp     cs:off_23E168
//
// Resolved target: accept4
// Target address:  0x243CB0
// GOT/IAT slot:    0x23E168
// Slot symbol:     off_23E168
// Target type:     int(int fd, struct sockaddr *addr, socklen_t *addr_len, int flags)
// ============================================================

/* see target sig */ .accept4(/* see target signature */)
{
    // Tail-call to accept4 via GOT/IAT indirection
    return accept4(/* forwarded args */);
}

