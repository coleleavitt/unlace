// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199B0
// Name:            .freeaddrinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x199B0 jmp     cs:off_23E4C0
//
// Resolved target: freeaddrinfo
// Target address:  0x244050
// GOT/IAT slot:    0x23E4C0
// Slot symbol:     off_23E4C0
// Target type:     void(struct addrinfo *ai)
// ============================================================

/* see target sig */ .freeaddrinfo(/* see target signature */)
{
    // Tail-call to freeaddrinfo via GOT/IAT indirection
    return freeaddrinfo(/* forwarded args */);
}

