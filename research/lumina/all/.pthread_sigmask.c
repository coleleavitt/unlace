// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19780
// Name:            .pthread_sigmask
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19780 jmp     cs:off_23E3A8
//
// Resolved target: pthread_sigmask
// Target address:  0x243F30
// GOT/IAT slot:    0x23E3A8
// Slot symbol:     off_23E3A8
// Target type:     int(int how, const __sigset_t *newmask, __sigset_t *oldmask)
// ============================================================

/* see target sig */ .pthread_sigmask(/* see target signature */)
{
    // Tail-call to pthread_sigmask via GOT/IAT indirection
    return pthread_sigmask(/* forwarded args */);
}

