// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19980
// Name:            .getaddrinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19980 jmp     cs:off_23E4A8
//
// Resolved target: getaddrinfo
// Target address:  0x244030
// GOT/IAT slot:    0x23E4A8
// Slot symbol:     off_23E4A8
// Target type:     int(const char *name, const char *service, const struct addrinfo *req, struct addrinfo **pai)
// ============================================================

/* see target sig */ .getaddrinfo(/* see target signature */)
{
    // Tail-call to getaddrinfo via GOT/IAT indirection
    return getaddrinfo(/* forwarded args */);
}

