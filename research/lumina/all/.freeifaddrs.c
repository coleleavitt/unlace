// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D30
// Name:            .freeifaddrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D30 jmp     cs:off_23E680
//
// Resolved target: freeifaddrs
// Target address:  0x244250
// GOT/IAT slot:    0x23E680
// Slot symbol:     off_23E680
// Target type:     void(struct ifaddrs *ifa)
// ============================================================

/* see target sig */ .freeifaddrs(/* see target signature */)
{
    // Tail-call to freeifaddrs via GOT/IAT indirection
    return freeifaddrs(/* forwarded args */);
}

