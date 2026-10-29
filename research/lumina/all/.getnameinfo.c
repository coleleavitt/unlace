// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19450
// Name:            .getnameinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19450 jmp     cs:off_23E210
//
// Resolved target: getnameinfo
// Target address:  0x243D80
// GOT/IAT slot:    0x23E210
// Slot symbol:     off_23E210
// Target type:     int(const struct sockaddr *sa, socklen_t salen, char *host, socklen_t hostlen, char *serv, socklen_t servlen, int flags)
// ============================================================

/* see target sig */ .getnameinfo(/* see target signature */)
{
    // Tail-call to getnameinfo via GOT/IAT indirection
    return getnameinfo(/* forwarded args */);
}

