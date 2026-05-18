// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19080
// Name:            .pthread_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19080 jmp     cs:off_23E028
//
// Resolved target: pthread_kill
// Target address:  0x243B50
// GOT/IAT slot:    0x23E028
// Slot symbol:     off_23E028
// Target type:     int(pthread_t threadid, int signo)
// ============================================================

/* see target sig */ .pthread_kill(/* see target signature */)
{
    // Tail-call to pthread_kill via GOT/IAT indirection
    return pthread_kill(/* forwarded args */);
}

