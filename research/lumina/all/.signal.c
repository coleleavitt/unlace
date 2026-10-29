// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198F0
// Name:            .signal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198F0 jmp     cs:off_23E460
//
// Resolved target: signal
// Target address:  0x243FE8
// GOT/IAT slot:    0x23E460
// Slot symbol:     off_23E460
// Target type:     __sighandler_t(int sig, __sighandler_t handler)
// ============================================================

/* see target sig */ .signal(/* see target signature */)
{
    // Tail-call to signal via GOT/IAT indirection
    return signal(/* forwarded args */);
}

