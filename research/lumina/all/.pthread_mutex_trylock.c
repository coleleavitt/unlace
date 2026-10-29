// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19160
// Name:            .pthread_mutex_trylock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19160 jmp     cs:off_23E098
//
// Resolved target: pthread_mutex_trylock
// Target address:  0x243BD0
// GOT/IAT slot:    0x23E098
// Slot symbol:     off_23E098
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ .pthread_mutex_trylock(/* see target signature */)
{
    // Tail-call to pthread_mutex_trylock via GOT/IAT indirection
    return pthread_mutex_trylock(/* forwarded args */);
}

