// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B30
// Name:            .pthread_mutex_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B30 jmp     cs:off_23E580
//
// Resolved target: pthread_mutex_init
// Target address:  0x244128
// GOT/IAT slot:    0x23E580
// Slot symbol:     off_23E580
// Target type:     int(pthread_mutex_t *mutex, const pthread_mutexattr_t *mutexattr)
// ============================================================

/* see target sig */ .pthread_mutex_init(/* see target signature */)
{
    // Tail-call to pthread_mutex_init via GOT/IAT indirection
    return pthread_mutex_init(/* forwarded args */);
}

