// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x194F0
// Name:            .getpeername
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x194F0 jmp     cs:off_23E260
//
// Resolved target: getpeername
// Target address:  0x243DD8
// GOT/IAT slot:    0x23E260
// Slot symbol:     off_23E260
// Target type:     int(int fd, struct sockaddr *addr, socklen_t *len)
// ============================================================

/* see target sig */ .getpeername(/* see target signature */)
{
    // Tail-call to getpeername via GOT/IAT indirection
    return getpeername(/* forwarded args */);
}

