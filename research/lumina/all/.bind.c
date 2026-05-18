// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19090
// Name:            .bind
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19090 jmp     cs:off_23E030
//
// Resolved target: bind
// Target address:  0x243B58
// GOT/IAT slot:    0x23E030
// Slot symbol:     off_23E030
// Target type:     int(int fd, const struct sockaddr *addr, socklen_t len)
// ============================================================

/* see target sig */ .bind(/* see target signature */)
{
    // Tail-call to bind via GOT/IAT indirection
    return bind(/* forwarded args */);
}

