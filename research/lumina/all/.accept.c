// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191C0
// Name:            .accept
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191C0 jmp     cs:off_23E0C8
//
// Resolved target: accept
// Target address:  0x243C00
// GOT/IAT slot:    0x23E0C8
// Slot symbol:     off_23E0C8
// Target type:     int(int fd, struct sockaddr *addr, socklen_t *addr_len)
// ============================================================

/* see target sig */ .accept(/* see target signature */)
{
    // Tail-call to accept via GOT/IAT indirection
    return accept(/* forwarded args */);
}

