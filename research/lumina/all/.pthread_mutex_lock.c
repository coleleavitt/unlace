// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B10
// Name:            .pthread_mutex_lock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B10 jmp     cs:off_23E570
//
// Resolved target: pthread_mutex_lock
// Target address:  0x244118
// GOT/IAT slot:    0x23E570
// Slot symbol:     off_23E570
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ .pthread_mutex_lock(/* see target signature */)
{
    // Tail-call to pthread_mutex_lock via GOT/IAT indirection
    return pthread_mutex_lock(/* forwarded args */);
}

