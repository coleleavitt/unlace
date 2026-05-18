// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B90
// Name:            .sigaddset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B90 jmp     cs:off_23E5B0
//
// Resolved target: sigaddset
// Target address:  0x244160
// GOT/IAT slot:    0x23E5B0
// Slot symbol:     off_23E5B0
// Target type:     int(sigset_t *set, int signo)
// ============================================================

/* see target sig */ .sigaddset(/* see target signature */)
{
    // Tail-call to sigaddset via GOT/IAT indirection
    return sigaddset(/* forwarded args */);
}

