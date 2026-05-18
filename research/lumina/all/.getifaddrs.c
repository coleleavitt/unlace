// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19E80
// Name:            .getifaddrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19E80 jmp     cs:off_23E728
//
// Resolved target: getifaddrs
// Target address:  0x244300
// GOT/IAT slot:    0x23E728
// Slot symbol:     off_23E728
// Target type:     int(struct ifaddrs **ifap)
// ============================================================

/* see target sig */ .getifaddrs(/* see target signature */)
{
    // Tail-call to getifaddrs via GOT/IAT indirection
    return getifaddrs(/* forwarded args */);
}

