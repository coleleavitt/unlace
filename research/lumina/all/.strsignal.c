// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D90
// Name:            .strsignal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D90 jmp     cs:off_23E6B0
//
// Resolved target: strsignal
// Target address:  0x244280
// GOT/IAT slot:    0x23E6B0
// Slot symbol:     off_23E6B0
// Target type:     char *(int sig)
// ============================================================

/* see target sig */ .strsignal(/* see target signature */)
{
    // Tail-call to strsignal via GOT/IAT indirection
    return strsignal(/* forwarded args */);
}

