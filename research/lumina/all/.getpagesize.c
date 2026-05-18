// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19DD0
// Name:            .getpagesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19DD0 jmp     cs:off_23E6D0
//
// Resolved target: getpagesize
// Target address:  0x2442A0
// GOT/IAT slot:    0x23E6D0
// Slot symbol:     off_23E6D0
// Target type:     int(void)
// ============================================================

/* see target sig */ .getpagesize(/* see target signature */)
{
    // Tail-call to getpagesize via GOT/IAT indirection
    return getpagesize(/* forwarded args */);
}

