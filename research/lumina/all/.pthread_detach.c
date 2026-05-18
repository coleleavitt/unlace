// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19760
// Name:            .pthread_detach
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19760 jmp     cs:off_23E398
//
// Resolved target: pthread_detach
// Target address:  0x243F20
// GOT/IAT slot:    0x23E398
// Slot symbol:     off_23E398
// Target type:     int(pthread_t th)
// ============================================================

/* see target sig */ .pthread_detach(/* see target signature */)
{
    // Tail-call to pthread_detach via GOT/IAT indirection
    return pthread_detach(/* forwarded args */);
}

