// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B70
// Name:            .poll
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B70 jmp     cs:off_23E5A0
//
// Resolved target: poll
// Target address:  0x244150
// GOT/IAT slot:    0x23E5A0
// Slot symbol:     off_23E5A0
// Target type:     int(struct pollfd *fds, nfds_t nfds, int timeout)
// ============================================================

/* see target sig */ .poll(/* see target signature */)
{
    // Tail-call to poll via GOT/IAT indirection
    return poll(/* forwarded args */);
}

