// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19970
// Name:            .sigaction
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19970 jmp     cs:off_23E4A0
//
// Resolved target: sigaction
// Target address:  0x244028
// GOT/IAT slot:    0x23E4A0
// Slot symbol:     off_23E4A0
// Target type:     int(int sig, const struct sigaction *act, struct sigaction *oact)
// ============================================================

/* see target sig */ .sigaction(/* see target signature */)
{
    // Tail-call to sigaction via GOT/IAT indirection
    return sigaction(/* forwarded args */);
}

