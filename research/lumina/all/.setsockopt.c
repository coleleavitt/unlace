// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19DC0
// Name:            .setsockopt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19DC0 jmp     cs:off_23E6C8
//
// Resolved target: setsockopt
// Target address:  0x244298
// GOT/IAT slot:    0x23E6C8
// Slot symbol:     off_23E6C8
// Target type:     int(int fd, int level, int optname, const void *optval, socklen_t optlen)
// ============================================================

/* see target sig */ .setsockopt(/* see target signature */)
{
    // Tail-call to setsockopt via GOT/IAT indirection
    return setsockopt(/* forwarded args */);
}

