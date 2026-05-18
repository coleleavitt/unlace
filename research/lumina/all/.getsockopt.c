// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19550
// Name:            .getsockopt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19550 jmp     cs:off_23E290
//
// Resolved target: getsockopt
// Target address:  0x243E08
// GOT/IAT slot:    0x23E290
// Slot symbol:     off_23E290
// Target type:     int(int fd, int level, int optname, void *optval, socklen_t *optlen)
// ============================================================

/* see target sig */ .getsockopt(/* see target signature */)
{
    // Tail-call to getsockopt via GOT/IAT indirection
    return getsockopt(/* forwarded args */);
}

